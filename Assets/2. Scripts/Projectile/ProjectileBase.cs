using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public abstract class ProjectileBase : MonoBehaviour
{
    protected abstract float _lifeTime { get; set; }
    protected abstract float _meleeConstant { get; set; } // melee = 0f, ranged = 1f
    protected abstract string _targetName { get; set; }
    private float _damage;
    private float _moveSpeed;
    private float _spawnTime;

    protected virtual void Start() {
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
        if(Time.time - _spawnTime >= _lifeTime) {
            Destroy(this.gameObject);
        }
    }

    private void ProjectileMovement() {
        Vector3 direction = this.transform.right.normalized;
        this.transform.position += direction * _moveSpeed * _meleeConstant *Time.deltaTime;
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.gameObject.CompareTag(_targetName)) {
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
