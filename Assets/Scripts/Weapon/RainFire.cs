using System.Collections;
using UnityEngine;

public class RainFire : WeaponProj {

    [SerializeField] 
    private GameObject _missilePref;

    private int _missileNum = 5;

    private float _lastLaunch = 0f;

    public override void LevelUp() {
        if(ability.Lv == 5) return;
        ability.SetLv(ability.Lv + 1);
        ability.SetAP(GM.I.SkillData[("RainFire", ability.Lv)]);
    }

    protected override void Initialize() {
        ability = new Ability();
        ability.SetAP(0f);
        ability.SetLv(0);
    }

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
