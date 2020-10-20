#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "ace_ballistics", "CUP_Weapons_Ammunition", "hlcweapons_SG550"};
        magazines[] = {
            QCLASS(2Rnd_P_000),
            QCLASS(8Rnd_P_000),
            QCLASS(6Rnd_P_000),
            QCLASS(8Rnd_S_AP20),
            QCLASS(6Rnd_S_AP20),
            QCLASS(6Rnd_P_UGL),
            QCLASS(6Rnd_S_UGL),
            QCLASS(30Rnd_545x39_Mag_Black),
            QCLASS(30Rnd_545x39_Mag_Plum),
            QCLASS(30Rnd_545x39_BP_Mag_Bakelite),
            QCLASS(30Rnd_545x39_BT_Mag_Bakelite),
            QCLASS(30Rnd_545x39_BP_Mag_Black),
            QCLASS(30Rnd_545x39_BT_Mag_Black),
            QCLASS(30Rnd_545x39_BP_Mag_Plum),
            QCLASS(30Rnd_545x39_BT_Mag_Plum),
            QCLASS(30Rnd_580x42_DBP88),
            QCLASS(30Rnd_580x42_DBP88_Green),
            QCLASS(100Rnd_580x42_DBP88),
            QCLASS(100Rnd_580x42_DBP88_Green),
            QCLASS(30Rnd_556x45_M855A1_AK),
            QCLASS(30Rnd_556x45_M855A1_AK_Red),
            QCLASS(30Rnd_556x45_M995_AK),
            QCLASS(30Rnd_556x45_M855A1_AUG),
            QCLASS(30Rnd_556x45_M855A1_AUG_Red),
            QCLASS(30Rnd_556x45_M995_AUG),
            QCLASS(30Rnd_556x45_M855A1_G36),
            QCLASS(30Rnd_556x45_M855A1_G36_Red),
            QCLASS(30Rnd_556x45_M995_G36),
            QCLASS(30Rnd_556x45_M855A1_SG550),
            QCLASS(30Rnd_556x45_M855A1_SG550_Red),
            QCLASS(30Rnd_556x45_M995_SG550),
            QCLASS(30Rnd_556x45_M855_PMAG),
            QCLASS(30Rnd_556x45_M855_PMAG_Tan),
            QCLASS(30Rnd_556x45_M855A1_PMAG),
            QCLASS(30Rnd_556x45_M855A1_PMAG_Tan),
            QCLASS(30Rnd_556x45_M995_PMAG),
            QCLASS(30Rnd_556x45_M995_PMAG_Tan),
            QCLASS(30Rnd_556x45_MK262_PMAG),
            QCLASS(30Rnd_556x45_MK262_PMAG_Tan),
            QCLASS(30Rnd_556x45_MK318_PMAG),
            QCLASS(30Rnd_556x45_MK318_PMAG_Tan),
            QCLASS(30Rnd_556x45_M855_EMAG),
            QCLASS(30Rnd_556x45_M855_EMAG_Tan),
            QCLASS(30Rnd_556x45_M855A1_EMAG),
            QCLASS(30Rnd_556x45_M855A1_EMAG_Tan),
            QCLASS(30Rnd_556x45_M995_EMAG),
            QCLASS(30Rnd_556x45_M995_EMAG_Tan),
            QCLASS(30Rnd_556x45_MK262_EMAG),
            QCLASS(30Rnd_556x45_MK262_EMAG_Tan),
            QCLASS(30Rnd_556x45_MK318_EMAG),
            QCLASS(30Rnd_556x45_MK318_EMAG_Tan),
            QCLASS(60Rnd_556x45_M855A1_SureFire),
            QCLASS(200Rnd_556x45_M855A1_Box),
            QCLASS(200Rnd_556x45_M855A1_Box_Red),
            QCLASS(200Rnd_556x45_M855A1_Box_Tracer),
            QCLASS(200Rnd_556x45_M855A1_Box_Tracer_Red),
            QCLASS(30Rnd_762x39_BP_Mag),
            QCLASS(30Rnd_762x39_AK12_BP_Mag),
            QCLASS(30Rnd_762x39_AK12_Arid_BP_Mag),
            QCLASS(30Rnd_762x39_AK12_Lush_BP_Mag),
            QCLASS(75Rnd_762x39_RPK_BP_Mag),
            QCLASS(20Rnd_762x51_FAL_AP_Mag),
            QCLASS(30Rnd_762x51_FAL_AP_Mag),
            QCLASS(10Rnd_762x54_SVD_AP_Mag)
        };
        author = ECSTRING(main,Author);
        authors[] = {"TyroneMF"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
