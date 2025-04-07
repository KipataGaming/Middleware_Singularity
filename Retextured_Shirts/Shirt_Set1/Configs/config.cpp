class CfgPatches {
class Retextured_Shirt_Set1 {
units[] = {};
weapons[] = {};
requiredVersion = 0.1;
requiredAddons[] = {"DZ_Clothes"};
};
};
class CfgVehicles {

    class Shirt_Blue_Retextured : Shirt_Blue {
        scope = 2;
        hiddenSelections[] = {"zbytek"};
        hiddenSelectionsTextures[] = {"Shirt_Set1\Textures\Shirt_Blue.paa"};
    };

};
