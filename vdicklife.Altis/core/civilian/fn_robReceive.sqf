#include "..\..\script_macros.hpp"
/*
    File: fn_robReceive.sqf
    Author: Bryan "Tonic" Boardwine

    Description:

*/
params [
    ["_cash",0,[0]],
    ["_victim",objNull,[objNull]],
    ["_robber",objNull,[objNull]]
];

if (_robber == _victim) exitWith {};
if (_cash isEqualTo 0) exitWith {titleText[localize "STR_Civ_RobFail","PLAIN"]};

CASH = CASH + _cash;
["RobPlayer"] spawn mav_ttm_fnc_addExp;
[0] call SOCK_fnc_updatePartial;
titleText[format [localize "STR_Civ_Robbed",[_cash] call life_fnc_numberText],"PLAIN"];

if (LIFE_SETTINGS(getNumber,"player_moneyLog") isEqualTo 1) then {
    if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
        money_log = format [localize "STR_DL_ML_Robbed_BEF",[_cash] call life_fnc_numberText,_victim,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
    } else {
        money_log = format [localize "STR_DL_ML_Robbed",profileName,(getPlayerUID player),[_cash] call life_fnc_numberText,_victim,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
    };
    publicVariableServer "money_log";
};

if (LIFE_SETTINGS(getNumber,"player_ExtDebugLog") isEqualTo 1) then {
    if (LIFE_SETTINGS(getNumber,"player_ExtDebugTerm") isEqualTo 1) then {
        money_log = format [localize "STR_DL_ML_Robbed",profileName,(getPlayerUID player),[_cash] call life_fnc_numberText,_victim,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
        [money_log,2,true,2]remoteExec ["log_fnc_logger",RANY]
    }else{
        money_log = format [localize "STR_DL_ML_Robbed",profileName,(getPlayerUID player),[_cash] call life_fnc_numberText,_victim,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
            [money_log]remoteExec ["log_fnc_logger",RANY]
    };
};