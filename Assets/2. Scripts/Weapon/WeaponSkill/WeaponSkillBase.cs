using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class WeaponSkillBase : MonoBehaviour
{
    public abstract void Initialize();
    protected abstract void SkillAction();

    protected BattleData _battleData;

    protected virtual void Start() {
        _battleData = GetComponent<BattleData>();
        Initialize();
    }

    protected virtual void Update() {
        SkillAction();
    }
}
