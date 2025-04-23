using UnityEngine;

public class BossProj : MonsterProjBase
{
    protected override void Countdown() {
        if(Time.timeSinceLevelLoad - _spawnTime >= ability.lifeTime) {
            Debug.Log($"[BossProj] Released: {gameObject.name}");
            _bossProjPool.Release(gameObject); // ÀÇ½É
        }
    }
}
