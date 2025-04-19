using UnityEngine;

public class WeaponBody : WeaponProjBase {

    private Weapon _weapon;
    protected override void LevelUp() {}

    protected override void Initialize() {
        _weapon = GetComponentInParent<Weapon>();
        ability = _weapon.ability;
    }

    protected override void SkillAction() {}

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.CompareTag("EXP")) {
            _weapon.HandleExpGet(collision.GetComponent<EXP>().exp);
            Destroy(collision.gameObject);
        }
    }
}
