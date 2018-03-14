/*
    File: fn_copLoadout.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: Itsyuka

    Description:
    Loads the cops out with the default gear.
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "U_Rangemaster";
player addVest "Vest_V_TacVestIR_blk";
player addBackpack "B_Carryall_cbr";
player addHeadgear "H_Cap_police";


player addMagazine "16Rnd_9x21_Mag";
player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";


//adding to backpack
player addItemToBackpack "H_CrewHelmetHeli_B";
player addItemToBackpack "Item_FirstAidKit"; 
player addItemToBackpack "Item_FirstAidKit";
player addItemToBackpack "Item_Rangefinder";
player addItemToBackpack " Item_O_NVGoggles_urb_F "; 

/* ITEMS */
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemGPS";

player addItem "donuts";
player assignItem "donuts";
player addItem "coffee";
player assignItem "coffee";
player addItem "defibrillator";
player assignItem "defibrillator";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;


