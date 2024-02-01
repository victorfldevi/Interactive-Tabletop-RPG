using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class RollDice : MonoBehaviour
{
    private PhotonView view;

    public int result;
    public int resultPlayer;
    public int resultEnemy;
    public TextMeshProUGUI title;

    private GameManager gameManager;
    private RoundManager roundManager;

    public Material diceFloor;

    [SerializeField] private List<RollingDie> allRollingDices;

    [SerializeField] private List<DiceParameters.diceTypes> eachDiceType;
    [SerializeField] public List<int> eachDiceValue; //{ get; private set; }

    [SerializeField] private List<List<DiceParameters>> rounds;
    [SerializeField] private List<DiceParameters> round;

    public static DiceParameters playerDice;
    public static DiceParameters enemyDice;

    public int allDicesStopped;

    [SerializeField] private float timeInterpolate;
    [SerializeField] private bool isCoroutineRunning;
    [SerializeField] private bool roundIsOver;
    [SerializeField] private bool roundInProgress;
    [SerializeField] private bool lastRound;
    [SerializeField] private bool resetOnce;
    [SerializeField] private bool teamDice;
    [SerializeField] private bool getDicesOnce = true;

    void Update()
    {
        SaveAllDices();
        Round();
        if (DicesStopped())
        {
            if (!isCoroutineRunning)
            {
                view.RPC("StopDices", PhotonTargets.All);

                //result = DiceResult();
                isCoroutineRunning = true;
            }

            if (teamDice && allRollingDices.Count > 0)
            {
                for (int i = 0; i < playerDice.amount; i++)
                {
                    resultPlayer += allRollingDices[i].value;
                }
                for (int i = playerDice.amount; i < allRollingDices.Count; i++)
                {
                    resultEnemy += allRollingDices[i].value;
                }
                teamDice = false;
            }
        }

        if (roundIsOver && lastRound && gameManager.gameStarted)
        {
            FloorFadeOut();
        }

        if (rounds.Count > 0 && !roundInProgress)
        {
            foreach (DiceParameters dice in rounds[0])
            {
                DiceRoll(dice.amount, dice.type, dice.color);
                roundInProgress = true;
            }
        }
    }

    public void StartVariables() 
    {
        gameManager = Singleton.instance.gameManager;
        roundManager = Singleton.instance.roundManager;

        view = GetComponent<PhotonView>();

        diceFloor.color = Color.clear;
        title.alpha = 0;

        rounds = new List<List<DiceParameters>>();
        round = new List<DiceParameters>();
        eachDiceType = new List<DiceParameters.diceTypes>();
        eachDiceValue = new List<int>();
        allRollingDices = new List<RollingDie>();
    }

    private void SaveAllDices()
    {
        if (Dice.getAllDice().Count > 0 && allRollingDices.Count < Dice.getAllDice().Count)
        {
            foreach (RollingDie die in Dice.getAllDice())
            {
                allRollingDices.Add(die);
            }
        }
        else
        {
            allRollingDices.Clear();
        }
    }

    private void DiceRoll(int qtde, DiceParameters.diceTypes num, DiceParameters.diceColors color)
    {
        if(num == DiceParameters.diceTypes.hundred)
        {
            Dice.Roll(2*qtde + "d" + 10, defMaterial(10, color.ToString()), transform.position, Vector3.up, GetComponent<PhotonView>());
            for (int i = 0; i < qtde*2; i++)
            {
                eachDiceType.Add(DiceParameters.diceTypes.hundred);
            }
        }
        else
        {
            Dice.Roll(qtde.ToString() + "d" + (int)num, defMaterial((int)num, color.ToString()), transform.position, Vector3.up, GetComponent<PhotonView>());
            for (int i = 0; i < qtde; i++)
            {
                eachDiceType.Add(num);
            }
        }
    }

    private string defMaterial(int num, string color)
    {
        return "d" + num + "-" + color;
    }

    private void Round()
    {
        if (Dice.getAllDice().Count != 0)
        {
            roundIsOver = false;
            if (!resetOnce) 
            {
                timeInterpolate = 0;
                resetOnce = true;
            }

            FloorFadeIn();

            int diceIndex = 0;
            if (AllPlayerDicesStopped())
            {
                foreach (RollingDie die in Dice.getAllDice())
                {
                    if(getDicesOnce) eachDiceValue.Add(die.value);
                    diceIndex += 1;
                    float dicePosX = -235.2F + ((Dice.getAllDice().Count - 1) * -2) + ((diceIndex - 1) * 4);
                    float dicePosY = 58.3F - ((Dice.getAllDice().Count - 1) * 1.5F);

                    die.gameObject.GetComponent<Rigidbody>().useGravity = false;
                    die.gameObject.GetComponent<Rigidbody>().isKinematic = true;

                    if(die.name != "d4")
                    {
                        die.gameObject.transform.position = Vector3.MoveTowards(die.gameObject.transform.position, new Vector3(dicePosX, dicePosY, 3.2F), Time.deltaTime * 40);
                        die.gameObject.transform.localRotation = Quaternion.Lerp(die.gameObject.transform.localRotation, Quaternion.Euler(die.gameObject.transform.localRotation.eulerAngles.x, die.yRotation, die.gameObject.transform.localRotation.eulerAngles.z), Time.deltaTime * 15);
                    }
                    else
                    {
                        Vector3 eulerRot = new Vector3(0,0,0);
                        if (!die.die.rotate)
                        {
                            die.gameObject.GetComponent<Die_d4>().permaValue = die.value;
                            die.die.rotate = true;
                        }

                        switch (die.gameObject.GetComponent<Die_d4>().permaValue)
                        {
                            case 1: eulerRot = new Vector3(297.1F, 182.6F, 358F); break;
                            case 2: eulerRot = new Vector3(356F, 60F, 176.4F); break;
                            case 3: eulerRot = new Vector3(34.4F, 157.7F, 286.8F); break;
                            case 4: eulerRot = new Vector3(24.4F, 42.7F, 295.2F); break;
                        }

                        die.gameObject.transform.position = Vector3.MoveTowards(die.gameObject.transform.position, new Vector3(dicePosX, dicePosY, 3.2F), Time.deltaTime * 40);
                        die.gameObject.transform.localRotation = Quaternion.Lerp(die.gameObject.transform.localRotation, Quaternion.Euler(eulerRot), Time.deltaTime * 15);
                    }
                }
                getDicesOnce = false;
            }
        }
    }
    public void Initiative()
    {
        title.text = "Iniciativa";

        foreach (GameObject player in gameManager.players)
        {
            AddRoundDice(1, DiceParameters.diceTypes.twenty, player.GetComponent<CharacterStats>().color, "Iniciativa");
        }

        for (int i = 0; i < gameManager.enemies.Count; i++)
        {
            AddRoundDice(1, DiceParameters.diceTypes.twenty, DiceParameters.diceColors.blue, "Iniciativa");
        }
        StartRound();
    }

    public void StartRound()
    {
        List<DiceParameters> tempList = new List<DiceParameters>();
        foreach (DiceParameters dice in round)
        {
            tempList.Add(dice);
        }
        rounds.Add(tempList);
        round.Clear();
    }

    public void AddRoundDice(int amount, DiceParameters.diceTypes type, DiceParameters.diceColors color, string title)
    {
        this.title.text = title;
        DiceParameters tempDice = new DiceParameters(amount, type, color);
        round.Add(tempDice);
    }

    public void AddPlayerCombatDice(int amount, DiceParameters.diceColors color)
    {
        playerDice = new DiceParameters(amount, DiceParameters.diceTypes.twenty, color);
        if (playerDice != null && enemyDice != null && !teamDice)
        {
            AddRoundDice(playerDice.amount, DiceParameters.diceTypes.twenty, playerDice.color, "Combate");
            AddRoundDice(enemyDice.amount, DiceParameters.diceTypes.twenty, enemyDice.color, "Combate");
            StartRound();
            teamDice = true;
        }
    }
    public void AddEnemyCombatDice(int amount, DiceParameters.diceColors color)
    {
        enemyDice = new DiceParameters(amount, DiceParameters.diceTypes.twenty, color);
        if (playerDice != null && enemyDice != null && !teamDice)
        {
            roundManager.RoundText.gameObject.SetActive(false);
            AddRoundDice(playerDice.amount, DiceParameters.diceTypes.twenty, playerDice.color, "Combate");
            AddRoundDice(enemyDice.amount, DiceParameters.diceTypes.twenty, enemyDice.color, "Combate");
            StartRound();
            teamDice = true;
        }
    }

    public bool DicesStopped()
    {
        if (Dice.getAllDice().Count != 0)
        {
            if (isCoroutineRunning)
            {
                return true;
            }

            foreach (RollingDie die in Dice.getAllDice())
            {
                if (Vector3.Distance(die.gameObject.GetComponent<Rigidbody>().velocity, Vector3.zero) >= 0.1F || die.value == -1)
                {
                    return false;
                }
            }
            return true;

        }

        return false;
    }

    public void FloorFadeIn()
    {
        if (timeInterpolate < 1)
        {
            timeInterpolate += Time.deltaTime * 3;
            title.alpha = timeInterpolate;
            diceFloor.color = Color.Lerp(Color.clear, new Color(0, 0, 0, 0.5f), timeInterpolate);
        }
    }

    public void FloorFadeOut()
    {
        if (timeInterpolate < 1)
        {
            timeInterpolate += Time.deltaTime * 3;
            title.alpha -= timeInterpolate;
            diceFloor.color = Color.Lerp(new Color(0, 0, 0, 0.5f), Color.clear, timeInterpolate);
        }
    }
    private int DiceResult()
    {
        int totalValue = 0;

        for (int i = 0; i < eachDiceValue.Count; i++)
        {
            if (eachDiceType[i] == DiceParameters.diceTypes.hundred)
            {
                eachDiceValue[i] = (eachDiceValue[i] == 10) ? 0 : eachDiceValue[i];

                totalValue += (eachDiceValue[i] * 10) + eachDiceValue[i + 1];
                eachDiceType.RemoveAt(i + 1);
                eachDiceValue.RemoveAt(i + 1);
            }
            else
            {
                totalValue += eachDiceValue[i];
            }
        }

        return totalValue;
    }

    public void SequenceShow()
    {
        foreach (GameObject player in gameManager.players)
        {
            player.GetComponent<CharacterDice>().diceValues.Add(eachDiceValue[player.GetComponent<CharacterStats>().index]);
        }
        foreach (GameObject enemy in gameManager.enemies)
        {
            enemy.GetComponent<CharacterDice>().diceValues.Add(eachDiceValue[enemy.GetComponent<CharacterStats>().index]);
        }
        StartCoroutine(gameManager.GameBeginning());
    }
    
    public IEnumerator FinishRound()
    {
        yield return new WaitForSeconds(3f);
        if (!gameManager.gameStarted){ title.text = "Ordem"; SequenceShow(); }
        Dice.Clear();
        eachDiceValue.Clear();
        eachDiceType.Clear();
        rounds.RemoveAt(0);
        result = 0;
        resultPlayer = 0;
        resultEnemy = 0;
        allDicesStopped = 0;
        playerDice = null;
        enemyDice = null;
        isCoroutineRunning = false;
        roundInProgress = false;
        roundIsOver = true;
        getDicesOnce = true;

        if (rounds.Count == 0)
        {
            timeInterpolate = 0;
            lastRound = true;
            resetOnce = false;
        }
    }

    [PunRPC]
    public void StopDices()
    {
        allDicesStopped += 1;

        if(allDicesStopped == Singleton.instance.photonManager.maxPlayers)
        {
            StartCoroutine(FinishRound());
        }
    }

    public bool AllPlayerDicesStopped()
    {
        if(allDicesStopped == Singleton.instance.photonManager.maxPlayers)
        {
            return true;
        }

        return false;
    }

    public class DiceParameters
    {
        public enum diceTypes {four = 4, six = 6, eight = 8, ten = 10, twelve = 12, twenty = 20, hundred = 100};
        public enum diceColors{red, blue, yellow, green, white};

        public int amount { get; private set; }
        public diceTypes type { get; private set; }
        public diceColors color { get; private set; }

        public DiceParameters (int amount, diceTypes type, diceColors color)
        {
            this.amount = amount;
            this.type = type;
            this.color = color;
        }
    }
}
