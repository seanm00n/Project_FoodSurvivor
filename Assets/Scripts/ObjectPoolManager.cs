using NUnit.Framework;
using System.Collections.Generic;
using System.Security.Cryptography;
using UnityEngine;
using UnityEngine.Pool;

public class ObjectPoolManager : MonoBehaviour
{
    private ObjectPool<GameObject> _bossProjPool;
    private const int _maxSize = 384;
    private const int _initSize = 192;
    private GameObject _bossProjPref;

    private void Awake() {
        _bossProjPool = new ObjectPool<GameObject>(
            createFunc: () => Instantiate(_bossProjPref),
            actionOnGet: (obj) => obj.SetActive(true),
            actionOnRelease: (obj) => obj.SetActive(false),
            actionOnDestroy: (obj) => Destroy(_bossProjPref),
            collectionCheck: true,
            defaultCapacity: _initSize,
            maxSize: _maxSize
        );

        for(int i = 0; i < 192; ++i) {
            GameObject go = _bossProjPool.Get();     // 생성
            _bossProjPool.Release(go);               // 풀에 되돌림 (비활성화됨)
        }
    }

    private void Start() {
        GameObject go = _bossProjPool.Get();

        go.GetComponent<MonsterProjBase>().SetAbility(new Ability());

        _bossProjPool.Release(go);
    }
}
