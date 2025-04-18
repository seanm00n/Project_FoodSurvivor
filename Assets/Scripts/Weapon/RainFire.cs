using System.Collections;
using UnityEngine;

public class RainFire : WeaponProjBase {

    [SerializeField] 
    private GameObject _missilePref;

    private int _missileNum = 5;

    private float _lastLaunch = 0f;

    protected override void LevelUp() {
        base.LevelUp();
        ability.SetAP(GM.I.SkillData[("RainFire", ability.Lv)]);
    }

    protected override void Initialize() => base.Initialize();

    protected override void SkillAction() {
        if(ability.Lv == 0) return;

        if(Time.time - _lastLaunch > 1.5f) {
            _lastLaunch = Time.time;
            StartCoroutine(Fire());
        }
    }

    IEnumerator Fire() {
        for(int i = 0; i < _missileNum; ++i) {
            GameObject instMissie = Instantiate(_missilePref, transform.position, Quaternion.identity);
            instMissie.GetComponent<Missile>().SetAbility(ability);
            Destroy(instMissie, 5f);
            yield return new WaitForSeconds(0.3f);
        }
    }

}
