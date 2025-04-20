using System.Collections;
using UnityEngine;

public class RainFire : WeaponProjBase {

    [SerializeField] 
    private GameObject _missilePref;

    [SerializeField]
    private AudioClip _launchSound;

    private AudioSource _audioSource;

    private int _missileNum = 5;

    private float _missileDelay = 0.3f;

    private float _lastLaunch = 0f;

    private float _launchCool = 3f;

    protected override void LevelUp() {
        base.LevelUp();
        ability.SetAP(GM.I.SkillData[("RainFire", ability.Lv)]);
    }

    protected override void Initialize() {
        base.Initialize();
        ability.SetMS(5f);
        _audioSource = GetComponent<AudioSource>();
    }

    protected override void SkillAction() {
        if(ability.Lv == 0) return;

        if(Time.timeSinceLevelLoad - _lastLaunch > _launchCool) {
            _lastLaunch = Time.timeSinceLevelLoad;
            StartCoroutine(Fire());
        }
    }

    IEnumerator Fire() {
        for(int i = 0; i < _missileNum; ++i) {
            _audioSource.PlayOneShot(_launchSound);
            GameObject instMissie = Instantiate(_missilePref, transform.position, Quaternion.identity);
            instMissie.GetComponent<Missile>().SetAbility(ability);
            yield return new WaitForSeconds(_missileDelay);
        }
    }
}
