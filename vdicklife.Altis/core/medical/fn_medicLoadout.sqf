#include "..\..\script_macros.hpp"
/*
    File: fn_medicLoadout.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Loads the medic out with the default gear.
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

player addUniform "U_C_Paramedic_01_F";
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
[true,"defibrillator",1] call life_fnc_handleInv; 

if !(player getUnitTrait["medic"]) then {
    player setUnitTrait["medic",true];
};

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
