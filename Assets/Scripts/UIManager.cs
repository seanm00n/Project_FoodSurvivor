using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using Unity.VisualScripting;
using UnityEngine;
using Random = UnityEngine.Random;
using System.Linq;

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

    public void DrawSelectUI(List<string> selects) {
        // 선택지를 UI에 표시
        // 선택되면 OnSkillSelect(string chose); 실행
    }
}