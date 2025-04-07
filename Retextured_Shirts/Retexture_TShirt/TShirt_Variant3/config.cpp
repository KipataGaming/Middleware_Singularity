class CfgPatches {
    class Retexture_TShirt {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"DZ_Data", "DZ_Scripts"};
    };
};

class CfgVehicles {
    class TShirt_Base;
    class TShirt_Variant3 : TShirt_Base {
        scope = 2;
        displayName = "TShirt Variant3";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"Retextured_Shirts/Retexture_TShirt/TShirt_Variant3.paa"};
    };
};
