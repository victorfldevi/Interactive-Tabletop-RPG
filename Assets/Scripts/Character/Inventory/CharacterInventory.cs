using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterInventory : MonoBehaviour
{
    public InventoryBase slot1, slot2, slot3, slot4;

    public InventoryBase[] inventory { get; set; }

    void Awake()
    {
        slot1 = (slot1 != null) ? Instantiate(slot1) : new InventoryBase();
        slot2 = (slot2 != null) ? Instantiate(slot2) : new InventoryBase();
        slot3 = (slot3 != null) ? Instantiate(slot3) : new InventoryBase();
        slot4 = (slot4 != null) ? Instantiate(slot4) : new InventoryBase();

        inventory = new InventoryBase[4] { slot1, slot2, slot3, slot4 };

        bool haveEquipable = false;
        bool havePrimary = false;
        bool haveSecondary = false;
        bool haveMelee = false;
        foreach (InventoryBase item in inventory)
        {
            if (item as EquipableObject)
            {
                haveEquipable = true;
                if(item.itemType == ItemType.Primary && !havePrimary)
                {
                    GetComponent<CharacterStats>().equippedItem = (EquipableObject)item;
                    havePrimary = true;
                }
                else if(item.itemType == ItemType.Secondary && !havePrimary && !haveSecondary)
                {
                    GetComponent<CharacterStats>().equippedItem = (EquipableObject)item;
                    haveSecondary = true;
                }
                else if(item.itemType == ItemType.Melee && !havePrimary && !haveSecondary && !haveMelee)
                {
                    GetComponent<CharacterStats>().equippedItem = (EquipableObject)item;
                    haveMelee = true;
                }
            }
        }

        if (!haveEquipable)
        {
            EquipableObject bareHands = new EquipableObject();
            bareHands.itemName = "Fists";
            bareHands.itemType = ItemType.Melee;
            bareHands.diceAmount = 1;
            bareHands.diceType = RollDice.DiceParameters.diceTypes.four;
            GetComponent<CharacterStats>().equippedItem = bareHands;
        }
    }
}
