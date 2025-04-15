using UnityEngine;

public class MonsterProjBase : MonoBehaviour, IBattle
{
    public Ability ability { get; private set; }

    private float _spawnTime;

    private void Awake() {
        _spawnTime = Time.time;
    }
    
    private void Update() {
        Countdown();
        Movement();
    }

    private void Countdown() {
        if(Time.time - _spawnTime >= ability.lifeTime) {
            Destroy(gameObject);
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