using UnityEngine;

public class SlowCircle : WeaponProjBase {
    SpriteRenderer _spriteRenderer;
    protected override void LevelUp() {
        base.LevelUp();
        ability.SetAP(GM.I.SkillData[("SlowCircle", ability.Lv)]);
        transform.localScale = new Vector3(
            0.4f + (ability.Lv * 0.15f),
            0.4f + (ability.Lv * 0.15f), 1f
        );
    }

    protected override void Initialize() {
        base.Initialize();
        _spriteRenderer = GetComponent<SpriteRenderer>();
    }

    protected override void SkillAction() {
        transform.localPosition = Vector3.zero; // 밀리는 현상 해결 update에
        Color currentColor = _spriteRenderer.color;
        currentColor.a = Mathf.PingPong(Time.timeSinceLevelLoad, 0.8f);
        _spriteRenderer.color = currentColor;
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.CompareTag("Monster") && !collision.name.Contains("Boss")) {
            collision.gameObject?.GetComponent<MonsterBase>().AddDebuff(Debuff.Slow);
        }
    }

    private void OnTriggerExit2D(Collider2D collision) {
        if(collision.CompareTag("Monster") && !collision.name.Contains("Boss")) {
            collision.gameObject?.GetComponent<MonsterBase>().RemoveDebuff(Debuff.Slow);
        }
    }
}
