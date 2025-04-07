class CfgPatches {
    class Custom_Wolf {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"DZ_Data", "DZ_Scripts"};
    };
};

class CfgVehicles {
    class Animal_CanisLupus_Grey_Base;
    class Wolf : Animal_CanisLupus_Grey_Base {
        scope = 2;
        displayName = "Wolf";
        hiddenSelections[] = {"Camo","CamoHair"};
        hiddenSelectionsTextures[] = {"HH_Animals\wolves\wolf_Northern.paa","HH_Animals\wolves\Northern_fur_alpha.paa"};
    };
};
