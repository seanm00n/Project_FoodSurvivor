using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameEnums;

public class BattleData : MonoBehaviour {
    public float _attackPoint { get; set; } = 0f;
    public float _attackSpeed { get; set; } = 1f;
    public float _attackRange { get; set; } = 1f; // melee = 0, ranged > 0
    public float _healthPoint { get; set; } = 10f;
    public float _moveSpeed { get; set; } = 1f;
    public float _hitDelay { get; set; } = 1f; // minion = 0, boss > 0
    public float _duration { get; set; } = 1f;
    public float _lifeTime { get; set; } = 1f;
    public float _size { get; set; } = 1f;
}