/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/

life_actions = [];

switch (playerSide) do {

    //Civilian
    case civilian: {
        //Drop fishing net
        life_actions pushBack (player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']);

        //Rob person
        life_actions pushBack (player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']);
    };
    
    //Cops
    case west: {
    life_actions = life_actions + [player addAction["<t color='#51FF00'>Load Rubber Bullets</t>",{player setVariable ['nonLethals',true,true];},"",0,false,false,"",'(!(player getVariable ["nonLethals",false])']];
    life_actions = life_actions + [player addAction["<t color='#FF0000'>Load Lethal Bullets</t>",{player setVariable ['nonLethals',false,true];},"",0,false,false,"",'((player getVariable ["nonLethals",false])']];
    };
    //EMS
    case independent: { };

};
