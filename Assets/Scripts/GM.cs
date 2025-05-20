using System.Collections.Generic;
using UnityEngine;
using System.IO;
using Random = UnityEngine.Random;
using System.Linq;
using System;
using UnityEngine.SceneManagement;
using UnityEngine.Pool;

public class GM : MonoBehaviour
{
    public static GM I { get; private set; }

    public event Action OnBossSpawn;

    public HashSet<GameObject> spawnedMobs { get; private set; }

    public int killCount { get; private set; } = 0;

    #region Object Pool

    public Dictionary<string, ObjectPool<GameObject>> monPool { get; private set; }

    public Dictionary<string, ObjectPool<GameObject>> monProjPool { get; private set; }

    public Dictionary<Zone, ObjectPool<GameObject>> mobExpPool { get; private set; }

    #endregion

    #region SerializeField

    [SerializeField]
    private UIManager _uiManager;

    [SerializeField]
    private GameObject _blueZone;

    [SerializeField]
    private GameObject _greenZone;

    [SerializeField]
    private GameObject _yellowZone;

    [SerializeField]
    private GameObject _blueMeleeMobPref;

    [SerializeField]
    private GameObject _blueRangedMobPref;

    [SerializeField]
    private GameObject _greenMeleeMobPref;

    [SerializeField]
    private GameObject _greenRangedMobPref;

    [SerializeField]
    private GameObject _yellowMeleeMobPref;

    [SerializeField]
    private GameObject _yellowRangedMobPref;

    [SerializeField]
    private GameObject _bossPref;

    [SerializeField]
    private GameObject _blueMeleeProjPref;

    [SerializeField]
    private GameObject _blueRangedProjPref;

    [SerializeField]
    private GameObject _greenMeleeProjPref;

    [SerializeField]
    private GameObject _greenRangedProjPref;

    [SerializeField]
    private GameObject _yellowMeleeProjPref;

    [SerializeField]
    private GameObject _yellowRangedProjPref;

    [SerializeField]
    private GameObject _bossMeleeProjPref;

    [SerializeField]
    private GameObject _bossRangedProjPref;

    [SerializeField]
    private GameObject _blueExpPref;

    [SerializeField]
    private GameObject _greenExpPref;

    [SerializeField]
    private GameObject _yellowExpPref;

    [SerializeField]
    private MonoBehaviour[] exceptions;

    #endregion

    #region Member ref

    private Weapon _weapon;

    private Nexus _nexus;

    private Transform[] _blueSpawnPoint;

    private Transform[] _greenSpawnPoint;

    private Transform[] _yellowSpawnPoint;

    private CameraMovement _cameraComp;

    #endregion

    #region Member var

    private int _blueMaxNum = 0;

    private int _greenMaxNum = 0;

    private int _yellowMaxNum = 0;

    private int _blueLastIndex = 0;

    private int _greenLastIndex = 0;

    private int _yellowLastIndex = 0;

    private bool _isBlueZoneOut = false;

    private bool _isGreenZoneOut = false;

    private bool _isYellowZoneOut = false;

    private bool _isGamePaused = false;

    private float _bossTimer = 120f;

    private float _interval = 10f;

    #endregion

    #region CSV Data

    public Dictionary<int, LvCol> LevelData { get; private set; }

    public Dictionary<string, MobCol> MobData { get; private set; }

    public Dictionary<(string, int), float> SkillData { get; private set; }

    public Dictionary<int, MobSpawnCol> MobSpawnData {  get; private set; }

    #endregion

    private void Awake() {
        if(I != null && I != this) {
            Destroy(gameObject);
            return;
        }
        I = this;

        LevelData = LoadLevelDataCSV();
        MobData = LoadMobDataCSV();
        SkillData = LoadSkilDataCSV();
        MobSpawnData = LoadMobSpawnDataCSV();

        spawnedMobs = new HashSet<GameObject>();

        monPool = new Dictionary<string, ObjectPool<GameObject>>();
        InitMonPool(_blueMeleeMobPref, 28, "BlueMelee");
        InitMonPool(_blueRangedMobPref, 28, "BlueRanged");
        InitMonPool(_greenMeleeMobPref, 26, "GreenMelee");
        InitMonPool(_greenRangedMobPref, 26, "GreenRanged");
        InitMonPool(_yellowMeleeMobPref, 16, "YellowMelee");
        InitMonPool(_yellowRangedMobPref, 16, "YellowRanged");
        InitMonPool(_bossPref, 1, "Boss");

        monProjPool = new Dictionary<string, ObjectPool<GameObject>>();
        InitMonProjPool(_blueMeleeMobPref, _blueMeleeProjPref, 28, "BlueMelee");
        InitMonProjPool(_blueRangedMobPref, _blueRangedProjPref, 28, "BlueRanged");
        InitMonProjPool(_greenMeleeMobPref, _greenMeleeProjPref, 26, "GreenMelee");
        InitMonProjPool(_greenRangedMobPref, _greenRangedProjPref, 26, "GreenRanged");
        InitMonProjPool(_yellowMeleeMobPref, _yellowMeleeProjPref, 16, "YellowMelee");
        InitMonProjPool(_yellowRangedMobPref, _yellowRangedProjPref, 16, "YellowRanged");
        InitMonProjPool(_bossPref, _bossMeleeProjPref, 2, "BossMelee");
        InitMonProjPool(_bossPref, _bossRangedProjPref, 192, "BossRanged");
        InitMonProjPool(_bossPref, _bossMeleeProjPref, 2, "BossRush");

        mobExpPool = new Dictionary<Zone, ObjectPool<GameObject>>();
        InitMobExpPool(_blueMeleeMobPref, _blueExpPref, 56, Zone.Blue);
        InitMobExpPool(_greenMeleeMobPref, _greenExpPref, 52, Zone.Green);
        InitMobExpPool(_yellowMeleeMobPref, _yellowExpPref, 32, Zone.Yellow);
    }

    private void Start() {
        _weapon = GameObject.FindGameObjectWithTag("Player").GetComponent<Weapon>();
        _weapon.OnWeaponLevelUp += HandleWeaponLevelUp;

        _nexus = GameObject.FindGameObjectWithTag("Nexus").GetComponent<Nexus>();
        _nexus.OnNexusHit += HandleNexusHit;
        _nexus.OnNexusDeath += HandleNexusDeath;
        _nexus.OnGameOver += HandleGameOver;

        _blueSpawnPoint = _blueZone.GetComponentsInChildren<Transform>().Where(t => t != _blueZone.transform).ToArray();
        _greenSpawnPoint = _greenZone.GetComponentsInChildren<Transform>().Where(t => t != _greenZone.transform).ToArray();
        _yellowSpawnPoint = _yellowZone.GetComponentsInChildren<Transform>().Where(t => t != _yellowZone.transform).ToArray();

        _cameraComp = Camera.main.GetComponent<CameraMovement>();

        Invoke(nameof(BossSpawn), _bossTimer); 
    }

    private void Update() {
        UpdateMonsterMax();
        MonsterSpawn();
    }

    #region Pool Init

    private void InitMonPool(GameObject pref, int capacity, string poolkey) {
        var pool = new ObjectPool<GameObject>(
            createFunc: () => {
                var obj = Instantiate(pref); // 풀에 저장할때만 초기화해 최적화
                return obj;
            },
            actionOnGet: (obj) => {
                if(obj == null) {
                    Debug.LogWarning("[InitMonPool] Tried to get a destroyed object!");
                    return;
                }
                obj.SetActive(true);
            },
            actionOnRelease: (obj) => {
                if(obj == null) {
                    Debug.LogWarning("[InitMonPool] Tried to release a destroyed object!");
                    return;
                }
                obj.SetActive(false);
            },
            actionOnDestroy: (obj) => Destroy(obj),
            collectionCheck: false,
            defaultCapacity: capacity,
            maxSize: capacity * 2
        );

        List<GameObject> preloaded = new List<GameObject>();

        for(int i = 0; i < capacity; ++i) {
            GameObject obj = pool.Get();
            preloaded.Add(obj);
        }

        foreach(var obj in preloaded) {
            pool.Release(obj);
        }

        monPool[poolkey] = pool;
    }

    private void InitMonProjPool(GameObject basepref, GameObject projpref, int capacity, string poolkey) {
        var instBase = Instantiate(basepref);
        Ability baseAbility = instBase.GetComponent<MonsterBase>().ability.Clone();
        Destroy(instBase);
        // MonData에 몬스터의 모든 abiliy속성이 있지 않아서 직접 가져옴
        var pool = new ObjectPool<GameObject>(
            createFunc: () => {
                var obj = Instantiate(projpref);
                if(poolkey == "BossRanged") {
                    baseAbility.SetLifeTime(3f);
                    baseAbility.SetAR(3f);
                    baseAbility.SetAP(10f);
                }else if(poolkey == "BossRush") {
                    baseAbility.SetLifeTime(1f);
                    baseAbility.SetAR(3f);
                    baseAbility.SetAP(100f);
                }
                obj.GetComponent<MonsterProjBase>().SetAbility(baseAbility);
                obj.GetComponent<MonsterProjBase>().SetPoolKey(poolkey);
                return obj;
            },
            actionOnGet: (obj) => {
                if(obj == null) {
                    Debug.LogWarning("[InitMonProjPool] Tried to get a destroyed object!");
                    return;
                }
                obj.SetActive(true);
            },
            actionOnRelease: (obj) => {
                if(obj == null) {
                    Debug.LogWarning("[InitMonProjPool] Tried to release a destroyed object!");
                    return;
                }
                obj.SetActive(false);
            },
            actionOnDestroy: (obj) => Destroy(obj),
            collectionCheck: false,
            defaultCapacity: capacity,
            maxSize: capacity * 2
        );

        List<GameObject> preloaded = new List<GameObject>();

        for(int i = 0; i < capacity; ++i) {
            GameObject obj = pool.Get();
            preloaded.Add(obj);
        }

        foreach(var obj in preloaded) {
            pool.Release(obj);
        }

        monProjPool[poolkey] = pool;
    }
    
    private void InitMobExpPool(GameObject basepref, GameObject pref, int capacity, Zone zone) {
        var instBase = Instantiate(basepref);
        Ability baseAbility = instBase.GetComponent<MonsterBase>().ability.Clone();
        Destroy(instBase);

        var pool = new ObjectPool<GameObject>(
            createFunc: () => {
                var obj = Instantiate(pref);
                obj.GetComponent<EXP>().SetExp(baseAbility.Exp);
                obj.GetComponent<EXP>().SetPoolKey(zone);
                return obj;
            },
            actionOnGet: (obj) => {
                if(obj == null) {
                    Debug.LogWarning("[InitMobExpPool] Tried to get a destroyed object!");
                    return;
                }
                obj.SetActive(true);
            },
            actionOnRelease: (obj) => {
                if(obj == null) {
                    Debug.LogWarning("[InitMobExpPool] Tried to release a destroyed object!");
                    return;
                }
                obj.SetActive(false);
            },
            actionOnDestroy: (obj) => Destroy(obj),
            collectionCheck: false,
            defaultCapacity: capacity,
            maxSize: capacity * 2
        );

        List<GameObject> preloaded = new List<GameObject>();

        for(int i = 0; i < capacity; ++i) {
            GameObject obj = pool.Get();
            preloaded.Add(obj);
        }

        foreach(var obj in preloaded) {
            pool.Release(obj);
        }

        mobExpPool[zone] = pool;
    }

    #endregion

    #region CSV Load

    private Dictionary<int, LvCol> LoadLevelDataCSV() {
        TextAsset csvFile = Resources.Load<TextAsset>("LevelData");
        if(csvFile == null) {
            Debug.Log("Cannot find csv data");
        }

        StringReader reader = new StringReader(csvFile.text);
        if(reader == null) {
            Debug.Log("Cannot read csv data");
        }

        var result = new Dictionary<int, LvCol>();
        bool isFirstLine = true;

        while(reader.Peek() > -1) {
            string line = reader.ReadLine();

            if(isFirstLine) {
                isFirstLine = false;
                continue;
            }

            string[] values = line.Split(",");
            if(values.Length != 3) {
                Debug.Log("Data not fure");
                continue;
            }
            LvCol levelColumn = new LvCol(float.Parse(values[1]), float.Parse(values[2]));//
            result.Add(int.Parse(values[0]), levelColumn);
        }

        return result;
    }

    private Dictionary<string, MobCol> LoadMobDataCSV() {
        TextAsset csvFile = Resources.Load<TextAsset>("MobData");
        if(csvFile == null) {
            Debug.Log("Cannot find csv data");
        }

        StringReader reader = new StringReader(csvFile.text);
        if(reader == null) {
            Debug.Log("Cannot read csv data");
        }

        var result = new Dictionary<string, MobCol>();
        bool isFirstLine = true;

        while(reader.Peek() > -1) {
            string line = reader.ReadLine();

            if(isFirstLine) {
                isFirstLine = false;
                continue;
            }

            string[] values = line.Split(",");
            if(values.Length != 4) {
                Debug.Log("Data not fure");
                continue;
            }
            MobCol mobCol = new MobCol(float.Parse(values[1]), float.Parse(values[2]), float.Parse(values[3]));
            result.Add(values[0], mobCol);
        }

        return result;
    }

    private Dictionary<(string, int), float> LoadSkilDataCSV() {
        TextAsset csvFile = Resources.Load<TextAsset>("SkillData");
        if(csvFile == null) {
            Debug.Log("Cannot find csv data");
        }

        StringReader reader = new StringReader(csvFile.text);
        if(reader == null) {
            Debug.Log("Cannot read csv data");
        }

        var result = new Dictionary<(string, int), float>();
        bool isFirstLine = true;

        while(reader.Peek() > -1) {
            string line = reader.ReadLine();

            if(isFirstLine) {
                isFirstLine = false;
                continue;
            }

            string[] values = line.Split(",");
            if(values.Length != 3) {
                Debug.Log("Data not fure");
                continue;
            }
            
            result.Add((values[0], int.Parse(values[1])), float.Parse(values[2]));
        }

        return result;
    }

    private Dictionary<int, MobSpawnCol> LoadMobSpawnDataCSV() {
        TextAsset csvFile = Resources.Load<TextAsset>("MobSpawnData");
        if(csvFile == null) {
            Debug.Log("Cannot find csv data");
        }

        StringReader reader = new StringReader(csvFile.text);
        if(reader == null) {
            Debug.Log("Cannot read csv data");
        }

        var result = new Dictionary<int, MobSpawnCol>();
        bool isFirstLine = true;

        while(reader.Peek() > -1) {
            string line = reader.ReadLine();

            if(isFirstLine) {
                isFirstLine = false;
                continue;
            }

            string[] values = line.Split(",");
            if(values.Length != 4) {
                Debug.Log("Data not fure");
                continue;
            }
            MobSpawnCol mobSpawnCol = new MobSpawnCol(int.Parse(values[1]), int.Parse(values[2]), int.Parse(values[3]));
            result.Add(int.Parse(values[0]), mobSpawnCol);
        }

        return result;
    }

    #endregion

    #region Monster Control

    private void MonsterSpawn() {
        if(Time.timeSinceLevelLoad >= _bossTimer - 5f) return;

        MonsterSpawner("BlueMelee", "BlueRanged", _blueMaxNum, _blueSpawnPoint, ref _blueLastIndex);

        if(Time.timeSinceLevelLoad / (_bossTimer * 0.33) >= 1 || _isBlueZoneOut) {
            MonsterSpawner("GreenMelee", "GreenRanged", _greenMaxNum, _greenSpawnPoint, ref _greenLastIndex);
        }

        if(Time.timeSinceLevelLoad / (_bossTimer * 0.66) >= 1 || _isGreenZoneOut) {
            MonsterSpawner("YellowMelee", "YellowRanged", _yellowMaxNum, _yellowSpawnPoint, ref _yellowLastIndex);
        }
    }

    private void MonsterSpawner(string poolkey1, string poolkey2, int maxnum, Transform[] spawnpoints, ref int lastindex) {
        while(monPool[poolkey1].CountActive + monPool[poolkey2].CountActive < maxnum) {
            string mobType = Random.value > 0.5f ? poolkey1 : poolkey2;
            GameObject spawnedMob = monPool[mobType].Get();
            spawnedMob.transform.SetPositionAndRotation(spawnpoints[lastindex].position, Quaternion.identity);
            spawnedMob.GetComponent<MonsterBase>().OnMonsterDeath += HandleMonsterDeath;
            lastindex = (lastindex + 1) % spawnpoints.Length;
        }
    }

    private void UpdateMonsterMax() {
        if(Time.timeSinceLevelLoad >= _bossTimer - 5f) return;

        int index = (int)(_bossTimer - _interval);
        if(!_isYellowZoneOut) {
            index = (int)((int)(Mathf.Min(Time.timeSinceLevelLoad, index) / _interval) * _interval);
        }

        _blueMaxNum = MobSpawnData[index].blueMax;
        _greenMaxNum = MobSpawnData[index].greenMax;
        _yellowMaxNum = MobSpawnData[index].yellowMax;
    }

    public void SetZoneOut(Zone monsterZone) {
        switch(monsterZone) {
            case Zone.Blue:
                _isBlueZoneOut = true;
                break;
            case Zone.Green:
                _isGreenZoneOut = true;
                break;
            case Zone.Yellow:
                _isYellowZoneOut = true;
                break;
            default:
                break;
        }
    }

    private void BossSpawn() {
        OnBossSpawn.Invoke(); // 전부 self release
        //_uiManager.SetBossHPUI();

        GameObject spawnedBoss = monPool["Boss"].Get();
        spawnedBoss.transform.position = new Vector3(20, 0, 0);
        spawnedBoss.transform.rotation = Quaternion.identity;
        Boss bossComp = spawnedBoss.GetComponent<Boss>();
        bossComp.OnBossDeath += HandleBossDeath; // InitMonPool에서 임시로 생성하므로 여기서 바인딩
        bossComp.OnGameClear += HandleGameClear;

        _weapon.transform.position = new Vector3(0, 0, 0);
        _nexus.transform.position = new Vector3(0, -4, 0);
        StartCoroutine(_cameraComp.SmoothCameraTransition(new Vector3(6, 0, 0), 0.6f));
    }

    #endregion

    #region Game Control

    public void PauseGame() { // 문제시 interface 패턴 사용
        if(_isGamePaused) return; //

        MonoBehaviour[] allBehaviours = FindObjectsByType<MonoBehaviour>(FindObjectsSortMode.None);

        List<MonoBehaviour> exceptChilds = new List<MonoBehaviour>();
        foreach(var child in exceptions) {
            if(child == null) continue;
            MonoBehaviour[] comps = child.GetComponentsInChildren<MonoBehaviour>(true);
            exceptChilds.AddRange(comps);
        }

        foreach(var mb in allBehaviours) {
            if(mb == null) continue;
            if(exceptChilds.Contains(mb)) continue;
            mb.enabled = false;
        }

        Time.timeScale = 0f;
        _isGamePaused = true;
    }

    public void ResumeGame() {
        if(!_isGamePaused) return;

        MonoBehaviour[] allBehaviours = FindObjectsByType<MonoBehaviour>(FindObjectsSortMode.None); // FindObjectsOfType<MonoBehaviour>(true);

        foreach(var mb in allBehaviours) {
            if(mb == null) continue;
            mb.enabled = true;
        }

        Time.timeScale = 1f;
        _isGamePaused = false;
    }

    public void LoadLobby() {
        SceneManager.LoadScene("Lobby");
    }

    #endregion

    #region Handler

    public void HandleMonsterDeath(string poolkey, GameObject mob) {
        mob.GetComponent<MonsterBase>().OnMonsterDeath -= HandleMonsterDeath;
        monPool[poolkey].Release(mob);
        killCount++;
    }

    public void HandleWeaponLevelUp(Weapon weapon) {
        PauseGame();
        _uiManager.DrawSelectPanel();
    }

    public void HandleNexusHit(Nexus instance) {
        _uiManager.DrawNexusHitUI();
    }

    public void HandleNexusDeath(Nexus instance) {
        _weapon.SetTouchEnable(false);

        Vector3 nexusPos = _nexus.transform.position;
        nexusPos.z = _cameraComp.transform.position.z;
        _cameraComp.gameObject.transform.position = nexusPos;

        Time.timeScale = 0.25f;
    }

    public void HandleGameOver() {
        PauseGame();
        _uiManager.DrawGameOverPanel();
    }

    public void HandleBossDeath(Boss boss) {
        _weapon.SetTouchEnable(false);

        Vector3 bossPos = boss.transform.position;
        bossPos.z = _cameraComp.transform.position.z;
        _cameraComp.gameObject.transform.position = bossPos;

        Time.timeScale = 0.25f;
    }

    public void HandleGameClear() {
        PauseGame();
        _uiManager.DrawClearPanel();
    }

    #endregion
}