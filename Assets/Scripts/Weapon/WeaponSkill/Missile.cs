using GameEnums;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using UnityEngine;

public class Missile : MonoBehaviour
{
    private GameObject _target;
    private GameObject[] _monsters;
    private BattleData _battleData;
    private Vector3 _lastDirection = Vector3.zero;
    private float _lastRotationZ = 0f; // 마지막 회전 값


    private void Start() {
        _monsters = GameObject.FindGameObjectsWithTag("Monster");
        _target = FindNearsetMonster();
        _battleData = GetComponent<BattleData>();
        Destroy(gameObject, 3f);
    }

    private void Update() {
        SearchTarget();
    }

    private void OnCollisionEnter2D(Collision2D collision) {
        if(collision.gameObject.CompareTag("Monster")) {
            collision.gameObject.GetComponent<MonsterBase>().MonsterHit(collision.gameObject);
            Debug.Log("missile hit");
            Destroy(gameObject);
        }
    }

    private GameObject FindNearsetMonster() {
        if(_monsters == null || _monsters.Length == 0)
            return null;
        GameObject nearset = null;
        float minDistSq = float.MaxValue;

        foreach(GameObject monster in _monsters) {
            if(monster == null) continue;
            float distSq = (monster.transform.position - this.transform.position).sqrMagnitude;
            if(distSq < minDistSq) {
                minDistSq = distSq;
                nearset = monster;
            }
        }
        return nearset;
    }

    private void SearchTarget() { // 방향 추가
        if(_target == null) {
            _target = FindNearsetMonster();

            if(_target == null) // 🔥 새로운 목표도 없으면 기존 방향 유지
            {
                transform.position += _lastDirection * _battleData._moveSpeed * Time.deltaTime;
                transform.rotation = Quaternion.Euler(0, 0, _lastRotationZ); // 🔥 마지막 회전값 유지
                return;
            }
        }

        // 🔥 목표가 있을 경우 방향 계산 및 저장
        Vector3 direction = (_target.transform.position - transform.position).normalized;
        _lastDirection = direction; // 🌟 마지막 이동 방향 저장
        _lastRotationZ = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg; // 🌟 2D에서 회전값(Z축) 저장

        float resultSpeed = _battleData._moveSpeed;
        transform.position += direction * resultSpeed * Time.deltaTime;

        // 🔥 2D에서 Z축만 회전하도록 설정
        transform.rotation = Quaternion.Euler(0, 0, _lastRotationZ);
        /*        if(_target == null) {
                    FindNearsetMonster();
                    return;
                }

                Vector3 direction = (_target.transform.position - this.transform.position).normalized;
                float resultSpeed = _battleData._moveSpeed;
                this.transform.position += direction * resultSpeed * Time.deltaTime;*/
    }
}