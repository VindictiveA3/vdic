/*
    File: fn_teargas.sqf
    Author: Blackd0g, Updated by Jokahghost
    Description: 
    Fucks their shit up
*/
playerNearGas=false;

[] spawn {
    while {true} do
    {

        if
        (
        (((nearestObject [getpos player, "SmokeShellYellow"]) distance player < 20))
        or
        (((nearestObject [getpos player, "G_40mm_SmokeYellow"]) distance player < 15))
        ) then
        {
        playerNearGas=true;
        }
        else
        {
        playerNearGas=false;
        };

    uiSleep 3;
    };
};

[] spawn {
    while {true} do
    {

         "dynamicBlur" ppEffectEnable true; // enables ppeffect
         "dynamicBlur" ppEffectAdjust [0]; // enables normal vision
         "dynamicBlur" ppEffectCommit 15; // time it takes to normal
         resetCamShake; // resets the shake
         20 fadeSound 1; //fades the sound back to normal

        waituntil {playerNearGas}; // Wait till a Gas Grenade is near player


        if (headgear player != "H_CrewHelmetHeli_B") then {antidote1 = 2583} else {
            if (goggles player != "G_Respirator_White_F") then {antidote1 = 2583} else {
                if (goggles player != "G_Respirator_Yellow_F") then {antidote1 = 2583} else {
                     if (goggles player != "G_Respirator_Blue_F") then {antidote1 = 2583};  
                };
            };
        };

         if (headgear player == "H_CrewHelmetHeli_B") then {antidote1 = 2588} else {
            if (goggles player == "G_Respirator_White_F") then {antidote1 = 2588} else {
                if (goggles player == "G_Respirator_Yellow_F") then {antidote1 = 2588} else {
                     if (goggles player == "G_Respirator_Blue_F") then {antidote1 = 2588};  
                };
            };
        };

            noesckey = (findDisplay 46) displayAddEventHandler ["KeyDown", "if ((_this select 1) == 1) then { true }"]; 
        if (antidote1 == 2583) then {
         "dynamicBlur" ppEffectEnable true; // enables ppeffect
         "dynamicBlur" ppEffectAdjust [20]; // intensity of blur
         "dynamicBlur" ppEffectCommit 3; // time till vision is fully blurred
         enableCamShake false; // enables camera shake
         addCamShake [10, 45, 10]; // sets shakevalues
         player setFatigue 1; // sets the fatigue to 100%
         
        };

    uiSleep 1;
    (findDisplay 46) displayRemoveEventHandler ["KeyDown", noesckey];
    };
};