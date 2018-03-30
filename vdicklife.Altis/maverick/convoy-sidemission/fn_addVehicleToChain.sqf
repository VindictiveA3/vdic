scriptName "fn_addVehicleToChain";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: fn_addVehicleToChain.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "fn_addVehicleToChain.sqf"

_vehicle = param[0, objNull, [objNull]];

if (isNull _vehicle) exitWith {};
if (isDedicated) exitWith {};

life_vehicles pushBack _vehicle;