package app;

import util.Stats;

public class Main {

    public static void main(String[] args) {
        int atk;
        int baselevel = 140;
        int rangedModifiers;
        int skillModifiers;

        //MEDICO AMANHA

//        System.out.println("Version 0 (1 dex and 1 str)");
//        atk = 29;
//        rangedModifiers = 0;
//        skillModifiers = 0;
//        System.out.println("Arrow Storm damage: " + Stats.arrowStormDamage(atk, baselevel, rangedModifiers, skillModifiers));
//
//        System.out.println("Version 1 (120 dex and 1 str) memblatt");
//        atk = 148;
//        rangedModifiers = 12;
//        skillModifiers = 0;
//        System.out.println("Arrow Storm damage: " + Stats.arrowStormDamage(atk, baselevel, rangedModifiers, skillModifiers));
//
//        System.out.println("Version 2 (1 dex and 120 str) wakwak");
//        atk = 53 + 50 + 60;
//        rangedModifiers = 24;
//        skillModifiers = 0;
//        System.out.println("Arrow Storm damage: " + Stats.arrowStormDamage(atk, baselevel, rangedModifiers, skillModifiers));
//
//        System.out.println("Version 3 (120 dex and 120 str) memblatt");
//        atk = 181 + 50;
//        rangedModifiers = 36;
//        skillModifiers = 0;
//        System.out.println("Arrow Storm damage: " + Stats.arrowStormDamage(atk, baselevel, rangedModifiers, skillModifiers));
//
//        System.out.println("Version 4 (120 dex and 120 str) wakwak");
//        atk = 181 + 50 + 60;
//        rangedModifiers = 24;
//        skillModifiers = 0;
//        System.out.println("Arrow Storm damage: " + Stats.arrowStormDamage(atk, baselevel, rangedModifiers, skillModifiers));

        System.out.println("Version 5 (120 dex and 60 str) wakwak");
        atk = 181 + 50 + 30;
        rangedModifiers = 24;
        skillModifiers = 0;
        System.out.println("Arrow Storm damage: " + Stats.arrowStormDamage(atk, baselevel, rangedModifiers, skillModifiers));

        System.out.println("Version 6 (120 dex and 60 str) memblatt");
        atk = 181 + 50;
        rangedModifiers = 36;
        skillModifiers = 0;
        System.out.println("Arrow Storm damage: " + Stats.arrowStormDamage(atk, baselevel, rangedModifiers, skillModifiers));
    }
}
