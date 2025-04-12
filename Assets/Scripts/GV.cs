
public enum State {
    Idle, Attack, Moving, Death
}

public enum Debuff {
    Slow,
}

public enum PlayerSkills {
    Switching, RainFire, ProtectShield, SlowCircle, 
}

public enum Zone {
    Blue, Green, Yellow
}

public struct LvCol {
    public float reqEXP;
    public float AP;

    public LvCol(float reqexp, float ap) {
        reqEXP = reqexp;
        AP = ap;
    }
}

public struct MobCol {
    public float HP;
    public float AP;
    public float Exp;

    public MobCol(float hp, float ap, float exp) {
        HP = hp;
        AP = ap;
        Exp = exp;
    }
}