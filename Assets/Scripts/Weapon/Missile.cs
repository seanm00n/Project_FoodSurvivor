using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Missile : MonoBehaviour, IBattle
{
    public Ability ability { get; private set; }

    private GameObject _target = null;

    private Vector3 _direction;

    private float _angle;

    private void Start() {
        Destroy(gameObject, 4f);
        SearchTarget();
        InvokeRepeating(nameof(SearchTarget), 0.2f, 0.2f);
    }

    private void Update() {
        Movement();
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.CompareTag("Monster")) {
            Destroy(gameObject);
        }        
    }

    private void SearchTarget() {
        if(_target == null || !_target.activeInHierarchy) {
            _target = FindNearestMonster();
            if(_target == null) return; // 여전히 타겟이 없다면 방향 유지
        }

        // 방향 갱신
        _direction = (_target.transform.position - transform.position).normalized;
        _angle = Mathf.Atan2(_direction.y, _direction.x) * Mathf.Rad2Deg;
    }

    private void Movement() {
        Vector3 direction = _direction != Vector3.zero ? _direction : transform.right;
        transform.position += direction * ability.MS * Time.deltaTime;
        transform.rotation = Quaternion.Euler(0, 0, _angle);
    }

    private GameObject FindNearestMonster() {
        IEnumerable<GameObject> allMonsters = GM.I.GetBlueMobs().Concat(GM.I.GetGreenMobs()).Concat(GM.I.GetYellowMobs());

        GameObject nearest = null;
        float minDistSq = float.MaxValue;

        foreach(GameObject monster in allMonsters) {
            if(monster == null) continue;

            float distSq = (monster.transform.position - transform.position).sqrMagnitude;
            if(distSq < minDistSq) {
                minDistSq = distSq;
                nearest = monster;
            }
        }

        return nearest;
    }

    public void SetAbility(Ability ability) => this.ability = ability;

    public float GetAP() => ability.AP;
}