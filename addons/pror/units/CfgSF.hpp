class PROR_SF_R : PROR_R {
    displayName = "SF Rifleman";
    editorSubcategory = QEGVAR(common,sf);
    editorPreview = QPATHTOEF(common,data\previews\PROR_SF_R.jpg);
    model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
    uniformClass = "CFP_GUER_M81";
    backpack = "PROR_B_SF_AssPack";
    weapons[] = {
        "CUP_arifle_mk18_black_acog",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "CUP_arifle_mk18_black_acog",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
    magazines[] = {
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "CUP_30Rnd_556x45_Emag_Tracer_Yellow",
        "CUP_30Rnd_556x45_Emag_Tracer_Yellow",
        "CUP_30Rnd_556x45_Emag_Tracer_Yellow",
        "CUP_30Rnd_556x45_Emag_Tracer_Yellow",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell",
        "HandGrenade",
        "HandGrenade"
    };
    respawnMagazines[] = {
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "CUP_30Rnd_556x45_Emag_Tracer_Yellow",
        "CUP_30Rnd_556x45_Emag_Tracer_Yellow",
        "CUP_30Rnd_556x45_Emag_Tracer_Yellow",
        "CUP_30Rnd_556x45_Emag_Tracer_Yellow",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell",
        "HandGrenade",
        "HandGrenade"
    };
    items[] = {
        "ACE_EarPlugs",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_morphine",
        "ACE_morphine",
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_tourniquet"
    };
    respawnItems[] = {
        "ACE_EarPlugs",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_morphine",
        "ACE_morphine",
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_tourniquet"
    };
    linkedItems[] = {
        "CFP_OPS2017_Helmet_M81",
        "CFP_PlateCarrier1_M81",
        "NVGogglesB_blk_F",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadioAcreFlagged",
        "ItemGPS",
        "Binocular",
        "G_Bandanna_oli"
    };
    respawnLinkedItems[] = {
        "CFP_OPS2017_Helmet_M81",
        "CFP_PlateCarrier1_M81",
        "NVGogglesB_blk_F",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadioAcreFlagged",
        "ItemGPS",
        "Binocular",
        "G_Bandanna_oli"
    };
};
class PROR_SF_TL : PROR_SF_R {
    displayName = "SF Team Leader";
    editorPreview = QPATHTOEF(common,data\previews\PROR_SF_TL.jpg);
    icon = "iconManLeader";
    backpack = "PROR_B_SF_TL_AssPack";
    weapons[] = {
        "CUP_arifle_mk18_m203_black_acog",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "CUP_arifle_mk18_m203_black_acog",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
};
class PROR_SF_Med : PROR_SF_R {
    displayName = "SF Medic";
    editorPreview = QPATHTOEF(common,data\previews\PROR_SF_Med.jpg);
    icon = "iconManMedic";
    picture = "pictureHeal";
    backpack = "PROR_B_SF_MedicBag";
    weapons[] = {
        "CUP_arifle_mk18_black_acog",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "CUP_arifle_mk18_black_acog",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
};
class PROR_SF_Marks : PROR_SF_R {
    displayName = "SF Marksman";
    editorPreview = QPATHTOEF(common,data\previews\PROR_SF_Marks.jpg);
    backpack = "";
    weapons[] = {
        "arifle_SPAR_03_blk_F_leupold",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "arifle_SPAR_03_blk_F_leupold",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
    magazines[] = {
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag"
    };
    respawnMagazines[] = {
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag"
    };
    linkedItems[] = {
        "CFP_OPS2017_Helmet_M81",
        "CFP_PlateCarrier1_M81",
        "NVGogglesB_blk_F",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadioAcreFlagged",
        "ItemGPS",
        "Binocular",
        "G_Bandanna_oli"
    };
    respawnLinkedItems[] = {
        "CFP_OPS2017_Helmet_M81",
        "CFP_PlateCarrier1_M81",
        "NVGogglesB_blk_F",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadioAcreFlagged",
        "ItemGPS",
        "Binocular",
        "G_Bandanna_oli"
    };
};
class PROR_SF_AR : PROR_SF_R {
    displayName = "SF Autorifleman";
    editorPreview = QPATHTOEF(common,data\previews\PROR_SF_AR.jpg);
    icon = "iconManMG";
    backpack = "PROR_B_SF_Kitbag_AR";
    weapons[] = {
        "CUP_lmg_m249_SQuantoon_LDS",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "CUP_lmg_m249_SQuantoon_LDS",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
    magazines[] = {
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell"
    };
    respawnMagazines[] = {
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell"
    };
    items[] = {
        "ACE_EarPlugs",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_morphine",
        "ACE_morphine",
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_tourniquet"
    };
    respawnItems[] = {
        "ACE_EarPlugs",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_morphine",
        "ACE_morphine",
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_tourniquet"
    };
    linkedItems[] = {
        "CFP_OPS2017_Helmet_M81",
        "CFP_PlateCarrier1_M81",
        "NVGogglesB_blk_F",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadioAcreFlagged",
        "ItemGPS",
        "Binocular",
        "G_Bandanna_oli"
    };
    respawnLinkedItems[] = {
        "CFP_OPS2017_Helmet_M81",
        "CFP_PlateCarrier1_M81",
        "NVGogglesB_blk_F",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadioAcreFlagged",
        "ItemGPS",
        "Binocular",
        "G_Bandanna_oli"
    };
};
