using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

public class Shield : MonoBehaviour
{
    BattleData _parentData;

    private void Start() {
        _parentData = gameObject.GetComponentInParent<BattleData>();
    }

    private void OnCollisionEnter2D(Collision2D collision) {
        if(collision.gameObject.CompareTag("Monster")) {
            // parent 데미지 가져온 후 invoke()
        }
    }
}
