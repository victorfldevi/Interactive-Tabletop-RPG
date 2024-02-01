using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ConsumableType
{
    Healing,
    Boost,
    Throwable
}

public class ConsumableBase : InventoryBase
{
    protected GameObject currentPlayer;

    public ConsumableType consumableType;
    public int amount;
    public AnimationClip animationClip;

    void Awake()
    {
        itemType = ItemType.Consumable;
        if(amount < 1)
        {
            amount = 1;
        }
    }

    public virtual void UseItem()
    {
        amount -= 1;

        currentPlayer = Singleton.instance.gameManager.turnSequence[Singleton.instance.roundManager.turn];
        currentPlayer.GetComponent<CharacterBehaviour>().AlterFinishTurn(true);
        currentPlayer.GetComponentInChildren<Animator>().Play(animationClip.name);

        Singleton.instance.panelManager.gameObject.SetActive(false);
        Singleton.instance.roundManager.RoundText.gameObject.SetActive(false);
    }
}
