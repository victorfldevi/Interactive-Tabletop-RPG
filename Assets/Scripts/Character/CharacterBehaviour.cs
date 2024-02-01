using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterBehaviour : MonoBehaviour
{
    public enum Actions
    {
        None,
        Attack,
        Heal
    }
    protected PhotonView view;

    protected GameManager gameManager;
    protected RoundManager roundManager;
    public RollDice diceManager;
    protected PanelManager panelManager;
    protected CameraManager cameraManager;

    protected InventoryBase[] inventory;

    public GameObject skipEffect;
    public GameObject chooseTargetEffect;

    public GameObject prevObj { get; protected set; } = null;
    public List<int> damageDices;

    public Actions action;

    protected bool finishedTurn;

    public bool isMelee;
    protected float isMeleeDistance;
    protected Vector3 startPos;


    void Awake()
    {
        gameManager = Singleton.instance.gameManager;
        roundManager = Singleton.instance.roundManager;
        diceManager = Singleton.instance.diceManager;
        panelManager = Singleton.instance.panelManager;
        cameraManager = Singleton.instance.cameraManager;

        view = GetComponent<PhotonView>();

        gameObject.AddComponent(typeof(Outline));
        GetComponent<Outline>().OutlineMode = Outline.Mode.OutlineAll;
        GetComponent<Outline>().OutlineWidth = 8;
        GetComponent<Outline>().enabled = false;
    }

    private void OnLevelWasLoaded(int level)
    {
        if(level == 1)
        {
            inventory = GetComponent<CharacterInventory>().inventory;
            startPos = transform.position;
        }
    }

    public virtual void Attack(int randomCharacter)
    {
        StartCoroutine(Skip());
    }

    public virtual void Heal()
    {
        StartCoroutine(Skip());
    }

    public IEnumerator StartRollingDice(CharacterStats caller, CharacterStats target, Actions action)
    {
        roundManager.RoundText.gameObject.SetActive(false);

        switch (action)
        {
            case Actions.Attack:
                yield return new WaitUntil(() => caller.GetComponentInChildren<AnimationController>().startBattle);
                diceManager.AddPlayerCombatDice(1, caller.color);
                diceManager.AddEnemyCombatDice(1, target.color);
                break;
            case Actions.Heal:
                diceManager.AddRoundDice(1, RollDice.DiceParameters.diceTypes.twenty, GetComponent<CharacterStats>().color, "Ação");
                diceManager.StartRound();
                break;
        }

        yield return new WaitUntil(() => diceManager.AllPlayerDicesStopped() && diceManager.eachDiceValue.Count > 0);

        if (action == Actions.Attack)
        {
            if (diceManager.eachDiceValue[0] == diceManager.eachDiceValue[1])
            {
                yield return new WaitForSeconds(3F);
                diceManager.AddPlayerCombatDice(1, caller.color);
                diceManager.AddEnemyCombatDice(1, target.color);
                StartCoroutine(StartRollingDice(caller, target, action));
            }
            else if (diceManager.eachDiceValue[0] < diceManager.eachDiceValue[1])
            {
                yield return new WaitForSeconds(4f);

                StartCoroutine(caller.GetComponentInChildren<AnimationController>().UnpauseBattle());

                if (caller.equippedItem.itemType == ItemType.Melee)
                {
                    prevObj.GetComponentInChildren<AnimationController>().DodgingMeleeAnimation();
                }

                yield return new WaitUntil(() => !caller.GetComponentInChildren<AnimationController>().startBattle);

                caller.GetComponentInChildren<AnimationController>().AttackingAnimation(false, caller.equippedItem.diceAmount);
                target.GetComponentInChildren<AnimationController>().AttackedAnimation(false);

                caller.GetComponent<CharacterBehaviour>().action = Actions.None;
                caller.GetComponent<CharacterBehaviour>().finishedTurn = false;
                roundManager.StartAnotherRound();
                roundManager.RoundText.gameObject.SetActive(true);
            }
            else
            {
                if (diceManager.eachDiceValue[0] == 20)
                {
                    int diceType = 0;
                    switch (caller.GetComponent<CharacterStats>().equippedItem.diceType)
                    {
                        case RollDice.DiceParameters.diceTypes.four: diceType = 4; break;
                        case RollDice.DiceParameters.diceTypes.six: diceType = 6; break;
                        case RollDice.DiceParameters.diceTypes.eight: diceType = 8; break;
                        case RollDice.DiceParameters.diceTypes.ten: diceType = 10; break;
                        case RollDice.DiceParameters.diceTypes.twelve: diceType = 12; break;
                        case RollDice.DiceParameters.diceTypes.twenty: diceType = 20; break;
                        case RollDice.DiceParameters.diceTypes.hundred: diceType = 100; break;
                    }

                    for (int i = 0; i < caller.GetComponent<CharacterStats>().equippedItem.diceAmount; i++)
                    {
                        damageDices.Add(diceType);
                    }

                    yield return new WaitForSeconds(4f);

                    StartCoroutine(caller.GetComponentInChildren<AnimationController>().UnpauseBattle());
                    yield return new WaitUntil(() => !caller.GetComponentInChildren<AnimationController>().startBattle);

                    caller.GetComponentInChildren<AnimationController>().AttackingAnimation(false, caller.equippedItem.diceAmount);
                    target.GetComponentInChildren<AnimationController>().AttackedAnimation(false);

                    caller.GetComponent<CharacterBehaviour>().action = Actions.None;
                    caller.GetComponent<CharacterBehaviour>().finishedTurn = false;
                    roundManager.StartAnotherRound();
                    roundManager.RoundText.gameObject.SetActive(true);
                }
                else
                {
                    yield return new WaitUntil(() => !diceManager.AllPlayerDicesStopped());
                    diceManager.AddRoundDice(caller.GetComponent<CharacterStats>().equippedItem.diceAmount, caller.GetComponent<CharacterStats>().equippedItem.diceType, caller.GetComponent<CharacterStats>().color, "Dano");
                    diceManager.StartRound();

                    yield return new WaitUntil(() => diceManager.AllPlayerDicesStopped() && diceManager.eachDiceValue.Count > 0);

                    for (int i = 0; i < diceManager.eachDiceValue.Count; i++)
                    {
                        damageDices.Add(diceManager.eachDiceValue[i]);
                    }
                    yield return new WaitForSeconds(4f);

                    StartCoroutine(caller.GetComponentInChildren<AnimationController>().UnpauseBattle());
                    yield return new WaitUntil(() => !caller.GetComponentInChildren<AnimationController>().startBattle);

                    caller.GetComponentInChildren<AnimationController>().AttackingAnimation(false, caller.equippedItem.diceAmount);
                    target.GetComponentInChildren<AnimationController>().AttackedAnimation(false);

                    caller.GetComponent<CharacterBehaviour>().action = Actions.None;
                    caller.GetComponent<CharacterBehaviour>().finishedTurn = false;
                    roundManager.StartAnotherRound();
                    roundManager.RoundText.gameObject.SetActive(true);
                }
            }
        }
        else if (action == Actions.Heal)
        {
            if (diceManager.eachDiceValue[0] < 10)
            {
                yield return new WaitForSeconds(5f);
                roundManager.StartAnotherRound();
                caller.GetComponent<CharacterBehaviour>().action = Actions.None;
                caller.GetComponent<CharacterBehaviour>().finishedTurn = false;
                roundManager.RoundText.gameObject.SetActive(true);
            }
            else
            {
                if (diceManager.eachDiceValue[0] == 20)
                {
                    yield return new WaitForSeconds(5f);
                    HealthStatusPopup.Create(target.transform, 20.ToString(), Color.green);
                    target.Heal(20);

                    caller.GetComponent<CharacterBehaviour>().action = Actions.None;
                    caller.GetComponent<CharacterBehaviour>().finishedTurn = false;
                    roundManager.StartAnotherRound();
                    roundManager.RoundText.gameObject.SetActive(true);
                }
                else
                {
                    yield return new WaitUntil(() => !diceManager.AllPlayerDicesStopped());
                    diceManager.AddRoundDice(1, RollDice.DiceParameters.diceTypes.twenty, caller.GetComponent<CharacterStats>().color, "Cura");
                    diceManager.StartRound();
                    yield return new WaitUntil(() => diceManager.AllPlayerDicesStopped() && diceManager.eachDiceValue.Count > 0);
                    int heal = diceManager.eachDiceValue[0];
                    yield return new WaitForSeconds(5f);
                    HealthStatusPopup.Create(target.transform, heal.ToString(), Color.green);
                    target.Heal(heal);

                    caller.GetComponent<CharacterBehaviour>().action = Actions.None;
                    caller.GetComponent<CharacterBehaviour>().finishedTurn = false;
                    roundManager.StartAnotherRound();
                    roundManager.RoundText.gameObject.SetActive(true);
                }
            }
        }
    }
    public IEnumerator Skip()
    {
        finishedTurn = true;
        yield return new WaitForSeconds(1f);

        Instantiate(skipEffect, gameObject.transform);

        yield return new WaitForSeconds(skipEffect.GetComponent<ParticleSystem>().main.duration);

        Destroy(GetComponentInChildren<ParticleSystem>().gameObject);
        roundManager.StartAnotherRound();
        finishedTurn = false;
    }

    public void AlterFinishTurn(bool value)
    {
        finishedTurn = value;
    }
}
