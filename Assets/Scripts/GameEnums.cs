
namespace GameEnums {
    public enum MonsterState {
        Idle, Attack, Moving, Death
    }

    public enum Debuff {
        Slow,
    }

    public enum NexusSkills {
        ProtectShield, SlowCircle
    }

    public enum PlayerSkills {
        Switching, RainFire
    }

    public enum Zone {
        Blue, Green, Yellow
    }
}

public struct LvCol {
    public float reqEXP;
    public float AP;

    public LvCol(float value1, float value2) {
        reqEXP = value1;
        AP = value2;
    }
}