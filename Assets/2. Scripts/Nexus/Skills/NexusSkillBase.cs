using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using UnityEngine;

public abstract class NexusSkillBase : MonoBehaviour
{
    public abstract void Initialize();
    protected abstract void SkillAction();

    protected BattleData[] _battleData;

    protected virtual void Start() {
        _battleData = this.GetComponentsInChildren<BattleData>();
        Initialize();
    }

    protected virtual void Update() { 
        SkillAction();
    }
}