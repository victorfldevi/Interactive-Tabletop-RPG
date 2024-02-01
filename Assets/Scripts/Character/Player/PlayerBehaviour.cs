using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBehaviour : CharacterBehaviour
{
    private bool allowedToAct;
    void Start()
    {
        GetComponent<Outline>().OutlineColor = Color.green;
    }
    void Update()
    {
        if (gameManager.gameStarted && gameManager.cutsceneFinished && roundManager.turn != -1)
        {
            if (gameManager.turnSequence[roundManager.turn] == gameObject && !finishedTurn)
            {
                if (!cameraManager.CamerasAreBack())
                {
                    cameraManager.SetCamerasBack(5F);
                }

                if (GetComponent<CharacterStats>().health <= 0)
                {
                    StartCoroutine(Skip());
                }
                else
                {
                    if ((cameraManager.GetLocalCamera().GetComponent<CameraID>().characterID == gameManager.turnSequence[roundManager.turn].GetComponent<CharacterStats>().index || Singleton.instance.photonManager.maxPlayers == 1) && !roundManager.gameFinished)
                    {
                        panelManager.gameObject.SetActive(true);
                    }

                    switch (action)
                    {
                        case Actions.Attack: Attack(); break;
                        case Actions.Heal: Heal(); break;
                    }
                }
            }
            
            if(finishedTurn && action == Actions.Attack)
            {
                cameraManager.MoveCameras(new Vector3(1F, transform.localPosition.y, -2F), new Vector3(0F, transform.localPosition.y + 1F, 0F), 1F, transform, prevObj.transform);
            }

            if (isMelee)
            {
                if (Vector3.Distance(transform.position, prevObj.transform.position) > 1)
                {
                    transform.position = Vector3.MoveTowards(transform.position, prevObj.transform.position, isMeleeDistance * Time.deltaTime * GetComponentInChildren<Animator>().speed);
                }
            }
            else
            {
                transform.position = Vector3.MoveTowards(transform.position, startPos, isMeleeDistance * Time.deltaTime * 2F);
            }

            if (Input.GetButtonDown("Fire1") && allowedToAct)
            {
                int currentPlayerIndex = gameManager.players.FindIndex(obj => obj.gameObject == transform.gameObject);
                int prevObjIndex = 0;
                switch (action)
                {
                    case Actions.Attack: prevObjIndex = gameManager.enemies.FindIndex(obj => obj.gameObject == prevObj); break;
                    case Actions.Heal: prevObjIndex = gameManager.players.FindIndex(obj => obj.gameObject == prevObj); break;
                }

                view.RPC("StartRollingDiceRPC", PhotonTargets.All, currentPlayerIndex, prevObjIndex, action);
            }
        }
    }

    public override void Attack(int randomEnemy = 0)
    {
        roundManager.RoundText.text = "Escolha o alvo";
        if (!finishedTurn)
        {
            panelManager.gameObject.SetActive(false);

            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;

            Outline prevObjOutline = null;
            CharacterStats prevObjStats = null;


            if (Physics.Raycast(ray, out hit, 100f))
            {
                if (hit.transform.gameObject != prevObj)
                {
                    allowedToAct = false;
                    if (prevObj != null && prevObj.GetComponent<Outline>() != null)
                    {
                        prevObj.GetComponent<Outline>().enabled = false;
                    }

                    prevObj = hit.transform.gameObject;
                    if(prevObj.TryGetComponent(out Outline outline))
                    {
                        prevObjOutline = outline;
                    }

                    if(prevObj.TryGetComponent(out CharacterStats stats))
                    {
                        prevObjStats = stats;
                    }
                }
                
                if (prevObj.CompareTag("Enemy") && prevObjOutline != null && prevObjStats != null)
                {
                    if (prevObjStats.health > 0) 
                    {
                        prevObjOutline.enabled = true;
                        allowedToAct = true;
                    }
                }
            }
        }
    }

    public override void Heal()
    {
        roundManager.RoundText.text = "Escolha o aliado";
        if (!finishedTurn)
        {
            panelManager.gameObject.SetActive(false);

            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;

            Outline prevObjOutline = null;
            CharacterStats prevObjStats = null;

            if (Physics.Raycast(ray, out hit, 100f))
            {
                if (hit.transform.gameObject != prevObj)
                {
                    if (prevObj != null && prevObj.GetComponent<Outline>() != null)
                    {
                        prevObj.GetComponent<Outline>().enabled = false;
                    }

                    prevObj = hit.transform.gameObject;

                    if (prevObj.TryGetComponent(out Outline outline))
                    {
                        prevObjOutline = outline;
                    }

                    if (prevObj.TryGetComponent(out CharacterStats stats))
                    {
                        prevObjStats = stats;
                    }
                }

                if (hit.transform.CompareTag("Player") && prevObjOutline != null && prevObjStats != null)
                {
                    prevObjOutline.enabled = true;
                    allowedToAct = true;
                }
            }
        }
    }

    [PunRPC]
    public void StartRollingDiceRPC(int callerIndex, int targetIndex, Actions action)
    {
        GameObject caller = gameManager.players[callerIndex];
        GameObject target;

        finishedTurn = true;
        allowedToAct = false;

        if (action == Actions.Attack)
        {
            target = gameManager.enemies[targetIndex];
            prevObj = target;
            this.action = Actions.Attack;

            caller.transform.LookAt(target.transform);
            target.transform.LookAt(caller.transform);

            caller.GetComponent<PlayerBehaviour>().isMelee = caller.GetComponent<CharacterStats>().equippedItem.itemType == ItemType.Melee ? true : false;
            caller.GetComponent<PlayerBehaviour>().isMeleeDistance = Vector3.Distance(caller.transform.position, target.transform.position) * 0.5F;

            caller.GetComponentInChildren<AnimationController>().AttackingAnimation(true, caller.GetComponent<CharacterStats>().equippedItem.diceAmount);
            target.GetComponentInChildren<AnimationController>().AttackedAnimation(true);
        }
        else
        {
            target = gameManager.players[targetIndex];
            prevObj = target;
            this.action = Actions.Heal;
        }

        target.GetComponent<Outline>().enabled = false;

        StartCoroutine(StartRollingDice(caller.GetComponent<CharacterStats>(), target.GetComponent<CharacterStats>(), action));
    }
}
