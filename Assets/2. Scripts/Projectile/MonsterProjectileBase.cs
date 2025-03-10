using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public abstract class MonsterProjectileBase : MonoBehaviour
{
    protected abstract bool _isMelee { get; set; }

    protected BattleData _battleData;
    private float _damage;
    private float _moveSpeed;
    private float _spawnTime;
    

    protected virtual void Start() {
        _battleData = this.GetComponent<BattleData>();
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
        this.transform.position += direction * _moveSpeed * (_isMelee? 0f:1f) * Time.deltaTime;
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("Nexus")) {
            Destroy(this.gameObject);
        }
    }

    public void SetValue(float damage, float movespeed) {
        _damage = damage;
        _moveSpeed = movespeed;
    }

    public float GetProjectileAttackPoint() {
        return _damage;
    }
}
// 최적화를 위해 rigidbody simulated false + raycast 사용 가능
