class CfgPatches {
    class Retexture_TacticalGloves {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"DZ_Data", "DZ_Scripts"};
    };
};

class CfgVehicles {
    class TacticalGloves_Base;
    class TacticalGloves_Variant1 : TacticalGloves_Base {
        scope = 2;
        displayName = "TacticalGloves Variant1";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"Retextured_Shirts/Retexture_TacticalGloves/TacticalGloves_Variant1.paa"};
    };
};
