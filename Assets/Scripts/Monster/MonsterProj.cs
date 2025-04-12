using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class MonsterProj : MonoBehaviour, IBattle
{
    public Ability ability { get; private set; } // set from monsterbase

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
        transform.position += direction * ability.MS * 2 * (ability.AR > 0 ? 0f:1f) * Time.deltaTime;
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("Nexus") ||
            collision.gameObject.CompareTag("Shield")) {
            Destroy(gameObject);
        }
    }

    public float GetAP() => ability.AP;

    public void SetAbility(Ability ability) {
        this.ability = ability;
    }
}