#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "tacgt_hgun_Glock18_Tan",
            "tacgt_hgun_Glock18_Black"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt"};
        author = "";
        authors = {""};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
