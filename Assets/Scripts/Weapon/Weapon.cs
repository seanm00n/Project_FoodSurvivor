using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Weapon : MonoBehaviour
{
    public static Weapon I { get; private set; }

    public event Action<Weapon> OnWeaponLevelUp;

    public Ability ability { get; private set; }

    public Dictionary<Skill, WeaponProjBase> instSkills { get; private set; }

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

    [SerializeField]
    private AudioClip _switchingSound;

    #endregion

    #region Member ref

    private Camera _mainCamera;

    private Nexus _nexus;

    private AudioSource _audioSource;

    #endregion

    #region Member variable

    private bool _isSelected = false;

    private float _lastSwitchTime = -60f;

    private int _weaponMaxLv = 30;


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
        instSkills = new Dictionary<Skill, WeaponProjBase>();
    }

    private void Start() {       
        _nexus = GameObject.FindGameObjectWithTag("Nexus").GetComponent<Nexus>(); // 초기화 시점 문제로 사용
        _audioSource = GetComponent<AudioSource>();

        WeaponProjBase instRainFire = Instantiate(_rainFirePref, _nexus.transform).GetComponent<WeaponProjBase>();
        instSkills.Add(Skill.RainFire, instRainFire);

        WeaponProjBase instSlowCircle = Instantiate(_slowCirclePref, _nexus.transform).GetComponent<WeaponProjBase>();
        instSkills.Add(Skill.SlowCircle, instSlowCircle);

        WeaponProjBase instProtectShield = Instantiate(_protectShieldPref, _nexus.transform).GetComponent<WeaponProjBase>();
        instSkills.Add(Skill.ProtectShield, instProtectShield);

        WeaponProjBase instSwitching = Instantiate(_switchingPref, transform).GetComponent<WeaponProjBase>();
        instSkills.Add(Skill.Switching, instSwitching);

        WeaponProjBase instVitalSurge = Instantiate(_vitalSurgePref, transform).GetComponent<WeaponProjBase>();
        instSkills.Add(Skill.VitalSurge, instVitalSurge);

        WeaponProjBase instOverdrive = Instantiate(_overdrivePref, transform).GetComponent<WeaponProjBase>();
        instSkills.Add(Skill.Overdrive, instOverdrive);

        StartCoroutine(SwitchStart()); // level 1 start
    }

    private void Update() {
    #if UNITY_EDITOR
        HandleMouseInput();
    #else
        HandleTouchInput();
    #endif
    }

    private IEnumerator SwitchStart() {
        yield return null;
        instSkills[Skill.Switching].OnLevelUp();
    }

    public void HandleExpGet(float value) {
        if(ability.Lv <= _weaponMaxLv && value + ability.Exp >= ability.reqExp) {
            ability.SetExp((value + ability.Exp) - ability.reqExp);
            LevelUp();
        } else {
            ability.SetExp(ability.Exp + value);
        }
    }

    private void LevelUp() {
        ability.SetLv(ability.Lv + 1);
        if(ability.Lv < _weaponMaxLv) OnWeaponLevelUp.Invoke(this); // show level up UI

        float baseAP = GM.I.LevelData[ability.Lv].AP;
        float passiveAP = instSkills[Skill.Overdrive].GetAP();
        ability.SetAP(baseAP + passiveAP);
        ability.SetReqEXP(GM.I.LevelData[ability.Lv].reqEXP);

        if(ability.Lv == 30) ability.SetExp(0f);
    }

    public void SkillLevelUp(Skill skill) { // LevelUp -> UI select -> SkillLevelUP(select)
        instSkills[skill].OnLevelUp();
    }

    private void SetCamera() {
        _mainCamera = Camera.main;
        if(_mainCamera == null) {
            Debug.Log("no main camear detected");
        }
    }

    public bool IsPointerOverUIObject() {
        PointerEventData eventData = new PointerEventData(EventSystem.current);
#if UNITY_ANDROID
        eventData.position = Input.mousePosition;
#else
        eventData.position = Input.GetTouch(0).position;
#endif
        List<RaycastResult> results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(eventData, results);

        return results.Count > 0;
    }

    private void HandleMouseInput() {
        if(Input.GetMouseButtonDown(0) && !IsPointerOverUIObject()) {
            _isSelected = true;
        }else if(Input.GetMouseButtonUp(0)) {
            _isSelected = false;
        }

        if(_isSelected) {
            Vector2 newPos = GetMouseWorldPosition();
            transform.position = newPos;
        }
    }

    private void HandleTouchInput() {
        if(Input.touchCount > 0) {
            Touch touch = Input.GetTouch(0);

            if(IsPointerOverUIObject()) return;

            switch(touch.phase) {
                case TouchPhase.Began:
                    _isSelected = true;
                    break;
                case TouchPhase.Ended:
                case TouchPhase.Canceled:
                    _isSelected = false;
                    break;
            }

            if(_isSelected) {
                Vector2 touchPos = _mainCamera.ScreenToWorldPoint(touch.position);
                transform.position = touchPos;
            }

        } else {
            _isSelected = false;
        }
    }

    private Vector3 GetMouseWorldPosition() {
        Vector3 mouseScreenPosition = Input.mousePosition;
        mouseScreenPosition.z = Mathf.Abs(_mainCamera.transform.position.z);
        return _mainCamera.ScreenToWorldPoint(mouseScreenPosition);
    }

    #region Switching

    public void OnSwitchButton() { // button click event 
        if(/*!_isSwitching && */Time.time - _lastSwitchTime >= instSkills[Skill.Switching].GetAP()) {
            _lastSwitchTime = Time.time;

            _audioSource.PlayOneShot(_switchingSound);

            Vector3 tmpPos = transform.position;
            transform.position = _nexus.transform.position;
            _nexus.transform.position = tmpPos;

            StartCoroutine(SmoothCameraTransition(transform.position, 0.3f));
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

    public float GetSwitchLeft() { // UI 확인용
        return instSkills[Skill.Switching].GetAP() - (Time.time - _lastSwitchTime);
    }

    #endregion
}
