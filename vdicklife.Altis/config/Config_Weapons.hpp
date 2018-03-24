/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 1000, 500, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 25000, 12500, "" },
            { "arifle_Katiba_F", "", 30000, 15000, "" },
            { "srifle_DMR_01_F", "", 50000, 25000, "" },
            { "arifle_SDAR_F", "", 20000, 10000, "" },
            { "arifle_AK12_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, 11000, "" }, //Apex DLC
            { "10Rnd_50BW_Mag_F", "", 1000, 5000, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, 16500, "" }, //Apex DLC
            { "srifle_DMR_05_blk_F","",92000,46000,""},
            { "srifle_DMR_02_F","",89000,44500,""},
            { "LMG_03_F","",75000,37500,""},
            { "srifle_DMR_03_F","",45000,22500,""},
            { "srifle_EBR_F","",45000,22500,""},
            { "srifle_DMR_04_F","",50000,25000,""},
            { "MMG_01_tan_F","",120000,60000,""},
            { "MMG_02_black_F","",150000,75000,""},
            { "SMG_01_F","",15000,7500,""},
            { "arifle_MX_Black_F","",27000,13500,""},
            { "arifle_MX_SW_Black_F","",40000,20000,""},
            { "arifle_SPAR_03_blk_F","",49000,24500,""},
            { "launch_RPG7_F","",100000,50000,""},
            { "R_PG7_F","",250000,125000,""},//RPG Round 250k
            { "hgun_Pistol_heavy_01_F","",10000,5000,""},
            { "arifle_CTAR_blk_F", "", 30000, 15000, "" } //Apex DLC
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, 150, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "10Rnd_93x64_DMR_05_Mag","",250,125,""},
            { "200Rnd_556x45_Box_F","",1000,500,""},
            { "10Rnd_338_Mag","",250,125,""},
            { "20Rnd_762x51_Mag","",250,125,""},
            { "30Rnd_65x39_caseless_mag","",250,125,""},
            { "100Rnd_65x39_caseless_mag","",500,250,""},
            { "150Rnd_93x64_Mag","",2000,1000,""},
            { "30Rnd_45ACP_Mag_SMG_01","",150,75,""},
            { "11Rnd_45ACP_Mag","",150,75,""},                                                    
            { "200Rnd_65x39_cased_Box","",1500,750,""},
            { "10Rnd_127x54_Mag","",250,125,""},
            { "130Rnd_338_Mag","",500,250,""},
            { "30Rnd_580x42_Mag_F", "", 125, 60, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            {"optic_DMS","",500,250,""},
            {"optic_AMS","",4000,2000,""},
            {"optic_ERCO_blk_F","",500,250,""},
            {"optic_LRPS","",4000,2000,""},
            {"optic_MRCO","",500,250,""},
            {"optic_Arco","",500,250,""},
            {"bipod_02_F_blk","",100,50,""},
            { "acc_flashlight", "", 1000, 500, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 500, 250, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "O_NVGoggles_urb_F", "", 2000, 1000, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 200, 100, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 2000, 1000, "" },
            { "hgun_P07_F", "", 750, 375, "" },
            { "hgun_P07_khk_F", "", 750, 375, "" }, //Apex DLC            
            { "SMG_02_ACO_F", "", 3000, 1500, "" },
            { "arifle_SPAR_01_blk_F", "", 3500, 1750, "call life_coplevel >= 2" },
            { "arifle_MX_Black_F", "", 3500, 1750, "call life_coplevel >= 3" },
            { "arifle_MXC_Black_F", "", 3500, 1750, "call life_coplevel >= 3" },
            { "hgun_ACPC2_F", "", 1750, 875, "call life_coplevel >= 3" },            
            { "arifle_SPAR_03_blk_F", "", 3000, 1500, "call life_coplevel >= 4" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 170, 85, "call life_coplevel >= 4" },
            { "SmokeShellYellow", $STR_W_items_TearGas, 170, 85, "call life_coplevel >= 4" },
            { "srifle_DMR_02_F", "", 3000, 1500, "call life_coplevel >= 5" },
            { "arifle_MX_GL_Black_F", "", 3000, 1500, "call life_coplevel >= 5" }, 
            { "arifle_ARX_blk_F", "", 6000, 1500, "call life_coplevel >= 5" },            
            { "10Rnd_50BW_Mag_F", "", 400, 65, "call life_coplevel >= 5" },
            { "hgun_Pistol_heavy_01_F", "", 950, 475, "call life_coplevel >= 5" },
            { "arifle_MX_SW_Black_F", "", 6000, 1500, "call life_coplevel >= 5" },
            { "arifle_SPAR_03_blk_F", "", 6000, 1500, "call life_coplevel >= 5" },
            { "LMG_Mk200_BI_F", "", 6000, 1500, "call life_coplevel >= 6" },
            { "srifle_DMR_07_blk_F", "", 3200, 1600, "call life_coplevel >= 7" } //Apex DLC Sniper
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "30Rnd_556x45_Stanag", "", 130, 65, "call life_coplevel >= 2" },
            { "30Rnd_556x45_Stanag_green", "", 130, 65, "call life_coplevel >= 2" },
            { "30Rnd_65x39_caseless_mag", "", 130, 65, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "call life_coplevel >= 3" },
            { "20Rnd_762x51_Mag", "", 200, 100, "call life_coplevel >= 4" },
            { "3Rnd_SmokeYellow_Grenade_shell", $STR_W_items_TearGasL, 200, 100, "call life_coplevel >= 4" },
            { "10Rnd_338_Mag", "", 200, 100, "call life_coplevel >= 5" },
            { "11Rnd_45ACP_Mag", "", 130, 65, "call life_coplevel >= 5" },
            { "30Rnd_65x39_caseless_green", "", 130, 65, "call life_coplevel >= 5" },
            { "10Rnd_50BW_Mag_F", "", 400, 65, "call life_coplevel >= 5" },
            { "20Rnd_762x51_Mag", "", 400, 65, "call life_coplevel >= 5" },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 400, 65, "call life_coplevel >= 5" },
            { "200Rnd_65x39_cased_Box_Tracer", "", 500, 65, "call life_coplevel >= 6" },
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 100, "call life_coplevel >= 7" } //Apex DLC
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "acc_flashlight_pistol", "", 250, 125, "call life_coplevel >= 1" },//Pistol Flashlight
            { "acc_flashlight", "", 75, 37, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 120, 60, "call life_coplevel >= 2" },
            { "optic_Arco", "", 250, 125, "call life_coplevel >= 2" },
            {"muzzle_snds_H","",100,50,""},
            {"muzzle_snds_H","",100,50,""},
            {"muzzle_snds_M","",100,50,""},
            {"muzzle_snds_B","",100,50,""},
            {"muzzle_snds_H_MG","",100,50,""},
            {"muzzle_snds_H_SW","",100,50,""},
            {"optic_SOS","",300,150,""},
            {"optic_MRCO","",300,150,""},
            {"optic_NVS","",500,250,""},
            {"optic_Nightstalker","",1000,500,""},
            {"optic_DMS","",300,150,""},
            {"optic_tws","",750,375,""},
            {"optic_LRPS","",800,400,""},
            {"muzzle_snds_338_black","",250,125,""},
            {"optic_AMS","",300,150,""},
            {"optic_KHS_blk","",500,250,""},
            {"bipod_01_F_blk","",100,50,""},
            {"bipod_03_F_blk","",100,50,""},
            {"optic_Arco_blk_F","",300,150,""},
            {"optic_ERCO_blk_F","",300,150,""},
            {"muzzle_snds_H_MG_blk_F","",100,50,""},
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "O_NVGoggles_urb_F", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
