class CUP_C130J_Base: Plane_Base_F {
    memoryPointsGetInCargo = "pos cargo";
    memoryPointsGetInCargoDir = "pos cargo dir";
};
class CUP_B_C130J_GB: CUP_C130J_Base {
    crew = "UKSF_B_Pilot_617";
    typicalCargo[] = { "UKSF_B_Pilot_617" };
};
class CUP_C130J_VIV_Base;
class CUP_B_C130J_Cargo_GB: CUP_C130J_VIV_Base {
    crew = "UKSF_B_Pilot_617";
    typicalCargo[] = { "UKSF_B_Pilot_617" };
};
