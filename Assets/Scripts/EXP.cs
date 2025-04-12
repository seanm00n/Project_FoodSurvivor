using System.Collections;
using System.Collections.Generic;
using UnityEditor.Playables;
using UnityEngine;

public class EXP : MonoBehaviour
{
    public float exp { get; private set; }

    public void SetExp(float exp) {
        this.exp = exp;
    }
}
