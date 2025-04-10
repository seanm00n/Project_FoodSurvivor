using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameEnums;

public class SpawnZone : MonoBehaviour
{
    GameObject _gameManager;

    [SerializeField]
    MonsterZone _monsterZone;

    private void Awake() {
        _gameManager = GameObject.FindGameObjectWithTag("GameManager");
    }

    private void OnTriggerExit2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("Player")) {
            Debug.Log("Player out of line");
            _gameManager.GetComponent<GameManager>().SetZoneOut(_monsterZone, true);
        }
    }
}
