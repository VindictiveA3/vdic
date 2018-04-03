#include "debug_console.hpp"
/*
    File Name: fn_logger.sqf

    Authors: [WolfePatches, Zwinkadink]; -VDIC Dev Team-

    Desc: Logs things to the Debug Console extension. Neat.

	Params: 
	0 : (String) Text to be logged
	1 : (Int) Where to send the log 
		0 - To File
		1 - To Console
		2 - To File and Console
	2 : (Bool) If the log should be time stamped.
		true - Time Stamp log
		false - Do not Time Stamp log
	3 : (Int) Should the log be colored? (Applies only to Console Printed Logs)
		0 - White
		1 - Red
		2 - Green
		3 - Blue
		4 - Yellow
		5 - Purple
		6 - Cyan
*/
private ["_textToLog","_color","_type","_stamp","_failed","_extIUN"];

params [
    ["_textToLog", "nil", [""]],
	["_type", 0, [0]],
	["_stamp", true, [false]],
	["_color", 0, [0]]
];

switch (_type) do { 
	case 0 : { //To File
		if (_stamp) then {
			conFileTime(("LogToFile: " + _textToLog));
		} else {
			conFile(("LogToFile: " + _textToLog));
		};
	};
	case 1 : { //To Console
		if (_stamp) then {
			switch (_color) do {
				case 0: { //White
					conWhiteTime(_textToLog);
				};
				case 1: { //Red
					conRedTime(_textToLog);
				};
				case 2: { //Green
					conGreenTime(_textToLog);
				};
				case 3: { //Blue
					conBlueTime(_textToLog);
				};
				case 4: { //Yellow
					conYellowTime(_textToLog);
				};
				case 5: { //Purple
					conPurpleTime(_textToLog);
				};
				case 6: { //Cyan
					conCyanTime(_textToLog);
				};
			};
		} else {
			switch (_color) do {
				case 0: { //White
					conWhite(_textToLog);
				};
				case 1: { //Red
					conRed(_textToLog);
				};
				case 2: { //Green
					conGreen(_textToLog);
				};
				case 3: { //Blue
					conBlue(_textToLog);
				};
				case 4: { //Yellow
					conYellow(_textToLog);
				};
				case 5: { //Purple
					conPurple(_textToLog);
				};
				case 6: { //Cyan
					conCyan(_textToLog);
				};
			};
		};
	}; 
	case 2 : { //To File and Console 
		if (_stamp) then {
			conFileTime(("LogToFile: " + _textToLog));
			switch (_color) do {
				case 0: { //White
					conWhiteTime(_textToLog);
				};
				case 1: { //Red
					conRedTime(_textToLog);
				};
				case 2: { //Green
					conGreenTime(_textToLog);
				};
				case 3: { //Blue
					conBlueTime(_textToLog);
				};
				case 4: { //Yellow
					conYellowTime(_textToLog);
				};
				case 5: { //Purple
					conPurpleTime(_textToLog);
				};
				case 6: { //Cyan
					conCyanTime(_textToLog);
				};
			};
		} else {
			conFile(("LogToFile: " + _textToLog));
			switch (_color) do {
				case 0: { //White
					conWhite(_textToLog);
				};
				case 1: { //Red
					conRed(_textToLog);
				};
				case 2: { //Green
					conGreen(_textToLog);
				};
				case 3: { //Blue
					conBlue(_textToLog);
				};
				case 4: { //Yellow
					conYellow(_textToLog);
				};
				case 5: { //Purple
					conPurple(_textToLog);
				};
				case 6: { //Cyan
					conCyan(_textToLog);
				};
			};
		};
	}; 
	default {
		_failed = 'Error: Incorrect "type" received. | LogToFile: ';
		_extIUN = _failed + _textToLog;
		conFileTime(_extIUN);
	};
};