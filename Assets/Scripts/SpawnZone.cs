using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameEnums;

public class SpawnZone : MonoBehaviour
{
    GameObject _gameManager;

    [SerializeField]
    Zone _monsterZone;

    private void Awake() {
        _gameManager = GameObject.FindGameObjectWithTag("GameManager");
    }

    private void OnTriggerExit2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("Player")) {
            Debug.Log("Player out of line");
            _gameManager.GetComponent<GM>().SetZoneOut(_monsterZone, true);
        }
    }
}
