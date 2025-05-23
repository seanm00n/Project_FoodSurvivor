using UnityEngine;
using UnityEngine.UIElements;

public class BossRangedProj : MonsterProjBase
{
    protected override void Movement() {
        base.Movement();

        Vector3 dir = -transform.position;
        float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
        
        Quaternion targetrot = Quaternion.Euler(0, 0, angle);
        transform.rotation = Quaternion.Lerp(transform.rotation, targetrot, 3f * Time.deltaTime);
    }
}
