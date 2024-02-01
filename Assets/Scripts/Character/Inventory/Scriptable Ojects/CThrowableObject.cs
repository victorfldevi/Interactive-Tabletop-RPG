using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum Effect
{
    Bleeding,
    Stun,
    Confusion
}

[CreateAssetMenu(fileName = "New Throwable Consumable Object", menuName = "Inventory System/Items/Consumable/Throwable")]
public class CThrowableObject : ConsumableBase
{
    public Effect throwableEffect;
    public int throwableDamage;
    void Awake()
    {
        consumableType = ConsumableType.Throwable;
    }
}
