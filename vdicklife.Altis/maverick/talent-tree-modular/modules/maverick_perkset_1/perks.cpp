//medic Color rgba   0.878,0.298,0.298,1
// medic side  GUER
// cop Color  RGBA	 0.294,0.294,0.956,1
//Cop side is WEST
//CIV COLOR RGBA 	 1,1,1,1
//Civ side is CIV

// -- Weapon related perks
class perk_gunsspecialist_lessRecoil_1 {
	displayName = "Recoil Compensation";
	requiredPerkPoints = 5;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 5 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-5% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_1.sqf";
	limitToSides[] = {"CIV","WEST"};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_2 {
	displayName = "Recoil Compensation 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_gunsspecialist_lessRecoil_1";
	subtitle = "Level 16 Required, 6 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-10% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_2.sqf";
	limitToSides[] = {"CIV","WEST"};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_3 {
	displayName = "Recoil Compensation 3";
	requiredPerkPoints = 7;
	requiredLevel = 25;
	requiredPerk = "perk_gunsspecialist_lessRecoil_2";
	subtitle = "Level 25 Required, 7 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-20% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_3.sqf";
	limitToSides[] = {"CIV","WEST"};
	color[] = {1,1,1,1};
};

// -- Paycheck
class perk_paycheck_1 {
	displayName = "Paycheck";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 2 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+25% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_2 {
	displayName = "Paycheck 2";
	requiredPerkPoints = 3;
	requiredLevel = 8;
	requiredPerk = "perk_paycheck_1";
	subtitle = "Level 8 Required, 3 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+50% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_3 {
	displayName = "Paycheck 3";
	requiredPerkPoints = 6;
	requiredLevel = 21;
	requiredPerk = "perk_paycheck_2";
	subtitle = "Level 21 Required, 6 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+100% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- Faster processing
class perk_processing_1 {
	displayName = "Processing Speed";
	requiredPerkPoints = 3;
	requiredLevel = 4;
	requiredPerk = "perk_gatherspeed_2";
	subtitle = "Level 4 Required, 3 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+10% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_2 {
	displayName = "Processing Speed 2";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_processing_1";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+15% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_3 {
	displayName = "Processing Speed 3";
	requiredPerkPoints = 4;
	requiredLevel = 17;
	requiredPerk = "perk_processing_2";
	subtitle = "Level 17 Required, 4 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+25% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// -- Faster lockpicking
class perk_locksmith_1 {
	displayName = "Locksmith";
	requiredPerkPoints = 5;
	requiredLevel = 7;
	requiredPerk = "";
	subtitle = "Level 7 Required, 5 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+10% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_2 {
	displayName = "Locksmith 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_locksmith_1";
	subtitle = "Level 16 Required, 6 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+15% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_3 {
	displayName = "Locksmith 3";
	requiredPerkPoints = 4;
	requiredLevel = 28;
	requiredPerk = "perk_locksmith_2";
	subtitle = "Level 28 Required, 4 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+25% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

//Health Insurance

class perk_HealthInsurance_1 {
	displayName = "Health Insurance";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 2 Perk Points";
	description = "Health Insurance that reduces revive cost when medic revives.<br/><br/><t color='#10FF45'>+20% Reduced Revive Cost</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_CanadaHealthInsurance_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_HealthInsurance_2 {
	displayName = "Health Insurance Part:B";
	requiredPerkPoints = 4;
	requiredLevel = 6;
	requiredPerk = "perk_HealthInsurance_1";
	subtitle = "Level 6 Required, 4 Perk Points";
	description = "Health Insurance that reduces revive cost when medic revives.<br/><br/><t color='#10FF45'>+40% Reduced Revive Cost</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_CanadaHealthInsurance_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_HealthInsurance_3 {
	displayName = "Health Insurance Part:D";
	requiredPerkPoints = 4;
	requiredLevel = 12;
	requiredPerk = "perk_HealthInsurance_2";
	subtitle = "Level 12 Required, 4 Perk Points";
	description = "Health Insurance that reduces revive cost when medic revives.<br/><br/><t color='#10FF45'>+60% Reduced Revive Cost</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_CanadaHealthInsurance_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

	//All Repair Speed
class perk_Repair_1 {
	displayName = "Repair";
	requiredPerkPoints = 5;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 5 Perk Points";
	description = "Learn to Repair vehicles faster<br/><br/><t color='#10FF45'>+10% faster Repairs</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_RepairSpeed_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_Repair_2 {
	displayName = "Repair 2";
	requiredPerkPoints = 6;
	requiredLevel = 8;
	requiredPerk = "perk_Repair_1";
	subtitle = "Level 8 Required, 6 Perk Points";
	description = "Learn to Repair vehicles faster<br/><br/><t color='#10FF45'>+15% faster Repairs</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_RepairSpeed_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_Repair_3 {
	displayName = "Repair 3";
	requiredPerkPoints = 4;
	requiredLevel = 12;
	requiredPerk = "perk_Repair_2";
	subtitle = "Level 12 Required, 4 Perk Points";
	description = "Learn to Repair vehicles faster<br/><br/><t color='#10FF45'>+25% faster Repairs</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_RepairSpeed_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

	//Revive Speed
class perk_Revive_1 {
	displayName = "Revive 1";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 2 Perk Points";
	description = "Learn to Revive Patient's faster<br/><br/><t color='#10FF45'>+10% faster Revives</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_ReviveSpeed_1.sqf";
	limitToSides[] = {"GUER"};
	color[] = {0.878,0.298,0.298,1};
};

class perk_Revive_2 {
	displayName = "Revive 2";
	requiredPerkPoints = 3;
	requiredLevel = 5;
	requiredPerk = "perk_Revive_1";
	subtitle = "Level 5 Required, 3 Perk Points";
	description = "Learn to Revive Patient's faster<br/><br/><t color='#10FF45'>+15% faster Revives</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_ReviveSpeed_2.sqf";
	limitToSides[] = {"GUER"};
	color[] = {0.878,0.298,0.298,1};
};

class perk_Revive_3 {
	displayName = "Revive 3";
	requiredPerkPoints = 4;
	requiredLevel = 10;
	requiredPerk = "perk_Revive_2";
	subtitle = "Level 10 Required, 4 Perk Points";
	description = "Learn to Revive Patient's faster<br/><br/><t color='#10FF45'>+25% faster Revives</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_ReviveSpeed_3.sqf";
	limitToSides[] = {"GUER"};
	color[] = {0.878,0.298,0.298,1};
};


// -- More Money on robbing Shops
class perk_RobCash_1 {
	displayName = "Score Size";
	requiredPerkPoints = 5;
	requiredLevel = 3;
	requiredPerk = "";
	subtitle = "Level 3 Required, 5 Perk Points";
	description = "Cash from Robbing Stores Increased By<br/><br/><t color='#10FF45'>+10% More Cash</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_RobStoreCash_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_RobCash_2 {
	displayName = "Score Size 2";
	requiredPerkPoints = 6;
	requiredLevel = 8;
	requiredPerk = "perk_RobCash_1";
	subtitle = "Level 8 Required, 6 Perk Points";
	description = "Cash from Robbing Stores Increased By<br/><br/><t color='#10FF45'>+15% More Cash</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_RobStoreCash_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_RobCash_3 {
	displayName = "Score Size 3";
	requiredPerkPoints = 4;
	requiredLevel = 13;
	requiredPerk = "perk_RobCash_2";
	subtitle = "Level 13 Required, 4 Perk Points";
	description = "Cash from Robbing Stores Increased By<br/><br/><t color='#10FF45'>+25% More Cash</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_RobStoreCash_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// increase gather amount
class perk_gatheramount_1{
	displayName = "Gather Amount";
	requiredPerkPoints = 3;
	requiredLevel = 5;
	requiredPerk = "perk_processing_2";
	subtitle = "Level 5 Required, 3 Perk Points";
	description = "Gather amount increased By:<br/><br/><t color='#38FF3F'> 200% </t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatheramount_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_gatheramount_2{
	displayName = "Gather Amount 2";
	requiredPerkPoints = 6;
	requiredLevel = 10;
	requiredPerk = "perk_gatheramount_1";
	subtitle = "Level 10 Required, 6 Perk Points";
	description = "Gather amount increased By:<br/><br/><t color='#38FF3F'>400%</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatheramount_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};


class perk_gatheramount_3{
	displayName = "Gather Amount 3";
	requiredPerkPoints = 9;
	requiredLevel = 15;
	requiredPerk = "perk_gatheramount_2";
	subtitle = "Level 15 Required, 9 Perk Points";
	description = "Gather amount increased By:<br/><br/><t color='#38FF3F'> 600%</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatheramount_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// increase gather speed
class perk_gatherspeed_1{
	displayName = "Gather  Speed";
	requiredPerkPoints = 3;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 3 Perk Points";
	description = "Gather  Speed increased By:<br/><br/><t color='#38FF3F'> 20% </t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatherspeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_gatherspeed_2{
	displayName = "Gather  Speed 2";
	requiredPerkPoints = 6;
	requiredLevel = 10;
	requiredPerk = "perk_gatherspeed_1";
	subtitle = "Level 10 Required, 6 Perk Points";
	description = "Gather Speed increased By:<br/><br/><t color='#38FF3F'>40% </t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatherspeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};


class perk_gatherspeed_3{
	displayName = "Gather  Speed 3";
	requiredPerkPoints = 9;
	requiredLevel = 15;
	requiredPerk = "perk_gatherspeed_2";
	subtitle = "Level 15 Required, 9 Perk Points";
	description = "Gather  Speed increased By:<br/><br/><t color='#38FF3F'> 60% </t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatherspeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// increase process amount
class perk_processamount_1{
	displayName = "Process Amount";
	requiredPerkPoints = 3;
	requiredLevel = 5;
	requiredPerk = "perk_gatheramount_2";
	subtitle = "Level 5 Required, 3 Perk Points";
	description = "Process amount increased By:<br/><br/><t color='#38FF3F'> 200% </t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_Process_amount_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processamount_2{
	displayName = "Process Amount 2";
	requiredPerkPoints = 6;
	requiredLevel = 10;
	requiredPerk = "perk_Processamount_1";
	subtitle = "Level 10 Required, 6 Perk Points";
	description = "Process amount increased By:<br/><br/><t color='#38FF3F'>400%</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_Process_amount_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};


class perk_processamount_3{
	displayName = "Process Amount 3";
	requiredPerkPoints = 9;
	requiredLevel = 15;
	requiredPerk = "perk_Processamount_2";
	subtitle = "Level 15 Required, 9 Perk Points";
	description = "Process amount increased By:<br/><br/><t color='#38FF3F'> 600%</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_Process_amount_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

	//Cop Bomb Defuse
class perk_defuse_1 {
	displayName = "Defuse 1";
	requiredPerkPoints = 5;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 5 Perk Points";
	description = "Learn to disarm explosives faster<br/><br/><t color='#10FF45'>+10% faster Defusing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_DefuseSpeed_1.sqf";
	limitToSides[] = {"WEST"};
	color[] = {0.294,0.294,0.956,1};
};

class perk_defuse_2 {
	displayName = "Defuse 2";
	requiredPerkPoints = 6;
	requiredLevel = 3;
	requiredPerk = "perk_defuse_1";
	subtitle = "Level 3 Required, 6 Perk Points";
	description = "Learn to disarm explosives faster<br/><br/><t color='#10FF45'>+15% faster Defusing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_DefuseSpeed_2.sqf";
	limitToSides[] = {"WEST"};
	color[] = {0.294,0.294,0.956,1};
};

class perk_defuse_3 {
	displayName = "Defuse 3";
	requiredPerkPoints = 4;
	requiredLevel = 9;
	requiredPerk = "perk_defuse_2";
	subtitle = "Level 9 Required, 4 Perk Points";
	description = "Learn to disarm explosives faster<br/><br/><t color='#10FF45'>+25% faster Defusing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_DefuseSpeed_3.sqf";
	limitToSides[] = {"WEST"};
	color[] = {0.294,0.294,0.956,1};
};