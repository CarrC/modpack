#define COMPONENT vehicles
#define COMPONENT_BEAUTIFIED Vehicles
#include "\u\uksf\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS

#include "\u\uksf\addons\main\script_macros.hpp"

#define COVER_DEPLOY_TIME 15

#define COVER_ACTIONS \
    class ACE_Actions: ACE_Actions { \
        class ACE_MainActions: ACE_MainActions { \
            class ACE_deployCoverWoodland { \
                displayName = "Deploy Cover (Woodland)"; \
                condition = QUOTE(!(_target getVariable [ARR_2(QQGVAR(deployed),false)]) && (isNull (_target getVariable [ARR_2(QQGVAR(coverObj),objNull)]))); \
                statement = QUOTE([ARR_3(_target,_player,'CamoNet_BLUFOR_big_F')] call FUNC(deployCover)); \
                showDisabled = 0; \
                priority = 1; \
            }; \
            class ACE_deployCoverDesert { \
                displayName = "Deploy Cover (Desert)"; \
                condition = QUOTE(!(_target getVariable [ARR_2(QQGVAR(deployed),false)]) && (isNull (_target getVariable [ARR_2(QQGVAR(coverObj),objNull)]))); \
                statement = QUOTE([ARR_3(_target,_player,'Land_CamoNetB_NATO_EP1')] call FUNC(deployCover)); \
                showDisabled = 0; \
                priority = 1; \
            }; \
            class ACE_concealCover { \
                displayName = "Conceal Cover"; \
                condition = QUOTE((_target getVariable [ARR_2(QQGVAR(deployed),false)]) && !(isNull (_target getVariable [ARR_2(QQGVAR(coverObj),objNull)])) && ((_target distance (_target getVariable [ARR_2(QQGVAR(coverObj),objNull)])) < 10)); \
                statement = QUOTE([ARR_2(_target,_player)] call FUNC(concealCover)); \
                showDisabled = 0; \
                priority = 1; \
            }; \
        }; \
    };

#define COVER_MEDICAL_ACTIONS \
    class ACE_Actions: ACE_Actions { \
        class ACE_MainActions: ACE_MainActions { \
            class ACE_deployCoverWoodland { \
                displayName = "Deploy Medical Cover (Woodland)"; \
                condition = QUOTE(!(_target getVariable [ARR_2(QQGVAR(deployed),false)]) && (isNull (_target getVariable [ARR_2(QQGVAR(coverObj),objNull)]))); \
                statement = ""; \
                class ACE_left { \
                    displayName = "Left"; \
                    condition = QUOTE(!(_target getVariable [ARR_2(QQGVAR(deployed),false)]) && (isNull (_target getVariable [ARR_2(QQGVAR(coverObj),objNull)]))); \
                    statement = QUOTE([ARR_5(_target,_player,'CamoNet_BLUFOR_open_F',[ARR_3(-3.1,-7,-1)],185)] call FUNC(deployCoverMedical)); \
                    showDisabled = 0; \
                    priority = 1; \
                }; \
                class ACE_right { \
                    displayName = "Right"; \
                    condition = QUOTE(!(_target getVariable [ARR_2(QQGVAR(deployed),false)]) && (isNull (_target getVariable [ARR_2(QQGVAR(coverObj),objNull)]))); \
                    statement = QUOTE([ARR_5(_target,_player,'CamoNet_BLUFOR_open_F',[ARR_3(3.1,-7.7,-1)],-5)] call FUNC(deployCoverMedical)); \
                    showDisabled = 0; \
                    priority = 1; \
                }; \
            }; \
            class ACE_deployCoverDesert { \
                displayName = "Deploy Medical Cover (Desert)"; \
                condition = QUOTE(!(_target getVariable [ARR_2(QQGVAR(deployed),false)]) && (isNull (_target getVariable [ARR_2(QQGVAR(coverObj),objNull)]))); \
                statement = ""; \
                class ACE_left { \
                    displayName = "Left"; \
                    condition = QUOTE(!(_target getVariable [ARR_2(QQGVAR(deployed),false)]) && (isNull (_target getVariable [ARR_2(QQGVAR(coverObj),objNull)]))); \
                    statement = QUOTE([ARR_5(_target,_player,'Land_CamoNetVar_NATO_EP1',[ARR_3(-3.1,-7,-1)],185)] call FUNC(deployCoverMedical)); \
                    showDisabled = 0; \
                    priority = 1; \
                }; \
                class ACE_right { \
                    displayName = "Right"; \
                    condition = QUOTE(!(_target getVariable [ARR_2(QQGVAR(deployed),false)]) && (isNull (_target getVariable [ARR_2(QQGVAR(coverObj),objNull)]))); \
                    statement = QUOTE([ARR_5(_target,_player,'Land_CamoNetVar_NATO_EP1',[ARR_3(3.1,-7.7,-1)],-5)] call FUNC(deployCoverMedical)); \
                    showDisabled = 0; \
                    priority = 1; \
                }; \
            }; \
            class ACE_concealCover { \
                displayName = "Conceal Medical Cover"; \
                condition = QUOTE((_target getVariable [ARR_2(QQGVAR(deployed),false)]) && !(isNull (_target getVariable [ARR_2(QQGVAR(coverObj),objNull)])) && ((_target distance (_target getVariable [ARR_2(QQGVAR(coverObj),objNull)])) < 10)); \
                statement = QUOTE([ARR_2(_target,_player)] call FUNC(concealCover)); \
                showDisabled = 0; \
                priority = 1; \
            }; \
        }; \
    };

#define REARM_ACTIONS \
    class UserActions { \
        class ResupplyAmmo { \
            displayName = "<t color = '#217cd1'>Reload</t>"; \
            displayNameDefault = "<img image = 'A3\ui_f\data\igui\cfg\actions\reammo_ca' size = '2' shadow = 'true' />"; \
            position = "crew_center"; \
            radius = 4; \
            priority = 5.92; \
            showwindow = 0; \
            condition = "this call UK3CB_BAF_Vehicles_Weapons_fnc_can_resupply_ammo"; \
            statement = "[this, player] call UK3CB_BAF_Vehicles_Weapons_fnc_resupply_ammo"; \
            onlyforplayer = 1; \
        }; \
    };

#define RIDGEBACK_INVENTORY(AMMO) \
    class TransportMagazines { \
        MACRO_ADDMAGAZINE(CUP_1Rnd_StarFlare_White_M203,10); \
        MACRO_ADDMAGAZINE(SmokeShell,10); \
        MACRO_ADDMAGAZINE(SmokeShellBlue,2); \
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,2); \
        MACRO_ADDMAGAZINE(UK3CB_BAF_762_20Rnd_T,5); \
        MACRO_ADDMAGAZINE(SMA_30Rnd_556x45_M855A1_Tracer,20); \
        MACRO_ADDMAGAZINE(AMMO,9); \
        delete _xx_CUP_30Rnd_556x45_Stanag; \
        delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249; \
        delete _xx_CUP_1Rnd_HEDP_M203; \
        delete _xx_CUP_M136_M; \
        delete _xx_CUP_HandGrenade_M67; \
        delete _xx_SmokeShellOrange; \
        delete _xx_Chemlight_Red; \
    }; \
    class TransportItems { \
        MACRO_ADDITEM(ACE_M26_Clacker,1); \
        MACRO_ADDITEM(ACRE_PRC117F,1); \
        MACRO_ADDITEM(ACE_CableTie,5); \
        MACRO_ADDITEM(ACE_EarPlugs,2); \
        MACRO_ADDITEM(CUP_NVG_PVS15_black,2); \
        MACRO_ADDITEM(Toolkit,1); \
        MACRO_ADDITEM(UK3CB_BAF_Javelin_CLU,1); \
        delete _xx_FirstAidKit; \
        delete _xx_MediKit; \
    }; \
    class TransportWeapons { \
        MACRO_ADDWEAPON(UK3CB_BAF_Javelin_Slung_Tube,2); \
        MACRO_ADDWEAPON(UK3CB_BAF_AT4_CS_AT_Launcher,2); \
        delete _xx_CUP_arifle_L85A2_G; \
        delete _xx_CUP_launch_M136; \
    }; \
    class TransportBackpacks { \
        delete _xx_CUP_B_Bergen_BAF; \
    };

#define RIDGEBACK_INVENTORY_HMG RIDGEBACK_INVENTORY(UK3CB_BAF_127_100Rnd)
#define RIDGEBACK_INVENTORY_GMG RIDGEBACK_INVENTORY(UK3CB_BAF_32Rnd_40mm_G_Box)
#define RIDGEBACK_INVENTORY_GPMG RIDGEBACK_INVENTORY(UK3CB_BAF_762_100Rnd_T)

#define JACKAL_INVENTORY(AMMO) \
    class TransportMagazines { \
        MACRO_ADDMAGAZINE(CUP_1Rnd_StarFlare_White_M203,10); \
        MACRO_ADDMAGAZINE(SmokeShell,10); \
        MACRO_ADDMAGAZINE(SmokeShellBlue,2); \
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,2); \
        MACRO_ADDMAGAZINE(UK3CB_BAF_762_20Rnd_T,4); \
        MACRO_ADDMAGAZINE(SMA_30Rnd_556x45_M855A1_Tracer,10); \
        MACRO_ADDMAGAZINE(UK3CB_BAF_762_100Rnd_T,5); \
        MACRO_ADDMAGAZINE(AMMO,9); \
    }; \
    class TransportItems { \
        MACRO_ADDITEM(ACE_M26_Clacker,1); \
        MACRO_ADDITEM(ACRE_PRC117F,1); \
        MACRO_ADDITEM(ACE_CableTie,5); \
        MACRO_ADDITEM(ACE_EarPlugs,2); \
        MACRO_ADDITEM(CUP_NVG_PVS15_black,2); \
        MACRO_ADDITEM(Toolkit,1); \
        MACRO_ADDITEM(UK3CB_BAF_Javelin_CLU,1); \
    }; \
    class TransportWeapons { \
        MACRO_ADDWEAPON(UK3CB_BAF_Javelin_Slung_Tube,2); \
        MACRO_ADDWEAPON(UK3CB_BAF_AT4_CS_AT_Launcher,2); \
    }; \
    class TransportBackpacks {};

#define JACKAL_INVENTORY_HMG JACKAL_INVENTORY(UK3CB_BAF_127_100Rnd)
#define JACKAL_INVENTORY_GMG JACKAL_INVENTORY(UK3CB_BAF_32Rnd_40mm_G_Box)
