using UnityEngine;

public class ProtectShield : WeaponProjBase {

    private float _rotateSpeed = 120f;

    protected override void LevelUp() {
        base.LevelUp();
        ability.SetLv(ability.Lv + 1);
        ability.SetAP(GM.I.SkillData[("ProtectShield", ability.Lv)]);
    }

    protected override void Initialize() => base.Initialize();

    protected override void SkillAction() {
        transform.Rotate(Vector3.forward * _rotateSpeed * Time.deltaTime);
        transform.localPosition = Vector3.zero; // 밀리는 현상 해결
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.CompareTag("MonsterProj")) {
            Destroy(collision.gameObject);
        }
    }
}
