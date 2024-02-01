using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class RoundManager : MonoBehaviour
{
    private GameManager gameManager;

    public TextMeshProUGUI RoundText;

    protected bool startAnotherRound = false;
    public int turn = -1;

    public bool gameFinished;

    void Start()
    {
        gameManager = Singleton.instance.gameManager;
    }

    public void StartAnotherRound()
    {
        bool allPlayersDead = true;
        bool allEnemiesDead = true;

        foreach (GameObject player in gameManager.players)
        {
            if (player.GetComponent<CharacterStats>().health > 0)
            {
                allPlayersDead = false;
                break;
            }
        }

        foreach (GameObject enemies in gameManager.enemies)
        {
            if (enemies.GetComponent<CharacterStats>().health > 0)
            {
                allEnemiesDead = false;
                break;
            }
        }

        if (!allPlayersDead && !allEnemiesDead)
        {
            if (turn > -1)
            {
                CharacterStats currentPlayerStats = gameManager.turnSequence[turn].GetComponent<CharacterStats>();

                if (currentPlayerStats.healingTurns > 0)
                {
                    currentPlayerStats.health += currentPlayerStats.healingAmount;
                    HealthStatusPopup.Create(gameManager.turnSequence[turn].transform, currentPlayerStats.healingAmount.ToString(), Color.green);
                }
            }

            turn = (turn < gameManager.turnSequence.Count - 1) ? turn + 1 : 0;
            CharacterStats charstats = gameManager.turnSequence[turn].GetComponent<CharacterStats>();

            if (charstats.health > 0)
            {
                RoundText.gameObject.SetActive(true);
                RoundText.text = "Vez de : " + charstats.characterName;
            }
            else
            {
                StartAnotherRound();
            }
        }
        else
        {
            gameFinished = true;
            Singleton.instance.panelManager.gameObject.SetActive(false);
            RoundText.gameObject.SetActive(false);
            StartCoroutine(FinishGame());
        }
    }

    IEnumerator FinishGame()
    {
        Image loadingBackgroundImage = gameManager.loadingBackground.GetComponent<Image>();
        if (loadingBackgroundImage.color.a < 1)
        {
            yield return new WaitForSeconds(0.05F);
            loadingBackgroundImage.color = new Color(loadingBackgroundImage.color.r, loadingBackgroundImage.color.g, loadingBackgroundImage.color.b, loadingBackgroundImage.color.a + 0.05F);
            Singleton.instance.audioManager.audioSource.volume = Singleton.instance.audioManager.audioSource.volume - 0.05F;
            StartCoroutine(FinishGame());
        }

        if (!gameManager.loadingBackground.activeInHierarchy)
        {
            gameManager.loadingBackground.SetActive(true);
            loadingBackgroundImage.color = new Color(0, 0, 0, 0);
            StartCoroutine(FinishGame());
        }
    }
}
