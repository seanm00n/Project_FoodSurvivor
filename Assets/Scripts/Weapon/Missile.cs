using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Missile : MonoBehaviour, IBattle
{
    public Ability ability { get; private set; }

    private GameObject _target = null;

    private Vector3 _lastDirection = Vector3.zero; //

    private float _lastRotationZ = 0f; //

    private Vector3 _direction;

    private float _rotationZ;

    private void Start() {
        Destroy(gameObject, 4f);
        InvokeRepeating(nameof(SearchTarget), 0f, 0.2f);
    }

    private void Update() {
        Movement();
    }

    private void OnCollisionEnter2D(Collision2D collision) {
        if(collision.gameObject.CompareTag("Monster")) {
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
        _rotationZ = Mathf.Atan2(_direction.y, _direction.x) * Mathf.Rad2Deg;
    }

    private void Movement() {
        transform.position += _direction * ability.MS * Time.deltaTime;
        transform.rotation = Quaternion.Euler(0, 0, _rotationZ);
    }

    private void SearchTargetOld() {
        if(_target == null) {
            _target = FindNearestMonster();

            if(_target == null) { // 새로운 목표도 없으면 기존 방향 유지
                transform.position += _lastDirection * ability.MS * Time.deltaTime;
                transform.rotation = Quaternion.Euler(0, 0, _lastRotationZ); // 마지막 회전값 유지
                return;
            }
        }

        // 목표가 있을 경우 방향 계산 및 저장
        Vector3 direction = (_target.transform.position - transform.position).normalized;
        _lastDirection = direction; // 마지막 이동 방향 저장
        _lastRotationZ = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg; // 2D에서 회전값(Z축) 저장

        float resultSpeed = ability.MS;
        transform.position += direction * resultSpeed * Time.deltaTime;

        // Z축만 회전하도록 설정
        transform.rotation = Quaternion.Euler(0, 0, _lastRotationZ);
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