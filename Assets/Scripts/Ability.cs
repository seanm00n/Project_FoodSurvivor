using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ability {
    public float AP { get; private set; }
    public float AS { get; private set; } // attack per second
    public float AR { get; private set; } // melee = 0, ranged > 0
    public float HP { get; private set; }
    public float MS { get; private set; }
    public float hitDelay { get; private set; } // minion = 0, boss > 0
    public float duration { get; private set; }
    public float lifeTime { get; private set; }
    public float size { get; private set; }
    public int Lv { get; private set; }
    public float Exp { get; private set; }
    public float reqExp { get; private set; }

    public void SetAP(float value) => AP = value;
    public void SetAS(float value) => AS = value;
    public void SetAR(float value) => AR = value;
    public void SetHP(float value) => HP = value;
    public void SetMS(float value) => MS = value;
    public void SetHitDelay(float value) => hitDelay = value;
    public void SetDuration(float value) => duration = value;
    public void SetLifeTime(float value) => lifeTime = value;
    public void SetSize(float value) => size = value;
    public void SetLv(int value) => Lv = value;
    public void SetExp(float value) => Exp = value;
    public void SetReqEXP(float value) => reqExp = value;
}