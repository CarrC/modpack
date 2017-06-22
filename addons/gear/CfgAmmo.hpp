class CfgAmmo{
    class B_762x51_Ball;
    class UK3CB_BAF_762_Ball: B_762x51_Ball {
        ACE_bulletMass = 10.0438;
        hit = 14;
        caliber = 1.6;
    };
    class B_762x51_Tracer_Red;
    class UK3CB_BAF_762_Ball_Tracer_Red: B_762x51_Tracer_Red {
        ACE_bulletMass = 10.0438;
        hit = 14;
        caliber = 1.6;
    };
    class UK3CB_BAF_762_Ball_EL: UK3CB_BAF_762_Ball {
        hit = 12;
        tracerEndTime = 4.15957;
    };
    class UK3CB_BAF_762_Ball_Tracer_Red_EL: UK3CB_BAF_762_Ball_Tracer_Red {
        hit = 12;
        tracerEndTime = 4.15957;
    };
    class BulletBase;
    class UK3CB_BAF_B_12Gauge_Pellets: BulletBase {
        hit = 5; //Increased from 2, 4, 10
    };

    class MissileCore;
    class MissileBase: MissileCore {
        timeToLive = 30;
    };
    class M_PG_AT: MissileBase {
        class Components;
    };
    class ACE_Hellfire_AGM114K: M_PG_AT {
        SoundSetExplosion[] = { "DS_Ex_rocket_big_SoundSet", "DS_exploBig_Tail_placeholder_SoundSet" };
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 8000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 55;
                        angleRangeHorizontal = 30;
                        angleRangeVertical = 30;
                    };
                    class LaserSensorComponent: SensorTemplateLaser {
                        class AirTarget {
                            minRange = 8000;
                            maxRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 8000;
                            maxRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        maxTrackableSpeed = 55;
                        angleRangeHorizontal = 30;
                        angleRangeVertical = 30;
                    };
                };
            };
        };
        model = QPATHTOF(data\AGM114\AGM114Hellfire.p3d);
        proxyShape = QPATHTOF(data\AGM114\AGM114Hellfire_proxy.p3d);
        ace_rearm_dummy = QGVAR(ACE_Hellfire_AGM114);
    };
    class ACE_Hellfire_AGM114L: ACE_Hellfire_AGM114K {
        displayName = "AGM-114L";
        displayNameShort = "AGM-114L";
        description = "AGM-114L";
        descriptionShort = "AGM-114L";
        airLock = 0;
        irLock = 1;
        laserLock = 0;
        nvLock = 0;
        weaponLockSystem = "8 + 16";
        cmImmunity = 0.95;
        missileLockMaxDistance = 8000;
        missileLockMinDistance = 100;
        manualControl = 0;
        class ace_missileguidance {
            enabled = 0;
        };
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 8000;
                            maxRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 8000;
                            maxRange = 8000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        maxTrackableSpeed = 55;
                        angleRangeHorizontal = 30;
                        angleRangeVertical = 30;
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        minSpeedThreshold = 0;
                        maxSpeedThreshold = 0;
                    };
                };
            };
        };
    };

    class CUP_R_70mm_Hydra_HE;
    class CUP_R_CRV7_FAT: CUP_R_70mm_Hydra_HE {
        hit = 800;
        indirectHit = 8;
        indirectHitRange = 3;
        maxSpeed = 975;
        thrustTime = 0.93;
        thrust = 1150;
        aiAmmoUsageFlags = "128 + 256";
        ace_frag_enabled = 0;
        CraterEffects = "ATRocketCrater";
        explosionEffects = "ATRocketExplosion";
        class HitEffects {
            hitWater = "ImpactEffectsWaterBig";
        };
        SoundSetExplosion[] = { "DS_Ex_rocket_small_SoundSet", "DS_exploBig_Tail_placeholder_SoundSet" };
        ace_rearm_dummy = "ace_rearm_R_Hydra_HE";
    };
    class CUP_R_CRV7_HEISAP: CUP_R_CRV7_FAT {
        hit = 400;
        indirectHit = 60;
        indirectHitRange = 15;
        aiAmmoUsageFlags = "64 + 128";
        CraterEffects = "HERocketCrater";
        explosionEffects = "HERocketExplosion";
    };
    class CUP_B_30x113mm_M789_HEDP_Red_Tracer: BulletBase {
        SoundSetExplosion[] = { "DS_Ex_small_impact_SoundSet", "DS_exploSmall_Tail_placeholder_SoundSet", "Explosion_Debris_SoundSet" };
        CraterEffects = "ExploAmmoCrater";
        explosionEffects = "ExploAmmoExplosion";
        class HitEffects {
            hitWater = "ImpactEffectsWater";
        };
        hit = 105;
        indirectHit = 15;
        indirectHitRange = 4;
        tracerEndTime = 30;
        timeToLive = 30;
        caliber = 4.2;
    };
    class M_Titan_AA;
    class UKSF_Dummy_Missile: M_Titan_AA {
        indirectHitRange = 1;
        fusedistance = 0.01;
        inittime = 0.01;
        timetolive = 0.01;        
        ace_frag_enabled = 1;
        ace_frag_classes[] = { "ACE_frag_medium", "ACE_frag_medium_HD" };
        ace_frag_metal = 8000;
        ace_frag_charge = 2400;
        ace_frag_gurney_c = 2700;
        ace_frag_gurney_k = "1/2";
    };

    class B_556x45_Ball;
    class B_556x45_Ball_Rubber: B_556x45_Ball {
        hit = 0.25;
        cost = 1;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
    };
    class CUP_B_762x51_Tracer_White;
    class CUP_B_762x51_Tracer_White_Rubber: CUP_B_762x51_Tracer_White {
        hit = 0.25;
        cost = 1;
    };
    class B_127x99_Ball_Tracer_Red;
    class B_127x99_Ball_Tracer_White_Rubber: B_127x99_Ball_Tracer_Red {
        hit = 0.25;
        cost = 1;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
    };
    class CUP_R_SMAW_HEAA_N;
    class CUP_R_SMAW_HEAT_N_Rubber: CUP_R_SMAW_HEAA_N {
        hit = 0.5;
        indirecthit = 0;
        indirecthitrange = 0;
        cost = 1;
        ace_frag_enabled = 0;
        mass = 20;
    };
    class CUP_M_Stinger_AA;
    class CUP_M_Stinger_AA_Rubber: CUP_M_Stinger_AA {
        hit = 31;
        indirecthit = 10;
        indirecthitrange = 1;
        cost = 1;
        ace_frag_enabled = 0;
    };
    class Sh_120mm_APFSDS;
    class Sh_120mm_APFSDS_Tracer_White_Rubber: Sh_120mm_APFSDS {
        hit = 0.5;
        indirectHit = 0;
        indirectHitRange = 0;
        dangerRadiusHit = 0;
        suppressionRadiusHit = 0;
        cost = 1;
    };
    class Sh_120mm_HE;
    class Sh_120mm_HE_Tracer_White_Rubber: Sh_120mm_HE {
        hit = 0.5;
        indirectHit = 0;
        indirectHitRange = 0;
        dangerRadiusHit = 0;
        suppressionRadiusHit = 0;
        cost = 1;
        ace_frag_enabled = 0;
    };
    class CUP_B_25mm_HE_White_Tracer;
    class CUP_B_25mm_HE_White_Tracer_Rubber: CUP_B_25mm_HE_White_Tracer {
        hit = 0.5;
        indirectHit = 0;
        indirectHitRange = 0;
        cost = 1;
        ace_frag_enabled = 0;
    };
    class CUP_B_25mm_APFSDS_White_Tracer;
    class CUP_B_25mm_APFSDS_White_Tracer_Rubber: CUP_B_25mm_APFSDS_White_Tracer {
        hit = 0.5;
        indirectHit = 0;
        indirectHitRange = 0;
        cost = 1;
        ace_frag_enabled = 0;
    };
};
