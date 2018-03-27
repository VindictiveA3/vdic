#include "..\..\script_macros.hpp"
/*
    File:   fn_Robshops.sqf
    Author: MrKraken

    Description:

    Modified by: Pril


*/
private ["_robber","_shop","_kassa","_ui","_pgText","_progress","_cP","_rip","_action"];

_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
_action = [_this,2] call BIS_fnc_param;
if (west countside playableunits < 1) exitwith {hint "There must be atleast 1 Cop on to rob the store!";};
if(side _robber !=civilian) exitWith {hint "You need to be a civilian to rob this shop.";};
if(_robber distance _shop > 5) exitWith {hint "You need to stay within 5m to rob this shop";};
if (vehicle player !=_robber) exitWith {hint "You need to be out of your vehicle first!";};

if!(alive _robber) exitWith {};
if (currentWeapon _robber isEqualTo "") exitWith {hint "You need a weapons to rob this shop!";};

_rip = true;
_kassa = 5000 + round(random 40000);
_shop removeAction _action;
_chance = random(100);  // change this to a lower number, if you want the chance of getting money from the Robbery less.

if(_chance >= 40) then {
[1,format["000 ALERT:\n\n%1 is being robbed by %2",_shop,_robber, name _robber]] remoteExec ["life_fnc_broadcast",west]
};

disableSerialization;
5 cutRsc ["life_progress", "PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Robbing Shop, stay close (5m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

if(_rip) then
{
    while{true} do
        {
            sleep 0.85;
            _cP = _cP + 0.01;// mav function to rob faster
            _progress progressSetPosition _cP;
            _pgText ctrlSetText format ["Robbing Shop, stay close (5m)  (%1%2)...",round(_cP * 100), "%"];

             if (LIFE_SETTINGS(getNumber,"robberyMarkers") isEqualTo 1) then {
                _marker = createMarker ["Marker200", _shop];
                "Marker200" setMarkerColor "ColorRed";
                "Marker200" setMarkerText "ATTENTION: ROBBERY IN PROGRESS!!!";
                "Marker200" setMarkerType "mil_warning";
                };

            if(_cP >=1) exitWith {};
            if(_robber distance _shop > 5.5) exitWith{};
            if!(alive _robber) exitWith {};
        };

        if(_robber getVariable "restrained") exitWith {_rip = false; hint "You have been restrained!!";};      //Player got arrested, or restrained by another player!
        if(life_istazed) exitWith {_rip = false; hint "You were tazed!";};                                     //Player was tazed
        if!(alive _robber) exitWith {_rip = false;};

        if(_robber distance _shop > 5.5) exitWith {
        hint "You need to stay within 5m to rob this shop! Cash register is now locked, and police have been notified!";
        5 cutText ["","PLAIN"];
        [1,format["%1 attempted to rob %2!",_robber,name _robber, _shop]] remoteExec ["life_fnc_broadcast",west];
        [getPlayerUID _robber, _robber getVariable ["realname",name _robber], "53FA"] remoteExecCall ["life_fnc_wantedAdd", RSERV];
        };
        5 cutText ["","PLAIN"];
        _kassaPerk = _kassa * (missionNamespace getVariable ["mav_ttm_var_RobStoreCashMultiplier", 1]);
        titleText[format["You managed to steal %1, now get away before the cops arrive!",[_kassaPerk] call life_fnc_numberText], "PLAIN"];
        life_cash = life_cash + _kassaPerk;
        _rip = false;
        life_use_atm = false;
        playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", _robber];
        deleteMarker "Marker200";
        sleep 25;
        [1, format["Altis News Corp: Gas Staion %1 was robbed for a total of $%2",_shop, [_kassaPerk] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast", civilian];
        sleep ((LIFE_SETTINGS(getNumber,"noatm_timer")) * 60);
        life_use_atm = true;
        if!(alive _robber) exitWith {};
        [getPlayerUID _robber, _robber getVariable ["realname",name _robber], "53FA"] remoteExecCall ["life_fnc_wantedAdd", RSERV];
        call SOCK_fnc_updatePartial;
        };
sleep 300; //5 Minutes
_action = _shop addAction["Rob Shop",life_fnc_robShops,civilian];