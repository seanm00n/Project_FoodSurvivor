using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using UnityEngine;

public abstract class NexusSkillBase : MonoBehaviour
{
    public abstract float _moveSpeed { get; protected set; }
    public abstract float _damage {  get; protected set; }
    public abstract float _size { get; protected set; }
    public abstract float _duration { get; protected set; }
    public abstract float _power { get; protected set; }

    public abstract void Initialize();
    protected abstract void SkillAction();

    protected virtual void Start() {
        Initialize();
    }

    protected virtual void Update() { 
        SkillAction();
    }
}
