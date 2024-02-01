// Example code from the unity networking examples
using UnityEngine;
using System.Collections;

public class TransformSync : Photon.MonoBehaviour
{
    private Vector3 networkPosition;
    private Quaternion networkRotation;
    private Rigidbody _rb;

    private void Start()
    {
        _rb = GetComponent<Rigidbody>();
    }

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.isWriting)
        {
            stream.SendNext(_rb.position);
            stream.SendNext(_rb.rotation);
            stream.SendNext(_rb.velocity);
        }
        else
        {
            networkPosition = (Vector3)stream.ReceiveNext();
            networkRotation = (Quaternion)stream.ReceiveNext();
            _rb.velocity = (Vector3)stream.ReceiveNext();

            float lag = Mathf.Abs((float)(PhotonNetwork.time - info.timestamp));
            networkPosition += _rb.velocity * lag;
        }
    }

    public void FixedUpdate()
    {
        if (!photonView.isMine)
        {
            _rb.position = Vector3.MoveTowards(_rb.position, networkPosition, Time.fixedDeltaTime);
            _rb.rotation = Quaternion.RotateTowards(_rb.rotation, networkRotation, Time.fixedDeltaTime * 100.0f);
        }
    }
}