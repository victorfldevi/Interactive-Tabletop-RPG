using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class PanelManager : MonoBehaviour
{
    public PhotonView view;

    private GameManager gameManager;
    private RoundManager roundManager;

    public GameObject options;
    public GameObject actions;
    public GameObject inventory;

    private VisualElement rootMain;
    private VisualElement rootOptions;
    private VisualElement rootActions;
    private VisualElement rootInventory;

    public ProgressBar healthBar;
    public Label armorText;

    public Button optionsAction;
    public Button optionsInventory;

    public Button actionAttack;
    public Button actionHeal;
    public Button actionBack;

    public Button inventorySelect0;
    public Button inventorySelect1;
    public Button inventorySelect2;
    public Button inventorySelect3;

    public VisualElement inventoryImg0;
    public VisualElement inventoryImg1;
    public VisualElement inventoryImg2;
    public VisualElement inventoryImg3;

    public Button inventoryBack;

    void Start()
    {
        view = GetComponent<PhotonView>();
        gameManager = Singleton.instance.gameManager;
        roundManager = Singleton.instance.roundManager;

        gameObject.SetActive(false);
    }

    void OnEnable()
    {
        rootMain = GetComponent<UIDocument>()?.rootVisualElement;
        rootOptions = options?.GetComponent<UIDocument>()?.rootVisualElement;
        rootActions = actions?.GetComponent<UIDocument>()?.rootVisualElement;
        rootInventory = inventory?.GetComponent<UIDocument>()?.rootVisualElement;

        if (gameManager != null)
        {
            GameObject characterTurn = gameManager.turnSequence[roundManager.turn];
            if (rootMain != null)
            {
                healthBar = rootMain.Q<ProgressBar>("Health-Bar");
                armorText = rootMain.Q<Label>("Armor-Text");

                healthBar.lowValue = 0;
                healthBar.highValue = characterTurn.GetComponent<CharacterStats>().maxHealth;
                healthBar.value = characterTurn.GetComponent<CharacterStats>().health;
                healthBar.title = healthBar.value + "/" + healthBar.highValue;

                armorText.text = characterTurn.GetComponent<CharacterStats>().armour.ToString();

            }

            if (rootOptions != null)
            {
                optionsAction = rootOptions.Q<Button>("Action-Button");
                optionsInventory = rootOptions.Q<Button>("Inventory-Button");

                optionsAction.clickable.clicked += () => { rootActions.visible = true; rootOptions.visible = false; };
                optionsInventory.clickable.clicked += () => { rootInventory.visible = true; rootOptions.visible = false; 
                                                                ChangeEquippedEffect(System.Array.IndexOf(characterTurn.GetComponent<CharacterInventory>().inventory, characterTurn.GetComponent<CharacterStats>().equippedItem));
                                                                for (int i = 0; i < characterTurn.GetComponent<CharacterInventory>().inventory.Length; i++){ if (characterTurn.GetComponent<CharacterInventory>().inventory[i] as ConsumableBase) { ChangeConsumableEffect(i); } };
                                                                };
            }

            if (rootActions != null)
            {
                rootActions.visible = false;

                actionAttack = rootActions.Q<Button>("Attack-Button");
                actionHeal = rootActions.Q<Button>("Heal-Button");
                actionBack = rootActions.Q<Button>("Back-Button");

                actionAttack.clickable.clicked += () => characterTurn.GetComponent<PlayerBehaviour>().action = CharacterBehaviour.Actions.Attack;
                actionHeal.clickable.clicked += () => characterTurn.GetComponent<PlayerBehaviour>().action = CharacterBehaviour.Actions.Heal;
                actionBack.clickable.clicked += () => { rootOptions.visible = true; rootActions.visible = false; };
            }

            if (rootInventory != null)
            {
                rootInventory.visible = false;

                inventorySelect0 = rootInventory.Q<Button>("0-Button");
                inventorySelect1 = rootInventory.Q<Button>("1-Button");
                inventorySelect2 = rootInventory.Q<Button>("2-Button");
                inventorySelect3 = rootInventory.Q<Button>("3-Button");
                inventoryBack = rootInventory.Q<Button>("Back-Button");

                inventorySelect0.style.backgroundImage = (characterTurn.GetComponent<CharacterInventory>().inventory[0].itemImg != null) ? new StyleBackground(characterTurn.GetComponent<CharacterInventory>().inventory[0].itemImg) : null;
                inventorySelect1.style.backgroundImage = (characterTurn.GetComponent<CharacterInventory>().inventory[1].itemImg != null) ? new StyleBackground(characterTurn.GetComponent<CharacterInventory>().inventory[1].itemImg) : null;
                inventorySelect2.style.backgroundImage = (characterTurn.GetComponent<CharacterInventory>().inventory[2].itemImg != null) ? new StyleBackground(characterTurn.GetComponent<CharacterInventory>().inventory[2].itemImg) : null;
                inventorySelect3.style.backgroundImage = (characterTurn.GetComponent<CharacterInventory>().inventory[3].itemImg != null) ? new StyleBackground(characterTurn.GetComponent<CharacterInventory>().inventory[3].itemImg) : null;

                inventorySelect0.clickable.clicked += () => view.RPC("ItemUsage", PhotonTargets.All, 0);
                inventorySelect1.clickable.clicked += () => view.RPC("ItemUsage", PhotonTargets.All, 1);
                inventorySelect2.clickable.clicked += () => view.RPC("ItemUsage", PhotonTargets.All, 2);
                inventorySelect3.clickable.clicked += () => view.RPC("ItemUsage", PhotonTargets.All, 3);

                inventoryBack.clickable.clicked += () => { rootOptions.visible = true; rootInventory.visible = false; ChangeEquippedEffect(-1); ChangeConsumableEffect(-1); };
            }
        }
    }

    [PunRPC]
    public void ItemUsage(int index)
    {
        GameObject characterTurn = gameManager.turnSequence[roundManager.turn];
        if (index != -1)
        {
            InventoryBase item = characterTurn.GetComponent<CharacterInventory>().inventory[index];

            if (item as EquipableObject)
            {
                characterTurn.GetComponent<CharacterStats>().equippedItem = (EquipableObject)item;
                characterTurn.GetComponentInChildren<AnimationController>().SwitchEquipped(item.itemType);
                if(inventorySelect0 != null)
                {
                    ChangeEquippedEffect(index);
                }
            }
            else if (item as ConsumableBase)
            {
                ((ConsumableBase)item).UseItem();

                if(inventorySelect0 != null)
                {
                    ChangeConsumableEffect(index);
                }
            }

        }
        else if (inventorySelect0 != null)
        {
            ChangeEquippedEffect(index);
            ChangeConsumableEffect(index);
        }
    }

    private void ChangeEquippedEffect(int index)
    {
        inventorySelect0.Q<VisualElement>("Effect-Equipped").visible = (index == 0) ? true : false;
        inventorySelect1.Q<VisualElement>("Effect-Equipped").visible = (index == 1) ? true : false;
        inventorySelect2.Q<VisualElement>("Effect-Equipped").visible = (index == 2) ? true : false;
        inventorySelect3.Q<VisualElement>("Effect-Equipped").visible = (index == 3) ? true : false;
    }

    private void ChangeConsumableEffect(int index)
    {
        GameObject characterTurn = gameManager.turnSequence[roundManager.turn];

        inventorySelect0.Q<VisualElement>("Effect-Amount").visible = (index == 0) ? true : false;
        inventorySelect1.Q<VisualElement>("Effect-Amount").visible = (index == 1) ? true : false;
        inventorySelect2.Q<VisualElement>("Effect-Amount").visible = (index == 2) ? true : false;
        inventorySelect3.Q<VisualElement>("Effect-Amount").visible = (index == 3) ? true : false;

        inventorySelect0.Q<VisualElement>("Effect-Amount").Q<Label>("Effect-Amount-Text").text = (index == 0) ? ((ConsumableBase)characterTurn.GetComponent<CharacterInventory>().inventory[0]).amount.ToString() : "0";
        inventorySelect1.Q<VisualElement>("Effect-Amount").Q<Label>("Effect-Amount-Text").text = (index == 1) ? ((ConsumableBase)characterTurn.GetComponent<CharacterInventory>().inventory[1]).amount.ToString() : "0";
        inventorySelect2.Q<VisualElement>("Effect-Amount").Q<Label>("Effect-Amount-Text").text = (index == 2) ? ((ConsumableBase)characterTurn.GetComponent<CharacterInventory>().inventory[2]).amount.ToString() : "0";
        inventorySelect3.Q<VisualElement>("Effect-Amount").Q<Label>("Effect-Amount-Text").text = (index == 3) ? ((ConsumableBase)characterTurn.GetComponent<CharacterInventory>().inventory[3]).amount.ToString() : "0";

    }
}
