package util;

public class Stats {

    public final static float baseDamage = (float) 324800.0;

    public static float arrowStormDamage(int atk, int baselevel, int rangedmodifier, int skillmodifier){
        int skillLevel = 10;
        return (atk*
                ((1000*skillLevel*80)/100)*
                baseLevelModifier(baselevel)*
                rangedDamageModifier(rangedmodifier)*
                skillmodifier(skillLevel)
        );
    }

    public static float baseLevelModifier(int baseLevel)
    {
        float resultBase = ((float) baseLevel / 100);
        return resultBase;
    }

    public static float rangedDamageModifier(float rangedModifiers){
        float resultRanged = (100 + (float) rangedModifiers)/100;
        return resultRanged;
    }

    public static float skillmodifier(int skillModifiers) {
        float resultSkill = (100 + skillModifiers)/100;
        return resultSkill;
    }

}
