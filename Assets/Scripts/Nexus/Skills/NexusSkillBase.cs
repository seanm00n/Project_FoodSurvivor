using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using UnityEngine;

public abstract class NexusSkillBase : MonoBehaviour
{
    public abstract void Initialize();
    protected abstract void SkillAction();

    protected Ability _battleData;

    protected virtual void Start() {
        _battleData = this.GetComponent<Ability>();
        Initialize();
    }

    protected virtual void Update() { 
        SkillAction();
    }

    public void SetValue(float attackPoint, float moveSpeed) {
        _battleData._AP = attackPoint;
        _battleData._MS = moveSpeed;
    }
}