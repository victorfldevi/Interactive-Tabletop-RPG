using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class PlayerNetworking : MonoBehaviour
{
	// Recebe a camera do jogador
	[SerializeField] private GameObject playerCamera;
	// Recebe um script para ser desligado quando estiver online
	[SerializeField] private MonoBehaviour[] scriptsToIgnore;

	private PhotonView photonView;
	void Start()
	{
		// Faz a chamada para inicializacao da visualizacao no servidor
		photonView = GetComponent<PhotonView>();
		Initialize();
	}
	void Initialize()
	{
		// Gerencia a ativacao da camera no servidor
		if (photonView.isMine)
		{
		}
		else
		{
			playerCamera.SetActive(false);
			foreach (MonoBehaviour item in scriptsToIgnore)
			{
				item.enabled = false;
			}
		}
	}
}