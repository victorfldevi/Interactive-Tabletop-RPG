using Photon.Realtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.SceneManagement;

public class CharacterHUDBehaviour : MonoBehaviour
{
    private PhotonView myPhotonView;

    private List<int> alreadySelected;

    public GameObject charactersParent;
    private Animator[] characterAnimators;

    private bool isReady;
    private bool loadGameScene;

    public int readyTotal;
    private int currentlySelected;

    private float transparency;

    private VisualElement rootMain;
    private VisualElement fadeEffect;

    private Button player1;
    private Button player2;
    private Button player3;
    private Button player4;
    private Button readyBtn;

    private Label playerAmount;

    [SerializeField] private string player1name;
    [SerializeField] private string player2name;
    [SerializeField] private string player3name;
    [SerializeField] private string player4name;

    private VisualElement player1effect;
    private VisualElement player2effect;
    private VisualElement player3effect;
    private VisualElement player4effect;
    private VisualElement readyEffect;

    void Start()
    {
        myPhotonView = GetComponent<PhotonView>();

        alreadySelected = new List<int>();
    }

    void OnEnable()
    {
        characterAnimators = charactersParent.GetComponentsInChildren<Animator>();

        rootMain = GetComponent<UIDocument>().rootVisualElement;

        VisualElement characters = rootMain.Q<VisualElement>("Characters");
        VisualElement bottomElements = rootMain.Q<VisualElement>("BottomElements");

        fadeEffect = rootMain.Q<VisualElement>("FadeEffect");
        fadeEffect.visible = false;

        readyBtn = bottomElements.Q<Button>("ReadyBtn");
        readyBtn.visible = false;

        playerAmount = bottomElements.Q<Label>("PlayerAmount");

        player1 = characters.Q<Button>("1");
        player2 = characters.Q<Button>("2");
        player3 = characters.Q<Button>("3");
        player4 = characters.Q<Button>("4");

        player1effect = player1.Q<VisualElement>("GreyEffect");
        player2effect = player2.Q<VisualElement>("GreyEffect");
        player3effect = player3.Q<VisualElement>("GreyEffect");
        player4effect = player4.Q<VisualElement>("GreyEffect");
        readyEffect = characters.Q<VisualElement>("ReadyEffect");

        player1.Q<Label>().text = player1name;
        player2.Q<Label>().text = player2name;
        player3.Q<Label>().text = player3name;
        player4.Q<Label>().text = player4name;

        readyBtn.clickable.clicked += () => ReadyPressed();

        player1.clickable.clicked += () => SelectCharacter(1);
        player2.clickable.clicked += () => SelectCharacter(2);
        player3.clickable.clicked += () => SelectCharacter(3);
        player4.clickable.clicked += () => SelectCharacter(4);
    }

    void Update()
    {
        if (loadGameScene)
        {
            if(transparency <= 1)
            {
                transparency += Time.deltaTime;
                fadeEffect.style.backgroundColor = new Color(0, 0, 0, transparency);
            }
            else
            {
                SceneManager.LoadScene(1);
            }
        }
    }

    public void SelectCharacter(int index)
    {
        if (!isReady)
        {
            UpdateEffects(index);
        }
    }

    public void UpdateEffects(int index)
    {
        if (alreadySelected.Contains(index))
        {
            if (currentlySelected == index)
            {
                readyBtn.visible = false;
                currentlySelected = -1;

                characterAnimators[index - 1].SetBool("Selected", false);

                myPhotonView.RPC("AddOptionToOtherPlayers", PhotonTargets.AllBuffered, index);

                player1effect.visible = false;
                player2effect.visible = false;
                player3effect.visible = false;
                player4effect.visible = false;
            }
        }
        else
        {
            myPhotonView.RPC("RemoveOptionToOtherPlayers", PhotonTargets.AllBuffered, index);

            if (currentlySelected != -1)
            {
                myPhotonView.RPC("AddOptionToOtherPlayers", PhotonTargets.AllBuffered, currentlySelected);
            }

            player1effect.visible = (index == 1) ? false : true;
            player2effect.visible = (index == 2) ? false : true;
            player3effect.visible = (index == 3) ? false : true;
            player4effect.visible = (index == 4) ? false : true;

            foreach (Animator anim in characterAnimators)
            {
                anim.SetBool("Selected", false);
            }
            characterAnimators[index - 1].SetBool("Selected", true);

            readyBtn.visible = true;
            currentlySelected = index;
        }
    }

    public void ReadyPressed()
    {
        PhotonView camView = null;

        foreach (Camera cam in Singleton.instance.cameraManager.cameras)
        {
            if (cam.GetComponent<PhotonView>().isMine)
            {
                camView = cam.GetComponent<PhotonView>();
            }
        }

        myPhotonView.RPC("SetId", PhotonTargets.All, camView.instantiationId, currentlySelected - 1);

        isReady = !isReady;
        readyEffect.visible = isReady;
        readyBtn.text = isReady ? "Voltar" : "Pronto";

        myPhotonView.RPC("AddReadyPlayers", PhotonTargets.AllBuffered, isReady ? 1 : -1);

        if (readyTotal == Singleton.instance.photonManager.maxPlayers)
        {
            myPhotonView.RPC("FadeOut", PhotonTargets.All);
        }
    }

    [PunRPC]
    public void SetId(int instantiationID, int selectedCharacter)
    {
        foreach (Camera cam in Singleton.instance.cameraManager.cameras)
        {
            if (cam.GetComponent<PhotonView>().instantiationId == instantiationID)
            {
                cam.GetComponent<CameraID>().characterID = selectedCharacter;
                cam.GetComponent<CameraID>().instanceID = instantiationID;
            }
        }
    }

    [PunRPC]
    public void FadeOut()
    {
        loadGameScene = true;
        fadeEffect.visible = true;
    }

    [PunRPC]
    public void AddReadyPlayers(int value)
    {
        readyTotal += value;
    }

    [PunRPC]
    public void SetPlayerAmount(int amount, int maxPlayers)
    {
        playerAmount.text = "Players: " + amount.ToString() + "/" + maxPlayers.ToString();
    }

    [PunRPC]
    public void RemoveOptionToOtherPlayers(int index)
    {
        alreadySelected.Add(index);

        player1effect.visible = (index == 1) ? true : player1effect.visible;
        player2effect.visible = (index == 2) ? true : player2effect.visible;
        player3effect.visible = (index == 3) ? true : player3effect.visible;
        player4effect.visible = (index == 4) ? true : player4effect.visible;
    }

    [PunRPC]
    public void AddOptionToOtherPlayers(int index)
    {
        alreadySelected.Remove(index);

        player1effect.visible = (index == 1) ? false : player1effect.visible;
        player2effect.visible = (index == 2) ? false : player2effect.visible;
        player3effect.visible = (index == 3) ? false : player3effect.visible;
        player4effect.visible = (index == 4) ? false : player4effect.visible;
    }
}