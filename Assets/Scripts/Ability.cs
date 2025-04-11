using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameEnums;

public class Ability {
    public float _AP { get; set; } = 0f;
    public float _AS { get; set; } = 1f;
    public float _AR { get; set; } = 1f; // melee = 0, ranged > 0
    public float _HP { get; set; } = 10f;
    public float _MS { get; set; } = 1f;
    public float _hitDelay { get; set; } = 1f; // minion = 0, boss > 0
    public float _duration { get; set; } = 1f;
    public float _lifeTime { get; set; } = 1f;
    public float _size { get; set; } = 1f;
    public int _Lv { get; set; } = 1;
    public float _exp { get; set; } = 0f;
    public float _reqEXP { get; set; } = 0f;
}