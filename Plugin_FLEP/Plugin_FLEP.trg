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
12:Lara. Enable the electricity effect with <&> Parameters
13:Lara. Disable the electricity effect
14:Headlight. Change the headlight with <&> Parameters
15:Headlight. Restore the default headlight
16:Lara. <&> Show/hide hair
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

<START_EFFECT_12_T_H>
#REPEAT#Parameters=PARAM_FLEP_LARA_ELECTRIC,#1#255
<END>

<START_EFFECT_14_T_H>
#REPEAT#Parameters=PARAM_FLEP_HEADLIGHT,#1#255
<END>

<START_EFFECT_16_T_H>
0:Hide hair
1:Show hair
<END>

<START_TRIGGERWHAT_11_T_H>
1:Sub. Put Lara on <#> Sub immediately
2:Sub. Enable air bubbles on <#> Sub
3:Sub. Disable air bubbles on <#> Sub
4:Sub. Lock Lara to the <#> Sub
5:Sub. Free Lara from the <#> Sub
6:Sub. Take Lara to underwater <#> LSP immediately
<END>

<START_ACTION_1_O_H>
#MOVEABLES#
<END>

<START_ACTION_2_O_H>
#MOVEABLES#
<END>

<START_ACTION_3_O_H>
#MOVEABLES#
<END>

<START_ACTION_4_O_H>
#MOVEABLES#
<END>

<START_ACTION_5_O_H>
#MOVEABLES#
<END>

<START_ACTION_6_O_H>
#LARA_POS_OCB#
<END>

<START_TRIGGERTYPE_12_T_H>
1:FLEP number. The <#> number is equal to the secret number
2:Mine Cart. Lara is in a Mine Cart
3:Quad Bike. Lara is on a Quad Bike
4:Sub. Lara is on a Sub
5:Sub. Lara is on the Sub <#> number
<END>

<START_CONDITION_1_O_H>
#REPEAT##0#255
<END>

<START_CONDITION_5_O_H>
#REPEAT#Number=#1#16#0
<END>
