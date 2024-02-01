using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using TMPro;

public class GameManager : MonoBehaviour
{
    public PhotonView view;

    private int playersLoadedScene;
    public GameObject loadingBackground;
    public Material diceFloorMaterial;

    public PlayableDirector playableDirector;

    public List<GameObject> players;
    public List<GameObject> enemies;

    public List<GameObject> turnSequence;

    public Transform sequenceTextParent;
    public TextMeshProUGUI sequenceTextPrefab;

    public GameObject fightText;

    public GameObject RoundUI;

    public bool gameStarted = false;
    public bool cutsceneFinished = false;

    private float timeElapsed;

    void Start()
    {
        view = GetComponent<PhotonView>();

        Application.targetFrameRate = 60;

        loadingBackground.SetActive(false);
        diceFloorMaterial.color = Color.clear;

        turnSequence = new List<GameObject>();
        players = new List<GameObject>();
        enemies = new List<GameObject>();

        Singleton.instance.diceManager.enabled = false;
    }

    void Update()
    {
        if (playersLoadedScene == Singleton.instance.photonManager.maxPlayers && !gameStarted)
        {
            timeElapsed += Time.deltaTime;
        }
    }

    private void OnLevelWasLoaded(int level)
    {
        loadingBackground.SetActive(true);
        if (level == 1)
        {
            foreach (Camera cam in Singleton.instance.cameraManager.cameras)
            {
                cam.clearFlags = CameraClearFlags.Skybox;
                cam.orthographic = false;
            }

            Singleton.instance.cameraManager.SetCamerasBack(1000);

            for (int i = 0; i < GameObject.FindGameObjectsWithTag("Player").Length; i++)
            {
                players.Add(GameObject.Find("Player" + (i + 1).ToString()));
            }

            for (int i = 0; i < GameObject.FindGameObjectsWithTag("Enemy").Length; i++)
            {
                enemies.Add(GameObject.Find("Enemy" + (i + 1).ToString()));
            }

            for (int i = 0; i < players.Count; i++)
            {
                players[i].GetComponent<CharacterStats>().index = i;
            }
            for (int i = 0; i < enemies.Count; i++)
            {
                enemies[i].GetComponent<CharacterStats>().index = i + players.Count;
            }

            view.RPC("SceneLoaded", PhotonTargets.All);
        }
    }

    [ContextMenu("Enable Dice Roller")]
    public void EnableDiceRoller()
    {
        Singleton.instance.diceManager.enabled = true;
    }

    public IEnumerator GameBeginning()
    {
        if (!gameStarted)
        {
            foreach (GameObject player in players)
            {
                turnSequence.Add(player);
            }
            foreach (GameObject enemy in enemies)
            {
                turnSequence.Add(enemy);
            }

            for (int i = 0; i < turnSequence.Count; i++)
            {
                int lesserIndex = turnSequence.Count - 1 - i;
                GameObject lesser = turnSequence[lesserIndex];

                for (int j = lesserIndex; j > -1; j--)
                {
                    if (turnSequence[j].GetComponent<CharacterDice>().diceValues[0] < lesser.GetComponent<CharacterDice>().diceValues[0])
                    {
                        lesser = turnSequence[j];
                        lesserIndex = j;
                    }
                }

                if (lesser != null)
                {
                    turnSequence.RemoveAt(lesserIndex);
                    turnSequence.Insert(turnSequence.Count - i, lesser);
                }
            }

            for (int i = 0; i < turnSequence.Count; i++)
            {
                CharacterStats charStats = turnSequence[i].GetComponent<CharacterStats>();
                switch (charStats.color)
                {
                    case RollDice.DiceParameters.diceColors.blue: sequenceTextPrefab.color = Color.blue; break;
                    case RollDice.DiceParameters.diceColors.red: sequenceTextPrefab.color = Color.red; break;
                    case RollDice.DiceParameters.diceColors.yellow: sequenceTextPrefab.color = Color.yellow; break;
                    case RollDice.DiceParameters.diceColors.green: sequenceTextPrefab.color = Color.green; break;
                    case RollDice.DiceParameters.diceColors.white: sequenceTextPrefab.color = Color.white; break;
                }
                sequenceTextPrefab.text = charStats.characterName;

                var txt = Instantiate(sequenceTextPrefab, sequenceTextParent);
                txt.GetComponent<RectTransform>().localPosition = new Vector3(-15, 127 - (i * 48), 0);
                yield return new WaitForSeconds(0.5f);
            }
            float waitTime = Singleton.instance.audioManager.entryClip.length - (0.0002F * Time.deltaTime) - timeElapsed;
            if(waitTime > 0)
            {
                yield return new WaitForSeconds(waitTime);
            }
            foreach (GameObject player in players)
            {
                player.GetComponent<CharacterDice>().diceValues.Clear();
            }
            foreach (GameObject enemy in enemies)
            {
                enemy.GetComponent<CharacterDice>().diceValues.Clear();
            }
            gameStarted = true;
            yield return new WaitForSeconds(0.5f);
            fightText.SetActive(true);
        }
    }

    [PunRPC]
    public void SceneLoaded()
    {
        playersLoadedScene += 1;

        if(playersLoadedScene == Singleton.instance.photonManager.maxPlayers)
        {
            view.RPC("AllPlayersLoadedScene", PhotonTargets.All);
        }
    }

    [PunRPC]
    public void AllPlayersLoadedScene()
    {
        StartCoroutine(CoroutineAllPlayersLoadedScene());
    }

    public IEnumerator CoroutineAllPlayersLoadedScene()
    {
        yield return new WaitForEndOfFrame();

        players[0].transform.parent.gameObject.SetActive(false);
        enemies[0].transform.parent.gameObject.SetActive(false);

        playableDirector.Play();
        StartCoroutine(Singleton.instance.audioManager.Play());
    }
}
