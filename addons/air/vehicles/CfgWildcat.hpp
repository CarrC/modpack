class Heli_light_03_base_F: Helicopter_Base_F {
    class Components;
};
class UK3CB_BAF_Wildcat_Base: Heli_light_03_base_F {
    faction = "CUP_B_GB";
    crew = "UKSF_B_Pilot_7";
    typicalCargo[] = { "UKSF_B_Pilot_7" };
    fuelCapacity = 400; // 742
    startDuration = 30;
    mainRotorSpeed = 1;
    bodyFrictionCoef = 0.5; // 1
    liftForceCoef = 0.95; // 1
    maxFordingDepth = 1.2; // 0.7
    unitInfoType = "RscUnitInfoNoSpeed";
    attenuationEffectType = "SemiOpenHeliAttenuation";
    #include "MFDCAS.hpp"
    class Components: Components {
        class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
            defaultDisplay = "EmptyDisplay";
            class Components {
                class SensorsDisplay {
                    componentType = "SensorsDisplayComponent";
                    range[] = { 16000, 8000, 4000, 2000 };
                    resource = "RscCustomInfoSensors";
                };
                class CrewDisplay {
                    componentType = "CrewDisplayComponent";
                    resource = "RscCustomInfoCrew";
                };
                class MinimapDisplay {
                    componentType = "MinimapDisplayComponent";
                    resource = "RscCustomInfoMiniMap";
                };
                class EmptyDisplay {
                    componentType = "EmptyDisplayComponent";
                };
            };
        };
        class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
            defaultDisplay = "SensorsDisplay";
            class Components {
                class SensorsDisplay {
                    componentType = "SensorsDisplayComponent";
                    range[] = { 16000, 8000, 4000, 2000 };
                    resource = "RscCustomInfoSensors";
                };
                class CrewDisplay {
                    componentType = "CrewDisplayComponent";
                    resource = "RscCustomInfoCrew";
                };
                class MinimapDisplay {
                    componentType = "MinimapDisplayComponent";
                    resource = "RscCustomInfoMiniMap";
                };
                class EmptyDisplay {
                    componentType = "EmptyDisplayComponent";
                };
            };
        };
        class SensorsManagerComponent {
            class Components {
                class IRSensorComponent: SensorTemplateIR {
                    class AirTarget {
                        minRange = 500;
                        maxRange = 4000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget {
                        minRange = 500;
                        maxRange = 3000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                    maxTrackableSpeed = 70;
                    animDirection = "mainGun";
                    angleRangeHorizontal = 26;
                    angleRangeVertical = 26;
                };
                class VisualSensorComponent: SensorTemplateVisual {
                    class AirTarget {
                        minRange = 500;
                        maxRange = 3000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = 1;
                    };
                    class GroundTarget {
                        minRange = 500;
                        maxRange = 2000;
                        objectDistanceLimitCoef = 1;
                        viewDistanceLimitCoef = 1;
                    };
                    maxTrackableSpeed = 70;
                    animDirection = "mainGun";
                    angleRangeHorizontal = 26;
                    angleRangeVertical = 26;
                };
                class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                    class AirTarget {
                        minRange = 5000;
                        maxRange = 5000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget {
                        minRange = 4000;
                        maxRange = 4000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    maxTrackableSpeed = 125;
                    angleRangeVertical = 90;
                    groundNoiseDistanceCoef = -1;
                    maxGroundNoiseDistance = -1;
                    minSpeedThreshold = 0;
                    maxSpeedThreshold = 0;
                    aimDown = 30;
                };
                class PassiveSensorComponent: SensorTemplatePassiveRadar {};
                class LaserSensorComponent: SensorTemplateLaser {};
                class NVSensorComponent: SensorTemplateNV {};
                class DataLinkSensorComponent: SensorTemplateDataLink {};
            };
        };
    };
    ace_cookoff_cookoffSelections[] = { "motor" };
    INVENTORY_AIRCRAFT
};
class UK3CB_BAF_Wildcat_AH1_Base: UK3CB_BAF_Wildcat_Base {
};
class UK3CB_BAF_Wildcat_AH1_6_Base: UK3CB_BAF_Wildcat_AH1_Base {
    class TransportBackpacks {};
};
class UK3CB_BAF_Wildcat_AH1_8_Base: UK3CB_BAF_Wildcat_AH1_Base {
    crew = "UKSF_B_Pilot_7";
    typicalCargo[] = { "UKSF_B_Pilot_7" };
    class TransportBackpacks {};
};
class UK3CB_BAF_Wildcat_AH1_TRN_8A: UK3CB_BAF_Wildcat_AH1_8_Base {
    faction = "CUP_B_GB";
};
class UK3CB_BAF_Wildcat_AH1_CAS_6A: UK3CB_BAF_Wildcat_AH1_6_Base {
    faction = "CUP_B_GB";
    crew = "UKSF_B_Pilot_656";
    typicalCargo[] = { "UKSF_B_Pilot_656" };
};
class UK3CB_BAF_Wildcat_AH1_CAS_6B: UK3CB_BAF_Wildcat_AH1_CAS_6A {
    scope = 0;
    scopeCurator = 0;
};
class UK3CB_BAF_Wildcat_AH1_CAS_6C: UK3CB_BAF_Wildcat_AH1_CAS_6A {
    scope = 0;
    scopeCurator = 0;
};
class UK3CB_BAF_Wildcat_AH1_CAS_6D: UK3CB_BAF_Wildcat_AH1_CAS_6A {
    scope = 0;
    scopeCurator = 0;
};
class UK3CB_BAF_Wildcat_AH1_CAS_8A: UK3CB_BAF_Wildcat_AH1_8_Base {
    faction = "CUP_B_GB";
    crew = "UKSF_B_Pilot_656";
    typicalCargo[] = { "UKSF_B_Pilot_656" };
};
class UK3CB_BAF_Wildcat_AH1_CAS_8B: UK3CB_BAF_Wildcat_AH1_CAS_8A {
    scope = 0;
    scopeCurator = 0;
};
class UK3CB_BAF_Wildcat_AH1_CAS_8C: UK3CB_BAF_Wildcat_AH1_CAS_8A {
    scope = 0;
    scopeCurator = 0;
};
class UK3CB_BAF_Wildcat_AH1_CAS_8D: UK3CB_BAF_Wildcat_AH1_CAS_8A {
    scope = 0;
    scopeCurator = 0;
};
class UK3CB_BAF_Wildcat_AH1_HEL_6A: UK3CB_BAF_Wildcat_AH1_6_Base {
    scope = 0;
    scopeCurator = 0;
};
class UK3CB_BAF_Wildcat_AH1_HEL_8A: UK3CB_BAF_Wildcat_AH1_8_Base {
    scope = 0;
    scopeCurator = 0;
};
class UK3CB_BAF_Wildcat_HMA2_Base: UK3CB_BAF_Wildcat_Base {
    crew = "UKSF_B_Pilot_7";
    typicalCargo[] = { "UKSF_B_Pilot_7" };
    class TransportBackpacks {};
};
class UK3CB_BAF_Wildcat_HMA2_8_Base: UK3CB_BAF_Wildcat_HMA2_Base {
    crew = "UKSF_B_Pilot_7";
    typicalCargo[] = { "UKSF_B_Pilot_7" };
};
class UK3CB_BAF_Wildcat_HMA2_TRN_8A: UK3CB_BAF_Wildcat_HMA2_8_Base {
    faction = "CUP_B_GB";
};
