class CfgVehicles {
    class CUP_B_AH64D_NO_USA;
    class CUP_B_AH1_NO_BAF: CUP_B_AH64D_NO_USA {
        scope = 1;
        scopeCurator = 0;
    };
    class CUP_B_AH64D_AT_USA;
    class CUP_B_AH1_AT_BAF: CUP_B_AH64D_AT_USA {
        scope = 1;
        scopeCurator = 0;
    };
    class CUP_B_AH64D_ES_USA;
    class CUP_B_AH1_ES_BAF: CUP_B_AH64D_ES_USA {
        scope = 1;
        scopeCurator = 0;
    };
    class CUP_B_AH64D_USA;
    class CUP_B_AH1_BAF: CUP_B_AH64D_USA {
        scope = 1;
        scopeCurator = 0;
    };
    class CUP_B_AH64D_MR_USA;
    class CUP_B_AH1_MR_BAF: CUP_B_AH64D_MR_USA {
        scope = 1;
        scopeCurator = 0;
    };

    class AllVehicles;
    class Air: AllVehicles {
        class MarkerLights;
    };
    class Helicopter: Air {
        class HitPoints;
    };
    class Helicopter_Base_F: Helicopter {
        class Turrets;
        class AnimationSources;
    };
    class Heli_Attack_01_base_F: Helicopter_Base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
        class AnimationSources: AnimationSources {
            class Gatling;
            class Muzzle_flash;
        };
        class HitPoints: HitPoints {
            class HitHull;
            class HitAvionics;
            class HitVRotor;
            class HitHRotor;
            class HitEngine;
            class HitEngine1;
            class HitEngine2;
            class HitMissiles;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
            class HitGear;
            class HitFuel;
        };
        class CargoTurret;
        class Eventhandlers;
        class ViewOptics;
        class ViewPilot;
        class RotorLibHelicopterProperties;
        class WeaponCloudsMGun;
        class Sounds;
    };
    class UKSF_Apache_base: Heli_Attack_01_base_F {
        scope = 1;
        author = "UKSF";
        side = 1;
        faction = "CUP_B_GB";
        DLC = "CUP_Vehicles";
        displayName = "AH64D Apache Base";
        model = QPATHTOF(AH_BAF.p3d);
        picture = QPATHTOF(data\UI\Picture_ah64d_CA.paa);
        icon = QPATHTOF(data\UI\Icon_ah64d_CA.paa);
        availableForSupportTypes[] = { "CAS_Heli" };
        armor = 100;
        crewCrashProtection = 0.01;
        enableManualFire = 1;
        copilotHasFlares = 1;
        memoryPointLMissile = "missile_1";
        memoryPointRMissile = "missile_2";
        memoryPointLRocket = "Rocket_1";
        memoryPointRRocket = "Rocket_2";        
        memoryPointCM[] = { "flare_launcher1", "flare_launcher2" }; 
        memoryPointCMDir[] = { "flare_launcher1_dir", "flare_launcher2_dir" };
        radarType = 4;
        lockDetectionSystem = "1 + 2 + 4 + 8";
        showAllTargets = 2;
        destrType = "DestructWreck";
        crew = "CUP_B_BAF_Pilot_DDPM";
        gunnerCanSee = "1 + 2 + 4 + 8 + 16";
        driverCanSee = "1 + 2 + 4 + 8 + 16";
        driverAction = "AH64_Pilot_EP1";
        driverRightHandAnimName = "stick";
        driverLeftHandAnimName = "lever";
        driverLeftLegAnimName = "pedalL";
        driverRightLegAnimName = "pedalR";    
        driverCanEject = 1;        
        getInAction = "pilot_Heli_Light_02_Enter";
        getOutAction = "pilot_Heli_Light_02_Exit";
        typicalCargo[] = { "CUP_B_BAF_Pilot_DDPM", "CUP_B_BAF_Pilot_DDPM" };
        maximumLoad = 2000;
        backRotorForceCoef = 1.8;
        backRotorSpeed = 3.0;
        gearRetracting = 0;
        maxSpeed = 293;
        liftForceCoef = 1.8;
        selectionHRotorStill = "velka vrtule staticka";
        selectionHRotorMove = "velka vrtule blur";
        selectionVRotorStill = "mala vrtule staticka";
        selectionVRotorMove = "mala vrtule blur";        
        mainBladeCenter = "rotor_center";
        mainBladeRadius = 6.8;
        tailBladeCenter = "rotor_02_center";
        tailBladeRadius = 1.6;        
        driveOnComponent[] = { "wheel_1_1", "wheel_2_1", "wheel_12_2" };    
        soundLocked[] = { "\A3\Sounds_F\weapons\Rockets\opfor_lock_1", 1, 1};
        soundIncommingMissile[] = { "\A3\Sounds_F\weapons\Rockets\opfor_lock_2", 1, 1};        
        soundgetin[] = { QPATHTOF(data\sounds\close.ogg), 1, 1 };
        soundgetout[] = { QPATHTOF(data\sounds\open.ogg), 1, 1, 40 };
        class Sounds: Sounds {
            class RotorExt {
                cone[] = { 1.8, 3.14, 2, 0.9 };
                sound[] = { QPATHTOF(data\sounds\ah64_rotor_ext), 2, 1, 1500 };
                frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
                volume = "camPos * 3 * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust)";
            };
            class RotorInt {
                sound[] = { QPATHTOF(data\sounds\ah64_rotor_int), 0.75, 1 };
                frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/6)";
                volume = "(1 - camPos) * (rotorSpeed factor [0.3, 0.7]) * (1 + rotorThrust) * 0.5";
            };
            class RotorSwist {
                cone[] = { 3, 1.57, 3, 1.57 };
                frequency = 1;
                sound[] = { QPATHTOF(data\sounds\ah64_trotor_ext), 1, 1, 500 };
                volume = "camPos * (rotorThrust factor [0.7, 0.9])";
            };
        };
        weapons[] = { "CUP_weapon_mastersafe", "CUP_Vmlauncher_CRV7_FAT_veh", "CMFlareLauncher" };
        magazines[] = { "CUP_38Rnd_CRV7_FAT_M", "168Rnd_CMFlare_Chaff_Magazine" };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                turretInfoType = "RscOptics_GENERAL_FLIR";
                ace_laser_CanLockLaser = 1;
                ace_laser_selfdesignate_Enabled = 1;
                ace_fcs_Enabled = 1;
                ace_fcs_MaxDistance = 4500;
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
                minElev     = -60;         maxElev = +11;             initElev = 0;
                minTurn     = -110;     maxTurn = +110;         initTurn = 0;
                weapons[] = { "CUP_weapon_mastersafe", "CUP_Laserdesignator_mounted", "CUP_Vacannon_M230_veh_Enhanced", "CUP_AGM114L_Hellfire_II_Launcher_W", "CUP_AGM114N_Hellfire_II_Launcher_W" };
                magazines[] = { "Laserbatteries", "CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M", "CUP_4Rnd_AGM114L_Hellfire_II_M", "CUP_4Rnd_AGM114N_Hellfire_II_M" };
                gunnerAction = "AH64_gunner_EP1";
                gunnerGetInAction = "pilot_Heli_Light_02_Enter";
                gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
                memoryPointGunnerOptics = "gunnerview";
                canEject = 1;
                showAllTargets = 2;
                showHMD = 1;
                allowTabLock = 1;
                isCopilot = 1;
                pilotOpticsShowCursor = 1;
                gunnerOpticsShowCursor = 1;
                turretOpticsShowCursor = 1;
                turretCanSee = "1 + 2 + 4 + 8 + 16";                
                enableManualFire = 1; 
                stabilizedInAxes = 0; 
                gunnerUsesPilotView = 1;
                commanderUsesPilotView = 1;                        
                class OpticsIn {
                    class WideNGS {
                        opticsDisplayName = "WNGS";
                        initAngleX = 0;        minAngleX = -60;        maxAngleX = 30;
                        initAngleY = 0;        minAngleY = -120;        maxAngleY = 120;
                        initFov = 0.466;    minFov = 0.466;            maxFov = 0.466;
                        visionMode[] = { "Normal", "NVG", "Ti" };
                        thermalMode[] = {0, 1};
                        gunnerOpticsColor[] = {0, 0, 0, 1};
                        gunnerOpticsEffect[] = { "TankCommanderOptics1" };
                        gunnerOpticsModel = "CUP\AirVehicles\CUP_AirVehicles_AH64\gunnerOptics_ah64.p3d";
                        opticsPPEffects[] = { "OpticsCHAbera2", "OpticsBlur2" };
                        directionStabilized = 0;  
                    };
                    class Wide: WideNGS {
                        opticsDisplayName = "W";
                        initFov = 0.466;        minFov = 0.466;            maxFov = 0.466;
                        gunnerOpticsModel = "CUP\AirVehicles\CUP_AirVehicles_AH64\gunnerOptics_ah64.p3d";
                        directionStabilized = 1;  
                        stabilizedInAxes = 4;
                    };
                    class WideL: Wide {
                        opticsDisplayName = "WL";
                        initFov = 0.094;        minFov = 0.094;            maxFov = 0.094;
                        gunnerOpticsModel = "CUP\AirVehicles\CUP_AirVehicles_AH64\gunnerOptics_ah64.p3d";
                    };
                    class Medium: Wide {
                        opticsDisplayName = "M";
                        initFov = 0.019;        minFov = 0.019;            maxFov = 0.019;
                        gunnerOpticsModel = "CUP\AirVehicles\CUP_AirVehicles_AH64\gunnerOptics_ah64.p3d";
                    };
                    class Narrow: Wide {
                        opticsDisplayName = "N";
                        initFov = 0.006;        minFov = 0.006;            maxFov = 0.006;                        
                        gunnerOpticsModel = "CUP\AirVehicles\CUP_AirVehicles_AH64\gunnerOptics_ah64.p3d";
                    };
                };    
                class OpticsOut {
                    class Monocular {
                        initAngleX = 0;     minAngleX = -60;        maxAngleX = +60;
                        initAngleY = 0;     minAngleY = -120;        maxAngleY = +120;
                        initFov = 0.75;     minFov = 0.25;             maxFov = 1.25;
                        visionMode[] = { "Normal", "NVG" };
                        gunnerOpticsModel = "";
                        gunnerOpticsEffect[] = {};
                        directionStabilized = 0;
                    };
                };
            };
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_bench_1";
                gunnerCompartments = "";    
                memoryPointsGetInGunner = "pos cargo right";
                memoryPointsGetInGunnerDir = "pos cargo dir right";    
                gunnerName = "Passenger (Right Jumpseat)";
                proxyIndex = 1;
                minElev     = -50;         maxElev     = +15;         initElev = 0;
                minTurn     = 30;         maxTurn = -30;         initTurn = 0;
                isPersonTurret = 0;                        
                ejectDeadGunner = 0;                    
                enabledByAnimationSource = "";
                usepip = 0;
                gunnerOutOpticsModel = "";
                gunnerOpticsModel = "";
                memoryPointGunnerOptics = "";
                startEngine = 0;
                outGunnerMayFire = 0;
                inGunnerMayFire = 0;
                commanding = -2;
                selectionFireAnim = "";
            };
            class CargoTurret_02: CargoTurret_01 {                
                memoryPointsGetInGunner = "pos cargo left";        
                memoryPointsGetInGunnerDir = "pos cargo dir left";        
                gunnerName = "Passenger (Left Jumpseat)";
                proxyIndex = 2;
                minElev     = -50;         maxElev     = +15;         initElev = 0;
                minTurn     = -30;         maxTurn = 30;         initTurn = 0;
            };
        };
        hiddenSelections[] = { "camo1", "id1", "id2", "id3", "decals", "hellfire_pods1", "hellfire_pods2", "crv7_pods1", "crv7_pods2" };
        unitInfoType = "Rsc_UKSF_Air_Limited";
        unitInfoTypeLite = "Rsc_UKSF_Air_Limited";
        #include "MFDApache.hpp"    
        class RotorLibHelicopterProperties: RotorLibHelicopterProperties {
            rtd_center = "rtd_center";
            RTDconfig = QPATHTOF(RTD_AH_BAF_attack_01.xml);
        };    
        class ACRE {
            class CVC {
                hasCVC = 1;
            };
        };
        class Reflectors {
            class Middle {
                color[] = {7000, 7500, 10000};
                ambient[] = {70, 75, 100};
                intensity = 200;
                size = 1;
                innerAngle = 20;
                outerAngle = 75;
                coneFadeCoef = 10;                
                position = "L svetlo";
                direction = "konec L svetla";
                hitpoint = "L svetlo";
                selection = "L svetlo";
                useFlare = 1;
                dayLight = 1;
                flareSize = 6;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 4;
                };
            };
            class Middle_LensBloom: Middle {
                innerAngle = 170;
                outerAngle = 180;
                flareSize = 0.1;
                class Attenuation: Attenuation    {
                    start = 0;
                    hardLimitStart = 0.05;
                    hardLimitEnd = 0.1;
                };
            };
        };
        class HitPoints: HitPoints {
            class HitHull: HitHull    {
                name = "NEtrup";
                convexComponent = "NEtrup";
                visual = "trup";
                armor = 2;
                radius = 0.3;
            };
            class HitAvionics: HitAvionics    {
                name = "elektronika";
                convexComponent = "elektronika";        
                visual = "elektronika";
                armor = 2;                
                radius = 0.3;
            };
            class HitMissiles: HitMissiles    {
                name = "munice";
                convexComponent = "munice";        
                visual = "munice";
                armor = 2;                
                radius = 0.3;
            };
            class HitEngine1: HitEngine1 {
                name = "motor_1";
                convexComponent = "motor_1";
                visual = "motor_1";    
                minimalHit = 0.09;
                armor = 1;                
                radius = 0.3;
                explosionShielding = 4;
            };
            class HitEngine2: HitEngine2 {
                name = "motor_2";
                convexComponent = "motor_2";
                visual = "motor_2";
                minimalHit = 0.09;
                armor = 1;                
                radius = 0.3;
                explosionShielding = 4;
            };
            class HitEngine: HitEngine    {
                name = "";
                convexComponent = "";
                minimalHit = 0.09;
                armor = 1;                
                radius = 0.3;
                explosionShielding = 4;
            };
            class HitHRotor: HitHRotor    {
                name = "velka vrtule";
                convexComponent = "velka vrtule";        
                visual = "velka vrtule staticka";
                armor = 4;
                radius = 0.1;
                minimalHit = 0.09;
                explosionShielding = 2.5;
            };
            class HitVRotor: HitVRotor    {
                name = "mala vrtule";
                convexComponent = "mala vrtule";        
                visual = "mala vrtule staticka";    
                armor = 4;
                radius = 0.06;
                minimalHit = 0.05;
                explosionShielding = 6;            
            };
            class HitGear: HitGear {
                name = "gear";
                radius = 0.3;
            };
            class HitFuel: HitFuel {
                name = "fuel";
                armor = 1;
                radius = 0.25;
            };
            class HitGlass1: HitGlass1 {
                radius = 0.25;
                armor = 0.5;                
            };
            class HitGlass2: HitGlass2 {
                radius = 0.25;
                armor = 0.5;                
            };
            class HitGlass3: HitGlass3 {
                radius = 0.3;
                armor = 0.5;                
            };
            class HitGlass4: HitGlass4 {
                radius = 0.3;
                armor = 0.5;                
            };
            class HitGlass5: HitGlass5 {
                radius = 0.4;
                armor = 3;                
            };
            class HitGlass6: HitGlass6 {
                radius = 0.4;
                armor = 3;                
            };
        };        
        class AnimationSources: AnimationSources {
            class Muzzle_flash: Muzzle_flash {
                weapon = "CUP_Vacannon_M230_veh";
            };        
        };
        dammageHalf[] = { QPATHTOF(data\AH64D_mfd_normal_co.paa), QPATHTOF(data\AH64D_mfd_malfc_co.paa) };
        dammageFull[] = { QPATHTOF(data\AH64D_mfd_normal_co.paa), QPATHTOF(data\AH64D_mfd_malfc_co.paa) };
        class Damage {
            tex[] = {};
            mat[] = {
                QPATHTO_R(data\AH64D_body.rvmat),
                QPATHTO_R(data\AH64D_body_damage.rvmat),
                QPATHTO_R(data\AH64D_body_destruct.rvmat),
                QPATHTO_R(data\AH64D_details.rvmat),
                QPATHTO_R(data\AH64D_details_damage.rvmat),
                QPATHTO_R(data\AH64D_details_destruct.rvmat),
                QPATHTO_R(data\AH64D_inter.rvmat),
                QPATHTO_R(data\AH64D_inter_damage.rvmat),
                QPATHTO_R(data\AH64D_inter_destruct.rvmat),
                QPATHTO_R(data\AH64D_glass.rvmat),
                QPATHTO_R(data\AH64D_glass_damage.rvmat),
                QPATHTO_R(data\AH64D_glass_damage.rvmat),
                QPATHTO_R(data\AH64D_glass_in.rvmat),
                QPATHTO_R(data\AH64D_glass_in_damage.rvmat),
                QPATHTO_R(data\AH64D_glass_in_damage.rvmat),
                QPATHTO_R(data\NumberDecal.rvmat),
                QPATHTO_R(data\NumberDecal.rvmat),
                QPATHTO_R(data\NumberDecal_destruct.rvmat),                
                QPATHTO_R(data\default.rvmat),
                QPATHTO_R(data\default.rvmat),
                QPATHTO_R(data\default_destruct.rvmat)
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = 0;     minAngleX = -60;        maxAngleX = +60;
            initAngleY = 0;     minAngleY = -120;        maxAngleY = +120;
            initFov = 0.75;     minFov = 0.25;             maxFov = 1.25;
            visionMode[] = { "Normal", "NVG" };
            gunnerOpticsModel = "";
            gunnerOpticsEffect[] = {};
        };        
        class ViewOptics: ViewOptics {
            initFov = 0.75;     minFov = 0.25;             maxFov = 1.25;
            visionMode[] = { "Normal", "NVG" };
            gunnerOpticsModel = "";
            gunnerOpticsEffect[] = {};
        };
        class RenderTargets {};
        class MarkerLights {
            class PositionRed {
                color[] = {0.8, 0, 0};
                ambient[] = {0.08, 0, 0};
                intensity = 75;
                name = "cerveny pozicni";
                drawLight = 1;
                drawLightSize = 0.15;
                drawLightCenterSize = 0.04;
                activeLight = 0;
                blinking = 0;
                dayLight = 1;
                useFlare = 0;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 25;
                    quadratic = 50;
                    hardLimitStart = 0.75;
                    hardLimitEnd = 1;
                };
            };
            class PositionGreen: PositionRed {
                color[] = {0, 0.8, 0};
                ambient[] = {0, 0.08, 0};
                name = "zeleny pozicni";
            };
            class PositionWhite: PositionRed {
                color[] = {1, 1, 1};
                ambient[] = {0.1, 0.1, 0.1};
                name = "bily pozicni";
            };    
            class CollisionWhite: PositionRed {
                color[] = {1, 1, 1};
                ambient[] = {0.1, 0.1, 0.1};
                intensity = 10000;
                name = "Strobe_left";
                drawLightSize = 0.2;
                drawLightCenterSize = 0.08;
                blinking = 1;
                blinkingPattern[] = {0.1, 2.1};
                blinkingPatternGuarantee = 0;
            };    
            class CollisionRed: CollisionWhite {
                name = "Strobe_right";
                blinkingPattern[] = {0.1, 1.9};
            };        
        };              
        class UserActions {
            class jammerSemi {
                displayName = "<t color='#217cd1'>Jammer Semi-Auto</t>";
                position = "zamerny";
                radius = 10;
                priority = 4;
                onlyForPlayer = 0;
                hideOnUse = 0;
                condition = QUOTE((player isEqualTo (driver this) || player isEqualTo (gunner this)) && {(this getVariable [ARR_2(QQGVAR(jammerMode),0)]) != 1});
                statement = QUOTE(this setVariable [ARR_3(QQGVAR(jammerMode),1,true)]);
            };
            class jammerAuto {
                displayName = "<t color='#217cd1'>Jammer Auto</t>";
                position = "zamerny";
                radius = 10;
                priority = 4;
                onlyForPlayer = 0;
                hideOnUse = 0;
                condition = QUOTE((player isEqualTo (driver this) || player isEqualTo (gunner this)) && {(this getVariable [ARR_2(QQGVAR(jammerMode),0)]) != 2});
                statement = QUOTE(this setVariable [ARR_3(QQGVAR(jammerMode),2,true)]);
            };
            class jammerOff {
                displayName = "<t color='#217cd1'>Jammer Off</t>";
                position = "zamerny";
                radius = 10;
                priority = 4;
                onlyForPlayer = 0;
                hideOnUse = 0;
                condition = QUOTE((player isEqualTo (driver this) || player isEqualTo (gunner this)) && {(this getVariable [ARR_2(QQGVAR(jammerMode),0)]) != 0});
                statement = QUOTE(this setVariable [ARR_3(QQGVAR(jammerMode),0,true)]);
            };
        };
    };
    class UKSF_Apache_AH1: UKSF_Apache_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Apache AH1";
        hiddenSelectionsTextures[] = { QPATHTOF(data\ah1_baf_body_co.paa), "", "", "", QPATHTOF(data\decals_ca.paa), QPATHTOF(data\ah64d_details_co.paa), "", "", QPATHTOF(data\ah64d_details_co.paa) };
    };
};
