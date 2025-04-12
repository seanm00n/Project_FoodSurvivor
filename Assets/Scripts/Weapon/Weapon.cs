using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Unity.VisualScripting;
using UnityEngine;
using System.IO;
using Unity.VisualScripting.FullSerializer;
using UnityEditor.Playables;

public class Weapon : MonoBehaviour
{
    public static Weapon I { get; private set; }

    public event Action<Weapon> OnWeaponLevelUp;

    public Ability ability { get; private set; }

    #region SerializeField

    [SerializeField]
    private GameObject _rainFirePref;

    [SerializeField]
    private GameObject _slowCirclePref;

    [SerializeField]
    private GameObject _protectShieldPref;

    [SerializeField]
    private GameObject _switchingPref;

    [SerializeField]
    private GameObject _HpUpPref;

    [SerializeField]
    private GameObject _apUpPref;

    #endregion

    #region Member ref

    private Camera _mainCamera;

    private Nexus _nexus;

    #endregion

    #region Member variable

    private Dictionary<string, GameObject> _instSkill;

    private bool _isSelected = false;

    private bool _isSwitching = false;

    private Vector3 _offset; // 클릭 시 오브젝트 튐 방지

    #endregion


    private void Awake() {
        if(I != null && I != this) {
            Destroy(gameObject);
            return;
        }
        I = this;

        ability = new Ability();
        ability.SetAP(25f);
        ability.SetAS(1f);
        ability.SetLv(1);
        ability.SetExp(0f);
        ability.SetReqEXP(GM.I.LevelData[ability.Lv].reqEXP);

        SetCamera();
        _instSkill = new Dictionary<string, GameObject>();

        _nexus = Nexus.I;
    }

    private void Start() { // 채우기
        GameObject instRainFire = Instantiate(_rainFirePref, _nexus.transform);
        _instSkill.Add("RainFire", instRainFire);

        GameObject instSlowCircle = Instantiate(_slowCirclePref, _nexus.transform);
        _instSkill.Add("SlowCircle", instSlowCircle);

        GameObject instProtectShield = Instantiate(_protectShieldPref, _nexus.transform);
        _instSkill.Add("ProtectShield", instProtectShield);

        GameObject instSwitching = Instantiate(_switchingPref, transform);
        _instSkill.Add("Switching", instSwitching);

        GameObject instHpUp = Instantiate(_HpUpPref, transform);
        _instSkill.Add("HpUp", instHpUp);

        GameObject instApUp = Instantiate(_apUpPref, transform);
        _instSkill.Add("ApUp", instApUp);
    }

    private void Update() {
        WeaponMovement();
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        if(collision.gameObject.CompareTag("EXP")) {
            HandleExpGet(collision.GetComponent<EXP>().exp);
            Destroy(collision.gameObject);
        }
    }

    private void HandleExpGet(float value) {
        if(value + ability.Exp >= ability.reqExp) {
            ability.SetExp((value + ability.Exp) - ability.reqExp);
            OnWeaponLevelUp.Invoke(this); // show level up UI
            LevelUp();
        } else {
            ability.SetExp(ability.Exp + value);
        }
    }

    private void LevelUp() {
        ability.SetLv(ability.Lv + 1);
        ability.SetAP(GM.I.LevelData[ability.Lv].AP) ;
        ability.SetReqEXP(GM.I.LevelData[ability.Lv].reqEXP);
    }

    public void SkillLevelUp(string skill) {
        _instSkill[skill].GetComponent<WeaponProj>().LevelUp();
    }

    private void SetCamera() {
        _mainCamera = Camera.main;
        if(_mainCamera == null) {
            Debug.Log("no main camear detected");
        }
    }

    private void WeaponMovement() {
        if(_isSelected && !_isSwitching) {
            transform.position = GetMouseWorldPosition() + _offset;
        }
    }

    private Vector3 GetMouseWorldPosition() { // ?
        Vector3 mouseScreenPosition = Input.mousePosition;
        mouseScreenPosition.z = 0;
        return _mainCamera.ScreenToWorldPoint(mouseScreenPosition);
    }

    private void OnMouseDown() {
        Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);

        // 특정 레이어만 감지
        int layerMask = 1 << LayerMask.NameToLayer("Player");

        // 해당 위치에서 Player 레이어의 오브젝트 감지
        Collider2D hitCollider = Physics2D.OverlapPoint(mousePos, layerMask);

        if(hitCollider != null && hitCollider.gameObject == gameObject) {
            _isSelected = true;
            _offset = transform.position - GetMouseWorldPosition();
        }
    }

    private IEnumerator ResumeWeaponMovement() {
        yield return new WaitForSeconds(0.4f); // 짧은 대기 후 이동 가능
        _isSwitching = false;
    }

    private IEnumerator SmoothCameraTransition(Vector3 targetPos, float duration) {
        Vector3 startPos = _mainCamera.transform.position;
        float elapsedTime = 0f;

        while(elapsedTime < duration) {
            elapsedTime += Time.deltaTime;
            float t = elapsedTime / duration;

            // Lerp를 사용하되, z 값은 기존 값을 유지
            _mainCamera.transform.position = new Vector3(
                Mathf.Lerp(startPos.x, targetPos.x, t),
                Mathf.Lerp(startPos.y, targetPos.y, t),
                startPos.z // z 값은 변하지 않음
            );

            yield return null; // 한 프레임 대기
        }
    }

    private void OnMouseUp() {
        _isSelected = false;
    }

    #region Skill

    protected void Switching() {
        if(!_switchingActive) return;

        _isSwitching = true;
        GameObject nexus = GameObject.FindGameObjectWithTag("Nexus");
        Vector3 pos = transform.position;
        transform.position = nexus.transform.position;
        nexus.transform.position = pos;

        Vector2 newCameraPos = new Vector2(transform.position.x, transform.position.y);
        Vector2 mousePos = GetMouseWorldPosition();
        Vector3 result = mousePos - newCameraPos;

        Vector3 targetPos = _mainCamera.transform.position - new Vector3(result.x, result.y, 0);
        StartCoroutine(SmoothCameraTransition(targetPos, 0.2f));
        //_mainCamera.transform.position -= new Vector3(result.x, result.y, _mainCamera.transform.position.z);
        StartCoroutine(ResumeWeaponMovement());
        _combo -= 100;
    }

    protected void ProtectShield() { // protect shield
        if(_instProtectShield == null) {
            Debug.Log("protectshield");
            _instProtectShield = Instantiate(_protectShieldPref, this.transform);
            _instProtectShield.GetComponent<NexusSkillBase>().SetValue(ability.AP, ability.MS);
            _skillLastUsed[NexusSkills.ProtectShield] = Time.time;
            float skillCooldown = 9999f;
            if(Time.time - _skillLastUsed[NexusSkills.ProtectShield] >= skillCooldown) {
                _skillLastUsed[NexusSkills.ProtectShield] = Time.time;
            }
        }
    }

    protected void SlowCircle() {
        if(_instSlowCircle == null) {
            Debug.Log("slowcircle");
            _instSlowCircle = Instantiate(_slowCirclePref, this.transform);
            _instSlowCircle.GetComponent<NexusSkillBase>().SetValue(ability.AP, ability.MS);
            _skillLastUsed.TryAdd(NexusSkills.SlowCircle, Time.time);
            float skillCooldown = 9999f;
            if(Time.time - _skillLastUsed[NexusSkills.SlowCircle] >= skillCooldown) {
                _skillLastUsed[NexusSkills.SlowCircle] = Time.time;
            }
        }
    }
    #endregion

}
