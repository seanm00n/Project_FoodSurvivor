using UnityEngine;

public class SlowCircle : WeaponProjBase {

    protected override void LevelUp() {
        base.LevelUp();
        ability.SetLv(ability.Lv + 1);
        ability.SetAP(GM.I.SkillData[("SlowCircle", ability.Lv)]);
    }

    protected override void Initialize() => base.Initialize();

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
