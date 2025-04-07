class CfgPatches {
    class Retexture_TacticalGloves {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"DZ_Data", "DZ_Scripts"};
    };
};

class CfgVehicles {
    class TacticalGloves_Base;
    class TacticalGloves_Variant2 : TacticalGloves_Base {
        scope = 2;
        displayName = "TacticalGloves Variant2";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"Retextured_Shirts/Retexture_TacticalGloves/TacticalGloves_Variant2.paa"};
    };
};
