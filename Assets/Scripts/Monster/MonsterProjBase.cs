using UnityEngine;
using UnityEngine.Pool;

public abstract class MonsterProjBase : MonoBehaviour, IBattle
{
    public Ability ability { get; private set; }

    protected ObjectPool<GameObject> _bossProjPool;
    
    protected float _spawnTime;

    private void Awake() {
        _spawnTime = Time.timeSinceLevelLoad;
        _bossProjPool = GM.I.bossProjPool;
    }

    private void Update() {
        Countdown();
        Movement();
    }

    protected virtual void Countdown() {
        if(Time.timeSinceLevelLoad - _spawnTime >= ability.lifeTime) {
            Destroy(gameObject); // ¼öÁ¤
        }
    }

    private void Movement() {
        Vector3 direction = transform.right.normalized;
        transform.position += direction * (ability.MS * 2) * (ability.AR > 0 ? 1f : 0f) * Time.deltaTime;
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.CompareTag("Nexus")) {
            Destroy(gameObject);
        }
    }

    public float GetAP() => ability.AP;

    public void SetAbility(Ability ability) => this.ability = ability;

}