using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraManager : MonoBehaviour
{
    public PhotonView view;

    private GameManager gameManager;

    public List<Camera> cameras;
    public List<CameraID> cameraIDs;

    [SerializeField] private Vector3 startPosition;
    [SerializeField] private Quaternion startRotation;

    private float timeProgression;

    void Start()
    {
        view = GetComponent<PhotonView>();

        gameManager = Singleton.instance.gameManager;

        cameras = new List<Camera>();

        startPosition = transform.position;
        startRotation = transform.rotation;

        transform.position = Vector3.zero;
        transform.rotation = Quaternion.identity;
    }

    [ContextMenu("Set All Camera Parents")]
    public void SetCamerasParent()
    {
        cameras.Clear();
        foreach (Camera cam in FindObjectsOfType<Camera>())
        {
            if (!cam.CompareTag("DiceCamera"))
            {
                cam.transform.parent = transform;
                cameras.Add(cam);
                cameraIDs.Add(cam.GetComponent<CameraID>());
            }
        }
    }

    public void MoveCameras(Vector3 startPos, Vector3 endPos, float speed, Transform caller, Transform target)
    {
        float distance;
        if (Vector3.Distance(caller.position, target.position) > 5)
        {
            distance = 5;
        }
        else
        {
            distance = Vector3.Distance(caller.position, target.position);
        }

        transform.parent = caller;

        if (timeProgression < 1)
        {
            timeProgression += speed * Time.deltaTime;
        }

        transform.localPosition = Vector3.MoveTowards(new Vector3(startPos.x, startPos.y + (2F - (distance / 3)), startPos.z), new Vector3(endPos.x, endPos.y + (10 - distance), endPos.z), timeProgression);

        Vector3 midGround = new Vector3(((caller.position.x + target.position.x) / 2), caller.position.y + 1F, ((caller.position.z + target.position.z) / 2));
        transform.LookAt(midGround, Vector3.up);
    }

    public void SetCamerasBack(float speed)
    {
        transform.parent = Singleton.instance.transform;

        timeProgression = 0;
        transform.position = Vector3.Lerp(transform.position, startPosition, speed * Time.deltaTime);
        transform.rotation = Quaternion.Slerp(transform.rotation, startRotation, speed * Time.deltaTime);
    }

    public bool CamerasAreBack()
    {
        if(Vector3.Distance(transform.position, startPosition) < 0.5F && Quaternion.Angle(transform.rotation, startRotation) < 1F)
        {
            return true;
        }

        return false;
    }

    public Camera GetLocalCamera()
    {
        foreach (Camera cam in cameras)
        {
            if (cam.GetComponent<PhotonView>().isMine)
            {
                return cam;
            }
        }
        return null;
    }

    public void ActivatePlayableCharacters()
    {
        gameManager.loadingBackground.SetActive(false);
        gameManager.players[0].transform.parent.gameObject.SetActive(true);
        gameManager.enemies[0].transform.parent.gameObject.SetActive(true);

        for (int i = 0; i < gameManager.players.Count; i++)
        {
            gameManager.players[i].GetComponentInChildren<Animator>().SetBool("gameStarted", true);
        }
        for (int i = 0; i < gameManager.enemies.Count; i++)
        {
            gameManager.enemies[i].GetComponentInChildren<Animator>().SetBool("gameStarted", true);
        }
    }

    public void ActivateDiceRoller()
    {
        Singleton.instance.diceManager.enabled = true;
        Singleton.instance.diceManager.StartVariables();
        Singleton.instance.diceManager.Initiative();

        gameManager.cutsceneFinished = true;
    }

    [PunRPC]
    public void MoveCamerasRPC(float startPosX, float startPosY, float startPosZ, float endPosX, float endPosY, float endPosZ, float speed, int callerIndex, int targetIndex)
    {
        Vector3 startPos = new Vector3(startPosX, startPosY, startPosZ);
        Vector3 endPos = new Vector3(endPosX, endPosY, endPosZ);

        Transform caller = gameManager.players[callerIndex].transform;
        Transform target = gameManager.enemies[callerIndex].transform;


        MoveCameras(startPos, endPos, speed, caller, target);
    }
}
