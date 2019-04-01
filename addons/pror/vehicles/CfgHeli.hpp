// Huey
class CFP_B_USCIA_UH_1H_01;
class PROR_Heli_Huey: CFP_B_USCIA_UH_1H_01 {
    scope = 2;
    side = 0;
    faction = "UKSF_PROR";
    displayName = "Huey";
    editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_UH_1H_01.JPG";
    crew = "PROR_Heli_Pilot";
    typicalCargo[] = {
        "PROR_Heli_Pilot"
    };
    
    class TransportMagazines {};
    class TransportItems {};
    class TransportWeapons {};
    class TransportBackpacks {};
};

// Chinook
class B_Heli_Transport_03_unarmed_F;
class PROR_Heli_Chinook: B_Heli_Transport_03_unarmed_F {
    scope = 2;
    side = 0;
    faction = "UKSF_PROR";
    displayName = "Chinook";
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Heli_Transport_03_unarmed_F.jpg";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};
    crew = "PROR_Heli_Pilot";
    typicalCargo[] = {
        "PROR_Heli_Pilot"
    };
    class TransportMagazines {};
    class TransportItems {};
    class TransportWeapons {};
    class TransportBackpacks {};
};
