using UnityEngine;

public abstract class WeaponProjBase : MonoBehaviour, IBattle
{
    public Ability ability { get; protected set; }

    public float GetAP() => ability.AP;

    public void OnLevelUp() => LevelUp();

    protected virtual void LevelUp() {
        gameObject.SetActive(true);
        if(ability.Lv == 5) return;
    }

    protected virtual void Initialize() {
        gameObject.SetActive(false);
        ability = new Ability();
        ability.SetAP(0f);
        ability.SetLv(0);
    }

    protected abstract void SkillAction();

    private void Awake() => Initialize();

    private void Update() => SkillAction();
}
