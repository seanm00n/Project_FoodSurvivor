using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices.WindowsRuntime;
using UnityEngine;

public class Weapon : MonoBehaviour
{
    public static Weapon I { get; private set; }

    public event Action<Weapon> OnWeaponLevelUp;

    public Ability ability { get; private set; }

    public Dictionary<string, WeaponProjBase> instSkills { get; private set; }

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
    private GameObject _vitalSurgePref;

    [SerializeField]
    private GameObject _overdrivePref;

    #endregion

    #region Member ref

    private Camera _mainCamera;

    private Nexus _nexus;

    #endregion

    #region Member variable

    private bool _isSelected = false;

    private bool _isSwitching = false;

    private float _lastSwitchTime = 0f;

    private int _weaponMaxLv = 30;

    private Vector3 _offset; // 클릭 시 오브젝트 튐 방지

    #endregion


    private void Awake() {
        if(I != null && I != this) {
            Destroy(gameObject);
            return;
        }
        I = this;

        ability = new Ability();
        ability.SetLv(1);
        ability.SetAP(GM.I.LevelData[ability.Lv].AP);
        ability.SetAS(1f);
        ability.SetExp(0f);
        ability.SetReqEXP(GM.I.LevelData[ability.Lv].reqEXP);

        SetCamera();
        instSkills = new Dictionary<string, WeaponProjBase>();

    }

    private void Start() {       
        _nexus = GameObject.FindGameObjectWithTag("Nexus").GetComponent<Nexus>(); // 초기화 시점 문제로 사용

        WeaponProjBase instRainFire = Instantiate(_rainFirePref, _nexus.transform).GetComponent<WeaponProjBase>();
        instSkills.Add("RainFire", instRainFire);

        WeaponProjBase instSlowCircle = Instantiate(_slowCirclePref, _nexus.transform).GetComponent<WeaponProjBase>();
        instSkills.Add("SlowCircle", instSlowCircle);

        WeaponProjBase instProtectShield = Instantiate(_protectShieldPref, _nexus.transform).GetComponent<WeaponProjBase>();
        instSkills.Add("ProtectShield", instProtectShield);

        WeaponProjBase instSwitching = Instantiate(_switchingPref, transform).GetComponent<WeaponProjBase>();
        instSkills.Add("Switching", instSwitching);

        WeaponProjBase instVitalSurge = Instantiate(_vitalSurgePref, transform).GetComponent<WeaponProjBase>();
        instSkills.Add("VitalSurge", instVitalSurge);

        WeaponProjBase instOverdrive = Instantiate(_overdrivePref, transform).GetComponent<WeaponProjBase>();
        instSkills.Add("Overdrive", instOverdrive);
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
        if(ability.Lv < _weaponMaxLv && value + ability.Exp >= ability.reqExp) {
            ability.SetExp((value + ability.Exp) - ability.reqExp);
            OnWeaponLevelUp.Invoke(this); // show level up UI
            LevelUp();
        } else {
            ability.SetExp(ability.Exp + value);
        }
    }

    private void LevelUp() {
        ability.SetLv(ability.Lv + 1);
        float baseAP = GM.I.LevelData[ability.Lv].AP;
        float passiveAP = instSkills["Overdrive"].GetAP();
        ability.SetAP(baseAP + passiveAP);
        ability.SetReqEXP(GM.I.LevelData[ability.Lv].reqEXP);
        if(ability.Lv == 30) ability.SetExp(0f);
    }

    public void SkillLevelUp(string skill) { // LevelUp -> UI select -> SkillLevelUP(select)
        instSkills[skill].OnLevelUp();
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

    private void OnMouseUp() {
        _isSelected = false;
    }

    #region Switching

    public void OnSwitching() { // button click event
        if(Time.time - _lastSwitchTime >= instSkills["Switching"].GetAP()) {
            _lastSwitchTime = Time.time;
            _isSwitching = true;

            Nexus nexus = Nexus.I;
            Vector3 pos = transform.position;
            transform.position = nexus.transform.position;
            nexus.transform.position = pos;

            Vector2 newCameraPos = new Vector2(transform.position.x, transform.position.y);
            Vector2 mousePos = GetMouseWorldPosition();
            Vector3 result = mousePos - newCameraPos;

            Vector3 targetPos = _mainCamera.transform.position - new Vector3(result.x, result.y, 0);
            StartCoroutine(SmoothCameraTransition(targetPos, 0.2f));
            StartCoroutine(ResumeWeaponMovement());
        }
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

    private IEnumerator ResumeWeaponMovement() { // 스위칭 직후 조작 방지
        yield return new WaitForSeconds(0.4f); 
        _isSwitching = false;
    }

    public float GetSwitchLeft() { // UI 확인용
        return instSkills["Switching"].GetAP() - (Time.time - _lastSwitchTime);
    }

    #endregion

}
