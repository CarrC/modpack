class PROR_R : PROR_Soldier_Base {
    _generalMacro = "PROR_R";
    scope = 2;
    displayName = "Rifleman";
    editorSubcategory = "EdSubcat_Personnel";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_F.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
    backpack = "";
    weapons[] = {
        "arifle_CTAR_blk_F_aco_grn",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "arifle_CTAR_blk_F_aco_grn",
        "Throw",
        "Put"
    };
    magazines[] = {
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell",
        "HandGrenade",
        "HandGrenade"
    };
    respawnMagazines[] = {
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
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
        "CFP_Basic_Helmet_M81",
        "CUP_V_B_RRV_Scout2",
        "CFP_ANPVS15_Camo_V3",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadioAcreFlagged",
        "ItemGPS",
        "Binocular",
        "CFP_Shemagh_Neck_M81"
    };
    respawnLinkedItems[] = {
        "CFP_Basic_Helmet_M81",
        "CUP_V_B_RRV_Scout2",
        "CFP_ANPVS15_Camo_V3",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadioAcreFlagged",
        "ItemGPS",
        "Binocular",
        "CFP_Shemagh_Neck_M81"
    };
};
class PROR_AR : PROR_R {
    _generalMacro = "PROR_AR";
    displayName = "Autorifleman";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_C.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    icon = "iconMan";
    backpack = "B_TacticalPack_blk";
    weapons[] = {
        "arifle_CTARS_blk_F_aimpoint",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "arifle_CTARS_blk_F_aimpoint",
        "Throw",
        "Put"
    };
    linkedItems[] = {
        "CFP_Basic_Helmet_M81",
        "CUP_V_B_RRV_Scout",
        "CFP_Shemagh_Neck_M81"
    };
    respawnLinkedItems[] = {
        "CFP_Basic_Helmet_M81",
        "CUP_V_B_RRV_Scout",
        "CFP_Shemagh_Neck_M81"
    };
};
class PROR_MG : PROR_R {
    _generalMacro = "PROR_MG";
    displayName = "Machinegunner";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_O.jpg);
    icon = "iconMan";
    uniformClass = "CFP_U_FieldUniform_M81light";
    backpack = "UK3CB_BAF_B_Carryall_Oli";
    weapons[] = {
        "mmg_02_black_f_sig_bravo4",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "mmg_02_black_f_sig_bravo4",
        "Throw",
        "Put"
    };
    magazines[] = {
        "130Rnd_338_Mag",
        "130Rnd_338_Mag",
        "130Rnd_338_Mag",
        "130Rnd_338_Mag",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell",
        "HandGrenade",
        "HandGrenade"
    };
    respawnMagazines[] = {
        "130Rnd_338_Mag",
        "130Rnd_338_Mag",
        "130Rnd_338_Mag",
        "130Rnd_338_Mag",
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
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage"
    };
    respawnItems[] = {
        "ACE_EarPlugs",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage"
    };
    linkedItems[] = {
        "CUP_V_B_RRV_Scout2",
        "CFP_Shemagh_Neck_M81"
    };
    respawnLinkedItems[] = {
        "CUP_V_B_RRV_Scout2",
        "CFP_Shemagh_Neck_M81"
    };
};
class PROR_Medic : PROR_R {
    _generalMacro = "PROR_Medic";
    displayName = "Medic";
    icon = "iconManMedic";
    attendant = 1;
    editorPreview = QPATHTOEF(common,data\previews\Inegal_MED.jpg);
    picture = "pictureHeal";
    uniformClass = "CFP_U_FieldUniform_M81light";
    backpack = "CUP_B_Kombat_Olive";

    items[] = {
        "ACE_EarPlugs",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_personalAidKit",
        "ACE_surgicalKit",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_BloodIV",
        "ACE_BloodIV",
        "ACE_BloodIV",
        "ACE_BloodIV",
        "ACE_BloodIV",
        "ACE_BloodIV_250",
        "ACE_BloodIV_250",
        "ACE_BloodIV_250",
        "ACE_BloodIV_250",
        "ACE_BloodIV_250",
        "ACE_BloodIV_500",
        "ACE_BloodIV_500",
        "ACE_BloodIV_500",
        "ACE_BloodIV_500",
        "ACE_BloodIV_500"
    };
    respawnItems[] = {
        "ACE_EarPlugs",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_elasticBandage",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_quickclot",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_packingBandage",
        "ACE_personalAidKit",
        "ACE_surgicalKit",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Morphine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_Epinephrine",
        "ACE_BloodIV",
        "ACE_BloodIV",
        "ACE_BloodIV",
        "ACE_BloodIV",
        "ACE_BloodIV",
        "ACE_BloodIV_250",
        "ACE_BloodIV_250",
        "ACE_BloodIV_250",
        "ACE_BloodIV_250",
        "ACE_BloodIV_250",
        "ACE_BloodIV_500",
        "ACE_BloodIV_500",
        "ACE_BloodIV_500",
        "ACE_BloodIV_500",
        "ACE_BloodIV_500"
    };
    linkedItems[] = {
        "CUP_V_B_RRV_Medic",
        "CFP_Shemagh_Neck_M81"
    };
    respawnLinkedItems[] = {
        "CUP_V_B_RRV_Medic",
        "CFP_Shemagh_Neck_M81"
    };
};
class PROR_AT_L : PROR_R {
    _generalMacro = "PROR_AT_L";
    displayName = "AT (Light)";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_MG.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    icon = "iconManAT";
    backpack = "B_AssaultPack_rgr";
    weapons[] = {
        "launch_MRAWS_green_rail_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "launch_MRAWS_green_rail_F",
        "Throw",
        "Put"
    };
    magazines[] = {
        "MRAWS_HE_F",
        "MRAWS_HE_F",
        "MRAWS_HEAT_F"
    };
    respawnMagazines[] = {
        "MRAWS_HE_F",
        "MRAWS_HE_F",
        "MRAWS_HEAT_F"
    };
    linkedItems[] = {
        "CFP_Shemagh_Neck_M81"
    };
    respawnLinkedItems[] = {
        "CFP_Shemagh_Neck_M81"
    };
};
class PROR_AT_H : PROR_R {
    _generalMacro = "PROR_AT_H";
    displayName = "AT (Heavy)";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_Mark.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    backpack = "B_TacticalPack_blk";
    weapons[] = {
        "launch_O_Vorona_green_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "launch_O_Vorona_green_F",
        "Throw",
        "Put"
    };
    magazines[] = {
        "Vorona_HEAT",
        "Vorona_HEAT"
    };
    respawnMagazines[] = {
        "Vorona_HEAT",
        "Vorona_HEAT"
    };
    linkedItems[] = {
        "CUP_V_B_RRV_Scout2",
        "CFP_Shemagh_Neck_M81"
    };
    respawnLinkedItems[] = {
        "CUP_V_B_RRV_Scout2",
        "CFP_Shemagh_Neck_M81"
    };
};
class PROR_Marksman : PROR_R {
    _generalMacro = "PROR_Marksman";
    displayName = "Marksman";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_AA.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    icon = "iconMan";
    weapons[] = {
        "srifle_DMR_05_olive_F_khs",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "srifle_DMR_05_olive_F_khs",
        "Throw",
        "Put"
    };
    magazines[] = {
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell",
        "HandGrenade"
    };
    respawnMagazines[] = {
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell",
        "HandGrenade"
    };
    linkedItems[] = {
        "CFP_Shemagh_Neck_M81"
    };
    respawnLinkedItems[] = {
        "CFP_Shemagh_Neck_M81"
    };
};
class PROR_Officer : PROR_R {
    _generalMacro = "PROR_Officer";
    displayName = "Officer";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_ATE.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    icon = "iconManOfficer";
    backpack = "CUP_B_Kombat_Olive";
    weapons[] = {
        "arifle_CTAR_GL_blk_F_aco_grn",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "arifle_CTAR_GL_blk_F_aco_grn",
        "Throw",
        "Put"
    };
    magazines[] = {
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell",
        "HandGrenade",
        "HandGrenade"
    };
    respawnMagazines[] = {
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell",
        "HandGrenade",
        "HandGrenade"
    };
    linkedItems[] = {
        "CUP_V_B_RRV_Officer",
        "CUP_H_US_patrol_cap_WDL",
        "CFP_Shemagh_Neck_M81"
    };
    respawnLinkedItems[] = {
        "CUP_V_B_RRV_Officer",
        "CUP_H_US_patrol_cap_WDL",
        "CFP_Shemagh_Neck_M81"
    };
};
class PROR_SL : PROR_Officer {
    _generalMacro = "PROR_SL";
    displayName = "Section Leader";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_ATJ.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    icon = "iconManLeader";
    linkedItems[] = {
        "CFP_Basic_Helmet_M81",
        "CUP_V_B_RRV_TL"
    };
    respawnLinkedItems[] = {
        "CFP_Basic_Helmet_M81",
        "CUP_V_B_RRV_TL"
    };
};
class PROR_FOO : PROR_R {
    _generalMacro = "PROR_FOO";
    displayName = "Forward Observer";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_Sniper.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    backpack = "UK3CB_BAF_B_Bergen_OLI_JTAC_A";
    weapons[] = {
        "arifle_CTAR_blk_F_aco_grn",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "arifle_CTAR_blk_F_aco_grn",
        "Throw",
        "Put"
    };
    magazines[] = {
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell",
        "HandGrenade",
        "HandGrenade"
    };
    respawnMagazines[] = {
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "1Rnd_HE_Grenade_shell",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_Tracer_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "30Rnd_580x42_Mag_F",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell",
        "HandGrenade",
        "HandGrenade"
    };
    linkedItems[] = {
        "Laserdesignator_03",
        "CUP_V_B_RRV_Officer"
    };
    respawnLinkedItems[] = {
        "Laserdesignator_03",
        "CUP_V_B_RRV_Officer"
    };
};
class PROR_FAC : PROR_FOO {
    _generalMacro = "PROR_FAC";
    displayName = "FAC";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_FAC.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    backpack = "UK3CB_BAF_B_Bergen_OLI_JTAC_H_A";
    linkedItems[] = {
        "CUP_V_B_RRV_TL"
    };
    respawnLinkedItems[] = {
        "CUP_V_B_RRV_TL"
    };
};
class PROR_Sniper : PROR_R {
    _generalMacro = "PROR_Sniper";
    displayName = "Sniper";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_FAC.jpg);
    uniformClass = "U_I_FullGhillie_lsh";
    backpack = "B_TacticalPack_blk";
    weapons[] = {
        "srifle_LRR_tna_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "srifle_LRR_tna_F",
        "Throw",
        "Put"
    };
    magazines[] = {
        "7Rnd_408_Mag",
        "7Rnd_408_Mag",
        "7Rnd_408_Mag",
        "7Rnd_408_Mag",
        "7Rnd_408_Mag",
        "7Rnd_408_Mag",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell",
        "HandGrenade",
        "HandGrenade"
    };
    respawnMagazines[] = {
        "7Rnd_408_Mag",
        "7Rnd_408_Mag",
        "7Rnd_408_Mag",
        "7Rnd_408_Mag",
        "7Rnd_408_Mag",
        "7Rnd_408_Mag",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell",
        "HandGrenade",
        "HandGrenade"
    };
    linkedItems[] = {
        "CUP_PMC_Facewrap_Tropical",
        "CUP_NVG_PVS15_green",
        "Rangefinder"
    };
    respawnLinkedItems[] = {
        "CUP_PMC_Facewrap_Tropical",
        "CUP_NVG_PVS15_green",
        "Rangefinder"
    };    
};        


class PROR_AA : PROR_R {
    _generalMacro = "PROR_AA";
    displayName = "AA";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_MG.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    icon = "iconManAA";
    backpack = "B_AssaultPack_rgr";
    weapons[] = {
        "launch_B_Titan_tna_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "launch_B_Titan_tna_F",
        "Throw",
        "Put"
    };
    magazines[] = {
        "Titan_AA"
    };
    respawnMagazines[] = {
        "Titan_AA"
    };
    linkedItems[] = {
        "CFP_Shemagh_Neck_M81"
    };
    respawnLinkedItems[] = {
        "CFP_Shemagh_Neck_M81"
    };
};

/////////////////////// PARAS ///////////////////////   
    
class PROR_Para : PROR_R {
    _generalMacro = "PROR_Para";
    displayName = "Paratrooper";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_FAC.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    backpack = "B_Parachute";
    weapons[] = {
        "arifle_CTAR_blk_F_aco_grn",
        "Throw",
        "Put"
    };
};      
class PROR_Para_SL : PROR_R {
    _generalMacro = "PROR_Para_SL";
    displayName = "Para Section Leader";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_FAC.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    backpack = "B_Parachute";
    weapons[] = {
        "arifle_CTAR_GL_blk_F_aco_grn",
        "Throw",
        "Put"
    };
    magazines[] = {
       "30Rnd_580x42_Mag_F",
       "30Rnd_580x42_Mag_F",
       "30Rnd_580x42_Mag_F",
       "30Rnd_580x42_Mag_F",
       "30Rnd_580x42_Mag_F",
       "30Rnd_580x42_Mag_Tracer_F",
       "30Rnd_580x42_Mag_Tracer_F",
       "30Rnd_580x42_Mag_Tracer_F",
       "30Rnd_580x42_Mag_Tracer_F",
       "30Rnd_580x42_Mag_Tracer_F",
       "1Rnd_HE_Grenade_shell",
       "1Rnd_HE_Grenade_shell",
       "1Rnd_HE_Grenade_shell",
       "1Rnd_HE_Grenade_shell",
       "1Rnd_HE_Grenade_shell",
       "1Rnd_HE_Grenade_shell",
       "1Rnd_HE_Grenade_shell",
       "1Rnd_HE_Grenade_shell",
       "Smokeshell",
       "Smokeshell",
       "Smokeshell"
    };
    respawnMagazines[] = {
       "30Rnd_580x42_Mag_F",
       "30Rnd_580x42_Mag_F",
       "30Rnd_580x42_Mag_F",
       "30Rnd_580x42_Mag_F",
       "30Rnd_580x42_Mag_F",
       "30Rnd_580x42_Mag_Tracer_F",
       "30Rnd_580x42_Mag_Tracer_F",
       "30Rnd_580x42_Mag_Tracer_F",
       "30Rnd_580x42_Mag_Tracer_F",
       "30Rnd_580x42_Mag_Tracer_F",
       "1Rnd_HE_Grenade_shell",
       "1Rnd_HE_Grenade_shell",
       "1Rnd_HE_Grenade_shell",
       "1Rnd_HE_Grenade_shell",
       "1Rnd_HE_Grenade_shell",
       "1Rnd_HE_Grenade_shell",
       "1Rnd_HE_Grenade_shell",
       "1Rnd_HE_Grenade_shell",
       "Smokeshell",
       "Smokeshell",
       "Smokeshell"
    };
    linkedItems[] = {
        "CUP_V_B_RRV_TL"
    };
    respawnLinkedItems[] = {
        "CUP_V_B_RRV_TL"
    };
};
class PROR_Para_AR : PROR_R {
    _generalMacro = "PROR_Para_AR";
    displayName = "Para Autorifleman";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_FAC.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    backpack = "B_Parachute";
    weapons[] = {
        "arifle_CTARS_blk_F_aimpoint",
        "Throw",
        "Put"
    };
     magazines[] = {
       "100Rnd_580x42_Mag_Fl",
       "100Rnd_580x42_Mag_Fl",
       "100Rnd_580x42_Mag_Tracer_F",
       "100Rnd_580x42_Mag_Tracer_F"
    };
    respawnMagazines[] = {
       "100Rnd_580x42_Mag_Fl",
       "100Rnd_580x42_Mag_Fl",
       "100Rnd_580x42_Mag_Tracer_F",
       "100Rnd_580x42_Mag_Tracer_F"
    };
    linkedItems[] = {
        "CUP_V_B_RRV_Scout"
    };
    respawnLinkedItems[] = {
        "CUP_V_B_RRV_Scout"
    };
};
class PROR_Para_Marks : PROR_R {
    _generalMacro = "PROR_Para_Marks";
    displayName = "Para Marksman";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_FAC.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    backpack = "B_Parachute";
    weapons[] = {
        "srifle_DMR_05_olive_F_khs",
        "Throw",
        "Put"
    };
    magazines[] = {
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag"
    };
    respawnMagazines[] = {
       "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag",
        "20Rnd_762x51_Mag"
    };
};
class PROR_Para_AT : PROR_Para {
    _generalMacro = "PROR_Para_AT";
    displayName = "Para AT";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_FAC.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    backpack = "B_Parachute";
    weapons[] = {
        "arifle_CTAR_blk_F_aco_grn",
        "launch_MRAWS_green_rail_F",
        "Throw",
        "Put"
    };
};

/////////////////////// SPECIAL FORCES ///////////////////////

class PROR_SF_R {
    _generalMacro = "PROR_SF_R";
    scope = 2;
    displayName = "SF Rifleman";
    editorSubcategory = "EdSubcat_Personnel";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_F.jpg);
    uniformClass = "CFP_GUER_M81";
    model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
    backpack = "PROR_SF_AssPack";
    weapons[] = {
        "SMA_MK18MOEOD_CCO_LLCTop_blk",
        "hgun_ACPC2_F",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "SMA_MK18MOEOD_CCO_LLCTop_blk",
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
    _generalMacro = "PROR_SF_TL";
    scope = 2;
    displayName = "SF Team Leader";
    editorSubcategory = "EdSubcat_Personnel";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_F.jpg);
    uniformClass = "CFP_GUER_M81";
    model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
    backpack = "PROR_SF_TL_AssPack";
    weapons[] = {
        "SMA_MK18OD_GL_CCO_LLCTop_blk ",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "SMA_MK18OD_GL_CCO_LLCTop_blk ",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };    
};

class PROR_SF_Med : PROR_SF_R {
    _generalMacro = "PROR_SF_Med";
    scope = 2;
    displayName = "SF Medic";
    editorSubcategory = "EdSubcat_Personnel";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_F.jpg);
    uniformClass = "CFP_GUER_M81";
    model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
    backpack = "PROR_SF_MedicBag";
    weapons[] = {
        "SMA_MK18MOEOD_CCO_LLCTop_blk",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "SMA_MK18MOEOD_CCO_LLCTop_blk",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };    
};

class PROR_SF_Marks : PROR_SF_R {
    _generalMacro = "PROR_SF_Marks";
    scope = 2;
    displayName = "SF Marksman";
    editorSubcategory = "EdSubcat_Personnel";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_F.jpg);
    uniformClass = "CFP_GUER_M81";
    model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
    backpack = "";
    weapons[] = {
        "SMA_HK417_16in_ACOG",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "SMA_HK417_16in_ACOG",
        "hgun_ACPC2_F",
        "Throw",
        "Put"
    };
    magazines[] = {
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "SMA_20Rnd_762x51mm_M80A1_EPR",
        "SMA_20Rnd_762x51mm_M80A1_EPR",
        "SMA_20Rnd_762x51mm_M80A1_EPR",
        "SMA_20Rnd_762x51mm_M80A1_EPR",
        "SMA_20Rnd_762x51mm_M80A1_EPR"
    };
    respawnMagazines[] = {
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "9Rnd_45ACP_Mag",
        "SMA_20Rnd_762x51mm_M80A1_EPR",
        "SMA_20Rnd_762x51mm_M80A1_EPR",
        "SMA_20Rnd_762x51mm_M80A1_EPR",
        "SMA_20Rnd_762x51mm_M80A1_EPR",
        "SMA_20Rnd_762x51mm_M80A1_EPR"
    };
    linkedItems[] = {
        "G_Bandanna_sport"
    };
    respawnLinkedItems[] = {
        "G_Bandanna_sport"
    };
};

class PROR_SF_AR : PROR_SF_R {
    _generalMacro = "PROR_SF_AR";
    scope = 2;
    displayName = "SF Autorifleman";
    editorSubcategory = "EdSubcat_Personnel";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_F.jpg);
    uniformClass = "CFP_GUER_M81";
    model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
    backpack = "PROR_SF_Kitbag_AR";
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

///////// Crewman //////////


class PROR_Crew : PROR_R {
    _generalMacro = "PROR_Crew";
    displayName = "Crewman";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_MG.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    icon = "iconManCrew";
    backpack = "";
    weapons[] = {
        "SMG_03C_TR_black",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "SMG_03C_TR_black",
        "Throw",
        "Put"
    };
    magazines[] = {
        "50Rnd_570x28_SMG_03",
        "50Rnd_570x28_SMG_03",
        "50Rnd_570x28_SMG_03",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell",
        "HandGreande"
    };
    respawnMagazines[] = {
        "50Rnd_570x28_SMG_03",
        "50Rnd_570x28_SMG_03",
        "50Rnd_570x28_SMG_03",
        "SmokeShell",
        "SmokeShell",
        "SmokeShell",
        "HandGreande"
    };
    linkedItems[] = {
        "H_HelmetCrew_I"
    };
    respawnLinkedItems[] = {
        "H_HelmetCrew_I"
    };
};

////////// Pilots //////////

class PROR_Jet_Pilot : PROR_Crew {
    _generalMacro = "PROR_Jet_Pilot";
    displayName = "Jet Pilot";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_MG.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    icon = "iconManCrew";
    backpack = "B_Parachute";
   
    linkedItems[] = {
        "H_PilotHelmetFighter_O"
    };
    respawnLinkedItems[] = {
        "H_PilotHelmetFighter_O"
    };
};

class PROR_Heli_Pilot : PROR_Crew {
    _generalMacro = "PROR_Heli_Pilot";
    displayName = "Heli Pilot";
    editorPreview = QPATHTOEF(common,data\previews\Inegal_MG.jpg);
    uniformClass = "CFP_U_FieldUniform_M81light";
    icon = "iconManCrew";
    backpack = "";
   
    linkedItems[] = {
        "H_PilotHelmetHeli_O"
    };
    respawnLinkedItems[] = {
        "H_PilotHelmetHeli_O"
    };
};
