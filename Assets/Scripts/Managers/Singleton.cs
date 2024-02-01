using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Singleton : MonoBehaviour
{
    public static Singleton instance { get; private set; }

    public GameManager gameManager;
    public RollDice diceManager;
    public RoundManager roundManager;
    public PanelManager panelManager;
    public CameraManager cameraManager;
    public AudioManager audioManager;
    public PhotonManager photonManager;

    private void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            instance = this;
            gameManager = GetComponentInChildren<GameManager>();
            diceManager = GetComponentInChildren<RollDice>();
            roundManager = GetComponentInChildren<RoundManager>();
            panelManager = GetComponentInChildren<PanelManager>();
            cameraManager = GetComponentInChildren<CameraManager>();
            audioManager = GetComponentInChildren<AudioManager>();
            photonManager = GetComponentInChildren<PhotonManager>();
        }

        DontDestroyOnLoad(gameObject);
    }
}
