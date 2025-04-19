using System.Collections.Generic;
using UnityEngine;
using System.IO;
using Random = UnityEngine.Random;
using System.Linq;
using System;

public class GM : MonoBehaviour
{
    public static GM I { get; private set; }

    public int killCount { get; private set; } = 0;

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

    private HashSet<GameObject> _blueMobs;

    private HashSet<GameObject> _greenMobs;

    private HashSet<GameObject> _yellowMobs;

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

        _blueMobs = new HashSet<GameObject>();
        _greenMobs = new HashSet<GameObject>();
        _yellowMobs = new HashSet<GameObject>();
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

        Invoke(nameof(Tutorial), 0.2f);
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

    private void MonsterSpawn() {
        while(_blueMobs.Count < _blueMaxNum) {
            GameObject pref = Random.value > 0.5f ? _blueMeleeMobPref : _blueRangedMobPref;
            GameObject instMob = Instantiate(pref, _blueSpawnPoint[_blueLastIndex].position, Quaternion.identity);
            _blueMobs.Add(instMob);
            instMob.GetComponent<MonsterBase>().OnMonsterDeath += HandleMonsterDeath;
            _blueLastIndex = (_blueLastIndex + 1) % _blueSpawnPoint.Length;
        }

        if(Time.time / 240 >= 1 || _isBlueZoneOut) {
            while(_greenMobs.Count < _greenMaxNum) {
                GameObject pref = Random.value > 0.5f ? _greenMeleeMobPref : _greenRangedMobPref;
                GameObject instMob = Instantiate(pref, _greenSpawnPoint[_greenLastIndex].position, Quaternion.identity);
                _greenMobs.Add(instMob);
                instMob.GetComponent<MonsterBase>().OnMonsterDeath += HandleMonsterDeath;
                _greenLastIndex = (_greenLastIndex + 1) % _greenSpawnPoint.Length;
            }
        }

        if(Time.time / 360 >= 1 || _isGreenZoneOut) {
            while(_yellowMobs.Count < _yellowMaxNum) {
                GameObject pref = Random.value > 0.5f ? _yellowMeleeMobPref : _yellowRangedMobPref;
                GameObject instMob = Instantiate(pref, _yellowSpawnPoint[_yellowLastIndex].position, Quaternion.identity);
                _yellowMobs.Add(instMob);
                instMob.GetComponent<MonsterBase>().OnMonsterDeath += HandleMonsterDeath;
                _yellowLastIndex = (_yellowLastIndex + 1) % _yellowSpawnPoint.Length;
            }
        }
    }

    private void UpdateMonsterMax() {
        int index = 450;
        if(!_isYellowZoneOut) {
            index = ((int)(Mathf.Min(Time.time, 450) / 30)) * 30;
        }

        _blueMaxNum = MobSpawnData[index].blueMax;
        _greenMaxNum = MobSpawnData[index].greenMax;
        _yellowMaxNum = MobSpawnData[index].yellowMax;
    }

    public void HandleMonsterDeath(MonsterBase mob) {
        switch(mob.GetZone()) {
            case Zone.Blue: _blueMobs.Remove(mob.gameObject); break;
            case Zone.Green: _greenMobs.Remove(mob.gameObject); break;
            case Zone.Yellow: _yellowMobs.Remove(mob.gameObject); break;
            default: throw new NotSupportedException();
        }
        killCount++;
        _uiManager.SetKillCountText(killCount);
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

    private void PauseGame() { // 문제시 interface 패턴 사용
        MonoBehaviour[] allBehaviours = FindObjectsOfType<MonoBehaviour>(true); // 안쓰이는 기능 수정

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

    private void ResumeGame() {
        MonoBehaviour[] allBehaviours = FindObjectsOfType<MonoBehaviour>(true);

        foreach(var mb in allBehaviours) {
            if(mb == null) continue;
            mb.enabled = true;
        }

        Time.timeScale = 1f;
        _isGamePaused = false;
    }

    private void Tutorial() {
        PauseGame();
        _uiManager.DrawTutorial();
    }

    public void OnPauseButton() {
        if(!_isGamePaused) {
            PauseGame();
        } else {
            ResumeGame();
        }
    }

    public void OnSkillSelect(Skill skill) {
        _weapon.SkillLevelUp(skill);
        ResumeGame();
    }

    public void HandleWeaponLevelUp(Weapon weapon) {
        PauseGame();
        _uiManager.DrawSelectUI();
    }

    public void HandleNexusHit(Nexus instance) {
        _uiManager.DrawNexusHitUI();
    }

    public void HandleNexusDeath(Nexus instance) {
        PauseGame();
        _uiManager.DrawGameOverUI();
    }

    public HashSet<GameObject> GetBlueMobs() => _blueMobs;

    public HashSet<GameObject> GetGreenMobs() => _greenMobs;

    public HashSet<GameObject> GetYellowMobs() => _yellowMobs;
}