using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

enum Skills {
    SkillA, SkillB
}

public abstract class NexusBase : MonoBehaviour
{
    public abstract float _nexusHealthPoint { get; protected set; }
    public abstract float _nexusAttackPoint { get; protected set; }

    public event Action<NexusBase> _OnNexusHit;
    public event Action<NexusBase> _OnNexusDeath;
    protected event Action<float> _SkillQueue;

    private Dictionary<Skills, float> _skillLastUsed;

    protected virtual void Start() {
        // do some common
        _skillLastUsed = new Dictionary<Skills, float>();
        Initialize();
    }

    protected virtual void Update() {
        // do some common
    }

    protected abstract void Initialize();
    protected abstract void SelectSkill();

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("MonsterProjectile")) {
            NexusHit(collision.gameObject);
        }
    }

    protected void UseSkill() {
        _SkillQueue?.Invoke(_nexusAttackPoint);
    }

    protected void SkillA(float nexusAttackPoint) {
        _skillLastUsed.TryAdd(Skills.SkillA, Time.time);
        float skillCooldown = 1f; // 추후 수정 가능
        if(Time.time - _skillLastUsed[Skills.SkillA] >= skillCooldown) {
            _skillLastUsed[Skills.SkillA] = Time.time;
            Debug.Log("Nexus uses skillA");
        }
    }

    protected void SkillB(float nexusAttackPoint) {
        _skillLastUsed.TryAdd(Skills.SkillB, Time.time);
        float skillCooldown = 1f;
        if(Time.time - _skillLastUsed[Skills.SkillB] >= skillCooldown) {
            _skillLastUsed[Skills.SkillB] = Time.time;
            Debug.Log("Nexus uses skillB");
        }
    }

    private void NexusHit(GameObject target) {
        ProjectileBase projectile = target.GetComponent<ProjectileBase>();
        if(projectile) {
            _nexusHealthPoint -= projectile.GetProjectileAttackPoint();
            _OnNexusHit?.Invoke(this);
            CheckNexusDeath();
        }
    }

    private void CheckNexusDeath() {
        if(_nexusHealthPoint <= 0f) {
            _OnNexusDeath?.Invoke(this);
            NexusDeath();
        }
    }

    private void NexusDeath() {
        Destroy(this.gameObject);
    }
}
// invoke는 통보용, 로직은 클래스 내에서 이어지도록, 느슨한 결합