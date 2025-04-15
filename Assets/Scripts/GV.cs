
public enum State {
    Idle, Attack, Moving, Death
}

public enum Debuff {
    Slow,
}

public enum Skill {
    Switching, RainFire, ProtectShield, SlowCircle, Overdrive, VitalSurge
}

public enum Zone {
    Blue, Green, Yellow
}

public enum SliderType {
    BossHP, NexusHP, WeaponEXP
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

public struct MobSpawnCol {
    public int blueMax;
    public int greenMax;
    public int yellowMax;

    public MobSpawnCol(int bluemax, int greenmax, int yellowmax) {
        blueMax = bluemax;
        greenMax = greenmax;
        yellowMax = yellowmax;
    }
}