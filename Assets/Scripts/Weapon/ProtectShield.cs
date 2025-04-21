using System.Collections.Generic;

public class ProtectShield : WeaponProjBase {

    private List<Shield> _shields;

    protected override void LevelUp() {
        base.LevelUp();
        ability.SetAP(GM.I.SkillData[("ProtectShield", ability.Lv)]);
        SetShieldActive(ability.Lv - 1);
        _shields[ability.Lv - 1].SetAbility(ability);
    }

    protected override void Initialize() { 
        base.Initialize();
        _shields = new List<Shield>();
        _shields.AddRange(GetComponentsInChildren<Shield>(true));
        foreach (var shield in _shields) {
            shield.SetAbility(ability);
            shield.gameObject.SetActive(false);
        }
    }

    protected override void SkillAction() {}

    private void SetShieldActive(int index) {
        for(int i = 0; i < _shields.Count; ++i) {
            if(i == index) {
                _shields[i].gameObject.SetActive(true);
            } else {
                _shields[i].gameObject.SetActive(false);
            }
        }
    }
}
