using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Collections.LowLevel.Unsafe;
using Unity.VisualScripting;
using UnityEditor.Experimental.GraphView;
using UnityEngine;
using GameEnums;

public abstract class NexusBase : MonoBehaviour
{
    public event Action<NexusBase> _OnNexusHit;
    public event Action<NexusBase> _OnNexusDeath;
    protected event Action<float> _SkillQueue;
    protected BattleData _battleData;

    [SerializeField] private GameObject _slowCirclePref;
    private GameObject _instantiatedSlowCircle;

    [SerializeField] private GameObject _protectShieldPref;
    private GameObject _instantiatedProtectShield;

    private Dictionary<NexusSkills, float> _skillLastUsed;
    private GameObject _playerWeapon;
    
    private float _lastMovedTime;
    private float _moveOffset;
    private bool _isMoving;
    private bool _isRotating;

    protected virtual void Start() {
        // do some common
        _skillLastUsed = new Dictionary<NexusSkills, float>();
        _playerWeapon = GameObject.FindWithTag("Player"); // �����Ҵ� ���ٴ� ����
        _battleData = this.gameObject.GetComponent<BattleData>();
        _lastMovedTime = 0f;
        _moveOffset = 1f;
        _isMoving = false;
        _isRotating = false;
        Initialize();
    }

    protected virtual void Update() {
        // do some common
        NexusMovement();
    }

    protected abstract void Initialize();
    //protected abstract void SelectSkill();

    private void NexusMovement() {
        if(!_isMoving && !_isRotating && Time.time - _lastMovedTime > 1.5f ) {
            float distance = Vector2.Distance(_playerWeapon.transform.position, this.transform.position);
            if(distance > _moveOffset ) {
                _lastMovedTime = Time.time;
                StartCoroutine(MoveToTarget());
                StartCoroutine(RotateToTarget());
            }
        }
    }

    private IEnumerator MoveToTarget() {
        _isMoving = true;
        Vector2 direction = (_playerWeapon.transform.position - this.transform.position).normalized;
        float timer = Time.time;
        while(Time.time - timer < 1f) {
            this.transform.position += (Vector3)direction * _battleData._moveSpeed * Time.deltaTime;
            yield return null;
        }
        _isMoving = false;
    }

    private IEnumerator RotateToTarget() {
        _isRotating = true;
        float duration = 1.5f; // �ֱ�
        float elapsedTime = 0f; // ��� �ð�

        Vector3 direction = _playerWeapon.transform.position - this.transform.position; // ���⺤��
        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg; // ���Ȱ� ���� �� ��ȯ
        Quaternion targetRotation = Quaternion.Euler(0, 0, angle); // Z�� �߽� ȸ������ �̿�

        while(elapsedTime < duration) {
            this.transform.rotation = Quaternion.Lerp(this.transform.rotation, targetRotation, elapsedTime / duration);
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
        _SkillQueue?.Invoke(_battleData._attackPoint);
    }

    private void NexusHit(GameObject target) {
        MonsterProjectileBase projectile = target.GetComponent<MonsterProjectileBase>();
        if(projectile) {
            _battleData._healthPoint -= projectile.GetProjectileAttackPoint();
            _OnNexusHit?.Invoke(this);
            CheckNexusDeath();
        }
    }

    private void CheckNexusDeath() {
        if(_battleData._healthPoint <= 0f) {
            _OnNexusDeath?.Invoke(this);
            NexusDeath();
        }
    }

    private void NexusDeath() {
        Destroy(this.gameObject);
    }

    protected void ProtectShield(float nexusAttackPoint) { // protect shield
        //GameObject instantiatedObject = Instantiate();
        _skillLastUsed.TryAdd(NexusSkills.ProtectShield, Time.time);
        float skillCooldown = 10f; // ���� ����
        if(Time.time - _skillLastUsed[NexusSkills.ProtectShield] >= skillCooldown) {
            _skillLastUsed[NexusSkills.ProtectShield] = Time.time;
            Debug.Log("Nexus uses ProtectShield");
        }
    }

    protected void SlowCircle(float nexusAttackPoint) {
        if(!_instantiatedSlowCircle) {
            _instantiatedSlowCircle = Instantiate(_slowCirclePref, this.transform);
            _skillLastUsed.TryAdd(NexusSkills.ProtectShield, Time.time);
            Debug.Log("Nexus uses SlowCircle");
        }
    }
}
// invoke�� �뺸��, ������ Ŭ���� ������ �̾�������, ������ ����