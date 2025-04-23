using UnityEngine;

public class BossProj : MonsterProjBase
{
    protected override void Countdown() {
        if(Time.timeSinceLevelLoad - _spawnTime >= ability.lifeTime) {
            _bossProjPool.Release(gameObject);
        }
    }
}
