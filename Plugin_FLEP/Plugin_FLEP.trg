<START_TRIGGERWHAT_9_O_H>
1:Level secrets counter. Change to <&> state
2:Quake camera. Set earthquake to <&> strength
3:Quake camera. Set earthquake to the strength given by Current Value
4:Quake camera. Start earthquake with constant strength
5:Quake camera. Start earthquake with strength centred at Selected Item
6:Quake camera. Stop earthquake
7:Meshswap of Lara meshes. Meshswap with <&> Parameters
8:Meshswap of Lara meshes. Revert meshswap of <&> mesh
9:Exit game. Exit the game
10:SPEEDUP. Speed up the engine
11:SPEEDDN. Speed down the engine
<END>

<START_EFFECT_1_T_H>
0:Disabled
1:Enabled
<END>

<START_EFFECT_2_T_H>
#REPEAT##0#255
<END>

<START_EFFECT_7_T_H>
#REPEAT#Parameters=PARAM_FLEP_LARA_MESHSWAP,#1#255
<END>

<START_EFFECT_8_T_H>
0:Hips
1:Left thigh
2:Left shin
3:Left foot
4:Right thigh
5:Right shin
6:Right foot
7:Torso
8:Right inner arm
9:Right outer arm
10:Right hand
11:Left inner arm
12:Left outer arm
13:Left hand
14:Head
<END>

<START_TRIGGERTYPE_12_T_H>
1:FLEP number. The <#> number is equal to the secret number
2:Mine Cart. Lara is in the Mine Cart
3:Quad Bike. Lara is in the Quad Bike
<END>

<START_CONDITION_1_O_H>
#SAME_OF#=EFFECT_2_T
<END>
