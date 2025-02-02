using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using Unity.VisualScripting.Dependencies.Sqlite;
using UnityEditor.Experimental.GraphView;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField]
    private GameObject _nexusPref; // 수정
    private GameObject _instantiatedNexus;

    [SerializeField]
    private GameObject _weaponPref; // 수정
    private GameObject _InstantiatedWeapon;

    [SerializeField]
    private List<GameObject> _monsters; // change private
    private Camera _mainCamera;

    [SerializeField]
    private RectTransform _nexusPointerUI;
    
    private void Awake() {
        CreateNexus(); // 싱글턴으로 수정
        CreateWeapon(); // 싱글턴으로 수정
        CreateMonster(); 
        _mainCamera = Camera.main;
        _mainCamera.GetComponent<CameraMovement>().SetPlayer(_InstantiatedWeapon);
    }

    public void HandleMonsterHit(MonsterBase instance) {
        Debug.Log("Monster Hit!");
    }

    public void HandleMonsterDeath(MonsterBase instance) {
        Debug.Log("Monster death!");
    }

    public void HandleNexusHit(NexusBase instance) {
        Debug.Log("Nexus Hit!"); // show nexus direction
        //ShowNexusPointingUI();
    }
    
    public void HandleNexusDeath(NexusBase instance) {
        Debug.Log("Nexus death!");
    }
    
    private void CreateNexus() {
        _instantiatedNexus = Instantiate(_nexusPref, new Vector2(0, -4), Quaternion.identity);
        NexusBase nexusInstance = _instantiatedNexus.GetComponent<NexusBase>();
        nexusInstance._OnNexusDeath += HandleNexusDeath;
        nexusInstance._OnNexusHit += HandleNexusHit;
    }

    private void CreateMonster() { // 수정
        foreach (GameObject monster in _monsters) {
            GameObject InstantiatedMonster = Instantiate(monster, new Vector2(0,4), Quaternion.identity);
            InitializeMonster(InstantiatedMonster);
        }
    }

    private void CreateWeapon() {
        _InstantiatedWeapon = Instantiate(_weaponPref, new Vector2(0, 0), Quaternion.identity);
    }

    private void InitializeMonster(GameObject instance) {
        MonsterBase monsterInstance = instance.GetComponent<MonsterBase>();
        if(monsterInstance != null) {
            monsterInstance.SetTargetNexus(_instantiatedNexus);
            monsterInstance._OnMonsterDeath += HandleMonsterDeath;
            monsterInstance._OnMonsterHit += HandleMonsterHit;
        } else {
            Debug.Log("monster Instance null");
        }
    }
}
// instantiatedNexus 이렇게 안하면 프리펩 원본에서 가져와버림