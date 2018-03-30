#define true 1
#define false 0

/*
    Master settings for various features and functionality
*/
class Life_Settings {
/* Logging and Security Settings*/
    /* Security Settings */
    spyGlass_toggle = false; //Spyglass On/Off Toggle --> True = On & False = Off

    /* Data Logging Settings */
    battlEye_friendlyLogging = true; //False [default] - Read the logs from the server.rpt. True - Read the logs from the publicVariable.log. NOTE: Due to how diag_log works it will log to both files either way and the setting is merely for beautification purposes.
    player_advancedLog = true; //False [default] - No advanced logging. True - Logs house purchase and sale, vehicle purchase, sale, and chop shopping, police arrests, and gang creations. Search for: advanced_log
    player_moneyLog = true; //False [default] - No money logging. True - Logs player bank deposits, withdraws, and transfers, gang bank deposits and withdraws, money picked up off of the ground, and player robbery. Search for: money_log
    player_deathLog = true; //False [default] - No death logging. True - Logs victim and killer, and vehicle or weapon if used, when a player dies. Search for: death_log
    player_fueldeliveredLog = true; // False [default] - no fuel Logging. True - Logs the player distance form fuel supply how much was recived time of day and PID
/* Database Related Settings */
    /* Player Data Saving */
    save_virtualItems = true; //Save Virtual items (all sides)?
    saved_virtualItems[] = { "goldbar","zipties","blindfold","pickaxe","fuelEmpty","fuelFull", "spikeStrip", "lockpick", "defuseKit","storageSmall","storageBig","redgull","coffee","waterBottle","apple","peach","tbacon","donuts","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtle_soup","hen","rooster","sheep","goat","defibrillator","toolkit" }; //Array of virtual items that can be saved on your player.
    save_playerStats = true; //Save food, water and damage (all sides)?
    save_civilian_weapons = true; //Allow civilians to save weapons on them?
    save_civilian_position = true; //Save civilian location?
    save_civilian_position_restart = true; //Save civilian location only between restarts. After a server restart you'll have to spawn again.
    /* !!!TO SAVE POSITION BETWEEN RESTARTS save_civilian_position MUST BE TRUE!!! */
    save_civilian_positionStrict = false; //Strip the player if possible combat-log?  WARNING: Server crashes and lack of reliable syncing can trigger this.

    /* Vehicle Data Saving */
    save_vehicle_virtualItems = true; //Save virtual items inside the vehicle (all sides)(-- See defined items on next line --)
    save_vehicle_items[] = { "zipties","blindfold","pickaxe","fuelEmpty","fuelFull", "spikeStrip", "lockpick", "defuseKit","storageSmall","storageBig","redgull","coffee","waterBottle","apple","peach","tbacon","donuts","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtle_soup","hen","rooster","sheep","goat","defibrillator","toolkit" };
    save_vehicle_inventory = true; //Save Arma inventory of vehicle to the database
    save_vehicle_fuel = true; //Save vehicle fuel level to the database (Impounded/Garaged).
    save_vehicle_damage = true; //Save vehicle damage to the database.
    save_vehicle_illegal = true; //This will allow cops to be advised when a vehicle, with illegal items in it, is impounded. This will also save illegal items as proof of crime, and needs "save_vehicle_virtualItems" set as true. Illegal items don't need to be set in save_vehicle_items[] for being saved, if it's enabled.


/* System Settings */
    /* ATM & Federal Reserve System Configurations */
    global_ATM = true; //Allow users to access any ATM on the map (Marked & Unmarked).
    noatm_timer = 5; //Time in minutes that players cannot deposit money after selling stolen gold.
    minimum_cops = 5; //Minimum cops required online to rob the Federal Reserve

    /*Death settings*/
    drop_weapons_onDeath = true; //Set true to enable weapon dropping on death. False (default) will delete player weapons on death, allowing them to be revived with them instead

    /* Basic System Configurations */
    donor_level = false; //Enable the donor level set in database (var = life_donorlevel; levels = 0,1,2,3,4,5). ATTENTION! Before enabling, read: https://www.bistudio.com/community/game-content-usage-rules & https://www.bistudio.com/monetization
    enable_fatigue = true; //Set to false to disable the ARMA 3 fatigue system.
    total_maxWeight = 24; //Static variable for the maximum weight allowed without having a backpack
    respawn_timer = 120; //How many seconds a player should wait, before being able to respawn. Minimum 5 seconds.

    /* Channel 7 News Station Configurations */
    news_broadcast_cost = 150000; //Cost for a player to send a news station broadcast.
    news_broadcast_cooldown = 20; //Time in minutes that is required between news station broadcasts. (Default = 20 minutes)
    news_broadcast_header_length = 60; //Number of characters that a header can consist of. Anything over this may clip. This depends on the font size and various other factors. Adjust with caution.

    /* Clothing System Configurations */
    civ_skins = false; //Enable or disable civilian skins. Before enabling, you must add all the SEVEN files to textures folder. (It must be named as: civilian_uniform_1.jpg, civilian_uniform_2.jpg...civilian_uniform_6.jpg, civilian_uniform_7.jpg)
    cop_extendedSkins = false; //Enable or disable cop skins by level. Before enabling, you must add all the EIGHT files to textures folder. (It must be named as: cop_uniform.jpg + cop_uniform_1.jpg, cop_uniform_2.jpg...cop_uniform_6.jpg, cop_uniform_7.jpg; meaning cop_uniform = life_coplevel=0, cop_uniform_1 = life_coplevel=1, cop_uniform_2 = life_coplevel=2, etc...)
    clothing_noTP = false;  //Disable clothing preview teleport? (true = no teleport. false = teleport)
    clothing_box = true; //true = teleport to a black box. false = teleport to somewhere on map. (It only affects the game if clothing_noTP is set as false)
    clothing_masks[] = { "H_Shemag_olive", "H_Shemag_khk", "H_Shemag_tan", "H_Shemag_olive_hs", "H_ShemagOpen_khk", "H_ShemagOpen_tan", "G_Balaclava_blk", "G_Balaclava_combat", "G_Balaclava_lowprofile", "G_Balaclava_oli", "G_Bandanna_aviator", "G_Bandanna_beast", "G_Bandanna_blk", "G_Bandanna_khk", "G_Bandanna_oli", "G_Bandanna_shades", "G_Bandanna_sport", "G_Bandanna_tan", "U_O_GhillieSuit", "U_I_GhillieSuit", "U_B_GhillieSuit", "H_RacingHelmet_1_black_F", "H_RacingHelmet_1_red_F", "H_RacingHelmet_1_white_F", "H_RacingHelmet_1_blue_F", "H_RacingHelmet_1_yellow_F", "H_RacingHelmet_1_green_F", "H_RacingHelmet_1_F", "H_RacingHelmet_2_F", "H_RacingHelmet_3_F", "H_RacingHelmet_4_F" };

    /* Escape Menu Configuration */
    escapeMenu_timer = 10; //Time required to pass before you can click the abort button in the escape menu.
    escapeMenu_displayExtras = true; //Display the players UID & serverName specified below in the escape menu.
    escapeMenu_displayText = "Thanks for playing!"; //Text displayed in the escape menu. Make it short.. around 20 characters.

    /* Fuel System Configurations */
    pump_service = true; //Allow users to use pump service on the map. Default = false
    fuel_cost = 80; //Cost of fuel per liter at fuel stations (if not defined for the vehicle already).
    service_chopper = 1000; //Cost to service chopper at chopper service station(Repair/Refuel).
    fuelCan_refuel = 250; //Cost to refuel an empty fuel canister at the fuel station pumps. (Be wary of your buy/sell prices on fuel cans to prevent exploits...)

    /* Gang System Configurations */
    gang_price = 75000; //Gang creation price. --Remember they are persistent so keep it reasonable to avoid millions of gangs.
    gang_upgradeBase = 10000; //The base cost for purchasing additional slots in a gang
    gang_upgradeMultiplier = 2.5; //CURRENTLY NOT IN USE

    /* Housing System Configurations */
    house_limit = 5; //Maximum number of houses a player can own.
    houseGarage_buyPrice = 1000000;
    houseGarage_sellPrice = 350000;

    /* Hunting & Fishing System Configurations */
    animaltypes_fish[] = { "Salema_F", "Ornate_random_F", "Mackerel_F", "Tuna_F", "Mullet_F", "CatShark_F", "Turtle_F" }; //Classnames of fish you can catch
    animaltypes_hunting[] = { "Sheep_random_F", "Goat_random_F", "Hen_random_F", "Cock_random_F", "Rabbit_F" }; //Classnames of aniamls you can hunt/gut

    /* Item-related Restrictions */
    restrict_medic_weapons = true; //Set to false to allow medics to use any weapon --true will remove ANY weapon they attempt to use (primary,secondary,launcher)
    restrict_clothingPickup = true; //Set to false to allow civilians to pickup/take any uniform (ground/crates/vehicles)
    restrict_weaponPickup = true; //Set to false to allow civilians to pickup/take any weapon (ground/crates/vehicles)
    restricted_uniforms[] = { "U_Rangemaster", "U_B_CombatUniform_mcam_tshirt", "U_B_CombatUniform_mcam_worn", "U_B_survival_uniform" };
    restricted_weapons[] = { "hgun_P07_snds_F" };

    /* Jail System Configurations */
    jail_seize_vItems[] = { "spikeStrip","lockpick","goldbar","blastingcharge","boltcutter","defusekit","heroin_unprocessed","heroin_processed","cannabis","marijuana","cocaine_unprocessed","cocaine_processed","turtle_raw" }; //Define VIRTUAL items you want to be removed from players upon jailing here. Use "jail_seize_inventory" for Arma inventory items.
    jail_seize_inventory = false; //Set to true to run the cop seize script on inmates. False will remove only weapons and magazines otherwise. (Basically used in case cops forget to seize items). [See Lines 106-111 below]
    sendtoJail_locations[] = { "police_hq_1", "police_hq_2", "cop_spawn_3", "cop_spawn_5", "Correctional_Facility" }; //Enter the variableName from the mission.sqm here to allow cops to send a person to jail at these locations.
    jail_forceWalk = true;

    /* Medical System Configurations */
    revive_cops = true; //true to enable cops the ability to revive everyone or false for only medics/ems.
    revive_civ = false; //true to enable civs the ability to revive everyone or false for only medics/ems or medic/ems/cops.
    revive_east = false; //true to enable opfor the ability to revive everyone or false for only medics/ems or medic/ems/cops.
    revive_fee = 3500; //Revive fee that players have to pay and medics only EMS(independent) are rewarded with this amount.
    hospital_heal_fee = 1500; //Fee to heal at a hospital NPC
    /*Custom Code by Wolfe*/
    /*Medic Gear*/
    medic_allowed_items[] = {"U_Rangemaster","FirstAidKit", "Rangemaster_belt","ItemWatch","ItemCompass","ItemMap","hgun_Pistol_Signal_F","6Rnd_RedSignal_F","Medikit","MineDetector","U_C_Paramedic_01_F"};

    /* Paycheck & Bank System Configurations */
    bank_cop = 2500000; //Amount of cash in bank for new cops
    bank_civ = 2500000; //Amount of cash in bank for new civillians
    bank_med = 2500000; //Amount of cash in bank for new medics

    paycheck_cop = 2500; //Payment for cops
    paycheck_civ = 2000; //Payment for civillians
    paycheck_med = 2250; //Payment for medics

    paycheck_period = 5; //Scaled in minutes
    bank_transferTax = .05; //Tax that player pays when transferring money from ATM. Tax = Amount * multiplier

    /* Player Job System Configurations */
    delivery_points[] = { "dp_1", "dp_2", "dp_3", "dp_4", "dp_5", "dp_6", "dp_7", "dp_8", "dp_9", "dp_10", "dp_11", "dp_12", "dp_13", "dp_14", "dp_15", "dp_15", "dp_16", "dp_17", "dp_18", "dp_19", "dp_20", "dp_21", "dp_22", "dp_23", "dp_24", "dp_25" };
    fuelTank_winMultiplier = 1; //Win Multiplier in FuelTank Missions. Increase for greater payout. Default = 1
    robberyMarkers = true;  //Ability to use markers or not use markers for Gas Station Robberys. Default: true
    
    /* Search & Seizure System Configurations */
    seize_exempt[] = {"arifle_Mk20_F", "arifle_SPAR_01_blk_F", "arifle_TRG21_F", "hgun_PDW2000_F", "hgun_Pistol_heavy_01_F", "srifle_DMR_06_camo_F", "srifle_DMR_06_olive_F", "hgun_PDW2000_F", "SMG_05_F", "hgun_Pistol_heavy_02_F", "hgun_Pistol_01_F", "hgun_Rook40_F", "hgun_ACPC2_F", "Binocular", "ItemWatch", "ItemCompass", "ItemGPS", "ItemMap", "NVGoggles", "FirstAidKit", "ToolKit", "Chemlight_red", "Chemlight_yellow", "Chemlight_green", "Chemlight_blue", "optic_ACO_grn_smg", "SMG_01_F", "optic_Holosight_smg" }; //Arma items that will not get seized from player inventories
    seize_uniform[] = { "U_Rangemaster" }; //Any specific uniforms you want to be seized from players
    seize_vest[] = { "V_TacVest_blk_POLICE" }; //Any specific vests you want to be seized from players
    seize_headgear[] = { "H_Cap_police" }; //Any hats or helmets you want seized from players
    seize_minimum_rank = 2; //Required minimum CopLevel to be able to seize items from players

    /* Vehicle System Configurations */
    chopShop_vehicles[] = { "Car", "Air" }; //Vehicles that can be chopped. (Can add: "Ship" and possibly more -> look at the BI wiki...)
    vehicle_infiniteRepair[] = {false, false, true, false}; //Set to true for unlimited repairs with 1 toolkit. False will remove toolkit upon use. civilian, west, independent, east
    vehicleShop_rentalOnly[] = { "B_MRAP_01_hmg_F", "B_G_Offroad_01_armed_F", "B_Boat_Armed_01_minigun_F" }; //Vehicles that can only be rented and not purchased. (Last only for the session)
    vehicleShop_3D = true; //Add preview 3D inside Shop vehicle.       Default : False

    /* Vehicle Purchase Prices */
    vehicle_purchase_multiplier_CIVILIAN = 1; //Civilian Vehicle Buy Price = Config_Vehicle price * multiplier
    vehicle_purchase_multiplier_COP = .5; //Cop Vehicle Buy Price = Config_Vehicle price * multiplier
    vehicle_purchase_multiplier_MEDIC = .5; //Medic Vehicle Buy Price = Config_Vehicle price * multiplier
    vehicle_purchase_multiplier_OPFOR = -1; // -- NOT IN USE -- Simply left in for east support.

    /* Vehicle Rental Prices */
    vehicle_rental_multiplier_CIVILIAN = .80; //Civilian Vehicle Rental Price = Config_Vehicle price * multiplier
    vehicle_rental_multiplier_COP = .45; //Cop Vehicle Rental Price = Config_Vehicle price * multiplier
    vehicle_rental_multiplier_MEDIC = .45; //Medic Vehicle Rental Price = Config_Vehicle price * multiplier
    vehicle_rental_multiplier_OPFOR = -1; // -- NOT IN USE -- Simply left in for east support.

    /* Vehicle Sell Prices */
    vehicle_sell_multiplier_CIVILIAN = .5; //Civilian Vehicle Garage Sell Price = Vehicle Buy Price * multiplier
    vehicle_sell_multiplier_COP = .35; //Cop Vehicle Garage Sell Price = Vehicle Buy Price * multiplier
    vehicle_sell_multiplier_MEDIC = .35; //Medic Vehicle Garage Sell Price = Vehicle Buy Price * multiplier
    vehicle_sell_multiplier_OPFOR = -1; // -- NOT IN USE -- Simply left in for east support.

    /* "Other" Vehicle Prices */
    vehicle_chopShop_multiplier = .45; //Chop Shop price for vehicles. TO AVOID EXPLOITS NEVER SET HIGHER THAN A PURCHASE/RENTAL multipler!   Payout = Config_vehicle Price * multiplier
    vehicle_storage_fee_multiplier = .2; //Pull from garage cost --> Cost takes the playersides Buy Price * multiplier
    vehicle_cop_impound_multiplier = .25; //TO AVOID EXPLOITS NEVER SET HIGHER THAN A PURCHASE/RENTAL multipler!   Payout = Config_vehicle Price * multiplier

    disableCommanderView = true; //false - Group leaders can access the commander view. true [default] - Group leaders cannot access the commander view.
                                 //Commander/tactical view is accessed via pressing . [NUM] by default. It raises the camera significantly higher and steeper above the player in order to give a boarder tactical view of the surrounding area.

    /* Wanted System Settings *
    /* crimes[] = {String, Bounty, Code} */
    crimes[] = {
        {"STR_Crime_41F","20000","41F"},//1st Degree Murder	
        {"STR_Crime_41FA","40000","41FA"},//1st Degree Murder Ag
        {"STR_Crime_42F","15000","42F"},//2nd Degree Murder	
        {"STR_Crime_42FA","25000","42FA"},//2nd Degree Murder Ag
        {"STR_Crime_43F","12500","43F"},//Attempted Murder	
        {"STR_Crime_43FA","20000","43FA"},//Attempted Murder Ag
        {"STR_Crime_44F","12500","44F"},//Vol Manslaught	//No Aggravated Crime
        {"STR_Crime_45F","10000","45F"},//InVol Manslaugh	//No Aggravated Crime
        {"STR_Crime_46F","10000","46F"},//Veh Manslaught	//No Aggravated Crime

        {"STR_Crime_51f","5000","51f"},//Felony Robbery	
        {"STR_Crime_51fA","12500","51fA"},//Felony Robbery Ag
        {"STR_Crime_52F","7500","52F"},//Robbery of an Individual	
        {"STR_Crime_52FA","17500","52FA"},//Robbery of an Individual Ag
        {"STR_Crime_53F","10000","53F"},//Robbery of a Business	
        {"STR_Crime_53FA","17500","53FA"},//Robbery of a Business Ag
        {"STR_Crime_54M","2000","54M"},//Petty Theft	
        {"STR_Crime_54MA","5000","54MA"},//Petty Theft Ag
        {"STR_Crime_55F","12500","55F"},//Kidnapping	
        {"STR_Crime_55FA","25000","55FA"},//Kidnapping Ag
        {"STR_Crime_56F","10000","56F"},//Arson 1st Degree	
        {"STR_Crime_56FA","17500","56FA"},//Arson 1st Degree Ag
        {"STR_Crime_57F","5000","57F"},//Arson 2nd Degree	
        {"STR_Crime_57FA","10000","57FA"},//Arson 2nd Degree Ag
        {"STR_Crime_58M","2500","58M"},//Arson 3rd Degree	
        {"STR_Crime_58MA","5000","58MA"},//Arson 3rd Degree Ag
        {"STR_Crime_59F","100000","59F"},//Terrorism	//No Aggravated Crime
        {"STR_Crime_510F","10000","510F"},//Gang Terrorism	
        {"STR_Crime_510FA","15000","510FA"},//Gang Terrorism Ag
        {"STR_Crime_511M","2500","511M"},//Menacing	
        {"STR_Crime_511MA","5000","511MA"},//Menacing Ag
        {"STR_Crime_512F","17500","512F"},//Hostage Taking	
        {"STR_Crime_512FA","30000","512FA"},//Hostage Taking Ag

        {"STR_Crime_63F","7500","63F"},//Burglary	
        {"STR_Crime_63FA","12500","63FA"},//Burglary Ag
        {"STR_Crime_64F","2500","64F"},//Assault	
        {"STR_Crime_64FA","7500","64FA"},//Assault Ag
        {"STR_Crime_65M","1000","65M"},//Harassment	//No Aggravated Crime
        {"STR_Crime_66M","2500","66M"},//Break and enter	
        {"STR_Crime_66MA","5000","66MA"},//Break and enter Ag
        {"STR_Crime_67M","2000","67M"},//Stalking	//No Aggravated Crime
        {"STR_Crime_68M","2500","68M"},//Vandalism	
        {"STR_Crime_68MA","5000","68MA"},//Vandalism Ag
        {"STR_Crime_69M","5000","69M"},//Conspiracy to Commit a Crime	//No Aggravated Crime
        {"STR_Crime_610M","2000","610M"},//Lock Picking	//No Aggravated Crime
        {"STR_Crime_611M","12500","611M"},//False Imprisonment	//No Aggravated Crime
        {"STR_Crime_612M","1500","612M"},//Indecent Exposure	
        {"STR_Crime_612MA","2000","612MA"},//Indecent Exposure Ag
        {"STR_Crime_613M","2000","613M"},//Trespassing	//No Aggravated Crime

        {"STR_Crime_80M","3000","80M"},//Concealed Identity	//No Aggravated Crime
        {"STR_Crime_81M","2000","81M"},//Failure to Identify	//No Aggravated Crime
        {"STR_Crime_82M","2000","82M"},//False Identification	//No Aggravated Crime
        {"STR_Crime_83M","10000","83M"},//Resisting Arrest	
        {"STR_Crime_83MA","22500","83MA"},//Resisting Arrest Ag
        {"STR_Crime_84F","12500","84F"},//Felony Evasion	//No Aggravated Crime
        {"STR_Crime_85F","12500","85F"},//Escaping Jail	//No Aggravated Crime
        {"STR_Crime_86M","2000","86M"},//False Report	//No Aggravated Crime
        {"STR_Crime_87M","2500","87M"},//Failure to Comply	//No Aggravated Crime
        {"STR_Crime_88M","5000","88M"},//Obstruction of Justice	//No Aggravated Crime
        {"STR_Crime_89C","2000","89C"},//Failure to Yield to Emergency Vehicles	//No Aggravated Crime
        {"STR_Crime_810M","5000","810M"},//Fleeing	//No Aggravated Crime
        {"STR_Crime_811F","12500","811F"},//Jailbreaking	//No Aggravated Crime
        {"STR_Crime_812M","1000","812M"},//Failure to Pay Citation	//No Aggravated Crime

        {"STR_Crime_91F","15000","91F"},//Grand Theft Auto	
        {"STR_Crime_91FA","25000","91FA"},//Grand Theft Auto Ag
        {"STR_Crime_92M","10000","92M"},//Hit and Run	
        {"STR_Crime_92MA","20000","92MA"},//Hit and Run Ag
        {"STR_Crime_93F","15000","93F"},//Felony Hit and Run	//No Aggravated Crime
        {"STR_Crime_94M","7000","94M"},//Driving While Intoxicated	//No Aggravated Crime
        {"STR_Crime_95M","3000","95M"},//Reckless Driving	//No Aggravated Crime
        
        //{"STR_Crime_96C","See Right","96C"},//Speeding	//No Aggravated Crime /* This one doesn't get a thing ignore it*/
        {"STR_Crime_96CA","150","96CA"},//Speeding_A	//No Aggravated Crime
        {"STR_Crime_96CB","250","96CB"},//Speeding_B	//No Aggravated Crime
        {"STR_Crime_96CC","500","96CC"},//Speeding_C	//No Aggravated Crime
        {"STR_Crime_96CD","750","96CD"},//Speeding_D	//No Aggravated Crime
        {"STR_Crime_96CE","1250","96CE"},//Speeding_E	//No Aggravated Crime
        {"STR_Crime_96CF","2000","96CF"},//Speeding_F	//No Aggravated Crime
        {"STR_Crime_96CG","4000","96CG"},//Speeding_G	//No Aggravated Crime

        {"STR_Crime_97C","1000","97C"},//Failure to Stop	//No Aggravated Crime
        {"STR_Crime_98M","1250","98M"},//Operation of a Vehicle without a License	//No Aggravated Crime
        {"STR_Crime_99M","750","99M"},//Illegal Parking	//No Aggravated Crime
        {"STR_Crime_910C","500","910C"},//Failure to use Headlights	//No Aggravated Crime
        {"STR_Crime_911M","500","911M"},//Illegal U-Turn	//No Aggravated Crime
        {"STR_Crime_912M","750","912M"},//Failure to Yield	//No Aggravated Crime
        {"STR_Crime_913M","750","913M"},//Obstruction of Traffic	//No Aggravated Crime
        {"STR_Crime_914C","250","914C"},//Failure to Indicate	//No Aggravated Crime
        {"STR_Crime_915M","10000","915M"},//Street Racing	//No Aggravated Crime
        {"STR_Crime_916M","10000","916M"},//Excessive Speeding	//No Aggravated Crime

        {"STR_Crime_101F","150000","101F"},//Drug Cultivation and Manufacturing	//No Aggravated Crime
        {"STR_Crime_102F","50000","102F"},//Class 1 Drug Distribution	
        {"STR_Crime_102FA","75000","102FA"},//Class 1 Drug Distribution Ag
        {"STR_Crime_103M","25000","103M"},//Class 2 Drug Distribution	
        {"STR_Crime_103MA","50000","103MA"},//Class 2 Drug Distribution Ag
        {"STR_Crime_104M","10000","104M"},//Class 1 Drug Possession	//No Aggravated Crime
        {"STR_Crime_105M","5000","105M"},//Class 2 Drug Possession	//No Aggravated Crime
        {"STR_Crime_106M","2500","106M"},//Class 1 Drug Paraphernalia	//No Aggravated Crime
        {"STR_Crime_107M","1500","107M"}//Class 2 Drug Paraphernalia	//No Aggravated Crime
    };


};

#include "Config_Clothing.hpp"
#include "Config_Licenses.hpp"
#include "Config_Vehicles.hpp"
#include "Config_vItems.hpp"
#include "Config_Weapons.hpp"
#include "Config_Gather.hpp"
#include "Config_SpawnPoints.hpp"
#include "Config_Process.hpp"
#include "Config_Housing.hpp"
#include "Config_Garages.hpp"
