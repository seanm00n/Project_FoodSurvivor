using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class WeaponSkillBase : MonoBehaviour
{
    public abstract void Initialize();
    protected abstract void SkillAction();

    protected Ability _battleData;

    protected virtual void Start() {
        _battleData = GetComponent<Ability>();
        Initialize();
    }

    protected virtual void Update() {
        SkillAction();
    }

    public void SetValue(float attackPoint, float attackSpeed) {
        _battleData._AP = attackPoint;
        _battleData._AS = attackSpeed;
    }
}
