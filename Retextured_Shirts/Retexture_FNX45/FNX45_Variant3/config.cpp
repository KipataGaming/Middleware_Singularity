class CfgPatches {
    class Retexture_FNX45 {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"DZ_Data", "DZ_Scripts"};
    };
};

class CfgVehicles {
    class FNX45_Base;
    class FNX45_Variant3 : FNX45_Base {
        scope = 2;
        displayName = "FNX45 Variant3";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"Retextured_Shirts/Retexture_FNX45_Variant3/FNX45_Variant3_Variant3.paa"};
    };
};
