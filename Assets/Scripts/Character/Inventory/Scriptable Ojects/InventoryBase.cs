using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ItemType
{
    Primary,
    Secondary,
    Melee,
    Consumable,
    Special
}

public class InventoryBase : ScriptableObject
{
    public ItemType itemType;
    public string itemName;
    public Sprite itemImg;
    public GameObject itemPrefab;
    public AudioClip equipAudio;
    public AudioClip useAudio;

}
