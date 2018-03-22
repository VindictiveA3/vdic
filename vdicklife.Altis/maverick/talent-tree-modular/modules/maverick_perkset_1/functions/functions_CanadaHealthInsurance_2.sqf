scriptName "functions_CanadaHealthInsurance_2";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: functions_CanadaHealthInsurance_2.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "functions_CanadaHealthInsurance_2.sqf"

_ownsDependency = [life_currentExpPerks, "perk_HealthInsurance_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency) then {
	mav_ttm_var_CanadaHealthInsurance = 0.6;//40% discount off revive fee
};