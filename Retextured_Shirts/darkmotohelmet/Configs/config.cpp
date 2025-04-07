class CfgPatches {
class Retextured_darkmotohelmet {
units[] = {};
weapons[] = {};
requiredVersion = 0.1;
requiredAddons[] = {"DZ_Clothes"};
};
};
class CfgVehicles {

    class darkmotohelmet_black_Retextured : darkmotohelmet_black {
        scope = 2;
        hiddenSelections[] = {"zbytek"};
        hiddenSelectionsTextures[] = {"darkmotohelmet\Textures\darkmotohelmet_black.paa"};
    };

};
