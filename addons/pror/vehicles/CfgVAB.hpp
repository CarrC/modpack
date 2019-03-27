// Unarmed VAB
class I_MRAP_03_F; // Base class
class PROR_VAB_Unarmed: I_MRAP_03_F { // Custom class, inheriting from base. Custom class needs to be in units[] array in config.cpp
    scope = 2;
    side = 0;
    faction = "UKSF_PROR";
    displayName = "VAB Unarmed";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_VAB_Unarmed.jpg); // 3den preview image. Must be created manually
    crew = "PROR_R"; // Crew unit class
    typicalCargo[] = {
        "PROR_R"
    };
    hiddenSelectionsTextures[] = { "\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa", "\a3\data_f\vehicles\turret_co.paa" };
    class TransportMagazines {};
    class TransportItems {};
    class TransportWeapons {};
    class TransportBackpacks {};
};
// class Inegal_VAB_D_Unarmed: Inegal_VAB_Unarmed {
//     displayName = "VAB Unarmed (Diablerie)";
//     crew = "Inegal_Diablerie_Se";
//     typicalCargo[] = {
//         "Inegal_Diablerie_Se"
//     };
// };

// // HMG
// class I_MRAP_03_hmg_F;
// class Inegal_VAB_HMG: I_MRAP_03_hmg_F {
//     scope = 2;
//     side = 0;
//     faction = "UKSF_Inegal";
//     displayName = "VAB HMG";
//     editorPreview = QPATHTOEF(common,data\previews\Inegal_VAB_HMG.jpg);
//     crew = "Inegal_F";
//     typicalCargo[] = {
//         "Inegal_F"
//     };
//     hiddenSelectionsTextures[] = { "\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa", "\a3\data_f\vehicles\turret_co.paa" };
//     class TransportMagazines {};
//     class TransportItems {};
//     class TransportWeapons {};
//     class TransportBackpacks {};
// };
// class Inegal_VAB_D_HMG: Inegal_VAB_HMG {
//     displayName = "VAB HMG (Diablerie)";
//     crew = "Inegal_Diablerie_Se";
//     typicalCargo[] = {
//         "Inegal_Diablerie_Se"
//     };
// };

// // GMG
// class I_MRAP_03_gmg_F;
// class Inegal_VAB_GMG: I_MRAP_03_gmg_F {
//     scope = 2;
//     side = 0;
//     faction = "UKSF_Inegal";
//     displayName = "VAB GMG";
//     editorPreview = QPATHTOEF(common,data\previews\Inegal_VAB_GMG.jpg);
//     crew = "Inegal_F";
//     typicalCargo[] = {
//         "Inegal_F"
//     };
//     hiddenSelectionsTextures[] = { "\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa", "\a3\data_f\vehicles\turret_co.paa" };
//     class TransportMagazines {};
//     class TransportItems {};
//     class TransportWeapons {};
//     class TransportBackpacks {};
// };
// class Inegal_VAB_D_GMG: Inegal_VAB_GMG {
//     displayName = "VAB GMG (Diablerie)";
//     crew = "Inegal_Diablerie_Se";
//     typicalCargo[] = {
//         "Inegal_Diablerie_Se"
//     };
// };
