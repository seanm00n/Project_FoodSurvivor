using UnityEngine;

public abstract class MonsterProjBase : MonoBehaviour, IBattle
{
    public Ability ability { get; private set; }

    public string poolKey { get; private set; }
    
    protected float _spawnTime;

    private void OnEnable() {
        _spawnTime = Time.timeSinceLevelLoad;
    }

    private void Update() {
        Countdown();
        Movement();
    }

    protected virtual void Countdown() {
        if(Time.timeSinceLevelLoad - _spawnTime >= ability.lifeTime) {
            GM.I.monProjPool[poolKey].Release(gameObject);
        }
    }

    private void Movement() {
        Vector3 direction = transform.right.normalized;
        transform.position += direction * (ability.MS * 2) * (ability.AR > 0 ? 1f : 0f) * Time.deltaTime;
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.CompareTag("Nexus")) {
            GM.I.monProjPool[poolKey].Release(gameObject);
        }
    }

    public float GetAP() => ability.AP;

    public void SetAbility(Ability value) => ability = value;

    public void SetPoolKey(string value) => poolKey = value;

}