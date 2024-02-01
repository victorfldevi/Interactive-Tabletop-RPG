using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraID : MonoBehaviour
{
    public int characterID = -1;
    public int instanceID;

    void OnEnable()
    {
        Singleton.instance.cameraManager.SetCamerasParent();
    }
}
