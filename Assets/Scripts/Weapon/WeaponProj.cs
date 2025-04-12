using UnityEngine;

public abstract class WeaponProj : MonoBehaviour, IBattle
{
    public Ability ability { get; protected set; }

    public abstract void LevelUp();

    protected abstract void Initialize();

    protected abstract void SkillAction();

    private void Awake() => Initialize();

    private void Update() => SkillAction();

    public float GetAP() => ability.AP;
}
