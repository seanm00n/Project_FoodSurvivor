using UnityEngine;

public class SlowCircle : WeaponProj {

    public override void LevelUp() {
        if(ability.Lv == 5) return;
        ability.SetLv(ability.Lv + 1);
        ability.SetAP(GM.I.SkillData[("SlowCircle", ability.Lv)]);
    }

    protected override void Initialize() {
        ability = new Ability();
        ability.SetAP(0f);
        ability.SetLv(0);
    }

    protected override void SkillAction() {
        transform.localPosition = Vector3.zero; // 밀리는 현상 해결 update에
        
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("Monster")) {
            collision.gameObject?.GetComponent<MonsterBase>().AddDebuff(Debuff.Slow);
        }
    }

    private void OnTriggerExit2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("Monster")) {
            collision.gameObject?.GetComponent<MonsterBase>().RemoveDebuff(Debuff.Slow);
        }
    }
}
