using UnityEngine;

public class ProtectShield : WeaponProj {

    public override void LevelUp() {
        if(ability.Lv == 5) return;
        ability.SetLv(ability.Lv + 1);
        ability.SetAP(GM.I.SkillData[("ProtectShield", ability.Lv)]);
    }

    protected override void Initialize() {
        ability = new Ability();
        ability.SetAP(0f);
        ability.SetLv(0);
    }

    protected override void SkillAction() {
        transform.Rotate(Vector3.forward * Time.deltaTime);
        transform.localPosition = Vector3.zero; // 밀리는 현상 해결
    }
}
