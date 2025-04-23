using System.Collections.Generic;
using UnityEngine;
using System.IO;
using Random = UnityEngine.Random;
using System.Linq;
using System;
using UnityEngine.SceneManagement;
using Unity.VisualScripting;
using UnityEngine.Pool;

public class GM : MonoBehaviour
{
    public static GM I { get; private set; }

    public int killCount { get; private set; } = 0;

    public HashSet<GameObject> blueMobs { get; private set; }

    public HashSet<GameObject> greenMobs { get; private set; }

    public HashSet<GameObject> yellowMobs { get; private set; }

    public ObjectPool<GameObject> bossProjPool { get; private set; }

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
    private GameObject _bossProjPref;

    [SerializeField]
    private MonoBehaviour[] exceptions;

    #endregion

    #region Member ref

    private Weapon _weapon;

    private Nexus _nexus;

    private Transform[] _blueSpawnPoint;

    private Transform[] _greenSpawnPoint;

    private Transform[] _yellowSpawnPoint;

    #endregion

    #region Member variable

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

    private int _initSize = 192;

    private int _maxSize = 384;

    #endregion

    #region CSV Data

    public Dictionary<int, LvCol> LevelData { get; private set; }

    public Dictionary<(int, int), MobCol> MobData { get; private set; }

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

        blueMobs = new HashSet<GameObject>();
        greenMobs = new HashSet<GameObject>();
        yellowMobs = new HashSet<GameObject>();

        bossProjPool = new ObjectPool<GameObject>(
            createFunc: () => Instantiate(_bossProjPref),
            actionOnGet: (obj) => obj.SetActive(true),
            actionOnRelease: (obj) => obj.SetActive(false),
            actionOnDestroy: (obj) => Destroy(_bossProjPref),
            collectionCheck: true, // set true
            defaultCapacity: _initSize,
            maxSize: _maxSize
            );

        for(int i = 0; i < 192; ++i) { // 초기화
            GameObject obj = bossProjPool.Get();
            bossProjPool.Release(obj);
        }
    }

    private void Start() {
        _weapon = GameObject.FindGameObjectWithTag("Player").GetComponent<Weapon>();
        _weapon.OnWeaponLevelUp += HandleWeaponLevelUp;

        _nexus = GameObject.FindGameObjectWithTag("Nexus").GetComponent<Nexus>();
        _nexus.OnNexusHit += HandleNexusHit;
        _nexus.OnNexusDeath += HandleNexusDeath;

        _blueSpawnPoint = _blueZone.GetComponentsInChildren<Transform>().Where(t => t != _blueZone.transform).ToArray();
        _greenSpawnPoint = _greenZone.GetComponentsInChildren<Transform>().Where(t => t != _greenZone.transform).ToArray();
        _yellowSpawnPoint = _yellowZone.GetComponentsInChildren<Transform>().Where(t => t != _yellowZone.transform).ToArray();

        Invoke(nameof(BossSpawn), 5f); // 수정 - 360f
    }

    private void Update() {
        UpdateMonsterMax();
        MonsterSpawn();
    }

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

    private Dictionary<(int, int), MobCol> LoadMobDataCSV() {
        TextAsset csvFile = Resources.Load<TextAsset>("MobData");
        if(csvFile == null) {
            Debug.Log("Cannot find csv data");
        }

        StringReader reader = new StringReader(csvFile.text);
        if(reader == null) {
            Debug.Log("Cannot read csv data");
        }

        var result = new Dictionary<(int, int), MobCol>();
        bool isFirstLine = true;

        while(reader.Peek() > -1) {
            string line = reader.ReadLine();

            if(isFirstLine) {
                isFirstLine = false;
                continue;
            }

            string[] values = line.Split(",");
            if(values.Length != 5) {
                Debug.Log("Data not fure");
                continue;
            }
            MobCol mobCol = new MobCol(float.Parse(values[2]), float.Parse(values[3]), float.Parse(values[4]));
            result.Add((int.Parse(values[0]), int.Parse(values[1])), mobCol);
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
        if(Time.timeSinceLevelLoad >= 1f) return; // 수정 - 355f

        while(blueMobs.Count < _blueMaxNum) {
            GameObject pref = Random.value > 0.5f ? _blueMeleeMobPref : _blueRangedMobPref;
            GameObject instMob = Instantiate(pref, _blueSpawnPoint[_blueLastIndex].position, Quaternion.identity);
            blueMobs.Add(instMob);
            instMob.GetComponent<MonsterBase>().OnMonsterDeath += HandleMonsterDeath;
            _blueLastIndex = (_blueLastIndex + 1) % _blueSpawnPoint.Length;
        }

        if(Time.timeSinceLevelLoad / 120 >= 1 || _isBlueZoneOut) {
            while(greenMobs.Count < _greenMaxNum) {
                GameObject pref = Random.value > 0.5f ? _greenMeleeMobPref : _greenRangedMobPref;
                GameObject instMob = Instantiate(pref, _greenSpawnPoint[_greenLastIndex].position, Quaternion.identity);
                greenMobs.Add(instMob);
                instMob.GetComponent<MonsterBase>().OnMonsterDeath += HandleMonsterDeath;
                _greenLastIndex = (_greenLastIndex + 1) % _greenSpawnPoint.Length;
            }
        }

        if(Time.timeSinceLevelLoad / 240 >= 1 || _isGreenZoneOut) {
            while(yellowMobs.Count < _yellowMaxNum) {
                GameObject pref = Random.value > 0.5f ? _yellowMeleeMobPref : _yellowRangedMobPref;
                GameObject instMob = Instantiate(pref, _yellowSpawnPoint[_yellowLastIndex].position, Quaternion.identity);
                yellowMobs.Add(instMob);
                instMob.GetComponent<MonsterBase>().OnMonsterDeath += HandleMonsterDeath;
                _yellowLastIndex = (_yellowLastIndex + 1) % _yellowSpawnPoint.Length;
            }
        }
    }

    private void UpdateMonsterMax() {
        if(Time.timeSinceLevelLoad >= 355) return;

        int index = 330;
        if(!_isYellowZoneOut) { 
            index = ((int)(Mathf.Min(Time.timeSinceLevelLoad, 330) / 30)) * 30;
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
        
        IEnumerable<GameObject> allMonsters = blueMobs.Concat(greenMobs).Concat(yellowMobs).ToList(); // 동기화 불가능
        foreach(var monster in allMonsters) {
            Destroy(monster);
        }

        blueMobs.Clear();
        greenMobs.Clear();
        yellowMobs.Clear();
        
        _uiManager.SetBossSpawnBool(true);
        GameObject instBoss = Instantiate(_bossPref, new Vector3(0, 4f, 0), Quaternion.identity);
        instBoss.GetComponent<Boss>().OnBossDeath += HandleBossDeath;

        _weapon.transform.position = new Vector3(0, 0, 0);
        _nexus.transform.position = new Vector3(0, -4, 0);
        StartCoroutine(_weapon.SmoothCameraTransition(_weapon.transform.position, 0.3f));
        
    }
    #endregion

    #region Game Control

    public void PauseGame() { // 문제시 interface 패턴 사용
        if(_isGamePaused) return; //

        MonoBehaviour[] allBehaviours = FindObjectsByType<MonoBehaviour>(FindObjectsSortMode.None);// FindObjectsOfType<MonoBehaviour>(true);

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

    public void HandleMonsterDeath(MonsterBase mob) {
        switch(mob.GetZone()) {
            case Zone.Blue: blueMobs.Remove(mob.gameObject); break;
            case Zone.Green: greenMobs.Remove(mob.gameObject); break;
            case Zone.Yellow: yellowMobs.Remove(mob.gameObject); break;
            default: throw new NotSupportedException();
        }
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
        PauseGame();
        _uiManager.DrawGameOverPanel();
    }

    public void HandleBossDeath() {
        Invoke(nameof(PauseGame), 1f);
        Invoke(nameof(InvokeClearPanel), 1f);
    }

    private void InvokeClearPanel() {
        _uiManager.DrawClearPanel();
    }

    #endregion
}