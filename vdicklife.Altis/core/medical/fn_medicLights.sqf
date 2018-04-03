#include "..\..\script_macros.hpp"
/*
File: fn_copLights.sqf
Date Created: 2.24.2015
Date Modified: 7.23.2015 v2.1
*/

 //[x = side to side, y = front or back, z = height]

private ["_vehicle","_lightRed","_lightWhite","_lightsOn","_brightnessHigh","_brightnessLow","_attach","_leftLights","_rightLights","_type","_attenuation"];

_vehicle = (_this select 0);
_type = typeOf _vehicle;
_sun = (sunOrMoon < 1);

if (isNil "_vehicle" || isNull _vehicle || !(_vehicle getVariable "lights")) exitWith {};

_lightRed = [255, 0, 0];
_lightWhite = [255, 255, 255];

if (_sun) then
{
    _brightnessLow = 0;
    _brightnessHigh = 10;
    _attenuation = [0.001, 3000, 0, 125000];
} else {
    _brightnessLow = 0;
    _brightnessHigh = 60;
    _attenuation = [0.001, 3000, 0, 500000];
};

_flashes = 3;
_flashOn = 0.1;
_flashOff = 0.001;

_leftLights = [];
_rightLights = [];

_attach =
{
    _isLight = _this select 0;
    _color = _this select 1;
    _position = _this select 2;
    _light = "#lightpoint" createVehicleLocal getPos _vehicle;
    _light setLightBrightness 0;
    _light setLightAmbient [0,0,0];
    _light setLightAttenuation _attenuation;
    _light setLightIntensity 1000;
    _light setLightFlareSize 1;
    _light setLightFlareMaxDistance 150;
    _light setLightUseFlare true;
    _light setLightDayLight true;

    switch (_color) do
    {
        case "red": { _light setLightColor _lightRed; };
        case "white": { _light setLightColor _lightWhite; };
        case "red": { _light setLightColor _lightRed; };
    };

    if (_isLight) then
    {
        _leftLights pushBack [_light, _position];
    } else {
        _rightLights pushBack [_light, _position];
    };

    _light lightAttachObject [_vehicle, _position];
};

switch (_type) do
{
    case "C_Offroad_01_F":
    {
        [false, "red", [-0.44, 0, 0.525]] call _attach;
        [true, "red", [0.345, 0, 0.525]] call _attach;
        [false, "red", [0.575, -2.95, -0.77]] call _attach;
        [true, "red", [-0.645, -2.95, -0.77]] call _attach;
        [false, "white", [0.61, 2.2825, -0.355]] call _attach;
        [true, "white", [-0.695, 2.2825, -0.355]] call _attach;
		[false, "red", [-0.905, -2.875, -0.225]] call _attach;
		[true, "red", [0.825, -2.875, -0.225]] call _attach;
		[true, "red", [-0.645, -2.95, -0.77]] call _attach;
		[false, "red", [0.575, -2.95, -0.77]] call _attach;
		[false, "red", [-0.44, 0.0, 0.525]] call _attach;
		[true, "red", [0.345, 0.0, 0.525]] call _attach;
    };

	case "C_Offroad_02_unarmed_F":
    {
        [false, "red", [-0.39, 2.28, -0.52]] call _attach; //front driver side
        [true, "red", [0.38, 2.28, -0.52]] call _attach; //front passenger side
        [false, "white", [0.5, 2.03, -0.48]] call _attach; //passenger headlight
        [true, "white", [-0.5, 2.03, -0.48]] call _attach; //driver headlight
		[true, "red", [-0.80, -1.65, -0.18]] call _attach; //rear driver side
		[false, "red", [0.80, -1.65, -0.18]] call _attach; //rear passenger side
    };	
	
	case "C_Van_01_box_F":
    {
        [true, "red", [-.8, -.20, 1.2]] call _attach; //front foward left
        [true, "red", [.8, -3.50, 1.2]] call _attach; //rear back top right
        [false, "red", [0.8, -.20, 1.2]] call _attach; //front foward right
        [false, "red", [-.8, -3.50, 1.2]] call _attach; //rear back top left
        [true, "red", [1, -.50, 1.2]] call _attach; //front right top
        [true, "red", [-1, -3.65, 1.2]] call _attach; //rear left top
        [false, "red", [-1, -.50, 1.2]] call _attach; //front left top
        [false, "red", [1, -3.65, 1.2]] call _attach; //rear right top        
        [true, "white", [-0.65, 1.95, -0.45]] call _attach; //head light
        [false, "white", [0.65, 1.95, -0.45]] call _attach; //head light
        [true, "red", [-0.65, -2.95, -0.85]] call _attach; //tail light
        [true, "red", [0.65, -2.95, -0.85]] call _attach; //tail light
    };
	
    case "C_SUV_01_F":
    {
        [true, "red", [-0.39, 2.28, -0.52]] call _attach;
        [true, "red", [0.38, 2.28, -0.52]] call _attach;
        [true, "red", [-0.86, -2.75, -0.18]] call _attach;
        [true, "red", [0.86, -2.75, -0.18]] call _attach;
        [true, "white", [0.8, 1.95, -0.48]] call _attach;
        [true, "white", [-0.8, 1.95, -0.48]] call _attach;
		[true, "red", [-0.86, -2.75, -0.18]] call _attach;
		[true, "red", [0.86, -2.75, -0.18]] call _attach;	
		[true, "red", [-0.5, -1, 0.37]] call _attach;
    };

    case "C_Hatchback_01_sport_F":
    {
        [false, "red", [-0.03, -0, 0.2]] call _attach;
        [true, "red", [-0.03, -0, 0.2]] call _attach;
        [false, "red", [-0.8, -2.25, -0.3]] call _attach;
        [true, "red", [0.78, -2.25, -0.3]] call _attach;
        [false, "white", [0.75, 1.615, -0.52]] call _attach;
        [true, "white", [-0.8, 1.615, -0.525]] call _attach;
    };

    case "B_MRAP_01_F":
    {
        [false, "red", [-0.85, -0.9, 0.6]] call _attach;
        [true, "red", [0.85, -0.9, 0.6]] call _attach;
        [true, "red", [-0.93, -2.8, 0.6]] call _attach;
        [false, "red", [0.93, -2.8, 0.6]] call _attach;
        [true, "white", [-0.85, 1.475, -0.75]] call _attach;
        [false, "white", [0.85, 1.475, -0.75]] call _attach;
		[false, "red", [0.8, -2.5, -1.3]] call _attach;
		[true, "red", [-0.8, -2.5, -1.3]] call _attach;
		[true, "red", [-0.95, -4.25, -0.75]] call _attach;
		[false, "red", [0.95, -4.25, -0.75]] call _attach;
    };
	
	case "I_MRAP_03_F":
	{
		[true, "red", [-0.87, 2.2, -0.75]] call _attach;
		[false, "red", [0.87, 2.2, -0.75]] call _attach;
		[false, "red", [1.10, -0.55, 0.5]] call _attach;
		[true, "red", [-1.10, -0.55, 0.5]] call _attach;
		[false, "white", [-1.05, 2.25, -0.3]] call _attach;
		[true, "white", [1.05, 2.25, -0.3]] call _attach;
		[true, "red", [1.225, -2.845, -0.71]] call _attach;
		[true, "red", [-0.725, -3.15, 0.025]] call _attach;
		[false, "red", [-1.225, -2.845, -0.7]] call _attach;
		[false, "red", [0.725, -3.15, 0.025]] call _attach;
	};
	
	case "O_MRAP_02_F":
	{
		[false, "red", [1.175, -1.5, 0.365]] call _attach;
		[true, "red", [-1.175, -1.5, 0.365]] call _attach;
		[false, "red", [0.4325, -1.5, 0.6275]] call _attach;
		[true, "red", [0.4325, -1.5, 0.6275]] call _attach;	
		[true, "red", [-0.2, 1.575, -1.125]] call _attach;
		[false, "red", [0.2, 1.575, -1.125]] call _attach;
		[false, "white", [-0.775, 1.475, -1]] call _attach;
		[true, "white", [0.775, 1.475, -1]] call _attach;
		[true, "red", [0.525, -4.5, -1.3]] call _attach;
		[false, "red", [-0.525, -4.5, -1.3]] call _attach;
		[true, "red", [-0.4, -4.95, 0.155]] call _attach;
		[false, "red", [0.4, -4.95, 0.155]] call _attach;
	};
};

_lightsOn = true;
while {(alive _vehicle)} do
{
    if (!(_vehicle getVariable "lights")) exitWith {};
    if (_lightsOn) then
    {
        for [{_i=0}, {_i<_flashes}, {_i=_i+1}] do
        {
            { (_x select 0) setLightBrightness _brightnessHigh; } forEach _leftLights;
            uiSleep _flashOn;
            { (_x select 0) setLightBrightness _brightnessLow; } forEach _leftLights;
            uiSleep _flashOff;
        };
        { (_x select 0) setLightBrightness 0; } forEach _leftLights;

        for [{_i=0}, {_i<_flashes}, {_i=_i+1}] do
        {
            { (_x select 0) setLightBrightness _brightnessHigh; } forEach _rightLights;
            uiSleep _flashOn;
            { (_x select 0) setLightBrightness _brightnessLow; } forEach _rightLights;
            uiSleep _flashOff;
        };
        { (_x select 0) setLightBrightness 0; } forEach _rightLights;
    };
};

{ deleteVehicle (_x select 0) } foreach _leftLights;
{ deleteVehicle (_x select 0) } foreach _rightLights;

_leftLights = [];
_rightLights = [];
