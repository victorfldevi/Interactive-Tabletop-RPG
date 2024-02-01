using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyBehaviour : CharacterBehaviour
{
    void Start()
    {
        GetComponent<Outline>().OutlineColor = Color.blue;
    }

    void Update()
    {
        if (gameManager.gameStarted && gameManager.cutsceneFinished && roundManager.turn != -1)
        {
            if (gameManager.turnSequence[roundManager.turn] == gameObject && !finishedTurn)
            {
                transform.position = Vector3.MoveTowards(transform.position, startPos, isMeleeDistance * Time.deltaTime * 1.7F);
                cameraManager.SetCamerasBack(5F);

                if (!finishedTurn && cameraManager.CamerasAreBack() && PhotonNetwork.isMasterClient)
                {
                    int weaponChance = Random.Range(1, 3);
                    int randomWeapon = Random.Range(0, inventory.Length - 1);

                    int attackChance = Random.Range(1, 100);
                    int randomPlayer = Random.Range(0, gameManager.players.Count - 1);
                    view.RPC("EnemyTurnRPC", PhotonTargets.All, weaponChance, randomWeapon, attackChance, randomPlayer);
                }
            }
            else if (finishedTurn && action == Actions.Attack)
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
        }
    }

    public IEnumerator EnemyTurn(int weaponChance, int weaponIndex, int attackChance, int playerIndex)
    {
        finishedTurn = true;

        yield return new WaitForSeconds(1F);

        if (weaponChance > 1)
        {
            ChangeWeapon(weaponIndex);
            yield return new WaitForSeconds(2F);
        }

        if(attackChance > 1)
        {
            action = Actions.Attack;

            Attack(playerIndex);
        }
        else
        {
            action = Actions.None;
            StartCoroutine(Skip());
        }
    }

    public override void Attack(int randomPlayer)
    {
        bool allPlayersDead = true; 
        
        foreach (GameObject player in gameManager.players) 
        { 
            if(player.GetComponent<CharacterStats>().health > 0)
            {
                allPlayersDead = false;
            }
        }

        if (!allPlayersDead)
        {
            while (gameManager.players[randomPlayer].GetComponent<CharacterStats>()?.health == 0)
            {
                randomPlayer = (randomPlayer == gameManager.players.Count - 1) ? 0 : randomPlayer++;
            }
            prevObj = gameManager.players[randomPlayer];

            transform.LookAt(prevObj.transform);
            prevObj.transform.LookAt(transform);

            isMelee = GetComponent<CharacterStats>().equippedItem.itemType == ItemType.Melee ? true : false;
            isMeleeDistance = Vector3.Distance(transform.position, prevObj.transform.position) * 0.5F;

            transform.GetComponentInChildren<AnimationController>().AttackingAnimation(true, GetComponent<CharacterStats>().equippedItem.diceAmount);
            prevObj.GetComponentInChildren<AnimationController>().AttackedAnimation(true);

            StartCoroutine(StartRollingDice(GetComponent<CharacterStats>(), prevObj.GetComponent<CharacterStats>(), action));
        }
    }

    public void ChangeWeapon(int weaponIndex)
    {
        while (!(EquipableObject)inventory[weaponIndex])
        {
            weaponIndex = (weaponIndex == inventory.Length - 1)? 0 : weaponIndex++;
        }
        panelManager.view.RPC("ItemUsage", PhotonTargets.All, weaponIndex);
    }

    [PunRPC]
    public void EnemyTurnRPC(int weaponChance, int weaponIndex, int attackChance, int playerIndex)
    {
        StartCoroutine(EnemyTurn(weaponChance, weaponIndex, attackChance, playerIndex));
    }
}
