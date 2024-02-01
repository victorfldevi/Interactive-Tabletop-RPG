using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Melee Object", menuName = "Inventory System/Items/Equipables/Melee")]
public class MeleeObject : EquipableObject
{
    void Awake()
    {
        itemType = ItemType.Melee;
    }
}
