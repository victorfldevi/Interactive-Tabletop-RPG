using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Healing Consumable Object", menuName = "Inventory System/Items/Consumable/Healing")]
public class CHealingObject : ConsumableBase
{
    public int healingAmount;
    public int healingTurns;
    void Awake()
    {
        consumableType = ConsumableType.Healing;
    }

    public override void UseItem()
    {
        if (amount > 0)
        {
            base.UseItem();

            CharacterStats currentPlayerStats = currentPlayer.GetComponent<CharacterStats>();

            currentPlayerStats.healingTurns = healingTurns;
            currentPlayerStats.healingAmount = healingAmount;

            currentPlayer.GetComponentInChildren<AnimationController>().EquippingConsumable(itemPrefab.name);
        }
    }
}
