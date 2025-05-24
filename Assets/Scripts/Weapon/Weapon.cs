using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Weapon : MonoBehaviour
{
    public static Weapon I { get; private set; }

    public event Action<Weapon> OnWeaponLevelUp;

    public event Action OnTouchDown;

    public event Action OnTouchUp;

    public Ability ability { get; private set; }

    public Dictionary<Skill, WeaponProjBase> instSkills { get; private set; }

    public bool touchEnable { get; private set; } = true;

    #region SerializeField

    [SerializeField]
    private GameObject _rainFirePref;

    [SerializeField]
    private GameObject _slowCirclePref;

    [SerializeField]
    private GameObject _protectShieldPref;

    //[SerializeField]
    //private GameObject _switchingPref;

    [SerializeField]
    private GameObject _thunderBoltPref;

    [SerializeField]
    private GameObject _vitalSurgePref;

    [SerializeField]
    private GameObject _overdrivePref;

    //[SerializeField]
    //private AudioClip _switchingSound;

    #endregion

    #region Member ref

    private Camera _mainCamera;

    private CameraMovement _cameraComp;

    private Nexus _nexus;

    private AudioSource _audioSource;

    #endregion

    #region Member var

    private bool _isSelected = false;

    //private float _lastSwitchTime = -60f;

    private int _weaponMaxLv = 7;

    #endregion


    private void Awake() {
        if(I != null && I != this) {
            Destroy(gameObject);
            return;
        }
        I = this;

        ability = new Ability();
        ability.SetLv(1);
        ability.SetAS(1f);
        ability.SetExp(0f);
        
        instSkills = new Dictionary<Skill, WeaponProjBase>();
    }

    private void Start() {
        _mainCamera = Camera.main;
        _cameraComp = _mainCamera.GetComponent<CameraMovement>();

        ability.SetAP(GM.I.LevelData[ability.Lv].AP);
        ability.SetReqEXP(GM.I.LevelData[ability.Lv].reqEXP);

        _nexus = GameObject.FindGameObjectWithTag("Nexus").GetComponent<Nexus>(); // 초기화 시점 문제로 사용
        _audioSource = GetComponent<AudioSource>();

        WeaponProjBase instRainFire = Instantiate(_rainFirePref, _nexus.transform).GetComponent<WeaponProjBase>();
        instSkills.Add(Skill.RainFire, instRainFire);

        WeaponProjBase instSlowCircle = Instantiate(_slowCirclePref, _nexus.transform.position, Quaternion.identity).GetComponent<WeaponProjBase>(); // 분리
        instSkills.Add(Skill.SlowCircle, instSlowCircle);

        WeaponProjBase instProtectShield = Instantiate(_protectShieldPref, _nexus.transform).GetComponent<WeaponProjBase>();
        instSkills.Add(Skill.ProtectShield, instProtectShield);

        //WeaponProjBase instSwitching = Instantiate(_switchingPref, transform).GetComponent<WeaponProjBase>();
        //instSkills.Add(Skill.Switching, instSwitching);

        WeaponProjBase instThunderBolt = Instantiate(_thunderBoltPref, transform).GetComponent<WeaponProjBase>();
        instSkills.Add(Skill.ThunderBolt, instThunderBolt);

        WeaponProjBase instVitalSurge = Instantiate(_vitalSurgePref, transform).GetComponent<WeaponProjBase>();
        instSkills.Add(Skill.VitalSurge, instVitalSurge);

        WeaponProjBase instOverdrive = Instantiate(_overdrivePref, transform).GetComponent<WeaponProjBase>();
        instSkills.Add(Skill.Overdrive, instOverdrive);

        //StartCoroutine(SwitchStart()); // level 1 start
    }

    private void Update() {
    #if UNITY_EDITOR
        HandleMouseInput();
    #else
        HandleTouchInput();
    #endif
    }

    //private IEnumerator SwitchStart() {
    //    yield return null;
    //    instSkills[Skill.Switching].OnLevelUp();
    //}

    public void HandleExpGet(float value) {
        if(ability.Lv < _weaponMaxLv) {
            if(ability.Exp + value >= ability.reqExp) {
                ability.SetExp((ability.Exp + value) - ability.reqExp);
                OnWeaponLevelUp.Invoke(this); // show level up UI
                LevelUp();
            } else {
                ability.SetExp(ability.Exp + value);
            }
        }
    }

    private void LevelUp() {
        ability.SetLv(ability.Lv + 1);

        float baseAP = GM.I.LevelData[ability.Lv].AP;
        float passiveAP = instSkills[Skill.Overdrive].GetAP();

        ability.SetAP(baseAP + passiveAP);
        ability.SetReqEXP(GM.I.LevelData[ability.Lv].reqEXP);

        if(ability.Lv >= _weaponMaxLv) {
            ability.SetLv(_weaponMaxLv);
            ability.SetExp(1f);
            ability.SetReqEXP(1f);
        }
    }

    public void SkillLevelUp(Skill skill) {
        instSkills[skill].OnLevelUp();
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
        if(!touchEnable) return;

        if(Input.GetMouseButtonDown(0) && !IsPointerOverUIObject()) {
            _isSelected = true;
            OnTouchDown?.Invoke(); // thunder control
        }else if(Input.GetMouseButtonUp(0)) {
            _isSelected = false;
            OnTouchUp?.Invoke();
        }

        if(_isSelected) {
            Vector2 newPos = GetMouseWorldPosition();
            transform.position = newPos;

        }
    }

    private void HandleTouchInput() {
        if(!touchEnable) return;

        if(Input.touchCount > 0) {
            Touch touch = Input.GetTouch(0);

            if(IsPointerOverUIObject()) return;

            switch(touch.phase) {
                case TouchPhase.Began:
                    _isSelected = true;
                    OnTouchDown?.Invoke();
                    break;
                case TouchPhase.Ended:
                case TouchPhase.Canceled:
                    _isSelected = false;
                    OnTouchUp?.Invoke();
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

    //public void HandleSwitching() {
    //    if(Time.timeSinceLevelLoad - _lastSwitchTime >= instSkills[Skill.Switching].GetAP()) {
    //        _lastSwitchTime = Time.timeSinceLevelLoad;
    //        _audioSource.PlayOneShot(_switchingSound);
    //        //FStartCoroutine(SwitchingLerp(0.3f));
    //    }
    //}

    //private IEnumerator SwitchingLerp(float duration) {
    //    touchEnable = false;
    //    Vector3 weaponPos = transform.position;
    //    Vector3 nexusPos = _nexus.transform.position;

    //    float elapsed = 0f;

    //    while(elapsed < duration) {
    //        float t = elapsed / duration;

    //        transform.position = Vector3.Lerp(weaponPos, nexusPos, t);
    //        _nexus.transform.position = Vector3.Lerp(nexusPos, weaponPos, t);

    //        elapsed += Time.unscaledDeltaTime;
    //        yield return null;
    //    }

    //    transform.position = nexusPos;
    //    _nexus.transform.position = weaponPos;
    //    touchEnable = true;

    //    StartCoroutine(_cameraComp.SmoothCameraTransition(transform.position, 0.2f));
    //}

    //public float GetSwitchCool() { // UI 확인용
    //    return instSkills[Skill.Switching].GetAP() - (Time.timeSinceLevelLoad - _lastSwitchTime);
    //}

    public void SetTouchEnable(bool value) {
        touchEnable = value;
        if(!value) {
            _isSelected = false;
        }
    }
}
