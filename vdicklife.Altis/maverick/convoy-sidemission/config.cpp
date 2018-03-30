/*
	Author: Maverick Applications
	Convoy sidemission for Altis Life servers
*/

class Maverick_ConvoySidemission
{
	class Config
	{
		ConfigPool[] 							= {"GoldBarTransportSmall","WeaponTransport","GoldBarTransportLarge"};
		ForceConfigAtIndex 						= 1;
		SleepTime								= 900;
		MakePlayersHostileFor					= 60;
		TimeoutBetweenMarkers					= 300;
		SidesNotAttackable[]					= {"GUER","WEST"};
		AIDifficulty[] = {
												{"aimingAccuracy", 0.55000001},
												{"aimingShake", 0.5},
												{"aimingSpeed", 0.65},
												{"endurance", 0.654},
												{"spotDistance", 0.62214},
												{"spotTime", 0.565647},
												{"courage", 0.45},
												{"reloadSpeed", 0.75},
												{"commanding", 0.65},
												{"general", 0.55000001}
		};
	};
	class ConvoyConfigurationsPool
	{
		/*********************** EXAMPLE TRANSPORT FOR VIRTUAL ITEMS ***********************/
		class GoldBarTransportSmall
		{
			class MapConfiguration
			{
				showMapMarker					= 1;
				text							= "Gold Transport";
			};

			class AIUnits
			{
				gear[] = {
												"H_MilCap_gen_F", // Headgear
												"", // Glasses
												"U_B_GEN_Soldier_F", // Uniform
												"V_TacVest_gen_F", // Vest
												"", // Backpack
												{"arifle_SPAR_01_blk_F", "30Rnd_556x45_Stanag", 5}, // Primary weapon, ammo and how many magazines
												{"", "", 5} // Secondary weapon, ammo and how many magazines
				};
			};

			class Messages
			{
				// Enable messages?
				enabled							= 1;

				// Mission started announcement
				startAnnouncementHeader			= "Gold Transport";
				startAnnouncementDescription	= "The Federal Reserve's guarded transporter is currently moving a small amount of gold.";

				// Mission objective completed
				stoppedAnnouncementHeader		= "Gold Transporter disabled";
				stoppedAnnouncementDescription	= "The gold transporter has been disabled.";

				// Mission completed announcement
				endAnnouncementHeader			= "Gold Transport ended";
				endAnnouncementDescription  	= "The mission has ended.";
			};

			class Vehicles
			{
				// Vehicle configuration
				vehiclesInOrder[]				= {"O_T_LSV_02_armed_F","O_T_Truck_03_ammo_ghex_F","O_T_LSV_02_unarmed_F"};
				vehiclesSpawnMarkersInOrder[]	= {"mav_convoy_goldspawn1","mav_convoy_goldspawn2","mav_convoy_goldspawn3"};
				vehiclesInheritDirection		= 1;
				mainVehicleAtIndex				= 1;
				maxSpeed						= 50;
				removeVehiclesAfterSeconds		= 600;
				additionalUnitsAmount			= 10;
			};

			class Route
			{
				// Route configuration
				markers[] 						= {"mav_convoy_goldwaypoint1","mav_convoy_goldwaypoint2","mav_convoy_goldwaypoint3","mav_convoy_goldwaypoint4"};
			};

			class Loot
			{
				type 							= "virtual";
				container						= "Land_CargoBox_V1_F";
				data[] = {
												{"goldbar", 10}
				};
			};
		};


		/*********************** EXAMPLE TRANSPORT FOR REAL ITEMS ***********************/
		class WeaponTransport
		{
			class MapConfiguration
			{
				showMapMarker					= 1;
				text							= "Weapon Transport";
			};

			class AIUnits
			{
				gear[] = {
												"H_MilCap_gen_F", // Headgear
												"", // Glasses
												"U_B_GEN_Soldier_F", // Uniform
												"V_TacVest_gen_F", // Vest
												"", // Backpack
												{"arifle_SPAR_01_blk_F", "30Rnd_556x45_Stanag", 5}, // Primary weapon, ammo and how many magazines
												{"", "", 5} // Secondary weapon, ammo and how many magazines
				};
			};

			class Messages
			{
				// Enable messages?
				enabled							= 1;

				// Mission started announcement
				startAnnouncementHeader			= "Weapon Transport";
				startAnnouncementDescription	= "The local gangs is currently transporting small amounts of weapons through Altis with ground vehicles.";

				// Mission objective completed
				stoppedAnnouncementHeader		= "Weapon Transporter disabled";
				stoppedAnnouncementDescription	= "The Weapon transporter has been disabled.";

				// Mission completed announcement
				endAnnouncementHeader			= "Weapon Transport ended";
				endAnnouncementDescription  	= "The mission has ended.";
			};

			class Vehicles
			{
				// Vehicle configuration
				vehiclesInOrder[]				= {"O_T_LSV_02_armed_F","O_T_LSV_02_unarmed_F","O_T_Truck_03_transport_ghex_F","O_T_Truck_03_ammo_ghex_F","O_T_LSV_02_unarmed_F"};
				vehiclesSpawnMarkersInOrder[]	= {"mav_convoy_weapon1spawn1","mav_convoy_weapon1spawn2","mav_convoy_weapon1spawn3","mav_convoy_weapon1spawn4","mav_convoy_weapon1spawn5"};
				vehiclesInheritDirection		= 1;
				mainVehicleAtIndex				= 3;
				maxSpeed						= 50;
				removeVehiclesAfterSeconds		= 600;
				additionalUnitsAmount			= 40;
			};

			class Route
			{
				// Route configuration
				markers[] 						= {"mav_convoy_weapon1waypoint1","mav_convoy_weapon1waypoint2","mav_convoy_weapon1waypoint3","mav_convoy_weapon1waypoint4","mav_convoy_weapon1waypoint5"};
			};

			class Loot
			{
				type 							= "real";
				container						= "B_CargoNet_01_ammo_F";
				data[] = {
												{"srifle_DMR_03_F", 10, "WEAPON"},
												{"optic_LRPS", 10, "ITEM"},
												{"20Rnd_762x51_Mag", 35, "MAGAZINE"},
												{"B_Carryall_khk", 5, "BACKPACK"}
				};
			};
		};
	
		class GoldBarTransportLarge
		{
			class MapConfiguration
			{
				showMapMarker					= 1;
				text							= "Gold Transport";
			};

			class AIUnits
			{
				gear[] = {
												"H_MilCap_gen_F", // Headgear
												"", // Glasses
												"U_B_GEN_Soldier_F", // Uniform
												"V_TacVest_gen_F", // Vest
												"", // Backpack
												{"arifle_SPAR_01_blk_F", "30Rnd_556x45_Stanag", 5}, // Primary weapon, ammo and how many magazines
												{"", "", 5} // Secondary weapon, ammo and how many magazines
				};
			};

			class Messages
			{
				// Enable messages?
				enabled							= 1;

				// Mission started announcement
				startAnnouncementHeader			= "Gold Transport";
				startAnnouncementDescription	= "The Federal Reserve's guarded transporter is currently moving larger amounts of gold.";

				// Mission objective completed
				stoppedAnnouncementHeader		= "Gold Transporter disabled";
				stoppedAnnouncementDescription	= "The gold transporter has been disabled.";

				// Mission completed announcement
				endAnnouncementHeader			= "Gold Transport ended";
				endAnnouncementDescription  	= "The mission has ended.";
			};

			class Vehicles
			{
				// Vehicle configuration
				vehiclesInOrder[]				= {"O_T_LSV_02_armed_F","O_T_Truck_03_ammo_ghex_F","O_T_LSV_02_unarmed_F"};
				vehiclesSpawnMarkersInOrder[]	= {"mav_convoy_goldspawn1","mav_convoy_goldspawn2","mav_convoy_goldspawn3"};
				vehiclesInheritDirection		= 1;
				mainVehicleAtIndex				= 1;
				maxSpeed						= 50;
				removeVehiclesAfterSeconds		= 600;
				additionalUnitsAmount			= 10;
			};

			class Route
			{
				// Route configuration
				markers[] 						= {"mav_convoy_goldwaypoint1","mav_convoy_goldwaypoint2","mav_convoy_goldwaypoint3","mav_convoy_goldwaypoint4"};
			};

			class Loot
			{
				type 							= "virtual";
				container						= "Land_CargoBox_V1_F";
				data[] = {
												{"goldbar", 25}
				};
			};
		};
	
	//add above this line everything below is closeing the script
	};
};