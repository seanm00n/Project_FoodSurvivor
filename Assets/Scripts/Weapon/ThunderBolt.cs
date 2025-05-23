using System.Collections;
using System.Net.Security;
using UnityEngine;
using UnityEngine.UI;

public class ThunderBolt : WeaponProjBase, IBattle {

    private float _elapsed = 0f;
    private float _attackDuration = 4f;

    private bool _isMouseDown = false;

    [SerializeField]
    private GameObject _thunderPref;

    protected override void Initialize() {
        base.Initialize();
        Weapon.I.OnTouchDown += HandleOnTouchDown;
        Weapon.I.OnTouchUp += HandleOnTouchUp;
    }

    protected override void LevelUp() {
        base.LevelUp();
        ability.SetAP(GM.I.SkillData[("ThunderBolt", ability.Lv)]);
    }

    protected override void SkillAction() {
        if(ability.Lv > 0) {
            if(_isMouseDown) {
                _elapsed += Time.deltaTime;
            }

            if(_elapsed >= _attackDuration) {
                _elapsed = 0f;
                StartCoroutine(SpawnThunder(0.2f));
            }
        }
    }

    private IEnumerator SpawnThunder(float value) {
        Vector3 pivot = Weapon.I.transform.position;
        float rangeOffset = 2f;
        for(int i = 0; i < ability.Lv; ++i) {
            float randX = Random.Range(pivot.x - rangeOffset, pivot.x + rangeOffset);
            float randY = Random.Range(pivot.y - rangeOffset, pivot.y + rangeOffset); ;
            Vector3 instPos = new Vector3(randX, randY, transform.position.z);
            GameObject instThunder = Instantiate(_thunderPref, instPos, Quaternion.identity);
            instThunder.GetComponent<Thunder>().SetAbility(ability);
            yield return new WaitForSeconds(value);
        }

    }

    public void HandleOnTouchDown() {
        if(_isMouseDown) return;
        _elapsed = 0f;
        _isMouseDown = true;
    }

    public void HandleOnTouchUp() {
        if(!_isMouseDown) return;
        _elapsed = 0f;
        _isMouseDown = false;
    }
}
