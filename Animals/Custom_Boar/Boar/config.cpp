class CfgPatches {
    class Custom_Boar {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"DZ_Data", "DZ_Scripts"};
    };
};

class CfgVehicles {
    class Animal_SusScrofa_Base;
    class Boar : Animal_SusScrofa_Base {
        scope = 2;
        displayName = "Boar";
        hiddenSelections[] = {"camo","fur"};
        hiddenSelectionsTextures[] = {"HH_Animals\boars\wild_boar_co.paa","HH_Animals\boars\wild_boar_fur_ca.paa"};
    };
};
