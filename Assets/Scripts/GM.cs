using System.Collections.Generic;
using UnityEngine;
using System.IO;
using Random = UnityEngine.Random;
using System.Linq;
using System;
using UnityEngine.SceneManagement;
using UnityEngine.Pool;
using Unity.VisualScripting;

public class GM : MonoBehaviour
{
    #region Field

    public static GM I { get; private set; }

    public static bool isPaused { get; private set; }

    public event Action OnBossSpawn;

    public HashSet<GameObject> spawnedMobs { get; private set; }

    public int killCount { get; private set; } = 0;

    public float bossTimer { get; private set; } = 120f; //

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
    private GameObject _giantAttackMeleePref;

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

    private CameraMovement _cameraComp;

    #endregion

    #region Member var

    private int _blueMaxNum = 0;

    private int _greenMaxNum = 0;

    private int _yellowMaxNum = 0;

    private bool _isBlueZoneOut = false;

    private bool _isGreenZoneOut = false;

    private bool _isYellowZoneOut = false;

    //private bool _isGamePaused = false;

    private float _interval = 10f;

    private List<int> _indexPool = new List<int>(8);

    private Vector3[] _blueSpawnPoints;

    private Vector3[] _greenSpawnPoints;

    private Vector3[] _yellowSpawnPoints;

    #endregion

    #region CSV Data

    public Dictionary<int, LvCol> LevelData { get; private set; }

    public Dictionary<string, MobCol> MobData { get; private set; }

    public Dictionary<(string, int), float> SkillData { get; private set; }

    public Dictionary<int, MobSpawnCol> MobSpawnData {  get; private set; }

    #endregion

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
        InitMonPool(_giantAttackMeleePref, 1, "GiantAttackMelee");

        monProjPool = new Dictionary<string, ObjectPool<GameObject>>();
        InitMonProjPool(_blueMeleeMobPref, _blueMeleeProjPref, 28, "BlueMelee");
        InitMonProjPool(_blueRangedMobPref, _blueRangedProjPref, 28, "BlueRanged");
        InitMonProjPool(_greenMeleeMobPref, _greenMeleeProjPref, 26, "GreenMelee");
        InitMonProjPool(_greenRangedMobPref, _greenRangedProjPref, 26, "GreenRanged");
        InitMonProjPool(_yellowMeleeMobPref, _yellowMeleeProjPref, 16, "YellowMelee");
        InitMonProjPool(_yellowRangedMobPref, _yellowRangedProjPref, 16, "YellowRanged");
        InitMonProjPool(_bossPref, _bossMeleeProjPref, 2, "BossMelee"); // 필요 없는듯 한데...
        InitMonProjPool(_bossPref, _bossRangedProjPref, 16, "BossRanged");
        InitMonProjPool(_bossPref, _bossMeleeProjPref, 2, "BossRush");

        mobExpPool = new Dictionary<Zone, ObjectPool<GameObject>>();
        InitMobExpPool(_blueMeleeMobPref, _blueExpPref, 56, Zone.Blue);
        InitMobExpPool(_greenMeleeMobPref, _greenExpPref, 52, Zone.Green);
        InitMobExpPool(_yellowMeleeMobPref, _yellowExpPref, 32, Zone.Yellow);

        _cameraComp = Camera.main.GetComponent<CameraMovement>(); // 성능 고려한 위치
    }

    private void Start() {
        _weapon = GameObject.FindGameObjectWithTag("Player")?.GetComponent<Weapon>();
        _weapon.OnWeaponLevelUp += HandleWeaponLevelUp;

        _nexus = GameObject.FindGameObjectWithTag("Nexus")?.GetComponent<Nexus>();
        _nexus.OnNexusHit += HandleNexusHit;
        _nexus.OnNexusDeath += HandleNexusDeath;
        _nexus.OnGameOver += HandleGameOver;

        _blueSpawnPoints = _blueZone.GetComponentsInChildren<Transform>().Where(t => t != _blueZone.transform).Select(t => t.position).ToArray();
        _greenSpawnPoints = _greenZone.GetComponentsInChildren<Transform>().Where(t => t != _greenZone.transform).Select(t => t.position).ToArray();
        _yellowSpawnPoints = _yellowZone.GetComponentsInChildren<Transform>().Where(t => t != _yellowZone.transform).Select(t => t.position).ToArray();

        Invoke(nameof(BossSpawn), bossTimer); 
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
        if(Time.timeSinceLevelLoad >= bossTimer - 5f) return;

        MonsterSpawner("BlueMelee", "BlueRanged", _blueMaxNum, _blueSpawnPoints);

        if(Time.timeSinceLevelLoad / (bossTimer * 0.33) >= 1 || _isBlueZoneOut) {
            MonsterSpawner("GreenMelee", "GreenRanged", _greenMaxNum, _greenSpawnPoints);
        }

        if(Time.timeSinceLevelLoad / (bossTimer * 0.66) >= 1 || _isGreenZoneOut) {
            MonsterSpawner("YellowMelee", "YellowRanged", _yellowMaxNum, _yellowSpawnPoints);
        }
    }

    private void MonsterSpawner(string poolkey1, string poolkey2, int maxnum, Vector3[] spawnpoints) {
        int lastIndex = Random.Range(0, 8);
        float interval = 3f;
        float gridSize = 0.01f;
        while(monPool[poolkey1].CountActive + monPool[poolkey2].CountActive < maxnum) {
            string mobType = Random.value > 0.5f ? poolkey1 : poolkey2;
            GameObject spawnedMob = monPool[mobType].Get();
            // 여덟개의 스폰 포인트 중 lastindex를 제외한 하나를 랜덤하게 선택
            int currentIndex = GetNextIndex(lastIndex);
            // 선택된 스폰 포인트를 피벗으로 하는 원 모양의 범위에서 랜덤한 좌표를 생성후 스폰
            Vector3 pivot = spawnpoints[currentIndex];
            float randX = SnapToGrid(Random.Range(pivot.x - interval, pivot.x + interval), gridSize);
            float randY = SnapToGrid(Random.Range(pivot.y - interval, pivot.y + interval), gridSize);
            Vector3 spawnPoint = new Vector3(randX, randY, pivot.z);
            spawnedMob.transform.SetPositionAndRotation(spawnPoint, Quaternion.identity);
            spawnedMob.GetComponent<MonsterBase>().OnMonsterDeath += HandleMonsterDeath;
            lastIndex = currentIndex;
        }
    }

    private int GetNextIndex(int lastindex) {
        _indexPool.Clear();
        for(int i = 0; i < 8; ++i) {
            if(i != lastindex) _indexPool.Add(i);
        }
        return _indexPool[Random.Range(0, _indexPool.Count)];
    }

    private float SnapToGrid(float value, float gridSize) => Mathf.Round(value * (1f / gridSize)) * gridSize;

    private void UpdateMonsterMax() {
        if(Time.timeSinceLevelLoad >= bossTimer - 5f) return;

        int index = (int)(bossTimer - _interval);
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
        OnBossSpawn?.Invoke(); // 전부 self release
        //_uiManager.SetBossHPUI();

        GameObject spawnedBoss = monPool["Boss"].Get();
        spawnedBoss.transform.position = new Vector3(10, 0, 0);
        spawnedBoss.transform.rotation = Quaternion.identity;
        Boss bossComp = spawnedBoss.GetComponent<Boss>();
        bossComp.OnBossDeath += HandleBossDeath; // InitMonPool에서 임시로 생성하므로 여기서 바인딩
        bossComp.OnGameClear += HandleGameClear;

        //_weapon.transform.position = new Vector3(0, 0, 0);
        //_nexus.transform.position = new Vector3(0, -4, 0);
        StartCoroutine(_cameraComp.SmoothCameraTransition(new Vector3(3.25f, 0f, 0f), 0.6f));
    }

    #endregion

    #region Game Control

    public static void PauseGame() {
        isPaused = true;
        Time.timeScale = 0f;
    }

    public void PauseGameOld() { // 
        //if(_isGamePaused) return; //

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
        //_isGamePaused = true;
    }

    public static void ResumeGame() {
        isPaused = false;
        Time.timeScale = 1f;
    }

    public void ResumeGameOld() {
        //if(!_isGamePaused) return;

        MonoBehaviour[] allBehaviours = FindObjectsByType<MonoBehaviour>(FindObjectsSortMode.None); // FindObjectsOfType<MonoBehaviour>(true);

        foreach(var mb in allBehaviours) {
            if(mb == null) continue;
            mb.enabled = true;
        }

        Time.timeScale = 1f;
        //_isGamePaused = false;
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

        //Vector3 bossPos = boss.transform.position;
        //bossPos.z = _cameraComp.transform.position.z;
        //_cameraComp.gameObject.transform.position = bossPos;

        Time.timeScale = 0.25f;
    }

    public void HandleGameClear() {
        PauseGame();
        _uiManager.DrawClearPanel();
    }

    #endregion
}