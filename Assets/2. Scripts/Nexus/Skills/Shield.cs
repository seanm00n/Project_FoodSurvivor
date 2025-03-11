using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

public class Shield : MonoBehaviour
{
    BattleData _battleData;

    private void Start() {
        _battleData = gameObject.GetComponentInParent<BattleData>();
    }
}
