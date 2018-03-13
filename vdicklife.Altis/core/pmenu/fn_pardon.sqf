#include "..\..\script_macros.hpp"
/*
    File: fn_pardon.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Pardons the selected player.
*/
private ["_display","_list"];
disableSerialization;
if !(playerSide isEqualTo west) exitWith {};
if !(call life_coplevel >= 3) exitWith { hint "Senior Patrol or Higher Only!"; };  //Should probably, mostly, likely, work. I think. - Wolfe

_display = findDisplay 2400;
_list = _display displayCtrl 2402;
_data = lbData[2401,(lbCurSel 2401)];
_data = call compile format ["%1", _data];
if (isNil "_data") exitWith {};
if (!(_data isEqualType [])) exitWith {};
if (_data isEqualTo []) exitWith {};

if (life_HC_isActive) then {
    [(_data select 0)] remoteExecCall ["HC_fnc_wantedRemove",HC_Life];
} else {
    [(_data select 0)] remoteExecCall ["life_fnc_wantedRemove",RSERV];
};
