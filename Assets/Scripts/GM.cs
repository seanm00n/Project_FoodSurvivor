using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using Unity.VisualScripting.Dependencies.Sqlite;
using UnityEditor.Experimental.GraphView;
using UnityEngine;
using GameEnums;
using System;
using System.IO;

public class GM : MonoBehaviour
{
    public static GM I { get; private set; }

    [SerializeField]
    private GameObject _nexusPref; // 수정
    private GameObject _instantiatedNexus;

    [SerializeField]
    private GameObject _weaponPref; // 수정
    private GameObject _InstantiatedWeapon;
    private Camera _mainCamera;

    [SerializeField]
    private GameObject _blueZone;

    [SerializeField]
    private GameObject _blueMonsterPref;
    private Transform[] _blueSpawnPoint;
    private HashSet<GameObject> _blueMonsters;
    private int _blueMaxNum;
    private int _blueLastIndex;
    private bool _isBlueZoneOut = false;

    [SerializeField]
    private GameObject _greenZone;

    [SerializeField]
    private GameObject _greenMonsterPref;
    private Transform[] _greenSpawnPoint;
    private HashSet<GameObject> _greenMonsters;
    private int _greenMaxNum;
    private int _greenLastIndex;
    private bool _isGreenZoneOut = false;

    [SerializeField]
    private GameObject _yellowZone;

    [SerializeField]
    private GameObject _yellowMonsterPref;
    private Transform[] _yellowSpawnPoint;
    private HashSet<GameObject> _yellowMonsters;
    private int _yellowMaxNum;
    private int _yellowLastIndex;
    private bool _isYellowZoneOut = false;

    private int _hitCount = 0;

    public Dictionary<int, LvCol> _LvData { get; private set; }

    private void Awake() {
        if(I != null && I != this) {
            Destroy(gameObject);
            return;
        }
        I = this;

        _LvData = LoadLevelDataCSV();
        CreateWeapon(); 
        CreateNexus(); 
        _mainCamera = Camera.main;
        _mainCamera.GetComponent<CameraMovement>().SetPlayer(_InstantiatedWeapon);
        MonsterSpawnInit();
        _blueMonsters = new HashSet<GameObject>();
        _greenMonsters = new HashSet<GameObject>();
        _yellowMonsters = new HashSet<GameObject>();
    }

    private void Update() {
        MonsterSpawn(); // 1초 주기로 변경
        UpdateMonsterMax(); // Max 증가
    }

    private Dictionary<int, LvCol> LoadLevelDataCSV() { // 다른 데이터도 가능하게 수정
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

    private void MonsterSpawnInit() {
        _blueSpawnPoint = _blueZone.GetComponentsInChildren<Transform>();
        _greenSpawnPoint = _greenZone.GetComponentsInChildren<Transform>();
        _yellowSpawnPoint = _yellowZone.GetComponentsInChildren<Transform>();

        _blueMaxNum = 10;
        _greenMaxNum = 12;
        _yellowMaxNum = 15;
    }

    private void MonsterSpawn() {
        for(int i = _blueLastIndex; i < 8; ++i) {
            if(_blueMonsters.Count >= _blueMaxNum) break;
            GameObject instance = Instantiate(_blueMonsterPref, _blueSpawnPoint[i].position, Quaternion.identity);
            _blueMonsters.Add(instance);
            MonsterBase instanceBase = instance.GetComponent<MonsterBase>();
            instanceBase._monsterZone = Zone.Blue;
            instanceBase?.SetTargetNexus(_instantiatedNexus);
            instanceBase._OnMonsterDeath += HandleMonsterDeath;
            _blueLastIndex = i+1;
        }

        for(int i = _greenLastIndex; i < 8; ++i) {
            if(Time.time / 240 >= 1 || _isBlueZoneOut) {
                if(_greenMonsters.Count >= _greenMaxNum) break;
                GameObject instance = Instantiate(_greenMonsterPref, _greenSpawnPoint[i].position, Quaternion.identity);
                _greenMonsters.Add(instance);
                MonsterBase instanceBase = instance.GetComponent<MonsterBase>();
                instanceBase._monsterZone = Zone.Green;
                instanceBase?.SetTargetNexus(_instantiatedNexus);
                instanceBase._OnMonsterDeath += HandleMonsterDeath;
                _greenLastIndex = i + 1;
            }
        }

        for(int i = _yellowLastIndex; i < 8; ++i) {
            if(Time.time / 360 >= 1 || _isGreenZoneOut) {
                if(_yellowMonsters.Count >= _yellowMaxNum) break;
                GameObject instance = Instantiate(_yellowMonsterPref, _yellowSpawnPoint[i].position, Quaternion.identity);
                _yellowMonsters.Add(instance);
                MonsterBase instanceBase = instance.GetComponent<MonsterBase>();
                instanceBase._monsterZone = Zone.Yellow;
                instanceBase?.SetTargetNexus(_instantiatedNexus);
                instanceBase._OnMonsterDeath += HandleMonsterDeath;
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

    public void HandleMonsterDeath(MonsterBase instance) {
        switch(instance._monsterZone) {
            case Zone.Blue:
                if(_blueMonsters.Remove(instance.gameObject)) {
                    Destroy(instance.gameObject);
                }
                break;
            case Zone.Green:
                if(_greenMonsters.Remove(instance.gameObject)) {
                    Destroy(instance.gameObject);
                }
                break;
            case Zone.Yellow:
                if(_yellowMonsters.Remove(instance.gameObject)) {
                    Destroy(instance.gameObject);
                }
                break;
            default:
                Debug.Log("Monster doesn't have Zone");
                break;
        }
    }

    /*    public void HandleNexusHit(NexusBase instance) {
            Debug.Log("Nexus Hit!"); // show nexus direction
            //ShowNexusPointingUI();
        }*/

    public void HandleNexusDeath(NexusBase instance) {
        Debug.Log("Nexus death!");
    }


    private void CreateNexus() {
        _instantiatedNexus = Instantiate(_nexusPref, new Vector2(0, -4), Quaternion.identity);
        NexusBase nexusInstance = _instantiatedNexus.GetComponent<NexusBase>();
        nexusInstance._OnNexusDeath += HandleNexusDeath;
        //nexusInstance._OnNexusHit += HandleNexusHit;
    }

    private void CreateWeapon() {
        _InstantiatedWeapon = Instantiate(_weaponPref, new Vector2(0, 0), Quaternion.identity);
    }

    public void SetZoneOut(Zone monsterZone, bool value) {
        switch(monsterZone) {
            case Zone.Blue:
                _isBlueZoneOut = value;
                break;
            case Zone.Green:
                _isGreenZoneOut = value;
                break;
            case Zone.Yellow:
                _isYellowZoneOut = value;
                break;
            default:
                break;
        }
    }
}
// instantiatedNexus 이렇게 안하면 프리펩 원본에서 가져와버림