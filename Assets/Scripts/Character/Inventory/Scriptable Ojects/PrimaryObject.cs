using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

[CreateAssetMenu(fileName = "New Primary Object", menuName = "Inventory System/Items/Equipables/Primary")]
public class PrimaryObject : EquipableObject
{
    public int totalAmmo;
    public int magazineCapacity;
    public int currentAmmo;

    void Awake()
    {
        itemType = ItemType.Primary;
        currentAmmo = magazineCapacity;
    }
}
