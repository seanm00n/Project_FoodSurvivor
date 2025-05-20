using UnityEngine;

public abstract class WeaponProjBase : MonoBehaviour, IBattle
{
    public Ability ability { get; protected set; }

    public float GetAP() => ability.AP;

    public void OnLevelUp() => LevelUp();

    protected virtual void LevelUp() {
        gameObject.SetActive(true);
        if(ability.Lv == 5) return;
        ability.SetLv(ability.Lv + 5);
    }

    protected virtual void Initialize() {
        ability = new Ability();
        ability.SetAP(0f);
        ability.SetLv(0);
        gameObject.SetActive(false);
    }

    protected abstract void SkillAction();

    private void Start() => Initialize(); // Awake() 같은 초기화 타이밍에서 virtual 함수를 호출하면 위험

    private void Update() => SkillAction();
}
