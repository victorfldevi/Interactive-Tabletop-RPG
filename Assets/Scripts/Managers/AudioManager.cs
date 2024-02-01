using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public AudioSource audioSource;

    public AudioClip entryClip;
    public AudioClip loopClip;

    void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }

    public IEnumerator Play()
    {
        audioSource.clip = entryClip;
        audioSource.Play();

        yield return new WaitForSeconds(entryClip.length - 0.0002F * Time.deltaTime);

        audioSource.loop = true;
        audioSource.clip = loopClip;
        audioSource.Play();
    }
}
