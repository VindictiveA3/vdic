/* 
  Unsure of orignal owner i will not take credit for this script
  edited by:Zwinkadink 
*/ 
 
 
//Close inventory 
closeDialog 0; 

//Activate ppEffects we need 
"colorCorrections" ppEffectEnable true; 
"colorCorrections" ppEffectAdjust [1, 1, 0, [0,0,0,0.5], [random 5 - random 5,random 5 - random 5,random 5 - random 5,random 1], [random 5 - random 5,random 5 - random 5,random 5 - random 5, random 1]]; 
"colorCorrections" ppEffectCommit 1; 
"chromAberration" ppEffectEnable true; 
"chromAberration" ppEffectAdjust [0.01,0.01,true]; 
"chromAberration" ppEffectCommit 1; 
sleep 2.25; 
 
private["_force"]; 
for "_i" from 0 to 26 do 
{ 
         
        "colorCorrections" ppEffectEnable true; 
        "colorCorrections" ppEffectAdjust [1, 1, 0, [0,0,0,0.5], [random 5 - random 5,random 5 - random 5,random 5 - random 5,random 1], [random 5 - random 5,random 5 - random 5,random 5 - random 5, random 1]]; 
        "colorCorrections" ppEffectCommit 1; 
        sleep 2.25; 
}; 
 
"chromAberration" ppEffectEnable false; 
"colorCorrections" ppEffectEnable false; 
