using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoundAcess : MonoBehaviour
{
    public void StartAnotherRound()
    {
        Singleton.instance.roundManager.StartAnotherRound();
        gameObject.SetActive(false);
    }
}
