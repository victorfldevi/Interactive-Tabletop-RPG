using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationController : MonoBehaviour
{
    private Animator[] allAnims;
    private Animator anim;

    CharacterBehaviour characterBehaviour;
    CharacterStats characterStats;

    public bool startBattle;

    private bool gotHit;
    private bool dodgedRanged;
    private bool dodgedMelee;

    // Start is called before the first frame update
    void Start()
    {
        allAnims = FindObjectsOfType(typeof(Animator)) as Animator[];
        anim = GetComponentInChildren<Animator>();
        characterBehaviour = GetComponentInParent<CharacterBehaviour>();
        characterStats = GetComponentInParent<CharacterStats>();
    }

    public void Attack()
    {
        characterStats?.hand.Find(characterStats.equippedItem.itemPrefab.name).GetComponentInChildren<ParticleSystem>()?.Play();

        GameObject prevObj = characterBehaviour?.prevObj;
        CharacterStats prevObjStats = prevObj?.GetComponent<CharacterStats>();
        AudioSource prevObjAudio = prevObj?.GetComponent<AudioSource>();
        AnimationController prevObjAnimControl = prevObj?.GetComponentInChildren<AnimationController>();

        if (characterBehaviour?.damageDices.Count > 0)
        {
            prevObjStats.TakeDamage(characterBehaviour.damageDices[0]);

            HealthStatusPopup.Create(prevObj.transform, characterBehaviour.damageDices[0].ToString(), Color.red);

            if (transform.parent.TryGetComponent(out AudioSource @ad))
            {
                @ad.clip = characterStats?.equippedItem.useAudio;
                @ad.Play();
            }

            prevObjAudio.clip = PrefabReference.i.hitAudio;
            prevObjAudio.Play();


            characterBehaviour.damageDices.RemoveAt(0);

            if (prevObjStats.health > 0) 
            {
                prevObjAnimControl.DamagedAnimation();
            }
            else
            {
                prevObjAnimControl.DeadAnimation(true);
            }
        }
        else
        {
            if (transform.parent.TryGetComponent(out AudioSource @ad))
            {
                @ad.clip = characterStats?.equippedItem.useAudio;
                @ad.Play();
            }

            if (characterStats.equippedItem.itemType != ItemType.Melee)
            {
                prevObjAnimControl.DodgingRangedAnimation();
            }
            HealthStatusPopup.Create(prevObj.transform, "MISS", new Color(0.7F, 0.7F, 0.7F, 1));
        }
    }

    public void SwitchEquipped(ItemType itemType)
    {
        switch (itemType)
        {
            case ItemType.Primary:
                anim.SetBool("isPrimaryEquipped", true);
                anim.SetBool("isSecondaryEquipped", false);
                anim.SetBool("isMeleeEquipped", false);
                break;
            case ItemType.Secondary:
                anim.SetBool("isPrimaryEquipped", false);
                anim.SetBool("isSecondaryEquipped", true);
                anim.SetBool("isMeleeEquipped", false);
                break;
            case ItemType.Melee:
                anim.SetBool("isPrimaryEquipped", false);
                anim.SetBool("isSecondaryEquipped", false);
                anim.SetBool("isMeleeEquipped", true);
                break;
        }
        anim.SetBool("isEquipping", true);
    }
    public void EquippingConsumable(string consumableName)
    {
        anim.SetBool("isUsing", true);
        characterStats?.hand.Find(consumableName).gameObject.SetActive(true);
    }
    public void EmptyHand()
    {
        for (int i = 0; i < characterStats?.hand.childCount; i++)
        {
            characterStats?.hand.GetChild(i).gameObject.SetActive(false);
        }
    }
    public void StartAnotherRound()
    {
        anim.SetBool("isUsing", false);
        Singleton.instance.gameManager.turnSequence[Singleton.instance.roundManager.turn].GetComponent<CharacterBehaviour>().AlterFinishTurn(false);
        RoundManager roundManager = Singleton.instance.roundManager;
        roundManager.RoundText.gameObject.SetActive(true);
        roundManager.StartAnotherRound();
    }


    public void Equipped()
    {
        anim.SetBool("isEquipping", false);
    }
    public void AttackingAnimation(bool value, int times)
    {
        anim.SetBool("isAttacking", value);
        switch (times)
        {
            case 1: anim.SetBool("SingleShot", value); anim.SetBool("DoubleShot", !value); anim.SetBool("TripleShot", !value); break;
            case 2: anim.SetBool("SingleShot", !value); anim.SetBool("DoubleShot", value); anim.SetBool("TripleShot", !value); break;
            case 3: anim.SetBool("SingleShot", !value); anim.SetBool("DoubleShot", !value); anim.SetBool("TripleShot", value); break;
        }
    }
    public void AttackedAnimation(bool value)
    {
        anim.SetBool("isAttacked", value);
    }
    public void DodgingRangedAnimation()
    {
        dodgedRanged = dodgedRanged ? false : true;
        anim.SetBool("isDodgingRanged", dodgedRanged);
    }
    public void DodgingMeleeAnimation()
    {
        dodgedMelee = dodgedMelee ? false : true;
        anim.SetBool("isDodgingMelee", dodgedMelee);
    }
    public void DamagedAnimation()
    {
        gotHit = gotHit ? false : true;
        anim.SetBool("isDamaged", gotHit);
    }
    public void DeadAnimation(bool value)
    {
        anim.SetBool("isDead", value);
    }

    public IEnumerator PauseBattle()
    {
        if (anim.speed > 0.2)
        {
            foreach (Animator anims in allAnims)
            {
                anims.speed -= 0.2F;
            }
            yield return new WaitForSeconds(0.1F);
            StartCoroutine(PauseBattle());
        }
        else
        {
            foreach (Animator anims in allAnims)
            {
                anims.speed = 0F;
            }
            startBattle = true;
        }
    }

    public IEnumerator UnpauseBattle()
    {
        if (anim.speed < 0.8)
        {
            foreach (Animator anims in allAnims)
            {
                anims.speed += 0.2F;
            }
            yield return new WaitForSeconds(0.1F);
            StartCoroutine(UnpauseBattle());
        }
        else
        {
            foreach (Animator anims in allAnims)
            {
                anims.speed = 1F;
            }
        }
    }

    public void EndBattle()
    {
        startBattle = false;
    }

    public void ShowGun()
    {
        HideGun();
        GameObject prefabInHand = characterStats?.hand.Find(GetComponentInParent<CharacterStats>().equippedItem.itemPrefab.name).gameObject;
        prefabInHand?.SetActive(true);

        if (anim.GetBool("isEquipping") && transform.parent.TryGetComponent(out AudioSource @as))
        {
            @as.clip = characterStats?.equippedItem.equipAudio;
            @as.Play();
        }

        if(characterStats != null && prefabInHand != null)
        {
            characterStats.prevWeaponPrefab = prefabInHand;
        }
    }

    public void HideGun()
    {
        characterStats?.prevWeaponPrefab?.gameObject.SetActive(false);
    }

    public void ReturnToPos()
    {
        characterBehaviour.isMelee = false;
    }

}
