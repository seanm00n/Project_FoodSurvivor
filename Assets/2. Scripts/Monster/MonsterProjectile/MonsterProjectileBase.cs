using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public abstract class MonsterProjectileBase : MonoBehaviour
{
    protected abstract bool _isMelee { get; set; }

    protected BattleData _battleData;
    private float _spawnTime;

    [SerializeField]
    protected float _lifeTime;
    

    protected virtual void Start() {
        _battleData = this.GetComponent<BattleData>();
        _battleData._lifeTime = this._lifeTime;
        // do some common
        Initialize();
        _spawnTime = Time.time;
    }
    
    protected virtual void Update() {
        ProjectileDestroy();
        ProjectileMovement();
    }
    protected abstract void Initialize();

    private void ProjectileDestroy() {
        if(Time.time - _spawnTime >= _battleData._lifeTime) {
            Destroy(this.gameObject);
        }
    }

    private void ProjectileMovement() {
        Vector3 direction = this.transform.right.normalized;
        this.transform.position += direction * _battleData._moveSpeed * (_isMelee? 0f:1f) * Time.deltaTime;
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("Nexus") ||
            collision.gameObject.CompareTag("Shield")) {
            Destroy(this.gameObject);
        }
    }

    public void SetValue(float attackPoint, float moveSpeed) {
        _battleData._attackPoint = attackPoint;
        _battleData._moveSpeed = moveSpeed;
    }

    public float GetProjectileAttackPoint() {
        return _battleData._attackPoint;
    }

}
// 소모성 오브젝트는 invoke를 하지 않는것이 좋음 -> 상대쪽에서 invoke
