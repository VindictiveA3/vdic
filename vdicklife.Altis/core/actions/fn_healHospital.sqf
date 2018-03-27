#include "..\..\script_macros.hpp"
/*
    File: fn_healHospital.sqf
    Author: Bryan "Tonic" Boardwine
    Reworked: Jesse "TKCJesse" Schultz

    Description:
    Prompts user with a confirmation dialog to heal themselves.
    Used at the hospitals to restore health to full.
    Note: Dialog helps stop a few issues regarding money loss.
*/
private ["_healCost","_action"];
if (life_action_inUse) exitWith {};
if ((damage player) < 0.01) exitWith {hint localize "STR_NOTF_HS_FullHealth"};
_healCost = LIFE_SETTINGS(getNumber,"hospital_heal_fee");
_copay = _healCost * (missionNamespace getVariable ["mav_ttm_var_CanadaHealthInsurance", 1]);
if (CASH < _copay) exitWith {hint format [localize "STR_NOTF_HS_NoCash",[_copay] call life_fnc_numberText];};

life_action_inUse = true;
_action = [
    format [localize "STR_NOTF_HS_PopUp",[_copay] call life_fnc_numberText],
    localize "STR_NOTF_HS_TITLE",
    localize "STR_Global_Yes",
    localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if (_action) then {
    titleText[localize "STR_NOTF_HS_Healing","PLAIN"];
    closeDialog 0;
    uiSleep 8;
    if (player distance (_this select 0) > 5) exitWith {life_action_inUse = false; titleText[localize "STR_NOTF_HS_ToFar","PLAIN"]};

    titleText[localize "STR_NOTF_HS_Healed","PLAIN"];
    player setDamage 0;
    CASH = CASH - _copay;
    life_action_inUse = false;
} else {
    hint localize "STR_NOTF_ActionCancel";
    closeDialog 0;
    life_action_inUse = false;
};
