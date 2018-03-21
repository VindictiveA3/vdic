scriptName "fn_loadVehicleModification";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: fn_loadVehicleModification.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "fn_loadVehicleModification.sqf"

_data = param[0,[],[[]]];
_veh = param[1,objNull,[objNull]];
_delay = param[2,0,[0]];
_type = typeOf _veh;

if (count _data < 1) exitWith {};

diag_log str _data;

sleep _delay;

_masterConfig = [_type] call mav_tuning_fnc_getMasterConfig;

if (_masterConfig != "") then {
	// Log
	diag_log format ["Tuning: Applying the following data to vehicle %1", _data];

	// Raw
	_rawPool = getArray(missionConfigFile >> "Maverick_Tuning" >> "Vehicles" >> _masterConfig >> "RawModifications" >> "pool");
	if (count _rawPool > 0) then {
		{
			_animationPhase = (_data select 0) select _forEachIndex;
			_config = _x;
			_parts = getArray(missionConfigFile >> "Maverick_Tuning" >> "Vehicles" >> _masterConfig >> "RawModifications" >> _config >> "parts");
			{
				_veh animate [_x, _animationPhase];
			} forEach _parts;
		//} forEach (_data select 0); // old bottom header
		} forEach _rawPool;
	};

	// Color
	if ((_data select 1) == "") then {
		// No color was saved in the database
		_data set [1, (getObjectTextures _veh) select 0];

		// Log
		diag_log format ["Tuning: No color found when applying! Default to %1", (_data select 1)];
	};

	if ((_data select 1) != "") then {
		if (((_data select 1) find "\") == 0) then {
			// String starts with \ and has to be fixed!
			_data set [1, "mpmissions\__cur_mp." + (toLower worldName) + (_data select 1)];
		};
	};

	/*// Altis
	if (((_data select 1) find "mpmissions\__cur_mp.altis\") != -1) then {
		_data set [1, (_data select 1) select [25]];
	};

	// Tanoa
	if (((_data select 1) find "mpmissions\__cur_mp.tanoa\") != -1) then {
		_data set [1, (_data select 1) select [25]];
	};

	// Malden
	if (((_data select 1) find "mpmissions\__cur_mp.malden\") != -1) then {
		_data set [1, (_data select 1) select [26]];
	};*/

	if ((_data select 1) != "") then {
		diag_log format ["Tuning: Coloring vehicle %1", (_data select 1)];
		_veh setObjectTextureGlobal [0, (_data select 1)];
	} else {
		diag_log "Tuning: No custom texture found";
	};

	_defaultMaterial = getText(missionConfigFile >> "Maverick_Tuning" >> "Vehicles" >> _masterConfig >> "defaultMaterial");

	// Material
	if (_defaultMaterial != "" && (_data param [5, ""]) == "") then {
		_data set [5, _defaultMaterial];
	};

	_mat = _data param [5, "maverick\tuning\bin\materials\default.rvmat", [""]];
	_veh setObjectMaterialGlobal [0, _mat];
};