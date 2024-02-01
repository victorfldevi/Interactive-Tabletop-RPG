using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class IncreaseAlpha : MonoBehaviour
{
    GameManager gameManager;

    void Start()
    {
        gameManager = Singleton.instance.gameManager;
        GetComponent<TextMeshProUGUI>().alpha = 0;
    }
    void Update()
    {
        if (!gameManager.gameStarted)
        {
            GetComponent<TextMeshProUGUI>().alpha = (GetComponent<TextMeshProUGUI>().alpha <= 1) ? GetComponent<TextMeshProUGUI>().alpha + Time.deltaTime * 10 : 1;
        }
        else
        {
            GetComponent<TextMeshProUGUI>().alpha = (GetComponent<TextMeshProUGUI>().alpha >= 0) ? GetComponent<TextMeshProUGUI>().alpha - Time.deltaTime * 10 : 0;
            if (GetComponent<TextMeshProUGUI>().alpha == 0) { Destroy(gameObject); }
        }


    }
}
