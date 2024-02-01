using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabReference : MonoBehaviour
{
    private static PrefabReference _i;

    public static PrefabReference i {
        get {
            if (_i == null) _i = Instantiate(Resources.Load<PrefabReference>("References/PrefabReferences"), Singleton.instance.transform);
            return _i;
        }
    }

    public Transform pfHealthStatusPopup;

    public AudioClip hitAudio;
}