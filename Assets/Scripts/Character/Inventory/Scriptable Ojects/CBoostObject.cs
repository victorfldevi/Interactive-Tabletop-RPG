using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum BoostCategory
{
    Strenght,
    Dexterity,
    Constitution
}

[CreateAssetMenu(fileName = "New Boost Consumable Object", menuName = "Inventory System/Items/Consumable/Boost")]
public class CBoostObject : ConsumableBase
{
    public BoostCategory boostCategory;
    public int boostAmount;
    void Awake()
    {
        consumableType = ConsumableType.Boost;
    }
}
