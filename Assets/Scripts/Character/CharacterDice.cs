using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterDice : MonoBehaviour
{
    public List<int> diceValues;

    public int myDiceValue;

    void Start()
    {
        diceValues = new List<int>();
    }
}
