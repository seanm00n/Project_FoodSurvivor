using UnityEngine;

public class SlowCircle : WeaponProjBase {

    SpriteRenderer _spriteRenderer;

    Transform _nexus;

    protected override void LevelUp() {
        base.LevelUp();
        ability.SetAP(GM.I.SkillData[("SlowCircle", ability.Lv)]);
        transform.localScale = new Vector3(
            0.1f + (ability.Lv * 0.05f),
            0.1f + (ability.Lv * 0.05f), 1f
        );
    }

    protected override void Initialize() {
        base.Initialize();
        _spriteRenderer = GetComponent<SpriteRenderer>();
        _nexus = GameObject.FindGameObjectWithTag("Nexus").transform;
    }

    protected override void SkillAction() {
        transform.position = _nexus.position; //transform.localPosition = Vector3.zero; // 밀리는 현상 해결 update에
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
