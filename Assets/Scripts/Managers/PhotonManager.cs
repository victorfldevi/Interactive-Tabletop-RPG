using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhotonManager : Photon.MonoBehaviour
{
	[SerializeField] private GameObject player;
	[SerializeField] private CharacterHUDBehaviour characterSelection;

	[field: SerializeField] public int maxPlayers { get; private set; }

	void Awake()
	{
		Debug.Log("ConnectingUsingSettings");
		PhotonNetwork.ConnectUsingSettings("1.105");
		Debug.Log("ConnectedUsingSettings");
	}
	void OnJoinedLobby()
	{
		PhotonNetwork.JoinOrCreateRoom("Room", new RoomOptions() { MaxPlayers = (byte)maxPlayers }, TypedLobby.Default);
		Debug.Log("JoinedLobby");
	}
	void OnJoinedRoom()
	{
		PhotonNetwork.Instantiate(player.name, player.transform.position, Quaternion.identity, 0);
		characterSelection.SetPlayerAmount(PhotonNetwork.playerList.Length, maxPlayers);
		Debug.Log("JoinedRoom");
	}

	void OnPlayerEnteredRoom()
    {
		characterSelection.SetPlayerAmount(PhotonNetwork.playerList.Length, maxPlayers);
		Debug.Log("PlayerEnteredRoom");
	}

	void OnPhotonPlayerConnected()
	{
		characterSelection.SetPlayerAmount(PhotonNetwork.playerList.Length, maxPlayers);
		Debug.Log("PlayerConnected");
	}

	void OnPhotonPlayerDisconnected()
	{
		characterSelection.SetPlayerAmount(PhotonNetwork.playerList.Length, maxPlayers);
	}
}
