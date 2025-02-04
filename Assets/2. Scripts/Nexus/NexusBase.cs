using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Collections.LowLevel.Unsafe;
using UnityEditor.Experimental.GraphView;
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
    private GameObject _playerWeapon;
    private float _nexusMoveSpeed = 1f;
    private float _traceOffset = 3f;
    private float _rotateInterval = 2f;
    private float _lastRotationTime = 0f;
    private bool _isRotating = false;

    protected virtual void Start() {
        // do some common
        _skillLastUsed = new Dictionary<Skills, float>();
        _playerWeapon = GameObject.FindWithTag("Player"); // �����Ҵ� ���ٴ� ����
        Initialize();
    }

    protected virtual void Update() {
        // do some common
        TracePlayer();
        RotateCheck();
    }

    protected abstract void Initialize();
    protected abstract void SelectSkill();
    // �ڵ� �ؼ� �ʿ�
    private void TracePlayer() {
        float currentDistance = Vector3.Distance(_playerWeapon.transform.position, this.transform.position);

        // �÷��̾���� �Ÿ� ����
        if(currentDistance > _traceOffset + 0.1f) // �ʹ� �ִٸ� ������ �̵�
        {
            Vector3 direction = (_playerWeapon.transform.position - this.transform.position).normalized;
            this.transform.position += direction * _nexusMoveSpeed * Time.deltaTime;
        } else if(currentDistance < _traceOffset - 0.1f) // �ʹ� ������ �ڷ� �̵�
          {
            Vector3 direction = (this.transform.position - _playerWeapon.transform.position).normalized;
            this.transform.position += direction * _nexusMoveSpeed * Time.deltaTime;
        }
    }
    // �ڵ� �ؼ� �ʿ�
    private void RotateCheck() {
        if(Time.time - _lastRotationTime >= _rotateInterval) {
            _lastRotationTime = Time.time;
            if(!_isRotating) {
                _isRotating = true;
                StartCoroutine(RotateToPlayer());
            }
        }

    }
    // �ڵ� �ؼ� �ʿ�, ���� �ʿ�
    IEnumerator RotateToPlayer() {
        Vector2 direction = (_playerWeapon.transform.position - this.transform.position).normalized;
        float angle = Mathf.Atan2(direction.x, direction.y) * Mathf.Rad2Deg;
        Quaternion targetRotation = Quaternion.Euler(0, 0, angle);
        float duration = 2f;
        float elapsedTime = 0f;
        Quaternion startRotation = this.transform.rotation;

        while(elapsedTime < duration) {
            this.transform.rotation = Quaternion.Slerp(startRotation, targetRotation, elapsedTime / duration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        this.transform.rotation = targetRotation;
        _isRotating = false;
       
    }

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
        float skillCooldown = 1f; // ���� ���� ����
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
// invoke�� �뺸��, ������ Ŭ���� ������ �̾�������, ������ ����