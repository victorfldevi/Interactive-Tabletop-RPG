using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Secondary Object", menuName = "Inventory System/Items/Equipables/Secondary")]
public class SecondaryObject : EquipableObject
{
    public int totalAmmo;
    public int magazineCapacity;
    public int currentAmmo;

    void Awake()
    {
        itemType = ItemType.Secondary;
        currentAmmo = magazineCapacity;
    }
}
