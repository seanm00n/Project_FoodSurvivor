using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using Unity.VisualScripting;
using UnityEngine;
using Random = UnityEngine.Random;
using System.Linq;
using System;

public class UIManager : MonoBehaviour
{
    public static UIManager I { get; private set; }

    private void Awake() {
        if(I != null && I != this) {
            Destroy(gameObject);
            return;
        }
        I = this;
    }

    public void DrawSelectUI() {
        List<string> options = Enum.GetNames(typeof(Skills)).ToList();
        List<string> selects = new List<string>();

        for(int i = 0; i < 6 && selects.Count < 3; ++i) {
            string select = options.OrderBy(x => Random.value).First();
            if(Weapon.I.instSkills[select].ability.Lv < 5 && !selects.Contains(select)) {
                selects.Add(select);
            }
        }

        //...
    }

    public void DrawNexusHitUI() {

    }

    public void DrawGameOverUI() {

    }
}