/*
    File: fn_welcomeNotification.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
        "",
        0,
        0.2,
        10,
        0,
        0,
        8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayCtrl 2400;
_textSpoiler = _display displayCtrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='9.5' shadow='0'><img image='textures\adverts\welcome_diag.paa' /></t><br /><br />"; //add texture for welcome_diag.paa
_message = _message + "<t align='center' size='1' color='#FFFFFF'>All Officers have to be active in teamspeak at all times!</t><br />";
_message = _message + "<t align='center' size='1' color='#FFFFFF'>This is a roleplay server, this means RDM/VDM are NOT allowed.</t><br />";
_message = _message + "<t align='center' size='1.7' color='#ffbe00'>» <a href='https://vgcommunity.enjin.com/'>Vendictive Gaming</a></t><br />";
_message = _message + "Thanks for joining and enjoy your stay, <a color='#B000FF'>Vendictive Gammnig</a> <br />";
_message = _message + "<t align='center' size='1.7' color='#ffbe00'>TS3 Address: vs29.tserverhq.com:7049</t><br /><br />";

//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlCommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
