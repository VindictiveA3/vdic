#include "..\..\script_macros.hpp"
/*
    File: fn_revived.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    THANK YOU JESUS I WAS SAVED!
*/
private ["_medic","_dir","_reviveCost"];
_medic = param [0,"Unknown Medic",[""]];
_reviveCost = LIFE_SETTINGS(getNumber,"revive_fee");

[life_save_gear] spawn life_fnc_loadDeadGear;
life_corpse setVariable ["realname",nil,true]; //Should correct the double name sinking into the ground.
[life_corpse] remoteExecCall ["life_fnc_corpse",RANY];
_dir = getDir life_corpse;


closeDialog 0;
life_deathCamera cameraEffect ["TERMINATE","BACK"];
camDestroy life_deathCamera;

//Take fee for services.
if (BANK > _reviveCost) then {
    BANK = BANK -( _reviveCost * (missionNamespace getVariable ["mav_ttm_var_CanadaHealthInsurance", 1]));
} else {
    BANK = 0;
};
_copay = _reviveCost * (missionNamespace getVariable ["mav_ttm_var_CanadaHealthInsurance", 1]);
hint format [localize "STR_Medic_RevivePay",_medic,[_copay] call life_fnc_numberText];
//Bring me back to life.
player setDir _dir;
player setPosASL (visiblePositionASL life_corpse);
life_corpse setVariable ["Revive",nil,true];
life_corpse setVariable ["name",nil,true];
[life_corpse] remoteExecCall ["life_fnc_corpse",RANY];
deleteVehicle life_corpse;

life_action_inUse = false;
life_is_alive = true;
player setDamage .51;
player setFatigue 1;

player setVariable ["Revive",nil,true];
player setVariable ["name",nil,true];
player setVariable ["Reviving",nil,true];
["WaitOnRevive"] spawn mav_ttm_fnc_addExp;
life_nlrtimer_stop = true;

[] call life_fnc_hudUpdate; //Request update of hud.
[] call SOCK_fnc_updateRequest;
sleep 2;
[] call life_fnc_playerSkins;