using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public abstract class MonsterProjectileBase : MonoBehaviour
{
    protected abstract bool _isMelee { get; set; }

    protected Ability _ability;
    private float _spawnTime;    

    protected virtual void Start() {
        Initialize();
        _spawnTime = Time.time;
    }
    
    protected virtual void Update() {
        ProjectileDestroy();
        ProjectileMovement();
    }
    protected abstract void Initialize();

    private void ProjectileDestroy() {
        if(Time.time - _spawnTime >= _ability._lifeTime) {
            Destroy(this.gameObject);
        }
    }

    private void ProjectileMovement() {
        Vector3 direction = this.transform.right.normalized;
        this.transform.position += direction * _ability._MS * (_isMelee? 0f:1f) * Time.deltaTime;
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("Nexus") ||
            collision.gameObject.CompareTag("Shield")) {
            Destroy(this.gameObject);
        }
    }

    public void SetValue(float attackPoint, float moveSpeed) {
        _ability._AP = attackPoint;
        _ability._MS = moveSpeed;
    }

    public float GetProjectileAttackPoint() {
        return _ability._AP;
    }

}
// 소모성 오브젝트는 invoke를 하지 않는것이 좋음 -> 상대쪽에서 invoke
