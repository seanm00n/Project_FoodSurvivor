using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class WeaponProj : MonoBehaviour, IBattle
{
    public Ability ability { get; private set; }

    public abstract void LevelUp();

    protected abstract void Initialize();

    protected abstract void SkillAction();

    private void Awake() => Initialize();

    private void Update() => SkillAction();

    public void SetAbility(Ability ability) => this.ability = ability;

    public float GetAP() => ability.AP;
}
