
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
    public int HP;
    public int AP;
    public float Exp;

    public MobCol(int hp, int ap, float exp) {
        HP = hp;
        AP = ap;
        Exp = exp;
    }
}

public struct SkillCol {
    public float AP;
    public float MS;

    public SkillCol(float ap, float mx) {
        AP = ap;
        MS = mx;
    }
}