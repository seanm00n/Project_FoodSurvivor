using GameEnums;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Unity.VisualScripting;
using UnityEngine;

public abstract class MonsterBase : MonoBehaviour
{
    public abstract float _monsterAttackSpeed { get; protected set; }
    public abstract float _monsterAttackPoint { get; protected set; }
    public abstract float _monsterHealthPoint { get; protected set; }
    public abstract float _monsterHitDelay { get; protected set; } // minion = 0, boss > 0
    public abstract float _monsterAttackRange { get; protected set; } // melee = 0, ranged > 0
    public abstract float _monsterMoveSpeed { get; protected set; }
    public abstract bool _isBoss { get; protected set; }

    private float _lastHitTime = 0f; 
    private float _lastAttackTime = 0f;
    private float _rangeOffset = 0.2f;
    private MonsterState _monsterState = MonsterState.Idle;
    private GameObject _targetNexus;
    private BoxCollider2D _targetCollider;

    public event Action<MonsterBase> _OnMonsterHit; 
    public event Action<MonsterBase> _OnMonsterDeath; 

    protected event Action _OnMonsterArrived;

    [SerializeField]
    private GameObject _projectile;// { get; protected set; } // 수정, 몬스터 별로 프로젝타일 다름

    protected virtual void Start() {
        Initialize();
        _OnMonsterArrived += HandleMonsterAttack;
        _targetCollider = _targetNexus.GetComponent<BoxCollider2D>();
    }

    protected virtual void Update() {
        MonsterMovement();
        MonsterRotation();
    }

    protected abstract void Initialize();

    private void OnTriggerEnter2D(Collider2D collision) {
        if(_monsterState == MonsterState.Death) return;
        if(collision.gameObject.CompareTag("PlayerProjectile") ||
            collision.gameObject.CompareTag("NexusProjectile")) {
            _lastHitTime = Time.time;
            MonsterHit(collision.gameObject);
        }
        
    }

    // 보스용 충돌 판정
    private void OnTriggerStay2D(Collider2D collision) {
        if(!_isBoss || _monsterState == MonsterState.Death) return;

        if(collision.gameObject.CompareTag("PlayerProjectile") ||
            collision.gameObject.CompareTag("NexusProjectile")) {
            if(Time.time - _lastHitTime >= _monsterHitDelay) {
                _lastHitTime = Time.time;
                MonsterHit(collision.gameObject);
            }
        }        
    }

    private void MonsterHit(GameObject target) {
        WeaponBase weaponBase = target.GetComponentInParent<WeaponBase>();
        if(weaponBase) {
            _monsterHealthPoint -= weaponBase.GetWeaponAttackPoint();
            _OnMonsterHit?.Invoke(this);
            CheckMonsterDeath();
        }
    }

    private void CheckMonsterDeath() {
        if(_monsterHealthPoint <= 0f) {
            _OnMonsterDeath?.Invoke(this);
            MonsterDeath();
        }
    }

    private void MonsterDeath() {
        _monsterState = MonsterState.Death;
        Destroy(this.gameObject);
    }

    private void MonsterMovement() {
        if(_monsterState == MonsterState.Death || _monsterState == MonsterState.Attack) return;

        if(_targetNexus == null) {
            _monsterState = MonsterState.Idle;
            Debug.Log("TargetNexus is null");
            return;
        }
        float distance = Vector3.Distance(_targetNexus.transform.position,this.transform.position);

        if(distance > _monsterAttackRange + _targetCollider.size.x + _rangeOffset) {
            _monsterState = MonsterState.Moving;
            Vector3 direction = (_targetNexus.transform.position - this.transform.position).normalized;
            this.transform.position += direction * _monsterMoveSpeed * Time.deltaTime;
        } else {
            if((Time.time - _lastAttackTime) >= (1f / _monsterAttackSpeed)) {
                _lastAttackTime = Time.time;
                _OnMonsterArrived?.Invoke();
            }
        }
    }

    private void MonsterRotation() { // add rules
        if(_monsterState != MonsterState.Moving) return;
        this.transform.rotation = GetRotationToTarget();
    }

    private Quaternion GetRotationToTarget() {
        Vector3 direction = _targetNexus.transform.position - this.transform.position;
        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
        return Quaternion.Euler(0, 0, angle);
    }

    private void HandleMonsterAttack() {
        _monsterState = MonsterState.Attack;
        float radius = GetComponent<BoxCollider2D>().size.x / 2f + 0.1f;
        Vector3 spawnPosition = this.transform.position + (this.transform.right * radius);
        if(_projectile != null) {
            GameObject projectileInstance = Instantiate(_projectile, spawnPosition, GetRotationToTarget());
            ProjectileBase projectileBase = projectileInstance.GetComponent<ProjectileBase>();
            projectileBase?.SetValue(_monsterAttackPoint, _monsterMoveSpeed * 2);
        }
        Invoke(nameof(ResetState), (1f / _monsterAttackSpeed));
    }

    private void ResetState() {
        _monsterState = MonsterState.Moving;
    }
//-----------------------------------------------------------------------------------------------------------

    public void AddDebuff(Debuff debuff) {

    }

    public void RemoveDebuff(Debuff debuff) {
        
    }
    public void SetTargetNexus(GameObject instance) {
        _targetNexus = instance;
    }

    public float GetMonsterAttackPoint() {
        return _monsterAttackPoint;
    }

}
// invoke는 통보용, 로직은 클래스 내에서 이어지도록, 느슨한 결합
// 공격 사거리에 닿은 뒤 타깃이 이동하면 함수 호출이 프레임 단위로 변경될 수 있어 콜백함수로 처리
// 성능 최적화 필요시 event -> delegate 수정 고려