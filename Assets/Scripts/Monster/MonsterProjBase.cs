using System.Collections;
using UnityEngine;

public abstract class MonsterProjBase : MonoBehaviour, IBattle
{
    public Ability ability { get; private set; }

    public string poolKey { get; private set; }
    
    protected float _spawnTime;

    protected CircleCollider2D _coll;

    private Coroutine _collCoroutine;

    private void OnEnable() {
        if(_coll == null) _coll = GetComponent<CircleCollider2D>();
        _coll.enabled = false;
        _collCoroutine = StartCoroutine(ColliderDelay(0.1f)); // 딜레이로 참조 문제 해결
        _spawnTime = Time.timeSinceLevelLoad;
    }

    private void OnDisable() {
        if(_collCoroutine != null) {
            StopCoroutine(_collCoroutine);
            _collCoroutine = null;
        }
    }

    private void Update() {
        Countdown();
        Movement();
    }

    private void Countdown() {
        if(Time.timeSinceLevelLoad - _spawnTime >= ability.lifeTime) {
            GM.I.monProjPool[poolKey].Release(gameObject);
        }
    }

    protected virtual void Movement() {
        Vector3 direction = transform.right.normalized;
        transform.position += direction * (ability.MS * 1.5f) * (ability.AR > 0 ? 1f : 0f) * Time.deltaTime;
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.CompareTag("Nexus")) {
            GM.I.monProjPool[poolKey].Release(gameObject);
        }
    }

    private IEnumerator ColliderDelay(float value) {
        yield return new WaitForSeconds(value);
        if(_coll != null) _coll.enabled = true;
    }

    public float GetAP() => ability.AP;

    public void SetAbility(Ability value) => ability = value;

    public void SetPoolKey(string value) => poolKey = value;

}