using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NaughtyAttributes;

public class CharacterStats : MonoBehaviour
{
    public GameManager gameManager;

    public int index;
    public string characterName;
    public RollDice.DiceParameters.diceColors color;

    [ProgressBar("health", "maxHealth", EColor.Red)]
    public int health;
    public int maxHealth;

    [ProgressBar("armour", 15, EColor.Gray)]
    public int armour;
    public int maxArmour;


    public int healingTurns;
    public int healingAmount;

    [Expandable] public EquipableObject equippedItem;
    public GameObject prevWeaponPrefab;

    public Transform hand;

    void Start()
    {
        gameManager = Singleton.instance.gameManager;
        health = maxHealth;
        armour = maxArmour;

        prevWeaponPrefab = hand.Find(equippedItem.itemPrefab.name).gameObject;
    }

    public void TakeDamage(int dmg)
    {
        if (armour > 0 && armour >= dmg)
        {
            armour -= dmg;
        }
        else if (armour > 0)
        {
            health = health - (dmg - armour);
            armour = 0;
        }
        else
        {
            health -= dmg;
        }
    }

    public void Heal(int heal)
    {
        if((health + heal) > maxHealth)
        {
            health = maxHealth;
        }
        else
        {
            health += heal;
        }
    }
}
