/* 
  Unsure of orignal owner i will not take credit for this script
  edited by:Zwinkadink 
*/ 
 
//Close inventory 
closeDialog 0; 
 
//A User message and removed sleep function 
hint "Pretty Colors"; 
 
//Activate ppEffects we need 
"chromAberration" ppEffectEnable true; 
"radialBlur" ppEffectEnable true; 
enableCamShake true; 
 
//Let's go for 45secs of effetcs 
for "_i" from 0 to 44 do 
{ 
    "chromAberration" ppEffectAdjust [random 0.25,random 0.25,true]; 
    "chromAberration" ppEffectCommit 1; 
    "radialBlur" ppEffectAdjust  [random 0.9,random 0.9,0.2,0.2]; 
    "radialBlur" ppEffectCommit 1; 
    addcamShake[random 3, 1, random 3]; 
    sleep 1; 
}; 
 
//Stop effects 
"chromAberration" ppEffectAdjust [0,0,true]; 
"chromAberration" ppEffectCommit 5; 
"radialBlur" ppEffectAdjust  [0,0,0,0]; 
"radialBlur" ppEffectCommit 5; 
sleep 6; 
 
//Deactivate ppEffects 
"chromAberration" ppEffectEnable false; 
"radialBlur" ppEffectEnable false; 
resetCamShake; 