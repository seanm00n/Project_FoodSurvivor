using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class GM : MonoBehaviour
{
    public static GM I { get; private set; }

    public int killCount { get; private set; } = 0;

    #region SerializeField

    [SerializeField]
    private GameObject _weaponPref; // 수정?

    [SerializeField]
    private GameObject _nexusPref; // 수정?

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

    #endregion

    #region Member ref

    private GameObject _instNexus;

    private GameObject _InstWeapon;

    private Transform[] _blueSpawnPoint;

    private Transform[] _greenSpawnPoint;

    private Transform[] _yellowSpawnPoint;

    private Camera _mainCamera;

    #endregion

    #region Member variable

    private HashSet<GameObject> _blueMobs;

    private HashSet<GameObject> _greenMobs;

    private HashSet<GameObject> _yellowMobs;

    private int _blueMaxNum;

    private int _greenMaxNum;

    private int _yellowMaxNum;

    private int _blueLastIndex = 0;

    private int _greenLastIndex = 0;

    private int _yellowLastIndex = 0;

    private bool _isBlueZoneOut = false;

    private bool _isGreenZoneOut = false;

    private bool _isYellowZoneOut = false;

    #endregion

    #region CSV Data

    public Dictionary<int, LvCol> LevelData { get; private set; }

    public Dictionary<(int, int), MobCol> MobData { get; private set; }

    public Dictionary<(string, int), float> SkillData { get; private set; }

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

        CreateWeapon();
        CreateNexus(); 

        _mainCamera = Camera.main;

        _blueMobs = new HashSet<GameObject>();
        _greenMobs = new HashSet<GameObject>();
        _yellowMobs = new HashSet<GameObject>();

        _blueMaxNum = 10;
        _greenMaxNum = 12;
        _yellowMaxNum = 15;

        _blueSpawnPoint = _blueZone.GetComponentsInChildren<Transform>();
        _greenSpawnPoint = _greenZone.GetComponentsInChildren<Transform>();
        _yellowSpawnPoint = _yellowZone.GetComponentsInChildren<Transform>();
    }

    private void Update() {
        MonsterSpawn(); 
        UpdateMonsterMax();
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

    #endregion

    private void MonsterSpawn() {
        for(int i = _blueLastIndex; i < _blueSpawnPoint.Length; ++i) { // _blueSpawnPoint.Length 수정
            if(_blueMobs.Count >= _blueMaxNum) break;
            GameObject instMob = Instantiate(_blueMeleeMobPref, _blueSpawnPoint[i].position, Quaternion.identity);
            _blueMobs.Add(instMob);
            instMob.GetComponent<MonsterBase>().OnMonsterDeath += HandleMonsterDeath;
            _blueLastIndex = i + 1;
        }

        for(int i = _greenLastIndex; i < _greenSpawnPoint.Length; ++i) {
            if(Time.time / 240 >= 1 || _isBlueZoneOut) {
                if(_greenMobs.Count >= _greenMaxNum) break;
                GameObject instMob = Instantiate(_greenMeleeMobPref, _greenSpawnPoint[i].position, Quaternion.identity);
                _greenMobs.Add(instMob);
                instMob.GetComponent<MonsterBase>().OnMonsterDeath += HandleMonsterDeath;
                _greenLastIndex = i + 1;
            }
        }

        for(int i = _yellowLastIndex; i < _yellowSpawnPoint.Length; ++i) {
            if(Time.time / 360 >= 1 || _isGreenZoneOut) {
                if(_yellowMobs.Count >= _yellowMaxNum) break;
                GameObject instMob = Instantiate(_yellowMeleeMobPref, _yellowSpawnPoint[i].position, Quaternion.identity);
                _yellowMobs.Add(instMob);
                instMob.GetComponent<MonsterBase>().OnMonsterDeath += HandleMonsterDeath;
                _yellowLastIndex = i + 1;
            }
        }
    }

    private void UpdateMonsterMax() {
        int index = (int)(Mathf.Min(Time.time, 450) / 30);

        _blueMaxNum = 10 + index + (index / 3);
        _greenMaxNum = 12 + index + (index / 3);
        _yellowMaxNum = 15 + index + (index / 3);
    }

    public void HandleMonsterDeath(MonsterBase mob) {
        switch(mob.GetZone()) {
            case Zone.Blue:
                if(_blueMobs.Remove(mob.gameObject)) Destroy(mob.gameObject);
                break;
            case Zone.Green:
                if(_greenMobs.Remove(mob.gameObject)) Destroy(mob.gameObject);
                break;
            case Zone.Yellow:
                if(_yellowMobs.Remove(mob.gameObject)) Destroy(mob.gameObject);
                break;
            default:
                Debug.Log("Monster doesn't have Zone");
                break;
        }
        killCount++;
    }

    public void HandleNexusHit(Nexus instance) {
        Debug.Log("Nexus Hit!"); 
        // alert effect
    }

    public void HandleNexusDeath(Nexus instance) {
        Debug.Log("Nexus death!");
        // gameover
    }

    public void HandleWeaponLevelUp(Weapon weapon) {
        // skill select ui
    }

    private void CreateNexus() {
        _instNexus = Instantiate(_nexusPref, new Vector2(0, -4), Quaternion.identity);
        Nexus instNexus = _instNexus.GetComponent<Nexus>();
        instNexus.OnNexusDeath += HandleNexusDeath;
        instNexus.OnNexusHit += HandleNexusHit;
    }

    private void CreateWeapon() {
        _InstWeapon = Instantiate(_weaponPref, new Vector2(0, 0), Quaternion.identity);
        Weapon instWeapon = _InstWeapon.GetComponent<Weapon>();
        instWeapon.OnWeaponLevelUp += HandleWeaponLevelUp;
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

    public HashSet<GameObject> GetBlueMobs() => _blueMobs;

    public HashSet<GameObject> GetGreenMobs() => _greenMobs;

    public HashSet<GameObject> GetYellowMobs() => _yellowMobs;
}