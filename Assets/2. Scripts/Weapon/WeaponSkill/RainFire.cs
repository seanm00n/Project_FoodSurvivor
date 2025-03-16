using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEngine;

public class RainFire : WeaponSkillBase {
    [SerializeField] GameObject _missilePref;
    private bool _fireEnd = false;

    protected override void Start() {
        base.Start();
        StartCoroutine(Fire());
    }

    protected override void Update() { 
        base.Update();
        Destroy(this.gameObject, 5f);
    }

    protected override void SkillAction() {
        //
    }

    public override void Initialize() {
        //
    }

    IEnumerator Fire() {
        for(int i = 0; i < _battleData._attackSpeed; ++i) {
            GameObject instantiatedMissie = Instantiate(_missilePref, this.transform.position, Quaternion.identity);
            instantiatedMissie.gameObject.SetActive(true);
            yield return new WaitForSeconds(0.3f);
        }
        _fireEnd = true;
    }
}
