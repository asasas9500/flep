#pragma pack(push, 1)

typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned long ulong;
#ifdef __TINYC__
typedef long long __int64;
#endif
typedef float D3DVALUE;
typedef ulong D3DCOLOR;

#define W2V_SHIFT	14
#define SQUARE(x) ((x)*(x))
#define ABS(x) (((x)<0) ? (-(x)) : (x))
#define RGBONLY(r, g, b) ((b) | (((g) | ((r) << 8)) << 8))
#define RGBA(r, g, b, a) (RGBONLY(r, g, b) | ((a) << 24))
#define NO_HEIGHT	-32512
#define NO_ITEM	-1
#define WALL_SHIFT	10
#define WALL_SIZE	(1 << WALL_SHIFT)
#define WALL_MASK	(WALL_SIZE - 1)
#define	TRIGMULT2(a,b)		(((a) * (b)) >> W2V_SHIFT)
#define	TRIGMULT3(a,b,c)	(TRIGMULT2((TRIGMULT2(a, b)), c))

typedef enum
{
	BORED_MOOD,
	ATTACK_MOOD,
	ESCAPE_MOOD,
	STALK_MOOD,
} mood_type;

typedef enum
{
	SKELLY_ZONE,
	BASIC_ZONE,
	CROC_ZONE,
	HUMAN_ZONE,
	FLYER_ZONE,
} zone_type;

typedef enum
{
	M00, M01, M02, M03,
	M10, M11, M12, M13,
	M20, M21, M22, M23,

	indices_count
} matrix_indices;

typedef enum
{
	WEAPON_NONE,
	WEAPON_PISTOLS,
	WEAPON_REVOLVER,
	WEAPON_UZI,
	WEAPON_SHOTGUN,
	WEAPON_GRENADE,
	WEAPON_CROSSBOW,
	WEAPON_FLARE,
	WEAPON_TORCH
} weapon_types;

typedef enum
{
	LW_ABOVE_WATER,
	LW_UNDERWATER,
	LW_SURFACE,
	LW_FLYCHEAT,
	LW_WADE
} lara_water_status;

typedef enum
{
	IN_NONE =				0x0,
	IN_FORWARD =			0x1,
	IN_BACK =				0x2,
	IN_LEFT =				0x4,
	IN_RIGHT =				0x8,
	IN_JUMP =				0x10,
	IN_DRAW =				0x20,
	IN_ACTION =				0x40,
	IN_WALK =				0x80,
	IN_OPTION =				0x100,
	IN_LOOK =				0x200,
	IN_LSTEP =				0x400,
	IN_RSTEP =				0x800,
	IN_ROLL =				0x1000,
	IN_PAUSE =				0x2000,
	IN_A =					0x4000,
	IN_B =					0x8000,
	IN_CHEAT =				0x10000,
	IN_D =					0x20000,
	IN_C =					0x30000,
	IN_E =					0x40000,
	IN_FLARE =				0x80000,
	IN_SELECT =				0x100000,
	IN_DESELECT =			0x200000,
	IN_SAVE =				0x400000,
	IN_LOAD =				0x800000,
	IN_STEPSHIFT =			0x1000000,
	IN_LOOKLEFT =			0x2000000,
	IN_LOOKRIGHT =			0x4000000,
	IN_LOOKFORWARD =		0x8000000,
	IN_LOOKBACK =			0x10000000,
	IN_DUCK =				0x20000000,
	IN_SPRINT =				0x40000000,
	IN_TARGET =				0x80000000,
	IN_ALL =				0xFFFFFFFF
} input_buttons;

typedef enum
{
	W_NONE =		0x0,
	W_PRESENT =		0x1,
	W_FLASLIGHT =	0x2,	//speculation, actually unused
	W_LASERSIGHT =	0x4,
	W_AMMO1 =		0x8,
	W_AMMO2 =		0x10,
	W_AMMO3 =		0x20
} carried_weapon_flags;

typedef enum
{
	SFX_DEFAULT =	0,
	SFX_WATER =		1,
	SFX_ALWAYS =	2,
	SFX_SETPITCH =	4
} sfx_options;

typedef enum
{
	LARA,
	PISTOLS_ANIM,
	UZI_ANIM,
	SHOTGUN_ANIM,
	CROSSBOW_ANIM,
	GRENADE_GUN_ANIM,
	SIXSHOOTER_ANIM,
	FLARE_ANIM,
	LARA_SKIN,
	LARA_SKIN_JOINTS,
	LARA_SCREAM,
	LARA_CROSSBOW_LASER,
	LARA_REVOLVER_LASER,
	LARA_HOLSTERS,
	LARA_HOLSTERS_PISTOLS,
	LARA_HOLSTERS_UZIS,
	LARA_HOLSTERS_SIXSHOOTER,
	LARA_SPEECH_HEAD1,
	LARA_SPEECH_HEAD2,
	LARA_SPEECH_HEAD3,
	LARA_SPEECH_HEAD4,
	ACTOR1_SPEECH_HEAD1,
	ACTOR1_SPEECH_HEAD2,
	ACTOR2_SPEECH_HEAD1,
	ACTOR2_SPEECH_HEAD2,
	LARA_WATER_MESH,
	LARA_PETROL_MESH,
	LARA_DIRT_MESH,
	CROWBAR_ANIM,
	TORCH_ANIM,
	HAIR,
	MOTORBIKE,
	JEEP,
	VEHICLE_EXTRA,
	ENEMY_JEEP,
	SKELETON,
	SKELETON_MIP,
	GUIDE,
	GUIDE_MIP,
	VON_CROY,
	VON_CROY_MIP,
	BADDY_1,
	BADDY_1_MIP,
	BADDY_2,
	BADDY_2_MIP,
	SETHA,
	SETHA_MIP,
	MUMMY,
	MUMMY_MIP,
	SPHINX,
	SPHINX_MIP,
	CROCODILE,
	CROCODILE_MIP,
	HORSEMAN,
	HORSEMAN_MIP,
	SCORPION,
	SCORPION_MIP,
	JEAN_YVES,
	JEAN_YVES_MIP,
	TROOPS,
	TROOPS_MIP,
	KNIGHTS_TEMPLAR,
	KNIGHTS_TEMPLAR_MIP,
	MUTANT,
	MUTANT_MIP,
	HORSE,
	HORSE_MIP,
	BABOON_NORMAL,
	BABOON_NORMAL_MIP,
	BABOON_INV,
	BABOON_INV_MIP,
	BABOON_SILENT,
	BABOON_SILENT_MIP,
	WILD_BOAR,
	WILD_BOAR_MIP,
	HARPY,
	HARPY_MIP,
	DEMIGOD1,
	DEMIGOD1_MIP,
	DEMIGOD2,
	DEMIGOD2_MIP,
	DEMIGOD3,
	DEMIGOD3_MIP,
	LITTLE_BEETLE,
	BIG_BEETLE,
	BIG_BEETLE_MIP,
	WRAITH1,
	WRAITH2,
	WRAITH3,
	WRAITH4,
	BAT,
	DOG,
	DOG_MIP,
	HAMMERHEAD,
	HAMMERHEAD_MIP,
	SAS,
	SAS_MIP,
	SAS_DYING,
	SAS_DYING_MIP,
	SAS_CAPTAIN,
	SAS_CAPTAIN_MIP,
	SAS_DRAG_BLOKE,
	AHMET,
	AHMET_MIP,
	LARA_DOUBLE,
	LARA_DOUBLE_MIP,
	SMALL_SCORPION,
	LOCUST_EMITTER,
	GAME_PIECE1,
	GAME_PIECE2,
	GAME_PIECE3,
	ENEMY_PIECE,
	WHEEL_OF_FORTUNE,
	SCALES,
	DARTS,
	DART_EMITTER,
	HOMING_DART_EMITTER,
	FALLING_CEILING,
	FALLING_BLOCK,
	FALLING_BLOCK2,
	SMASHABLE_BIKE_WALL,
	SMASHABLE_BIKE_FLOOR,
	TRAPDOOR1,
	TRAPDOOR2,
	TRAPDOOR3,
	FLOOR_TRAPDOOR1,
	FLOOR_TRAPDOOR2,
	CEILING_TRAPDOOR1,
	CEILING_TRAPDOOR2,
	SCALING_TRAPDOOR,
	ROLLINGBALL,
	SPIKEY_FLOOR,
	TEETH_SPIKES,
	JOBY_SPIKES,
	SLICER_DICER,
	CHAIN,
	PLOUGH,
	STARGATE,
	HAMMER,
	BURNING_FLOOR,
	COG,
	SPIKEBALL,
	FLAME,
	FLAME_EMITTER,
	FLAME_EMITTER2,
	FLAME_EMITTER3,
	ROPE,
	FIREROPE,
	POLEROPE,
	ONEBLOCK_PLATFORM,
	TWOBLOCK_PLATFORM,
	RAISING_BLOCK1,
	RAISING_BLOCK2,
	EXPANDING_PLATFORM,
	SQUISHY_BLOCK1,
	SQUISHY_BLOCK2,
	PUSHABLE_OBJECT1,
	PUSHABLE_OBJECT2,
	PUSHABLE_OBJECT3,
	PUSHABLE_OBJECT4,
	PUSHABLE_OBJECT5,
	TRIPWIRE,
	SENTRY_GUN,
	MINE,
	MAPPER,
	OBELISK,
	FLOOR_4BLADE,
	ROOF_4BLADE,
	BIRD_BLADE,
	CATWALK_BLADE,
	MOVING_BLADE,
	PLINTH_BLADE,
	SETH_BLADE,
	LIGHTNING_CONDUCTOR,
	ELEMENT_PUZZLE,
	PUZZLE_ITEM1,
	PUZZLE_ITEM2,
	PUZZLE_ITEM3,
	PUZZLE_ITEM4,
	PUZZLE_ITEM5,
	PUZZLE_ITEM6,
	PUZZLE_ITEM7,
	PUZZLE_ITEM8,
	PUZZLE_ITEM9,
	PUZZLE_ITEM10,
	PUZZLE_ITEM11,
	PUZZLE_ITEM12,
	PUZZLE_ITEM1_COMBO1,
	PUZZLE_ITEM1_COMBO2,
	PUZZLE_ITEM2_COMBO1,
	PUZZLE_ITEM2_COMBO2,
	PUZZLE_ITEM3_COMBO1,
	PUZZLE_ITEM3_COMBO2,
	PUZZLE_ITEM4_COMBO1,
	PUZZLE_ITEM4_COMBO2,
	PUZZLE_ITEM5_COMBO1,
	PUZZLE_ITEM5_COMBO2,
	PUZZLE_ITEM6_COMBO1,
	PUZZLE_ITEM6_COMBO2,
	PUZZLE_ITEM7_COMBO1,
	PUZZLE_ITEM7_COMBO2,
	PUZZLE_ITEM8_COMBO1,
	PUZZLE_ITEM8_COMBO2,
	KEY_ITEM1,
	KEY_ITEM2,
	KEY_ITEM3,
	KEY_ITEM4,
	KEY_ITEM5,
	KEY_ITEM6,
	KEY_ITEM7,
	KEY_ITEM8,
	KEY_ITEM9,
	KEY_ITEM10,
	KEY_ITEM11,
	KEY_ITEM12,
	KEY_ITEM1_COMBO1,
	KEY_ITEM1_COMBO2,
	KEY_ITEM2_COMBO1,
	KEY_ITEM2_COMBO2,
	KEY_ITEM3_COMBO1,
	KEY_ITEM3_COMBO2,
	KEY_ITEM4_COMBO1,
	KEY_ITEM4_COMBO2,
	KEY_ITEM5_COMBO1,
	KEY_ITEM5_COMBO2,
	KEY_ITEM6_COMBO1,
	KEY_ITEM6_COMBO2,
	KEY_ITEM7_COMBO1,
	KEY_ITEM7_COMBO2,
	KEY_ITEM8_COMBO1,
	KEY_ITEM8_COMBO2,
	PICKUP_ITEM1,
	PICKUP_ITEM2,
	PICKUP_ITEM3,
	PICKUP_ITEM4,
	PICKUP_ITEM1_COMBO1,
	PICKUP_ITEM1_COMBO2,
	PICKUP_ITEM2_COMBO1,
	PICKUP_ITEM2_COMBO2,
	PICKUP_ITEM3_COMBO1,
	PICKUP_ITEM3_COMBO2,
	PICKUP_ITEM4_COMBO1,
	PICKUP_ITEM4_COMBO2,
	EXAMINE1,
	EXAMINE2,
	EXAMINE3,
	CROWBAR_ITEM,
	BURNING_TORCH_ITEM,
	CLOCKWORK_BEETLE,
	CLOCKWORK_BEETLE_COMBO1,
	CLOCKWORK_BEETLE_COMBO2,
	MINE_DETECTOR,
	QUEST_ITEM1,
	QUEST_ITEM2,
	QUEST_ITEM3,
	QUEST_ITEM4,
	QUEST_ITEM5,
	QUEST_ITEM6,
	MAP,
	SECRET_MAP,
	PUZZLE_HOLE1,
	PUZZLE_HOLE2,
	PUZZLE_HOLE3,
	PUZZLE_HOLE4,
	PUZZLE_HOLE5,
	PUZZLE_HOLE6,
	PUZZLE_HOLE7,
	PUZZLE_HOLE8,
	PUZZLE_HOLE9,
	PUZZLE_HOLE10,
	PUZZLE_HOLE11,
	PUZZLE_HOLE12,
	PUZZLE_DONE1,
	PUZZLE_DONE2,
	PUZZLE_DONE3,
	PUZZLE_DONE4,
	PUZZLE_DONE5,
	PUZZLE_DONE6,
	PUZZLE_DONE7,
	PUZZLE_DONE8,
	PUZZLE_DONE9,
	PUZZLE_DONE10,
	PUZZLE_DONE11,
	PUZZLE_DONE12,
	KEY_HOLE1,
	KEY_HOLE2,
	KEY_HOLE3,
	KEY_HOLE4,
	KEY_HOLE5,
	KEY_HOLE6,
	KEY_HOLE7,
	KEY_HOLE8,
	KEY_HOLE9,
	KEY_HOLE10,
	KEY_HOLE11,
	KEY_HOLE12,
	WATERSKIN1_EMPTY,
	WATERSKIN1_1,
	WATERSKIN1_2,
	WATERSKIN1_3,
	WATERSKIN2_EMPTY,
	WATERSKIN2_1,
	WATERSKIN2_2,
	WATERSKIN2_3,
	WATERSKIN2_4,
	WATERSKIN2_5,
	SWITCH_TYPE1,
	SWITCH_TYPE2,
	SWITCH_TYPE3,
	SWITCH_TYPE4,
	SWITCH_TYPE5,
	SWITCH_TYPE6,
	SWITCH_TYPE7,
	SWITCH_TYPE8,
	UNDERWATER_SWITCH1,
	UNDERWATER_SWITCH2,
	TURN_SWITCH,
	COG_SWITCH,
	LEVER_SWITCH,
	JUMP_SWITCH,
	CROWBAR_SWITCH,
	PULLEY,
	DOOR_TYPE1,
	DOOR_TYPE2,
	DOOR_TYPE3,
	DOOR_TYPE4,
	DOOR_TYPE5,
	DOOR_TYPE6,
	DOOR_TYPE7,
	DOOR_TYPE8,
	PUSHPULL_DOOR1,
	PUSHPULL_DOOR2,
	KICK_DOOR1,
	KICK_DOOR2,
	UNDERWATER_DOOR,
	DOUBLE_DOORS,
	BRIDGE_FLAT,
	BRIDGE_TILT1,
	BRIDGE_TILT2,
	SARCOPHAGUS,
	SEQUENCE_DOOR1,
	SEQUENCE_SWITCH1,
	SEQUENCE_SWITCH2,
	SEQUENCE_SWITCH3,
	SARCOPHAGUS_CUT,
	HORUS_STATUE,
	GOD_HEAD,
	SETH_DOOR,
	STATUE_PLINTH,
	PISTOLS_ITEM,
	PISTOLS_AMMO_ITEM,
	UZI_ITEM,
	UZI_AMMO_ITEM,
	SHOTGUN_ITEM,
	SHOTGUN_AMMO1_ITEM,
	SHOTGUN_AMMO2_ITEM,
	CROSSBOW_ITEM,
	CROSSBOW_AMMO1_ITEM,
	CROSSBOW_AMMO2_ITEM,
	CROSSBOW_AMMO3_ITEM,
	CROSSBOW_BOLT,
	GRENADE_GUN_ITEM,
	GRENADE_GUN_AMMO1_ITEM,
	GRENADE_GUN_AMMO2_ITEM,
	GRENADE_GUN_AMMO3_ITEM,
	GRENADE,
	SIXSHOOTER_ITEM,
	SIXSHOOTER_AMMO_ITEM,
	BIGMEDI_ITEM,
	SMALLMEDI_ITEM,
	LASERSIGHT_ITEM,
	BINOCULARS_ITEM,
	FLARE_ITEM,
	FLARE_INV_ITEM,
	DIARY_ITEM,
	COMPASS_ITEM,
	MEMCARD_LOAD_INV_ITEM,
	MEMCARD_SAVE_INV_ITEM,
	PC_LOAD_INV_ITEM,
	PC_SAVE_INV_ITEM,
	SMOKE_EMITTER_WHITE,
	SMOKE_EMITTER_BLACK,
	STEAM_EMITTER,
	EARTHQUAKE,
	BUBBLES,
	WATERFALLMIST,
	GUNSHELL,
	SHOTGUNSHELL,
	GUN_FLASH,
	BUTTERFLY,
	SPRINKLER,
	RED_LIGHT,
	GREEN_LIGHT,
	BLUE_LIGHT,
	AMBER_LIGHT,
	WHITE_LIGHT,
	BLINKING_LIGHT,
	LENS_FLARE,
	AI_GUARD,
	AI_AMBUSH,
	AI_PATROL1,
	AI_MODIFY,
	AI_FOLLOW,
	AI_PATROL2,
	AI_X1,
	AI_X2,
	LARA_START_POS,
	KILL_ALL_TRIGGERS,
	TRIGGER_TRIGGERER,
	SMASH_OBJECT1,
	SMASH_OBJECT2,
	SMASH_OBJECT3,
	SMASH_OBJECT4,
	SMASH_OBJECT5,
	SMASH_OBJECT6,
	SMASH_OBJECT7,
	SMASH_OBJECT8,
	MESHSWAP1,
	MESHSWAP2,
	MESHSWAP3,
	DEATH_SLIDE,
	BODY_PART,
	CAMERA_TARGET,
	WATERFALL1,
	WATERFALL2,
	WATERFALL3,
	PLANET_EFFECT,
	ANIMATING1,
	ANIMATING1_MIP,
	ANIMATING2,
	ANIMATING2_MIP,
	ANIMATING3,
	ANIMATING3_MIP,
	ANIMATING4,
	ANIMATING4_MIP,
	ANIMATING5,
	ANIMATING5_MIP,
	ANIMATING6,
	ANIMATING6_MIP,
	ANIMATING7,
	ANIMATING7_MIP,
	ANIMATING8,
	ANIMATING8_MIP,
	ANIMATING9,
	ANIMATING9_MIP,
	ANIMATING10,
	ANIMATING10_MIP,
	ANIMATING11,
	ANIMATING11_MIP,
	ANIMATING12,
	ANIMATING12_MIP,
	ANIMATING13,
	ANIMATING13_MIP,
	ANIMATING14,
	ANIMATING14_MIP,
	ANIMATING15,
	ANIMATING15_MIP,
	ANIMATING16,
	ANIMATING16_MIP,
	HORIZON,
	SKY_GRAPHICS,
	BINOCULAR_GRAPHICS,
	TARGET_GRAPHICS,
	DEFAULT_SPRITES,
	MISC_SPRITES,
	MOTOR_BOAT,
	MOTOR_BOAT_LARA,
	RUBBER_BOAT,
	RUBBER_BOAT_LARA,
	MOTORBIKE_LARA,
	FONT_GRAPHICS,
	PARALLEL_BARS,
	PANEL_BORDER,
	PANEL_MIDDLE,
	PANEL_CORNER,
	PANEL_DIAGONAL,
	PANEL_STRIP,
	PANEL_HALF_BORDER1,
	PANEL_HALF_BORDER2,
	PANEL_MIDDLE_CORNER,
	TIGHT_ROPE,
	LASER_HEAD,
	LASER_HEAD_BASE,
	LASER_HEAD_TENTACLE,
	HYDRA,
	HYDRA_MISSILE,
	ENEMY_SUB_MARINE,
	ENEMY_SUB_MARINE_MIP,
	SUB_MARINE_MISSILE,
	FROG_MAN,
	FROG_MAN_HARPOON,
	FISH_EMITTER,
	KAYAK,
	KAYAK_LARA,
	CUSTOM_SPRITES,
	BRIDGE_TILT3,
	BRIDGE_TILT4,
	BRIDGE_CUSTOM,
	ROBOT_CLEANER,
	ROBOT_STAR_WARS,
	MECH_WARRIOR,
	MECH_WARRIOR_LARA,
	UW_PROPULSOR,
	UW_PROPULSOR_LARA,
	MINE_CART,
	MINE_CART_LARA,
	NEW_SLOT5,
	NEW_SLOT6,
	NEW_SLOT7,
	NEW_SLOT8,
	NEW_SLOT9,
	NEW_SLOT10,
	NEW_SLOT11,
	NEW_SLOT12,
	NEW_SLOT13,
	NEW_SLOT14,
	NEW_SLOT15,
	NEW_SLOT16,
	NEW_SLOT17,
	NEW_SLOT18,
	NUMBER_OBJECTS
} object_types;

typedef enum
{
	CHASE_CAMERA,
	FIXED_CAMERA,
	LOOK_CAMERA,
	COMBAT_CAMERA,
	CINEMATIC_CAMERA,
	HEAVY_CAMERA,
} camera_type;

typedef enum
{
	INV_UZI_ITEM = 0,
	INV_PISTOLS_ITEM,
	INV_SHOTGUN_ITEM,
	INV_REVOLVER_ITEM,
	INV_REVOLVER_LASER_ITEM,
	INV_CROSSBOW_ITEM,
	INV_CROSSBOW_LASER_ITEM,
	INV_GRENADEGUN_ITEM,
	INV_SHOTGUN_AMMO1_ITEM,
	INV_SHOTGUN_AMMO2_ITEM,
	INV_GRENADEGUN_AMMO1_ITEM,
	INV_GRENADEGUN_AMMO2_ITEM,
	INV_GRENADEGUN_AMMO3_ITEM,
	INV_CROSSBOW_AMMO1_ITEM,
	INV_CROSSBOW_AMMO2_ITEM,
	INV_CROSSBOW_AMMO3_ITEM,
	INV_REVOLVER_AMMO_ITEM,
	INV_UZI_AMMO_ITEM,
	INV_PISTOLS_AMMO_ITEM,
	INV_LASERSIGHT_ITEM,
	INV_BIGMEDI_ITEM,
	INV_SMALLMEDI_ITEM,
	INV_BINOCULARS_ITEM,
	INV_FLARE_INV_ITEM,
	INV_COMPASS_ITEM,
	INV_MEMCARD_LOAD_ITEM,
	INV_MEMCARD_SAVE_ITEM,
	INV_WATERSKIN1_EMPTY_ITEM,
	INV_WATERSKIN1_1_ITEM,
	INV_WATERSKIN1_2_ITEM,
	INV_WATERSKIN1_3_ITEM,
	INV_WATERSKIN2_EMPTY_ITEM,
	INV_WATERSKIN2_1_ITEM,
	INV_WATERSKIN2_2_ITEM,
	INV_WATERSKIN2_3_ITEM,
	INV_WATERSKIN2_4_ITEM,
	INV_WATERSKIN2_5_ITEM,
	INV_PUZZLE1_ITEM,
	INV_PUZZLE2_ITEM,
	INV_PUZZLE3_ITEM,
	INV_PUZZLE4_ITEM,
	INV_PUZZLE5_ITEM,
	INV_PUZZLE6_ITEM,
	INV_PUZZLE7_ITEM,
	INV_PUZZLE8_ITEM,
	INV_PUZZLE9_ITEM,
	INV_PUZZLE10_ITEM,
	INV_PUZZLE11_ITEM,
	INV_PUZZLE12_ITEM,
	INV_PUZZLE1_COMBO1_ITEM,
	INV_PUZZLE1_COMBO2_ITEM,
	INV_PUZZLE2_COMBO1_ITEM,
	INV_PUZZLE2_COMBO2_ITEM,
	INV_PUZZLE3_COMBO1_ITEM,
	INV_PUZZLE3_COMBO2_ITEM,
	INV_PUZZLE4_COMBO1_ITEM,
	INV_PUZZLE4_COMBO2_ITEM,
	INV_PUZZLE5_COMBO1_ITEM,
	INV_PUZZLE5_COMBO2_ITEM,
	INV_PUZZLE6_COMBO1_ITEM,
	INV_PUZZLE6_COMBO2_ITEM,
	INV_PUZZLE7_COMBO1_ITEM,
	INV_PUZZLE7_COMBO2_ITEM,
	INV_PUZZLE8_COMBO1_ITEM,
	INV_PUZZLE8_COMBO2_ITEM,
	INV_KEY1_ITEM,
	INV_KEY2_ITEM,
	INV_KEY3_ITEM,
	INV_KEY4_ITEM,
	INV_KEY5_ITEM,
	INV_KEY6_ITEM,
	INV_KEY7_ITEM,
	INV_KEY8_ITEM,
	INV_KEY9_ITEM,
	INV_KEY10_ITEM,
	INV_KEY11_ITEM,
	INV_KEY12_ITEM,
	INV_KEY1_COMBO1_ITEM,
	INV_KEY1_COMBO2_ITEM,
	INV_KEY2_COMBO1_ITEM,
	INV_KEY2_COMBO2_ITEM,
	INV_KEY3_COMBO1_ITEM,
	INV_KEY3_COMBO2_ITEM,
	INV_KEY4_COMBO1_ITEM,
	INV_KEY4_COMBO2_ITEM,
	INV_KEY5_COMBO1_ITEM,
	INV_KEY5_COMBO2_ITEM,
	INV_KEY6_COMBO1_ITEM,
	INV_KEY6_COMBO2_ITEM,
	INV_KEY7_COMBO1_ITEM,
	INV_KEY7_COMBO2_ITEM,
	INV_KEY8_COMBO1_ITEM,
	INV_KEY8_COMBO2_ITEM,
	INV_PICKUP1_ITEM,
	INV_PICKUP2_ITEM,
	INV_PICKUP3_ITEM,
	INV_PICKUP4_ITEM,
	INV_PICKUP1_COMBO1_ITEM,
	INV_PICKUP1_COMBO2_ITEM,
	INV_PICKUP2_COMBO1_ITEM,
	INV_PICKUP2_COMBO2_ITEM,
	INV_PICKUP3_COMBO1_ITEM,
	INV_PICKUP3_COMBO2_ITEM,
	INV_PICKUP4_COMBO1_ITEM,
	INV_PICKUP4_COMBO2_ITEM,
	INV_QUEST1_ITEM,
	INV_QUEST2_ITEM,
	INV_QUEST3_ITEM,
	INV_QUEST4_ITEM,
	INV_QUEST5_ITEM,
	INV_QUEST6_ITEM,
	INV_BURNING_TORCH_ITEM,
	INV_CROWBAR_ITEM,
	INV_CLOCKWORK_BEETLE_ITEM,
	INV_MECHANICAL_SCARAB_ITEM,
	INV_WINDING_KEY_ITEM,
	INV_EXAMINE1_ITEM,
	INV_EXAMINE2_ITEM,
	INV_EXAMINE3_ITEM,

	NUM_INVOBJ
} invobj_types;

typedef enum
{
	ROOM_UNDERWATER =	0x1,
	ROOM_SWAMP =		0x4,
	ROOM_OUTSIDE =		0x8,
	ROOM_DYNAMIC_LIT =	0x10,
	ROOM_NOT_INSIDE =	0x20,
	ROOM_INSIDE =		0x40,
	ROOM_NO_LENSFLARE = 0x80
} room_flags;

typedef enum
{
	LM_HIPS,
	LM_LTHIGH,
	LM_LSHIN,
	LM_LFOOT,
	LM_RTHIGH,
	LM_RSHIN,
	LM_RFOOT,
	LM_TORSO,
	LM_RINARM,
	LM_ROUTARM,
	LM_RHAND,
	LM_LINARM,
	LM_LOUTARM,
	LM_LHAND,
	LM_HEAD,
	NUM_LARA_MESHES
} lara_mesh;

typedef enum
{
	GF_YOUNGLARA = 0x1,
	GF_WEATHER = 0x2,
	GF_HORIZON = 0x4,
	GF_LAYER1 = 0x8,
	GF_LAYER2 = 0x10,
	GF_STARFIELD = 0x20,
	GF_LIGHTNING = 0x40,
	GF_TRAIN = 0x80,
	GF_PULSE = 0x100,
	GF_HORIZONCOLADD = 0x200,
	GF_RESETHUB = 0x400,
	GF_LENSFLARE = 0x800,
	GF_TIMER = 0x1000,
	GF_MIRROR = 0x2000,
	GF_REMOVEAMULET = 0x4000,
	GF_NOLEVEL = 0x8000
} gf_level_options;

typedef enum
{
	HAIR_PAGE_BOY =         1,
	HAIR_TWO_PLAITS =       2,
	HAIR_ONE_PONYTAIL =     3,
	HAIR_ONE_TR5_PONYTAIL = 4
} CUST_HAIR_TYPE;

typedef enum
{
	FLOOR_TYPE,
	DOOR_TYPE,
	TILT_TYPE,
	ROOF_TYPE,
	TRIGGER_TYPE,
	LAVA_TYPE,
	CLIMB_TYPE,
	SPLIT1,
	SPLIT2,
	SPLIT3,
	SPLIT4,
	NOCOLF1T,
	NOCOLF1B,
	NOCOLF2T,
	NOCOLF2B,
	NOCOLC1T,
	NOCOLC1B,
	NOCOLC2T,
	NOCOLC2B,
	MONKEY_TYPE,
	TRIGTRIGGER_TYPE,
	MINER_TYPE
} floor_types;

typedef enum
{
	ANIM_STOP = 11,
	ANIM_FASTFALL = 23,
	ANIM_FALLDOWN = 34,
	ANIM_BACKSTEPD_LEFT = 61,
	ANIM_BACKSTEPD_RIGHT = 62,
	ANIM_RBALL_DEATH = 139,
	ANIM_CRAWLPICKUP = 292
} lara_anim;

typedef enum
{
	ITEM_INACTIVE,
	ITEM_ACTIVE,
	ITEM_DEACTIVATED,
	ITEM_INVISIBLE
} item_status;

typedef enum
{
	AS_WALK = 0,
	AS_RUN = 1,
	AS_STOP = 2,
	AS_FORWARDJUMP = 3,
	AS_POSE = 4,
	AS_FASTBACK = 5,
	AS_TURN_R = 6,
	AS_TURN_L = 7,
	AS_DEATH = 8,
	AS_FASTFALL = 9,
	AS_HANG = 10,
	AS_REACH = 11,
	AS_SPLAT = 12,
	AS_TREAD = 13,
	AS_LAND = 14,
	AS_COMPRESS = 15,
	AS_BACK = 16,
	AS_SWIM = 17,
	AS_GLIDE = 18,
	AS_NULL = 19,
	AS_FASTTURN = 20,
	AS_STEPRIGHT = 21,
	AS_STEPLEFT = 22,
	AS_HIT = 23,
	AS_SLIDE = 24,
	AS_BACKJUMP = 25,
	AS_RIGHTJUMP = 26,
	AS_LEFTJUMP = 27,
	AS_UPJUMP = 28,
	AS_FALLBACK = 29,
	AS_HANGLEFT = 30,
	AS_HANGRIGHT = 31,
	AS_SLIDEBACK = 32,
	AS_SURFTREAD = 33,
	AS_SURFSWIM = 34,
	AS_DIVE = 35,
	AS_PUSHBLOCK = 36,
	AS_PULLBLOCK = 37,
	AS_PPREADY = 38,
	AS_PICKUP = 39,
	AS_SWITCHON = 40,
	AS_SWITCHOFF = 41,
	AS_USEKEY = 42,
	AS_USEPUZZLE = 43,
	AS_UWDEATH = 44,
	AS_ROLL = 45,
	AS_SPECIAL = 46,
	AS_SURFBACK = 47,
	AS_SURFLEFT = 48,
	AS_SURFRIGHT = 49,
	AS_USEMIDAS = 50,
	AS_DIEMIDAS = 51,
	AS_SWANDIVE = 52,
	AS_FASTDIVE = 53,
	AS_GYMNAST = 54,
	AS_WATEROUT = 55,
	AS_CLIMBSTNC = 56,
	AS_CLIMBING = 57,
	AS_CLIMBLEFT = 58,
	AS_CLIMBEND = 59,
	AS_CLIMBRIGHT = 60,
	AS_CLIMBDOWN = 61,
	AS_LARATEST1 = 62,
	AS_LARATEST2 = 63,
	AS_LARATEST3 = 64,
	AS_WADE = 65,
	AS_WATERROLL = 66,
	AS_FLAREPICKUP = 67,
	AS_TWIST = 68,
	AS_KICK = 69,
	AS_DEATHSLIDE = 70,
	AS_DUCK = 71,
	AS_DUCKROLL = 72,
	AS_DASH = 73,
	AS_DASHDIVE = 74,
	AS_HANG2 = 75,
	AS_MONKEYSWING = 76,
	AS_MONKEYL = 77,
	AS_MONKEYR = 78,
	AS_MONKEY180 = 79,
	AS_ALL4S = 80,
	AS_CRAWL = 81,
	AS_HANGTURNL = 82,
	AS_HANGTURNR = 83,
	AS_ALL4TURNL = 84,
	AS_ALL4TURNR = 85,
	AS_CRAWLBACK = 86,
	AS_HANG2DUCK = 87,
	AS_CRAWL2HANG = 88,
	AS_CONTROLLED = 89,
	AS_ROPELEFT = 90,
	AS_ROPERIGHT = 91,
	AS_BLOCKSWITCH = 92,
	AS_LIFTTRAP = 93,
	AS_PULLTRAP = 94,
	AS_TURNSWITCH = 95,
	AS_COGSWITCH = 96,
	AS_RAILSWITCH = 97,
	AS_HIDDENPICKUP = 98,
	AS_POLESTAT = 99,
	AS_POLEUP = 100,
	AS_POLEDOWN = 101,
	AS_POLELEFT = 102,
	AS_POLERIGHT = 103,
	AS_PULLEY = 104,
	AS_DUCKROTL = 105,
	AS_DUCKROTR = 106,
	AS_CORNEREXTL = 107,
	AS_CORNEREXTR = 108,
	AS_CORNERINTL = 109,
	AS_CORNERINTR = 110,
	AS_ROPE = 111,
	AS_CLIMBROPE = 112,
	AS_SLIDEROPE = 113,
	AS_ROPEFWD = 114,
	AS_ROPEBACK = 115,
	AS_MOVE = 116,
	AS_TWODOOR = 117,

	NUM_LARA_STATES
} lara_anim_state;

typedef enum
{
	LG_NO_ARMS,
	LG_HANDS_BUSY,
	LG_DRAW_GUNS,
	LG_UNDRAW_GUNS,
	LG_READY,
	LG_FLARE,
} lara_gun_status;

typedef enum
{
	WALL,
	SMALL_SLOPE,
	BIG_SLOPE,
	DIAGONAL,
	SPLIT_TRI
} height_types;

typedef enum
{
	LMX_HIPS,
	LMX_THIGH_L,
	LMX_CALF_L,
	LMX_FOOT_L,
	LMX_THIGH_R,
	LMX_CALF_R,
	LMX_FOOT_R,
	LMX_TORSO,
	LMX_HEAD,
	LMX_UARM_R,
	LMX_LARM_R,
	LMX_HAND_R,
	LMX_UARM_L,
	LMX_LARM_L,
	LMX_HAND_L
} LMX;

typedef enum
{
	IFL_TRIGGERED = 0x20,
	IFL_SWITCH_ONESHOT = 0x40,	//oneshot for switch items
	IFL_ANTITRIGGER_ONESHOT = 0x80,	//oneshot for antitriggers
	IFL_INVISIBLE = 0x100,	//also used as oneshot for everything else
	IFL_CODEBITS = 0x3E00,
	IFL_REVERSE = 0x4000,
	IFL_CLEARBODY = 0x8000
} ITEM_FLAGS;

typedef enum
{
    SFX_LARA_FEET,
    SFX_LARA_CLIMB2,
    SFX_LARA_NO,
    SFX_LARA_SLIPPING,
    SFX_LARA_LAND,
    SFX_LARA_CLIMB1,
    SFX_LARA_DRAW,
    SFX_LARA_HOLSTER,
    SFX_LARA_FIRE,
    SFX_LARA_RELOAD,
    SFX_LARA_RICOCHET,
    SFX_PUSH_BLOCK_END,
    SFX_METAL_SCRAPE_LOOP1,
    SFX_SMALL_SCARAB_FEET,
    SFX_BIG_SCARAB_ATTACK,
    SFX_BIG_SCARAB_DEATH,
    SFX_BIG_SCARAB_FLYING,
    SFX_LARA_WET_FEET,
    SFX_LARA_WADE,
    SFX_RUMBLE_LOOP,
    SFX_METAL_SCRAPE_LOOP,
    SFX_CRICKET_LOOP,
    SFX_WOOD_BRIDGE_FALL,
    SFX_STARGATE_SWIRL,
    SFX_LARA_KNEES_SHUFFLE,
    SFX_PUSH_SPX_SWITCH,
    SFX_LARA_CLIMB3,
    SFX_UNUSED,
    SFX_LARA_SHIMMY2,
    SFX_LARA_JUMP,
    SFX_LARA_FALL,
    SFX_LARA_INJURY,
    SFX_LARA_ROLL,
    SFX_LARA_SPLASH,
    SFX_LARA_GETOUT,
    SFX_LARA_SWIM,
    SFX_LARA_BREATH,
    SFX_LARA_BUBBLES,
    SFX_SPINNING_PUZZLE,
    SFX_LARA_KEY,
    SFX_COG_RESAW_LIBRARY,
    SFX_LARA_GENERAL_DEATH,
    SFX_LARA_KNEES_DEATH,
    SFX_LARA_UZI_FIRE,
    SFX_LARA_UZI_STOP,
    SFX_LARA_SHOTGUN,
    SFX_LARA_BLOCK_PUSH1,
    SFX_LARA_BLOCK_PUSH2,
    SFX_SARLID_PALACES,
    SFX_LARA_SHOTGUN_SHELL,
    SFX_UNDERWATER_DOOR,
    SFX_LARA_BLKPULL,
    SFX_LARA_FLOATING,
    SFX_LARA_FALLDEATH,
    SFX_LARA_GRABHAND,
    SFX_LARA_GRABBODY,
    SFX_LARA_GRABFEET,
    SFX_RATCHET_3SHOT,
    SFX_RATCHET_1SHOT,
    SFX_WATER_LOOP_NOTINUSE,
    SFX_UNDERWATER,
    SFX_UNDERWATER_SWITCH,
    SFX_LARA_PICKUP,
    SFX_PUSHABLE_SOUND,
    SFX_DOOR_GENERAL,
    SFX_HELICOPTER_LOOP,
    SFX_ROCK_FALL_CRUMBLE,
    SFX_ROCK_FALL_LAND,
    SFX_PENDULUM_BLADES,
    SFX_STALEGTITE,
    SFX_LARA_THUD,
    SFX_GENERIC_SWOOSH,
    SFX_GENERIC_HEAVY_THUD,
    SFX_CROC_FEET,
    SFX_SWINGING_FLAMES,
    SFX_STONE_SCRAPE,
    SFX_BLAST_CIRCLE,
    SFX_BAZOOKA_FIRE,
    SFX_MP5_FIRE,
    SFX_WATERFALL_LOOP,
    SFX_CROC_ATTACK,
    SFX_CROC_DEATH,
    SFX_PORTCULLIS_UP,
    SFX_PORTCULLIS_DOWN,
    SFX_DOUBLE_DOOR_BANG,
    SFX_DOUBLE_DOOR_CREAK,
    SFX_PETES_PYRA_STONE,
    SFX_PETES_PYRA_PNEU,
    SFX_AHMET_DIE,
    SFX_AHMET_ATTACK,
    SFX_AMHET_HANDS,
    SFX_AHMET_FEET,
    SFX_AHMET_SWIPE,
    SFX_AHMET_WAIT,
    SFX_GUIDE_JUMP,
    SFX_GENERAL_FOOTSTEPS1,
    SFX_GUIDE_LAND_USENOT,
    SFX_POUR,
    SFX_SCALE1,
    SFX_SCALE2,
    SFX_BEETLARA_WINDUP,
    SFX_BEETLE_CLK_WHIRR,
    SFX_BEETLE_CLK_EXP,
    SFX_MINE_EXP_OVERLAY,
    SFX_MP5_STOP,
    SFX_EXPLOSION1,
    SFX_EXPLOSION2,
    SFX_EARTHQUAKE_LOOP,
    SFX_MENU_ROTATE,
    SFX_MENU_SELECT,
    SFX_MENU_EMPTY,
    SFX_MENU_CHOOSE,
    SFX_TICK_TOCK,
    SFX_MENU_EMPTY1,
    SFX_MENU_COMBINE,
    SFX_MENU_EMPTY2,
    SFX_MENU_MEDI,
    SFX_LARA_CLIMB_WALLS_NOISE,
    SFX_WATER_LOOP,
    SFX_VONCROY_JUMP,
    SFX_LOCUSTS_LOOP,
    SFX_DESERT_EAGLE_FIRE,
    SFX_BOULDER_FALL,
    SFX_LARA_MINI_LOAD,
    SFX_LARA_MINI_LOCK,
    SFX_LARA_MINI_FIRE,
    SFX_GATE_OPENING,
    SFX_LARA_ELECTRIC_LOOP,
    SFX_LARA_ELECTRIC_CRACKLES,
    SFX_BLOOD_LOOP,
    SFX_BIKE_START,
    SFX_BIKE_IDLE,
    SFX_BIKE_ACCELERATE,
    SFX_BIKE_MOVING,
    SFX_BIKE_SIDE_IMPACT,
    SFX_BIKE_FRONT_IMPACT,
    SFX_SOFT_WIND_LOOP,
    SFX_BIKE_LAND,
    SFX_CROCGOD_ROAR,
    SFX_CROCGOD_WINGS,
    SFX_CROCGOD_LAND,
    SFX_CROCGOD_FIRE_ROAR,
    SFX_BIKE_STOP,
    SFX_GENERIC_BODY_SLAM,
    SFX_MP5_OVERLAY,
    SFX_LARA_SPIKE_DEATH,
    SFX_LARA_DEATH3,
    SFX_ROLLING_BALL,
    SFX_BLK_PLAT_RAISE_LOW,
    SFX_RUMBLE_NEXTDOOR,
    SFX_LOOP_FOR_SMALL_FIRES,
    SFX_CHAINS_LIBRARY,
    SFX_JEEP_START,
    SFX_JEEP_IDLE,
    SFX_JEEP_ACCELERATE,
    SFX_JEEP_MOVE,
    SFX_JEEP_STOP,
    SFX_BATS_1,
    SFX_ROLLING_DOOR,
    SFX_LAUNCHER_1,
    SFX_LAUNCHER_2,
    SFX_TRAPDOOR_OPEN,
    SFX_TRAPDOOR_CLOSE,
    SFX_EMPTY1,
    SFX_BABOON_STAND_WAIT,
    SFX_BABOON_ATTACK_LOW,
    SFX_BABOON_ATTACK_JUMP,
    SFX_BABOON_JUMP,
    SFX_BABOON_DEATH,
    SFX_BAT_SQUEAL_FULL,
    SFX_BAT_SQK,
    SFX_BAT_FLAP,
    SFX_SPHINX_NOSE_RASP,
    SFX_SPHINX_WALK,
    SFX_SPHINX_NOISE,
    SFX_DOG_HOWL,
    SFX_DOG_HIT_GOUND,
    SFX_FOUNTAIN_LOOP,
    SFX_DOG_FOOT_1,
    SFX_DOG_JUMP,
    SFX_DOG_BITE,
    SFX_DOG_DEATH,
    SFX_THUNDER_RUMBLE,
    SFX_THUNDER_CRACK,
    SFX_WRAITH_WHISPERS,
    SFX_EMPTY2,
    SFX_EMPTY3,
    SFX_SKEL_FOOTSTEP,
    SFX_SKEL_ATTACK,
    SFX_GENERIC_SWORD_SWOOSH,
    SFX_SKEL_SWORD_CLANG,
    SFX_SKEL_STICK_GROUND,
    SFX_GEN_PULL_SWORD,
    SFX_SKEL_LAND_HEAVY,
    SFX_GUIDE_SCARE,
    SFX_JEEP_DOOR_OPEN,
    SFX_JEEP_DOOR_CLOSE,
    SFX_ELEC_ARCING_LOOP,
    SFX_ELEC_ONE_SHOT,
    SFX_EMPTY4,
    SFX_LIBRARY_COG_LOOP,
    SFX_JEEP_SIDE_IMPACT,
    SFX_JEEP_FRONT_IMPACT,
    SFX_JEEP_LAND,
    SFX_SPINNING_GEM_SLOTS,
    SFX_RUMMBLE,
    SFX_WARTHOG_HEADBUTT,
    SFX_WARTHOG_DEATH,
    SFX_SET_SPIKE_TIMER,
    SFX_WARTHOG_SQUEAL,
    SFX_WARTHOG_FEET,
    SFX_WARTHOG_GRUNT,
    SFX_SAVE_CRYSTAL,
    SFX_HORSE_RICOCHETS,
    SFX_METAL_SHUTTERS_SMASH,
    SFX_GEM_DROP_ON_FLOOR,
    SFX_SCORPION_SCREAM,
    SFX_SCORPION_FEET,
    SFX_SCORPION_CLAWS,
    SFX_SCORPION_TAIL_WHIP,
    SFX_SCORPION_SMALL_FEET,
    SFX_METAL_GATE_OPEN,
    SFX_HORSE_TROTTING,
    SFX_KN_TEMPLAR_WALK,
    SFX_KN_TEMPLAR_GURGLES,
    SFX_KN_SWORD_SCRAPE,
    SFX_KN_TEMPLAR_ATTACK,
    SFX_KN_SWORD_CLANG,
    SFX_KN_SWORD_SWOOSH,
    SFX_MUMMY_ATTACK,
    SFX_MUMMY_WALK,
    SFX_MUMMY_GURGLES,
    SFX_MUMMY_TAKE_HIT,
    SFX_SMALL_FAN,
    SFX_LARGE_FAN,
    SFX_LARA_CROSSBOW,
    SFX_SMALL_CREATURE_FEET,
    SFX_SAS_GADGIE_DIE,
    SFX_WATER_FLUSHES,
    SFX_GUID_ZIPPO,
    SFX_LEAP_SWITCH,
    SFX_OLD_SWITCH,
    SFX_DEMIGODS_FEET,
    SFX_DEMIGODS_BULL_SNORT,
    SFX_DEMIGODS_BULL_HAMMER,
    SFX_DEMIGODS_S_WAVE_RUMB,
    SFX_DEMIGOD_WEAP_SWOOSH,
    SFX_DEMIGOD_FALCON_SQUEAL,
    SFX_DEMIGOD_FALCON_PLAS,
    SFX_DEMIGOD_RISE,
    SFX_DEMI_TUT_PLASMA_SPRAY,
    SFX_DEMI_SIREN_SWAVE,
    SFX_DEMIGODS_TUT_GROWL,
    SFX_JOBY_ELECTRIC_INSERT,
    SFX_BAD_LAND,
    SFX_DOOR_GEN_THUD,
    SFX_BAD_GRUNTS,
    SFX_BAD_DIE,
    SFX_BAD_JUMP,
    SFX_BAD_TROOP_STUN,
    SFX_BAD_SWORDAWAY,
    SFX_BAD_TROOP_UZI,
    SFX_BAD_SWORD_RICO,
    SFX_BAD_TROOP_UZI_END,
    SFX_TROOP_SCROP_CRIES,
    SFX_SAS_TROOP_FEET,
    SFX_GENERIC_NRG_CHARGE,
    SFX_SAS_MG_FIRE,
    SFX_HAMMER_HEAD_WADE,
    SFX_SMALL_SWITCH,
    SFX_EMPTY5,
    SFX_SIREN_WING_FLAP,
    SFX_SIREN_NOIZES,
    SFX_SIREN_ATTACK,
    SFX_SIREN_DEATH,
    SFX_SIREN_GEN_NOISES,
    SFX_SETT_SIREN_PLASMA,
    SFX_HAMMER_HEAD_ATK,
    SFX_SMALL_DOOR_SUBWAY,
    SFX_TRAIN_DOOR_OPEN,
    SFX_TRAIN_DOOR_CLOSE,
    SFX_VONCROY_KNIFE_SWISH,
    SFX_TRAIN_UNLINK_BREAK,
    SFX_OBJ_BOX_HIT,
    SFX_OBJ_BOX_HIT_CHANCE,
    SFX_OBJ_GEM_SMASH,
    SFX_CATBLADES_DRAW,
    SFX_SWIRLY_LONG_MOVE_SFX,
    SFX_FOOTSTEPS_MUD,
    SFX_HORSEMAN_HORSE_NEIGH,
    SFX_FOOTSTEPS_GRAVEL,
    SFX_FOOTSTEPS_SAND_GRASS,
    SFX_FOOTSTEPS_WOOD,
    SFX_FOOTSTEPS_MARBLE,
    SFX_FOOTSTEPS_METAL,
    SFX_GEN_SPHINX_DOORTHD,
    SFX_SETT_PLASMA_1,
    SFX_SETT_BOLT_1,
    SFX_SETT_FEET,
    SFX_SETT_NRG_CHARGE,
    SFX_SETT_NRG_CHARGE2,
    SFX_HORSEMAN_TAKEHIT,
    SFX_HORSEMAN_WALK,
    SFX_HORSEMAN_GRUNT,
    SFX_HORSEMAN_FALL,
    SFX_HORSEMAN_DIE,
    SFX_MAPPER_SWITCH_ON,
    SFX_MAPPER_OPEN,
    SFX_MAPPER_LAZER,
    SFX_MAPPER_MOVE,
    SFX_MAPPER_CLUNK,
    SFX_BLADES_DRAW,
    SFX_BLADES_CLASH_LOUD,
    SFX_BLADES_CLASH_QUIET,
    SFX_HAMMER_TRAP_BANG,
    SFX_DOOR_BIG_STONE,
    SFX_SETT_BIG_ROAR,
    SFX_BABOON_CHATTER,
    SFX_BABOON_ROLL,
    SFX_SWOOSH_SWIRLY_DOUBLE,
    SFX_DOOR_SETTDOOR_SQK,
    SFX_DOOR_SETTDOOR_CLANK,
    SFX_SETT_JUMP_ATTACK,
    SFX_JOBY_BLOCK,
    SFX_SETT_TAKE_HIT,
    SFX_DART_SPITT,
    SFX_LARA_CROWBAR_GEM,
    SFX_CROWBAR_DOOR_OPEN,
    SFX_LARA_LEVER_GEN_SQKS,
    SFX_HORSEMAN_GETUP,
    SFX_EXH_BASKET_OPEN,
    SFX_EXH_MUMCOFF_OPE1,
    SFX_EXH_MUMCOFF_OPE2,
    SFX_EXH_MUM_JOLT,
    SFX_EXH_MUMHEAD_SPIN,
    SFX_EXH_MUMMY_RAHHH,
    SFX_EXH_ROLLER_BLINDS,
    SFX_LARA_LEVER_PART1,
    SFX_LARA_LEVER_PART2,
    SFX_LARA_POLE_CLIMB,
    SFX_LARA_POLE_LOOP,
    SFX_TRAP_SPIKEBALL_SPK,
    SFX_LARA_PULLEY,
    SFX_TEETH_SPIKES,
    SFX_SAND_LOOP,
    SFX_LARA_USE_OBJECT,
    SFX_LIBRARY_COG_SQKS,
    SFX_HIT_ROCK,
    SFX_LARA_NO_FRENCH,
    SFX_LARA_NO_JAPAN,
    SFX_LARA_CROW_WRENCH,
    SFX_LARA_ROPE_CREAK,
    SFX_BOWLANIM,
    SFX_SPHINX_DOOR_WOODCRACK,
    SFX_BEETLE_CLK_WHIRR1,
    SFX_MAPPER_PYRAMID_OPEN,
    SFX_LIGHT_BEAM_JOBY,
    SFX_GUIDE_FIRE_LIGHT,
    SFX_AUTOGUNS,
    SFX_PULLEY_ANDY,
    SFX_STEAM,
    SFX_JOBY_GARAGE_DOOR,
    SFX_JOBY_WIND,
    SFX_SANDHAM_IN_THE_HOUSE,
    SFX_SANDHAM_CONVEYS,
    SFX_CRANKY_GRAPE_CRUSH,
    SFX_BIKE_HIT_OBJECTS,
    SFX_BIKE_HIT_ENEMIES,
    SFX_FLAME_EMITTER,
    SFX_LARA_CLICK_SWITCH,

    NumSamples
} sound_effect_names;

typedef enum
{
	QS_0,
	QS_DRIVE,
	QS_TURNL,
	QS_3,
	QS_4,
	QS_SLOW,
	QS_BRAKE,
	QS_BIKEDEATH,
	QS_FALL,
	QS_GETONR,
	QS_GETOFFR,
	QS_HITBACK,
	QS_HITFRONT,
	QS_HITLEFT,
	QS_HITRIGHT,
	QS_STOP,
	QS_16,
	QS_LAND,
	QS_STOPSLOWLY,
	QS_FALLDEATH,
	QS_FALLOFF,
	QS_WHEELIE,
	QS_TURNR,
	QS_GETONL,
	QS_GETOFFL
} QUAD_STATES;

typedef enum
{
	SF_NONE =			0x0,
	SF_BURN =			0x1,
	SF_SCALE =			0x2,	//scale using sptr->Scalar
	SF_DEF =			0x8,	//use sptr->Def for the drawn sprite (otherwise do flat quad)
	SF_ROTATE =			0x10,	//rotate the drawn sprite (only supported for sparks with SF_DEF)
	SF_FX =				0x40,	//spark is attached to an effect
	SF_ITEM =			0x80,	//spark is attached to an item
	SF_OUTSIDE =		0x100,	//spark is affected by wind
	SF_DEADLY =			0x400,
	SF_UNWATER =		0x800,	//for underwater explosions to create bubbles etc.
	SF_ATTACHEDNODE =	0x1000,	//spark is attached to an item node, uses NodeOffsets
	SF_GREEN =			0x2000,	//turns the spark into a green-ish blue (for explosions only)
} spark_flags;

typedef struct
{
	char b;
	char g;
	char r;
	char a;
} CVECTOR;

typedef struct
{
	long x;
	long y;
	long z;
} PHD_VECTOR;

typedef struct
{
	long x_pos;
	long y_pos;
	long z_pos;
	short x_rot;
	short y_rot;
	short z_rot;
} PHD_3DPOS;

typedef struct
{
	float x;
	float y;
	float z;
	float r;
	float g;
	float b;
	long shadow;
	float Inner;
	float Outer;
	float InnerAngle;
	float OuterAngle;
	float Cutoff;
	float nx;
	float ny;
	float nz;
	long ix;
	long iy;
	long iz;
	long inx;
	long iny;
	long inz;
	float tr;
	float tg;
	float tb;
	float rs;
	float gs;
	float bs;
	long fcnt;
	uchar Type;
	uchar Active;
	PHD_VECTOR rlp;
	long Range;
} PCLIGHT;

typedef struct
{
	long r;
	long g;
	long b;
	long ambient;
	long rs;
	long gs;
	long bs;
	long fcnt;
	PCLIGHT	CurrentLights[21];
	PCLIGHT	PrevLights[21];
	long nCurrentLights;
	long nPrevLights;
	long room_number;
	long RoomChange;
	PHD_VECTOR item_pos;
	void* pCurrentLights;
	void* pPrevLights;
} ITEM_LIGHT;

typedef struct
{
	long floor;
	ulong touch_bits;
	ulong mesh_bits;
	short object_number;
	short current_anim_state;
	short goal_anim_state;
	short required_anim_state;
	short anim_number;
	short frame_number;
	short room_number;
	short next_item;
	short next_active;
	short speed;
	short fallspeed;
	short hit_points;
	ushort box_number;
	short timer;
	short flags;
	short shade;
	short trigger_flags;
	short carried_item;
	short after_death;
	ushort fired_weapon;
	short item_flags[4];
	void* data;
	PHD_3DPOS pos;
	ITEM_LIGHT il;
	ulong active : 1;
	ulong status : 2;
	ulong gravity_status : 1;
	ulong hit_status : 1;
	ulong collidable : 1;
	ulong looked_at : 1;
	ulong dynamic_light : 1;
	ulong poisoned : 1;
	ulong ai_bits : 5;
	ulong really_active : 1;
	ulong InDrawRoom : 1;	//I don't think this exists in TR4
	ulong meshswap_meshbits;
	short draw_room;
	short TOSSPAD;
} ITEM_INFO;

typedef struct
{
	short exit_box;
	ushort search_number;
	short next_expansion;
	short box_number;
} box_node;

typedef struct
{
	box_node* node;
	short head;
	short tail;
	ushort search_number;
	ushort block_mask;
	short step;
	short drop;
	short zone_count;
	short target_box;
	short required_box;
	short fly;
	ushort can_jump : 1;
	ushort can_monkey : 1;
	ushort is_amphibious : 1;
	ushort is_jumping : 1;
	ushort is_monkeying : 1;
	PHD_VECTOR target;
	zone_type zone;
} LOT_INFO;

typedef struct
{
	short joint_rotation[4];
	short maximum_turn;
	short flags;
	ushort alerted : 1;
	ushort head_left : 1;
	ushort head_right : 1;
	ushort reached_goal : 1;
	ushort hurt_by_lara : 1;
	ushort patrol2 : 1;
	ushort jump_ahead : 1;
	ushort monkey_ahead : 1;
	mood_type mood;
	ITEM_INFO* enemy;
	ITEM_INFO ai_target;
	short pad;
	short item_num;
	PHD_VECTOR target;
	LOT_INFO LOT;
} CREATURE_INFO;

typedef struct
{
	PHD_3DPOS pos;
	short room_number;
	short object_number;
	short next_fx;
	short next_active;
	short speed;
	short fallspeed;
	short frame_number;
	short counter;
	short shade;
	short flag1;
	short flag2;
} FX_INFO;

typedef struct
{
	short* frame_base;
	short frame_number;
	short anim_number;
	short lock;
	short y_rot;
	short x_rot;
	short z_rot;
	short flash_gun;
} LARA_ARM;

typedef struct
{
	short item_number;
	short gun_status;
	short gun_type;
	short request_gun_type;
	short last_gun_type;
	short calc_fallspeed;
	short water_status;
	short climb_status;
	short pose_count;
	short hit_frame;
	short hit_direction;
	short air;
	short dive_count;
	short death_count;
	short current_active;
	short current_xvel;
	short current_yvel;
	short current_zvel;
	short spaz_effect_count;
	short flare_age;
	short vehicle;
	short weapon_item;
	short back_gun;
	short flare_frame;
	short poisoned;
	short dpoisoned;
	uchar electric;
	uchar wet[15];
	ushort flare_control_left : 1;
	ushort Unused1 : 1;
	ushort look : 1;
	ushort burn : 1;
	ushort keep_ducked : 1;
	ushort IsMoving : 1;
	ushort CanMonkeySwing : 1;
	ushort Unused2 : 1;
	ushort OnBeetleFloor : 1;
	ushort BurnGreen : 1;
	ushort IsDucked : 1;
	ushort has_fired : 1;
	ushort Busy : 1;
	ushort LitTorch : 1;
	ushort IsClimbing : 1;
	ushort Fired : 1;
	long water_surface_dist;
	PHD_VECTOR last_pos;
	FX_INFO* spaz_effect;
	long mesh_effects;
	short* mesh_ptrs[15];
	ITEM_INFO* target;
	short target_angles[2];
	short turn_rate;
	short move_angle;
	short head_y_rot;
	short head_x_rot;
	short head_z_rot;
	short torso_y_rot;
	short torso_x_rot;
	short torso_z_rot;
	LARA_ARM left_arm;
	LARA_ARM right_arm;
	ushort holster;
	CREATURE_INFO* creature;
	long CornerX;
	long CornerZ;
	char RopeSegment;
	char RopeDirection;
	short RopeArcFront;
	short RopeArcBack;
	short RopeLastX;
	short RopeMaxXForward;
	short RopeMaxXBackward;
	long RopeDFrame;
	long RopeFrame;
	ushort RopeFrameRate;
	ushort RopeY;
	long RopePtr;
	void* GeneralPtr;
	long RopeOffset;
	ulong RopeDownVel;
	char RopeFlag;
	char MoveCount;
	long RopeCount;
	char pistols_type_carried;
	char uzis_type_carried;
	char shotgun_type_carried;
	char crossbow_type_carried;
	char grenade_type_carried;
	char sixshooter_type_carried;
	char lasersight;
	char binoculars;
	char crowbar;
	char mechanical_scarab;
	uchar small_water_skin;
	uchar big_water_skin;
	char examine1;
	char examine2;
	char examine3;
	char puzzleitems[12];
	ushort puzzleitemscombo;
	ushort keyitems;
	ushort keyitemscombo;
	ushort pickupitems;
	ushort pickupitemscombo;
	short questitems;
	short num_small_medipack;
	short num_large_medipack;
	short num_flares;
	short num_pistols_ammo;
	short num_uzi_ammo;
	short num_revolver_ammo;
	short num_shotgun_ammo1;
	short num_shotgun_ammo2;
	short num_grenade_ammo1;
	short num_grenade_ammo2;
	short num_grenade_ammo3;
	short num_crossbow_ammo1;
	short num_crossbow_ammo2;
	short num_crossbow_ammo3;
	char beetle_uses;
	char blindTimer;
	char location;
	char highest_location;
	char locationPad;
} LARA_INFO;

typedef struct
{
	ulong Timer;
	ulong Distance;
	ulong AmmoUsed;
	ulong AmmoHits;
	ushort Kills;
	uchar Secrets;
	uchar HealthUsed;
} STATS;

typedef struct
{
	LARA_INFO Lara;
	long cutscene_triggered;
	uchar HubLevels[10];	//saved level indices. highest one that isn't 0 is the one we are currently in
	ushort HubOffsets[10];	//hub offsets (at what SGcount they end(?))
	ushort HubSizes[10];	//HubSizes[x] = SGCount - HubOffsets[x];
	char CurrentLevel;
	char Checksum;
	STATS Game;
	STATS Level;
	short WeaponObject;
	short WeaponAnim;
	short WeaponFrame;
	short WeaponCurrent;
	short WeaponGoal;
	CVECTOR fog_colour;
	uchar HubSavedLara : 1;	//flag that we saved Lara's data when we initialised hub, only set to 1 when InitialiseHub is called with 1
	uchar AutoTarget : 1;
	uchar HaveBikeBooster : 1;	//have the bike nitro thing
	char buffer[15410];
} SAVEGAME_INFO;

typedef struct
{
	long x;
	long y;
	long z;
	short Xvel;
	short Yvel;
	short Zvel;
	short Gravity;
	short RotAng;
	short Flags;
	uchar sSize;
	uchar dSize;
	uchar Size;
	uchar Friction;
	uchar Scalar;
	uchar Def;
	char RotAdd;
	char MaxYvel;
	uchar On;
	uchar sR;
	uchar sG;
	uchar sB;
	uchar dR;
	uchar dG;
	uchar dB;
	uchar R;
	uchar G;
	uchar B;
	uchar ColFadeSpeed;
	uchar FadeToBlack;
	uchar sLife;
	uchar Life;
	uchar TransType;
	uchar extras;
	char Dynamic;
	uchar FxObj;
	uchar RoomNumber;
	uchar NodeNumber;
} SPARKS;

typedef struct {
	union
	{
		D3DVALUE x;
		D3DVALUE dvX;
	};

	union
	{
		D3DVALUE y;
		D3DVALUE dvY;
	};

	union
	{
		D3DVALUE z;
		D3DVALUE dvZ;
	};

	union
	{
		D3DVALUE nx;
		D3DVALUE dvNX;
	};

	union
	{
		D3DVALUE ny;
		D3DVALUE dvNY;
	};

	union
	{
		D3DVALUE nz;
		D3DVALUE dvNZ;
	};

	union
	{
		D3DVALUE tu;
		D3DVALUE dvTU;
	};

	union
	{
		D3DVALUE tv;
		D3DVALUE dvTV;
	};
} D3DVERTEX;

typedef struct
{
	long x;
	long y;
	long z;
	uchar on;
	uchar r;
	uchar g;
	uchar b;
	ushort falloff;
	uchar used;
	uchar pad1[1];
	long FalloffScale;
} DYNAMIC;

typedef struct
{
	long mid_floor;
	long mid_ceiling;
	long mid_type;
	long front_floor;
	long front_ceiling;
	long front_type;
	long left_floor;
	long left_ceiling;
	long left_type;
	long right_floor;
	long right_ceiling;
	long right_type;
	long left_floor2;
	long left_ceiling2;
	long left_type2;
	long right_floor2;
	long right_ceiling2;
	long right_type2;
	long radius;
	long bad_pos;
	long bad_neg;
	long bad_ceiling;
	PHD_VECTOR shift;
	PHD_VECTOR old;
	short old_anim_state;
	short old_anim_number;
	short old_frame_number;
	short facing;
	short quadrant;
	short coll_type;
	short* trigger;
	char tilt_x;
	char tilt_z;
	char hit_by_baddie;
	char hit_static;
	ushort slopes_are_walls : 2;
	ushort slopes_are_pits : 1;
	ushort lava_is_pit : 1;
	ushort enable_baddie_push : 1;
	ushort enable_spaz : 1;
	ushort hit_ceiling : 1;
} COLL_INFO;

typedef struct
{
	short nmeshes;
	short mesh_index;
	long bone_index;
	short* frame_base;
	void (*initialise)(short item_number);
	void (*control)(short item_number);
	void (*floor)(ITEM_INFO* item, long x, long y, long z, long* height);
	void (*ceiling)(ITEM_INFO* item, long x, long y, long z, long* height);
	void (*draw_routine)(ITEM_INFO* item);
	void (*collision)(short item_num, ITEM_INFO* laraitem, COLL_INFO* coll);
	short object_mip;
	short anim_index;
	short hit_points;
	short pivot_length;
	short radius;
	short shadow_size;
	ushort bite_offset;
	ushort loaded : 1;
	ushort intelligent : 1;
	ushort non_lot : 1;
	ushort save_position : 1;
	ushort save_hitpoints : 1;
	ushort save_flags : 1;
	ushort save_anim : 1;
	ushort semi_transparent : 1;
	ushort water_creature : 1;
	ushort using_drawanimating_item : 1;
	ushort HitEffect : 2;
	ushort undead : 1;
	ushort save_mesh : 1;
	void (*draw_routine_extra)(ITEM_INFO* item);
	ulong explodable_meshbits;
	ulong padfuck;
} OBJECT_INFO;

typedef struct
{
	short* frame_ptr;
	short interpolation;
	short current_anim_state;
	long velocity;
	long acceleration;
	long Xvelocity;
	long Xacceleration;
	short frame_base;
	short frame_end;
	short jump_anim_num;
	short jump_frame_num;
	short number_changes;
	short change_index;
	short number_commands;
	short command_index;
} ANIM_STRUCT;

typedef struct
{
	short lock_angles[4];
	short left_angles[4];
	short right_angles[4];
	short aim_speed;
	short shot_accuracy;
	short gun_height;
	short target_dist;
	char damage;
	char recoil_frame;
	char flash_time;
	char draw_frame;
	short sample_num;
} WEAPON_INFO;

typedef struct
{
	long x;
	long y;
	long z;
	short room_number;
	short box_number;
} GAME_VECTOR;

typedef struct
{
	long x;
	long y;
	long z;
	short data;
	short flags;
} OBJECT_VECTOR;

typedef struct
{
	GAME_VECTOR pos;
	GAME_VECTOR target;
	camera_type type;
	camera_type old_type;
	long shift;
	long flags;
	long fixed_camera;
	long number_frames;
	long bounce;
	long underwater;
	long target_distance;
	short target_angle;
	short target_elevation;
	short actual_elevation;
	short actual_angle;
	short number;
	short last;
	short timer;
	short speed;
	ITEM_INFO* item;
	ITEM_INFO* last_item;
	OBJECT_VECTOR* fixed;
	long mike_at_lara;
	PHD_VECTOR mike_pos;
} CAMERA_INFO;

typedef struct
{
	short object_number;
	short yoff;
	short scale1;
	short yrot;
	short xrot;
	short zrot;
	short flags;
	short objname;
	ulong meshbits;
} INVOBJ;

typedef struct
{
	ushort index;
	ushort fx : 4;
	ushort box : 11;
	ushort stopper : 1;
	uchar pit_room;
	char floor;
	uchar sky_room;
	char ceiling;
} FLOOR_INFO;

typedef struct
{
	FLOOR_INFO* floor;
	FLOOR_INFO data;
	short block;
} DOORPOS_DATA;

typedef struct
{
	DOORPOS_DATA d1;
	DOORPOS_DATA d1flip;
	DOORPOS_DATA d2;
	DOORPOS_DATA d2flip;
	short Opened;
} DOOR_DATA;

typedef struct
{
	float x;
	float y;
	float z;
} D3DVECTOR;

typedef struct
{
	long x;
	long y;
	long z;
	uchar r;
	uchar g;
	uchar b;
	uchar Type;
	short Intensity;
	float Inner;
	float Outer;
	float Length;
	float Cutoff;
	float nx;
	float ny;
	float nz;
} LIGHTINFO;

typedef struct
{
	long x;
	long y;
	long z;
	short y_rot;
	short shade;
	short Flags;
	short static_number;
} MESH_INFO;

typedef struct
{
	float x;
	float y;
	float z;
	float r;
	float g;
	float b;
	long shadow;
	float Inner;
	float Outer;
	float InnerAngle;
	float OuterAngle;
	float Cutoff;
	float nx;
	float ny;
	float nz;
	long ix;
	long iy;
	long iz;
	long inx;
	long iny;
	long inz;
	uchar Type;
	uchar Pad;
} PCLIGHT_INFO;

typedef struct
{
	short* data;
	short* door;
	FLOOR_INFO* floor;
	LIGHTINFO* light;
	MESH_INFO* mesh;
	long x;
	long y;
	long z;
	long minfloor;
	long maxceiling;
	short x_size;
	short y_size;
	long ambient;
	short num_lights;
	short num_meshes;
	uchar ReverbType;
	uchar FlipNumber;
	char MeshEffect;
	char bound_active;
	short left;
	short right;
	short top;
	short bottom;
	short test_left;
	short test_right;
	short test_top;
	short test_bottom;
	short item_number;
	short fx_number;
	short flipped_room;
	ushort flags;
	long nVerts;
	long nWaterVerts;
	long nShoreVerts;
	void* SourceVB;
	short* FaceData;
	float posx;
	float posy;
	float posz;
	D3DVECTOR* vnormals;
	D3DVECTOR* fnormals;
	long* prelight;
	long* prelightwater;
	long watercalc;
	D3DVECTOR* verts;
	long gt3cnt;
	long gt4cnt;
	PCLIGHT_INFO* pclight;
} ROOM_INFO;

typedef struct
{
	ushort drawtype;
	ushort tpage;
	ushort flag;
	float u1;
	float v1;
	float u2;
	float v2;
	float u3;
	float v3;
	float u4;
	float v4;
} TEXTURESTRUCT;

typedef struct {
	union
	{
		D3DVALUE sx;
		D3DVALUE dvSX;
	};

	union
	{
		D3DVALUE sy;
		D3DVALUE dvSY;
	};

	union
	{
		D3DVALUE sz;
		D3DVALUE dvSZ;
	};

	union
	{
		D3DVALUE rhw;
		D3DVALUE dvRHW;
	};

	union
	{
		D3DCOLOR color;
		D3DCOLOR dcColor;
	};

	union
	{
		D3DCOLOR specular;
		D3DCOLOR dcSpecular;
	};

	union
	{
		D3DVALUE tu;
		D3DVALUE dvTU;
	};

	union
	{
		D3DVALUE tv;
		D3DVALUE dvTV;
	};
} D3DTLVERTEX;

typedef struct {
	PHD_3DPOS pos;
	PHD_VECTOR vel;
} HAIR_STRUCT;

typedef struct
{
	ulong CheatEnabled : 1;
	ulong LoadSaveEnabled : 1;
	ulong TitleEnabled : 1;
	ulong PlayAnyLevel : 1;
	ulong Language : 3;
	ulong DemoDisc : 1;
	ulong Unused : 24;
	ulong InputTimeout;
	uchar SecurityTag;
	uchar nLevels;
	uchar nFileNames;
	uchar Pad;
	ushort FileNameLen;
	ushort ScriptLen;
} GAMEFLOW;

typedef struct
{
	long Speed;
	long MidPos;
	long FrontPos;
	long TurnX;
	long TurnZ;
	short TurnLen;
	short TurnRot;
	short YVel;
	short Gradient;
	char Flags;
	char StopDelay;
} CARTINFO;

typedef struct
{
	float x;
	float y;
	float z;
} FVECTOR;

typedef struct
{
	long x;
	long y;
	long z;
	short angle;
	short speed;
	uchar WingYoff;
	uchar flags;
	uchar life;
	uchar pad;
} BAT_STRUCT;

typedef struct
{
    union
	{
        struct
		{
            float _11, _12, _13, _14;
            float _21, _22, _23, _24;
            float _31, _32, _33, _34;
            float _41, _42, _43, _44;
        };

        float m[4][4];
    };
} D3DMATRIX;

typedef struct
{
	short joint_rotation[4];
	long Velocity;
	short FrontRot;
	short RearRot;
	long Revs;
	long EngineRevs;
	short track_mesh;
	long skidoo_turn;
	long left_fallspeed;
	long right_fallspeed;
	short momentum_angle;
	short extra_rotation;
	long pitch;
	uchar Flags;
} QUADINFO;

typedef struct
{
	char Text[80];
} StrText80;

typedef struct
{
	union
	{
		long Long;

		struct
		{
			short Short1;
			short Short2;
		};

		struct
		{
			uchar Byte1;
			uchar Byte2;
			uchar Byte3;
			uchar Byte4;
		};
	};
} StrGroupLongVar;

typedef struct
{
	StrGroupLongVar Alfa;
	StrGroupLongVar Beta;
	StrGroupLongVar Delta;
	long Timer;
} StrVariableNames;

typedef struct
{
	union
	{
		long VetNumeriLong[4];
		short VetNumeriShort[8];
		uchar VetNumeriByte[16];
		StrVariableNames Name;
	};
} StrBloccoNumVar;

typedef struct
{
	StrBloccoNumVar NumWar;
	StrText80 VetTextVar[4];

	union
	{
		long VetStoreLong[16];
		short VetStoreShort[32];
		uchar VetStoreByte[64];
	};

	char LastInputText[80];
	long LastInputNumber;
	long CurrentValue;
	char TextBig[320];
	ulong VetExtra[20];
} StrVariabiliGlobTRNG;

typedef struct
{
	StrVariabiliGlobTRNG Globals;
	StrBloccoNumVar Locals;
} StrBaseVarAll;

typedef struct
{
	uchar opCode;	// must be 0xE9;
	ulong offset;	// jump offset
} JMP;

#pragma pack(pop)

#define INJECT(from,to) \
do \
{ \
	((JMP*)(from))->opCode = 0xE9; \
	((JMP*)(from))->offset = (ulong)(to) - ((ulong)(from) + sizeof(JMP)); \
} while (0)
#define VAR_U_(address, type)		(*(type*)(address))
#define ARRAY_(address, type, length)	(*(type(*)length)(address))

StrBaseVarAll* pBaseVariableTRNG;
uchar* pPatchMap;

#ifdef __TINYC__
__int64 __fixsfdi(float a)
{
	__asm__ __volatile__
	(
		"flds 0x8(%ebp)\n\t"
		"movl $0x49DA5C, %eax\n\t"
		"call *%eax"
	);
}

__int64 __divdi3(__int64 a, __int64 b)
{
	__asm__ __volatile__
	(
		"movl 0x14(%ebp), %ecx\n\t"
		"movl 0x10(%ebp), %eax\n\t"
		"pushl %ecx\n\t"
		"pushl %eax\n\t"
		"movl 0xC(%ebp), %ecx\n\t"
		"movl 0x8(%ebp), %eax\n\t"
		"pushl %ecx\n\t"
		"pushl %eax\n\t"
		"movl $0x49EA40, %eax\n\t"
		"call *%eax"
	);
}

float fsqrt(float num)
{
	__asm__ __volatile__
	(
		"flds 0x8(%ebp)\n\t"
		"fsqrt\n\t"
	);
}

float fatan2(float x, float y)
{
	__asm__ __volatile__
	(
		"flds 0x8(%ebp)\n\t"
		"flds 0xC(%ebp)\n\t"
		"fpatan\n\t"
	);
}

float fsin(float angle)
{
	__asm__ __volatile__
	(
		"flds 0x8(%ebp)\n\t"
		"fsin\n\t"
	);
}
#else
__declspec(naked) float fsqrt(float num)
{
	__asm
	{
		fld DWORD PTR [esp + 4h]
		fsqrt
		ret
	}
}

__declspec(naked) float fatan2(float x, float y)
{
	__asm
	{
		fld DWORD PTR [esp + 4h]
		fld DWORD PTR [esp + 8h]
		fpatan
		ret
	}
}

__declspec(naked) float fsin(float angle)
{
	__asm
	{
		fld DWORD PTR [esp + 4h]
		fsin
		ret
	}
}
#endif

#define savegame	VAR_U_(0x007F75A0, SAVEGAME_INFO)
#define gfCurrentLevel	VAR_U_(0x007FD170, char)

#define sprintf	( (long(*)(char*, char*, ...)) 0x0049DB7F )

#define flep_number	         VAR_U_(0x0084C750, uchar)

#define flame_start_colour_r VAR_U_(0x0084C770, uchar)
#define flame_start_colour_g VAR_U_(0x0084C771, uchar)
#define flame_start_colour_b VAR_U_(0x0084C772, uchar)
#define flame_end_colour_r   VAR_U_(0x0084C773, uchar)
#define flame_end_colour_g   VAR_U_(0x0084C774, uchar)
#define flame_end_colour_b   VAR_U_(0x0084C775, uchar)

#define GetRandomControl	( (long(*)(void)) 0x0048eb50 )

#define dynamics	VAR_U_(0x00435C17, DYNAMIC*)
#define w2v_matrix	ARRAY_(0x00753C30, long, [12])
#define phd_mxptr	VAR_U_(0x007E70C8, long*)

#define ApplyMatrix	( (void(*)(long*, PHD_VECTOR*, PHD_VECTOR*)) 0x004765E0 )
#define ApplyTransposeMatrix	( (void(*)(long*, PHD_VECTOR*, PHD_VECTOR*)) 0x00476650 )

#define objects	ARRAY_(0x0052B720, OBJECT_INFO, [520])

#define BridgeFlatFloor	( (void(*)(ITEM_INFO*, long, long, long, long*)) 0x00455340 )
#define BridgeFlatCeiling	( (void(*)(ITEM_INFO*, long, long, long, long*)) 0x00455370 )
#define BridgeTilt1Floor	( (void(*)(ITEM_INFO*, long, long, long, long*)) 0x004553D0 )
#define BridgeTilt1Ceiling	( (void(*)(ITEM_INFO*, long, long, long, long*)) 0x00455420 )
#define BridgeTilt2Floor	( (void(*)(ITEM_INFO*, long, long, long, long*)) 0x00455460 )
#define BridgeTilt2Ceiling	( (void(*)(ITEM_INFO*, long, long, long, long*)) 0x004554B0 )

#define lara	VAR_U_(0x0080DEC0, LARA_INFO)
#define lara_item	VAR_U_(0x0080E01C, ITEM_INFO*)
#define harpoon_fired	VAR_U_(0x004BF220, long)
#define m16_firing	VAR_U_(0x004BF21C, long)
#define input	VAR_U_(0x005355D8, long)
#define anims	VAR_U_(0x00533938, ANIM_STRUCT*)
#define	weapons	ARRAY_(0x004AB830, WEAPON_INFO, [9])
#define SmokeCountL	VAR_U_(0x00804D48, long)
#define SmokeWeapon	VAR_U_(0x00804E00, long)
#define items	VAR_U_(0x007FE16C, ITEM_INFO*)
#define inputBusy	VAR_U_(0x005354D0, long)
#define WeaponDelay	VAR_U_(0x004BF2CC, uchar)
#define camera	VAR_U_(0x007FE700, CAMERA_INFO)

#define FireWeapon	( (long(*)(long, ITEM_INFO*, ITEM_INFO*, short*)) 0x0042E1C0 )
#define SoundEffect	( (long(*)(long, PHD_3DPOS*, long)) 0x0045E440 )
#define StopSoundEffect	( (void(*)(long)) 0x0045EBF0 )
#define TriggerGunShell	( (void(*)(short, short, long)) 0x00438AD0 )

#define gar_RotYXZsuperpack	( (void(*)(short**, long)) 0x0044FE00 )
#define gar_RotYXZsuperpack_I	( (void(*)(short**, short**, long)) 0x0044FDC0 )

#define vertex_shader_target	ARRAY_(0x00816F60, short, [2])

#define inventry_objects_list	ARRAY_(0x004AC068, INVOBJ, [119])

#define InitialiseDoor	( (void(*)(short)) 0x00452F30 )

#define OpenThatDoor	( (void(*)(DOORPOS_DATA*)) 0x0044D650 )
#define ShutThatDoor	( (void(*)(DOORPOS_DATA*)) 0x0044D5F0 )

#define TriggerActive	( (long(*)(ITEM_INFO*)) 0x0044ACB0 )

#define GetFrames	( (long(*)(ITEM_INFO*, short**, long*)) 0x00450450 )
#define phd_PushMatrix	( (void(*)(void)) 0x0048DF30 )
#define phd_PushUnitMatrix	( (void(*)(void)) 0x0048DF90 )
#define phd_TranslateAbs	( (void(*)(long, long, long)) 0x0048E690 )
#define phd_RotYXZ	( (void(*)(short, short, short)) 0x0048E4A0 )
#define phd_RotY	( (void(*)(short)) 0x0048E130 )
#define S_GetObjectBounds	( (long(*)(short*)) 0x0047DD00 )
#define phd_TranslateRel	( (long(*)(long, long, long)) 0x0048DFD0 )
#define ScaleCurrentMatrix	( (void(*)(PHD_VECTOR*)) 0x0048D7F0 )
#define CalculateObjectLighting	( (void(*)(ITEM_INFO*, short*)) 0x00450240 )
#define phd_PutPolygons	( (void(*)(short*, long)) 0x0047BB30 )
#define	phd_GetVectorAngles	( (void(*)(long, long, long, short*)) 0x0048E710 )

#define meshes	VAR_U_(0x00533950, short**)
#define room	VAR_U_(0x00533934, ROOM_INFO*)

#define setXYZ3	( (void(*)(D3DTLVERTEX*, long, long, long, long, long, long, long, long, long, short*)) 0x00483BD0 )

#define AddTriSorted	( *(void(**)(D3DTLVERTEX*, short, short, short, TEXTURESTRUCT*, long)) 0x0053399C )

#define GetFloor	( (FLOOR_INFO*(*)(long, long, long, short*)) 0x00449880 )
#define GetHeight	( (long(*)(FLOOR_INFO*, long, long, long)) 0x00449BD0 )
#define GetLaraJointPos	( (void(*)(PHD_VECTOR*, long)) 0x0041D890 )

#define clipflags   VAR_U_(0x00753854, short*)

#define rcossin_tbl	ARRAY_(0x004B34D0, short, [8192])

#define AlignLaraPosition	( (void(*)(PHD_VECTOR*, ITEM_INFO*, ITEM_INFO*)) 0x004477E0 )
#define MoveLaraPositionTrampoline	( (long(*)(PHD_VECTOR*, ITEM_INFO*, ITEM_INFO*)) 0x00818A31 )

#define phd_RotX	   ((void(*)(short)) 0x0048e080)
#define hairs          ARRAY_(0x0080e040, HAIR_STRUCT, [2][7])
#define gfLevelFlags   VAR_U_(0x007fd140, short)
#define TRNGYLHairFlag VAR_U_(0x004A6E6C, short)
#define TRNGCustHair   VAR_U_(0x104C59F6, ushort)

#define DrawAnimatingItem	( (void(*)(ITEM_INFO*)) 0x0044F600 )
#define AnimateItem	( (void(*)(ITEM_INFO*)) 0x00449280 )

#define floor_data	VAR_U_(0x00533948, short*)

#define TRNGItemIndexSelected   VAR_U_(0x1036C19C, short)

#define backstep_start_frame VAR_U_(0x0084D3A0, uchar)
#define backstep_end_frame VAR_U_(0x0084D3A1, uchar)

#define game_malloc	( (void*(*)(long)) 0x0048EBF0 )

#define ItemNewRoom	( (void(*)(short, short)) 0x00453C80 )
#define TestTriggers	( (void(*)(short*, long, long)) 0x0044A1F0 )
#define phd_sqrt	( (long(*)(long)) 0x0048DF00 )
#define GetBoundsAccurate	( (short*(*)(ITEM_INFO*)) 0x004504E0 )
#define GetCeiling	( (long(*)(FLOOR_INFO*, long, long, long)) 0x0044AD20 )
#define RemoveActiveItem	( (void(*)(short)) 0x00453AC0 )
#define	TestBoundsCollide	( (long(*)(ITEM_INFO*, ITEM_INFO*, long)) 0x00447270 )
#define TestCollision	( (long(*)(ITEM_INFO*, ITEM_INFO*)) 0x0045ED00 )
#define	ItemPushLara	( (long(*)(ITEM_INFO*, ITEM_INFO*, COLL_INFO*, long, long)) 0x00446EC0 )
#define DoBloodSplat	( (short(*)(long, long, long, short, short, short)) 0x00436BD0 )
#define ObjectCollision	( (void(*)(short, ITEM_INFO*, COLL_INFO*)) 0x00446D60 )
#define Splash	( (void(*)(ITEM_INFO*)) 0x00436CF0 )

#define trigger_index	VAR_U_(0x007FE128, short*)

#define ForcedFixedCamera	VAR_U_(0x007FE770, GAME_VECTOR)

#define mgLOS	( (long(*)(GAME_VECTOR*, GAME_VECTOR*, long)) 0x00444970 )

#define FireGrenade	( (void(*)(void)) 0x00429120 )
#define FireCrossbow	( (void(*)(PHD_3DPOS*)) 0x00429ED0 )
#define get_current_ammo_pointer	( (short*(*)(long)) 0x0042F010 )

#define next_item_active   VAR_U_(0x007FD0EA, short)

#define ControlGrenade	( (void(*)(short)) 0x004293B0 )
#define ControlCrossbow	( (void(*)(short)) 0x0042A4B0 )
#define DrawWeaponMissile	( (void(*)(ITEM_INFO*)) 0x0043AFC0 )
#define TriggerGunSmoke	( (void(*)(long, long, long, long, long, long, long, long, long)) 0x00438340 )

#define Gameflow	VAR_U_(0x007FD158, GAMEFLOW*)
#define reset_flag	VAR_U_(0x004BF2EC, long)
#define gfLoadRoom	VAR_U_(0x004B0635, uchar)

#define height_type	VAR_U_(0x007FE170, long)
#define wibble	VAR_U_(0x004BF238, long)
#define tsv_buffer	ARRAY_(0x00804E60, char, [16384])
#define OnObject	VAR_U_(0x007FE0E0, long)

#define CreateFlare	( (void(*)(short, long)) 0x0042F400 )
#define undraw_flare_meshes	( (void(*)(void)) 0x0042FAB0 )
#define mGetAngle	( (ulong(*)(long, long, long, long)) 0x0048D9C0 )
#define DoLotsOfBlood	( (void(*)(long, long, long, short, short, short, long)) 0x00436C40 )
#define GetCollidedObjects	( (long(*)(ITEM_INFO*, long, long, ITEM_INFO**, MESH_INFO**, long)) 0x004484E0 )
#define AddActiveItem	( (void(*)(short)) 0x00453C10 )
#define SwitchControl	( (void(*)(short)) 0x00460ED0 )
#define WriteSG	( (void(*)(void*, int)) 0x0045A3C0 )
#define ReadSG	( (void(*)(void*, int)) 0x0045B150 )
#define phd_atan	( (long(*)(long, long)) 0x0048DE90 )

#define TRNGDefaultWeaponBalestraDistanceAiming	VAR_U_(0x104C3A6B, ushort)
#define TRNGDefaultWeaponBalestraSizeShell	VAR_U_(0x104C3A6A, uchar)
#define TRNGDefaultWeaponBalestraFrameToTakeWeapon	VAR_U_(0x104C3A6D, uchar)
#define TRNGCustWeaponBalestraDistanceAiming	VAR_U_(0x104C570B, ushort)
#define TRNGCustWeaponBalestraSizeShell	VAR_U_(0x104C570A, uchar)
#define TRNGCustWeaponBalestraFrameToTakeWeapon	VAR_U_(0x104C570D, uchar)

#define crawljump_pitdepth VAR_U_(0x0084D7F0, short)
#define crawldash_lookahead VAR_U_(0x0084D7F2, short)
#define crawldash_step_up VAR_U_(0x0084D7F4, uchar)
#define crawldash_step_down VAR_U_(0x0084D7F5, uchar)
#define crawlpickup_anim VAR_U_(0x0084D7F6, short)
#define crawlpickup_frame VAR_U_(0x0084D7F8, uchar)
#define crawlpickup_flare_anim VAR_U_(0x0084D7F9, short)
#define crawlpickup_flare_frame VAR_U_(0x0084D7FB, uchar)
#define crawlpickup_torch_anim VAR_U_(0x0084D7FC, short)
#define crawlpickup_torch_frame VAR_U_(0x0084D7FE, uchar)
#define PickUpPosition VAR_U_(0x004ADB20, PHD_VECTOR)
#define lara_coll VAR_U_(0x004AB9B0, COLL_INFO*)
#define lara_as_all4s ( (void(*)(ITEM_INFO*, COLL_INFO*)) 0x00421040 )
#define lara_col_all4s ( (void(*)(ITEM_INFO*, COLL_INFO*)) 0x004210B0 )
#define lara_as_crawl ( (void(*)(ITEM_INFO*, COLL_INFO*)) 0x004214D0 )
#define lara_col_crawl ( (void(*)(ITEM_INFO*, COLL_INFO*)) 0x004215A0 )
#define lara_as_climbstnc ( (void(*)(ITEM_INFO*, COLL_INFO*)) 0x0042C2E0 )
#define lara_col_climbstnc ( (void(*)(ITEM_INFO*, COLL_INFO*)) 0x0042C390 )
#define lara_as_climbing ( (void(*)(ITEM_INFO*, COLL_INFO*)) 0x0042D070 )
#define lara_col_climbing ( (void(*)(ITEM_INFO*, COLL_INFO*)) 0x0042D090 )
#define TestLaraSlide ( (long(*)(ITEM_INFO*, COLL_INFO*)) 0x00420CD0 )
#define LaraFallen ( (long(*)(ITEM_INFO*, COLL_INFO*)) 0x00420E10 )
#define LaraDeflectEdgeDuck ( (long(*)(ITEM_INFO*, COLL_INFO*)) 0x004216B0 )
#define LaraTestClimbPos ( (long(*)(ITEM_INFO*, long, long, long, long, long*)) 0x0042BFF0 )
#define LaraCheckForLetGo ( (long(*)(ITEM_INFO*, COLL_INFO*)) 0x0042C5A0 )
#define LaraFloorFront ( (short(*)(ITEM_INFO*, short, long)) 0x00421450 )
#define LaraCeilingFront ( (short(*)(ITEM_INFO*, short, long, long)) 0x004208B0 )
#define LookUpDown ( (void(*)(void)) 0x004288F0 )
#define AnimateLara ( (void(*)(ITEM_INFO*)) 0x004306D0 )
#define LOS ( (long(*)(GAME_VECTOR*, GAME_VECTOR*)) 0x0044B260 )
#define ObjectOnLOS2 ( (long(*)(GAME_VECTOR*, GAME_VECTOR*, PHD_VECTOR*, MESH_INFO**)) 0x0044C270 )
#define TestLaraPosition ( (long(*)(short*, ITEM_INFO*, ITEM_INFO*)) 0x004476A0 )
#define MoveLaraPosition ( (long(*)(PHD_VECTOR*, ITEM_INFO*, ITEM_INFO*)) 0x00447B50 )
#define GetCollisionInfo ( (void(*)(COLL_INFO*, long, long, long, short, long)) 0x00445920)
#define ShiftItem ( (void(*)(ITEM_INFO*, COLL_INFO*)) 0x00446700)
#define PickupCollision ( (void(*)(short, ITEM_INFO*, COLL_INFO*)) 0x00456B90)

#define framecount	VAR_U_(0x004BF2F8, long)

#define tiltyoff	VAR_U_(0x007FE0F4, long)
#define tiltxoff	VAR_U_(0x007FE0EC, long)

#define GetLaraCollisionInfo ( (void(*)(ITEM_INFO*, COLL_INFO*)) 0x00422180)

#define KillItem	( (void(*)(short)) 0x00453690 )
#define TriggerDynamic	( (void(*)(long, long, long, long, long, long, long)) 0x00435BF0 )

#define UseForcedFixedCamera	VAR_U_(0x007FE7A0, char)
#define ForcedFixedCamera	VAR_U_(0x007FE770, GAME_VECTOR)

#define matrix_stack	ARRAY_(0x00753C70, long, [20 * indices_count])
#define IMptr	VAR_U_(0x007FE004, long*)
#define	IMstack	ARRAY_(0x007FD200, long, [768])
#define IM_rate	VAR_U_(0x007FE000, long)
#define IM_frac	VAR_U_(0x007FDE34, long)
#define LfAspectCorrection	VAR_U_(0x00754030, float)
#define XSoff1	VAR_U_(0x00753BD4, short)
#define XSoff2	VAR_U_(0x00753BD0, short)
#define YSoff1	VAR_U_(0x00753BE4, short)
#define YSoff2	VAR_U_(0x00753BE8, short)
#define	ZSoff1	VAR_U_(0x00753C14, short)
#define ZSoff2	VAR_U_(0x00753C18, short)
#define D3DMView	VAR_U_(0x00753AF8, D3DMATRIX)
#define lara_matrices	ARRAY_(0x0080E600, long, [180])

#define phd_TranslateRel_raw	( (long(*)(long, long, long)) 0x0084DABC )
#define phd_RotX_raw	( (void(*)(short)) 0x0084DAD3 )
#define phd_RotY_raw	( (void(*)(short)) 0x0084DAF2 )
#define phd_RotZ_raw	( (void(*)(short)) 0x0084DB11 )
#define phd_RotYXZpack_raw	( (void(*)(long)) 0x0084DB30 )

#define ExplodingDeath2	( (long(*)(short, long, short)) 0x0043A030 )
#define TriggerUnderwaterExplosion	( (void(*)(ITEM_INFO*, long)) 0x0042B080 )
#define TriggerExplosionSparks	( (void(*)(long, long, long, long, long, long, short)) 0x00434480 )
#define GetFreeSpark	( (long(*)(void)) 0x00433830 )
#define GetJointAbsPosition	( (void(*)(ITEM_INFO*, PHD_VECTOR*, long)) 0x0045F160 )
#define GetWaterHeight	( (long(*)(long, long, long, short)) 0x00449A50 )

#define spark	ARRAY_(VAR_U_(0x0043383F, long), SPARKS, [2048])
#define bones	VAR_U_(0x00533958, long*)

short phd_sin(long angle)
{
	angle >>= 3;
	return 4 * rcossin_tbl[angle & 0x1FFE];
}

short phd_cos(long angle)
{
	angle >>= 3;
	return 4 * rcossin_tbl[(angle & 0x1FFE) + 1];
}

void phd_PopMatrix()
{
	phd_mxptr -= indices_count;
}

const float cossin_tbl[32769] =
{
	0.000000000e+00F, 4.793690096e-05F, 9.587380191e-05F, 1.438106992e-04F, 1.917476038e-04F, 2.396844939e-04F, 2.876213985e-04F, 3.355582885e-04F,
	3.834951785e-04F, 4.314320977e-04F, 4.793689877e-04F, 5.273058778e-04F, 5.752427387e-04F, 6.231796579e-04F, 6.711165188e-04F, 7.190534379e-04F,
	7.669902989e-04F, 8.149272180e-04F, 8.628640790e-04F, 9.108009399e-04F, 9.587378590e-04F, 1.006674720e-03F, 1.054611639e-03F, 1.102548442e-03F,
	1.150485361e-03F, 1.198422164e-03F, 1.246359083e-03F, 1.294295886e-03F, 1.342232805e-03F, 1.390169607e-03F, 1.438106527e-03F, 1.486043329e-03F,
	1.533980132e-03F, 1.581917051e-03F, 1.629853854e-03F, 1.677790657e-03F, 1.725727576e-03F, 1.773664379e-03F, 1.821601181e-03F, 1.869537984e-03F,
	1.917474787e-03F, 1.965411706e-03F, 2.013348509e-03F, 2.061285311e-03F, 2.109222114e-03F, 2.157158917e-03F, 2.205095487e-03F, 2.253032289e-03F,
	2.300969092e-03F, 2.348905895e-03F, 2.396842698e-03F, 2.444779500e-03F, 2.492716303e-03F, 2.540652873e-03F, 2.588589676e-03F, 2.636526478e-03F,
	2.684463048e-03F, 2.732399851e-03F, 2.780336654e-03F, 2.828273224e-03F, 2.876210026e-03F, 2.924146596e-03F, 2.972083399e-03F, 3.020020202e-03F,
	3.067956772e-03F, 3.115893342e-03F, 3.163830144e-03F, 3.211766714e-03F, 3.259703517e-03F, 3.307640087e-03F, 3.355576657e-03F, 3.403513227e-03F,
	3.451450029e-03F, 3.499386599e-03F, 3.547323169e-03F, 3.595259739e-03F, 3.643196309e-03F, 3.691132879e-03F, 3.739069449e-03F, 3.787006019e-03F,
	3.834942589e-03F, 3.882879158e-03F, 3.930815496e-03F, 3.978752065e-03F, 4.026688635e-03F, 4.074625205e-03F, 4.122561775e-03F, 4.170498345e-03F,
	4.218434449e-03F, 4.266371019e-03F, 4.314307589e-03F, 4.362244159e-03F, 4.410180263e-03F, 4.458116833e-03F, 4.506053403e-03F, 4.553989507e-03F,
	4.601926077e-03F, 4.649862647e-03F, 4.697798751e-03F, 4.745735321e-03F, 4.793671425e-03F, 4.841607995e-03F, 4.889544100e-03F, 4.937480669e-03F,
	4.985416774e-03F, 5.033353344e-03F, 5.081289448e-03F, 5.129225552e-03F, 5.177162122e-03F, 5.225098226e-03F, 5.273034330e-03F, 5.320970900e-03F,
	5.368907005e-03F, 5.416843109e-03F, 5.464779213e-03F, 5.512715317e-03F, 5.560651887e-03F, 5.608587991e-03F, 5.656524096e-03F, 5.704460200e-03F,
	5.752396304e-03F, 5.800332408e-03F, 5.848268513e-03F, 5.896204617e-03F, 5.944140721e-03F, 5.992076825e-03F, 6.040012464e-03F, 6.087948568e-03F,
	6.135884672e-03F, 6.183820777e-03F, 6.231756415e-03F, 6.279692519e-03F, 6.327628624e-03F, 6.375564262e-03F, 6.423500367e-03F, 6.471436471e-03F,
	6.519372109e-03F, 6.567308214e-03F, 6.615243852e-03F, 6.663179956e-03F, 6.711115595e-03F, 6.759051234e-03F, 6.806987338e-03F, 6.854922976e-03F,
	6.902858615e-03F, 6.950794253e-03F, 6.998730358e-03F, 7.046665996e-03F, 7.094601635e-03F, 7.142537273e-03F, 7.190472912e-03F, 7.238408551e-03F,
	7.286344189e-03F, 7.334279828e-03F, 7.382215466e-03F, 7.430151105e-03F, 7.478086744e-03F, 7.526022382e-03F, 7.573957555e-03F, 7.621893194e-03F,
	7.669828832e-03F, 7.717764005e-03F, 7.765699644e-03F, 7.813635282e-03F, 7.861570455e-03F, 7.909505628e-03F, 7.957441732e-03F, 8.005376905e-03F,
	8.053312078e-03F, 8.101247251e-03F, 8.149182424e-03F, 8.197117597e-03F, 8.245053701e-03F, 8.292988874e-03F, 8.340924047e-03F, 8.388859220e-03F,
	8.436794393e-03F, 8.484729566e-03F, 8.532664739e-03F, 8.580599912e-03F, 8.628535084e-03F, 8.676470257e-03F, 8.724405430e-03F, 8.772339672e-03F,
	8.820274845e-03F, 8.868210018e-03F, 8.916145191e-03F, 8.964080364e-03F, 9.012015536e-03F, 9.059949778e-03F, 9.107884951e-03F, 9.155820124e-03F,
	9.203754365e-03F, 9.251689538e-03F, 9.299624711e-03F, 9.347558953e-03F, 9.395494126e-03F, 9.443429299e-03F, 9.491363540e-03F, 9.539298713e-03F,
	9.587232955e-03F, 9.635168128e-03F, 9.683102369e-03F, 9.731036611e-03F, 9.778971784e-03F, 9.826906025e-03F, 9.874841198e-03F, 9.922775440e-03F,
	9.970709682e-03F, 1.001864485e-02F, 1.006657910e-02F, 1.011451334e-02F, 1.016244758e-02F, 1.021038182e-02F, 1.025831699e-02F, 1.030625124e-02F,
	1.035418548e-02F, 1.040211972e-02F, 1.045005396e-02F, 1.049798820e-02F, 1.054592244e-02F, 1.059385668e-02F, 1.064179093e-02F, 1.068972517e-02F,
	1.073765941e-02F, 1.078559365e-02F, 1.083352696e-02F, 1.088146120e-02F, 1.092939544e-02F, 1.097732969e-02F, 1.102526393e-02F, 1.107319724e-02F,
	1.112113148e-02F, 1.116906572e-02F, 1.121699903e-02F, 1.126493327e-02F, 1.131286658e-02F, 1.136080083e-02F, 1.140873507e-02F, 1.145666838e-02F,
	1.150460169e-02F, 1.155253593e-02F, 1.160046924e-02F, 1.164840348e-02F, 1.169633679e-02F, 1.174427010e-02F, 1.179220434e-02F, 1.184013765e-02F,
	1.188807096e-02F, 1.193600427e-02F, 1.198393758e-02F, 1.203187183e-02F, 1.207980514e-02F, 1.212773845e-02F, 1.217567176e-02F, 1.222360507e-02F,
	1.227153838e-02F, 1.231947169e-02F, 1.236740500e-02F, 1.241533831e-02F, 1.246327162e-02F, 1.251120400e-02F, 1.255913731e-02F, 1.260707062e-02F,
	1.265500393e-02F, 1.270293631e-02F, 1.275086962e-02F, 1.279880293e-02F, 1.284673531e-02F, 1.289466862e-02F, 1.294260193e-02F, 1.299053431e-02F,
	1.303846762e-02F, 1.308639999e-02F, 1.313433237e-02F, 1.318226568e-02F, 1.323019806e-02F, 1.327813137e-02F, 1.332606375e-02F, 1.337399613e-02F,
	1.342192851e-02F, 1.346986182e-02F, 1.351779420e-02F, 1.356572658e-02F, 1.361365896e-02F, 1.366159134e-02F, 1.370952372e-02F, 1.375745609e-02F,
	1.380538847e-02F, 1.385332085e-02F, 1.390125323e-02F, 1.394918561e-02F, 1.399711799e-02F, 1.404504944e-02F, 1.409298182e-02F, 1.414091419e-02F,
	1.418884657e-02F, 1.423677802e-02F, 1.428471040e-02F, 1.433264185e-02F, 1.438057423e-02F, 1.442850567e-02F, 1.447643805e-02F, 1.452436950e-02F,
	1.457230188e-02F, 1.462023333e-02F, 1.466816571e-02F, 1.471609715e-02F, 1.476402860e-02F, 1.481196005e-02F, 1.485989150e-02F, 1.490782388e-02F,
	1.495575532e-02F, 1.500368677e-02F, 1.505161822e-02F, 1.509954967e-02F, 1.514748111e-02F, 1.519541256e-02F, 1.524334401e-02F, 1.529127546e-02F,
	1.533920597e-02F, 1.538713742e-02F, 1.543506887e-02F, 1.548300032e-02F, 1.553093083e-02F, 1.557886228e-02F, 1.562679373e-02F, 1.567472331e-02F,
	1.572265476e-02F, 1.577058621e-02F, 1.581851766e-02F, 1.586644724e-02F, 1.591437869e-02F, 1.596231014e-02F, 1.601023972e-02F, 1.605817117e-02F,
	1.610610262e-02F, 1.615403220e-02F, 1.620196365e-02F, 1.624989323e-02F, 1.629782468e-02F, 1.634575427e-02F, 1.639368571e-02F, 1.644161530e-02F,
	1.648954675e-02F, 1.653747633e-02F, 1.658540592e-02F, 1.663333736e-02F, 1.668126695e-02F, 1.672919840e-02F, 1.677712798e-02F, 1.682505757e-02F,
	1.687298715e-02F, 1.692091860e-02F, 1.696884818e-02F, 1.701677777e-02F, 1.706470735e-02F, 1.711263694e-02F, 1.716056839e-02F, 1.720849797e-02F,
	1.725642756e-02F, 1.730435714e-02F, 1.735228673e-02F, 1.740021631e-02F, 1.744814590e-02F, 1.749607548e-02F, 1.754400507e-02F, 1.759193465e-02F,
	1.763986424e-02F, 1.768779382e-02F, 1.773572341e-02F, 1.778365299e-02F, 1.783158071e-02F, 1.787951030e-02F, 1.792743988e-02F, 1.797536947e-02F,
	1.802329905e-02F, 1.807122678e-02F, 1.811915636e-02F, 1.816708595e-02F, 1.821501367e-02F, 1.826294325e-02F, 1.831087284e-02F, 1.835880056e-02F,
	1.840673015e-02F, 1.845465787e-02F, 1.850258745e-02F, 1.855051517e-02F, 1.859844476e-02F, 1.864637248e-02F, 1.869430207e-02F, 1.874222979e-02F,
	1.879015937e-02F, 1.883808710e-02F, 1.888601482e-02F, 1.893394440e-02F, 1.898187213e-02F, 1.902979985e-02F, 1.907772943e-02F, 1.912565716e-02F,
	1.917358488e-02F, 1.922151260e-02F, 1.926944032e-02F, 1.931736805e-02F, 1.936529763e-02F, 1.941322535e-02F, 1.946115308e-02F, 1.950908080e-02F,
	1.955700852e-02F, 1.960493624e-02F, 1.965286396e-02F, 1.970079169e-02F, 1.974871941e-02F, 1.979664713e-02F, 1.984457299e-02F, 1.989250071e-02F,
	1.994042844e-02F, 1.998835616e-02F, 2.003628388e-02F, 2.008420974e-02F, 2.013213746e-02F, 2.018006518e-02F, 2.022799104e-02F, 2.027591877e-02F,
	2.032384649e-02F, 2.037177235e-02F, 2.041970007e-02F, 2.046762593e-02F, 2.051555365e-02F, 2.056347951e-02F, 2.061140724e-02F, 2.065933309e-02F,
	2.070726082e-02F, 2.075518668e-02F, 2.080311440e-02F, 2.085104026e-02F, 2.089896612e-02F, 2.094689384e-02F, 2.099481970e-02F, 2.104274556e-02F,
	2.109067142e-02F, 2.113859728e-02F, 2.118652500e-02F, 2.123445086e-02F, 2.128237672e-02F, 2.133030258e-02F, 2.137822844e-02F, 2.142615430e-02F,
	2.147408016e-02F, 2.152200602e-02F, 2.156993188e-02F, 2.161785774e-02F, 2.166578360e-02F, 2.171370946e-02F, 2.176163532e-02F, 2.180955932e-02F,
	2.185748518e-02F, 2.190541103e-02F, 2.195333689e-02F, 2.200126089e-02F, 2.204918675e-02F, 2.209711261e-02F, 2.214503661e-02F, 2.219296247e-02F,
	2.224088833e-02F, 2.228881232e-02F, 2.233673818e-02F, 2.238466218e-02F, 2.243258804e-02F, 2.248051204e-02F, 2.252843603e-02F, 2.257636189e-02F,
	2.262428589e-02F, 2.267220989e-02F, 2.272013575e-02F, 2.276805975e-02F, 2.281598374e-02F, 2.286390774e-02F, 2.291183360e-02F, 2.295975760e-02F,
	2.300768159e-02F, 2.305560559e-02F, 2.310352959e-02F, 2.315145358e-02F, 2.319937758e-02F, 2.324730158e-02F, 2.329522558e-02F, 2.334314957e-02F,
	2.339107357e-02F, 2.343899757e-02F, 2.348692156e-02F, 2.353484370e-02F, 2.358276770e-02F, 2.363069169e-02F, 2.367861569e-02F, 2.372653782e-02F,
	2.377446182e-02F, 2.382238582e-02F, 2.387030795e-02F, 2.391823195e-02F, 2.396615408e-02F, 2.401407808e-02F, 2.406200022e-02F, 2.410992421e-02F,
	2.415784635e-02F, 2.420577034e-02F, 2.425369248e-02F, 2.430161461e-02F, 2.434953861e-02F, 2.439746074e-02F, 2.444538288e-02F, 2.449330688e-02F,
	2.454122901e-02F, 2.458915114e-02F, 2.463707328e-02F, 2.468499541e-02F, 2.473291755e-02F, 2.478083968e-02F, 2.482876182e-02F, 2.487668395e-02F,
	2.492460608e-02F, 2.497252822e-02F, 2.502045035e-02F, 2.506837249e-02F, 2.511629462e-02F, 2.516421489e-02F, 2.521213703e-02F, 2.526005916e-02F,
	2.530798130e-02F, 2.535590157e-02F, 2.540382370e-02F, 2.545174584e-02F, 2.549966611e-02F, 2.554758824e-02F, 2.559550852e-02F, 2.564343065e-02F,
	2.569135092e-02F, 2.573927306e-02F, 2.578719333e-02F, 2.583511360e-02F, 2.588303573e-02F, 2.593095601e-02F, 2.597887628e-02F, 2.602679655e-02F,
	2.607471868e-02F, 2.612263896e-02F, 2.617055923e-02F, 2.621847950e-02F, 2.626639977e-02F, 2.631432004e-02F, 2.636224031e-02F, 2.641016059e-02F,
	2.645808086e-02F, 2.650600113e-02F, 2.655392140e-02F, 2.660184167e-02F, 2.664976008e-02F, 2.669768035e-02F, 2.674560063e-02F, 2.679352090e-02F,
	2.684143931e-02F, 2.688935958e-02F, 2.693727799e-02F, 2.698519826e-02F, 2.703311853e-02F, 2.708103694e-02F, 2.712895721e-02F, 2.717687562e-02F,
	2.722479403e-02F, 2.727271430e-02F, 2.732063271e-02F, 2.736855112e-02F, 2.741647139e-02F, 2.746438980e-02F, 2.751230821e-02F, 2.756022662e-02F,
	2.760814503e-02F, 2.765606530e-02F, 2.770398371e-02F, 2.775190212e-02F, 2.779982053e-02F, 2.784773894e-02F, 2.789565548e-02F, 2.794357389e-02F,
	2.799149230e-02F, 2.803941071e-02F, 2.808732912e-02F, 2.813524753e-02F, 2.818316408e-02F, 2.823108248e-02F, 2.827900089e-02F, 2.832691744e-02F,
	2.837483585e-02F, 2.842275240e-02F, 2.847067080e-02F, 2.851858735e-02F, 2.856650576e-02F, 2.861442231e-02F, 2.866234072e-02F, 2.871025726e-02F,
	2.875817381e-02F, 2.880609222e-02F, 2.885400876e-02F, 2.890192531e-02F, 2.894984186e-02F, 2.899775840e-02F, 2.904567495e-02F, 2.909359150e-02F,
	2.914150804e-02F, 2.918942459e-02F, 2.923734114e-02F, 2.928525768e-02F, 2.933317423e-02F, 2.938109078e-02F, 2.942900732e-02F, 2.947692201e-02F,
	2.952483855e-02F, 2.957275510e-02F, 2.962067164e-02F, 2.966858633e-02F, 2.971650288e-02F, 2.976441756e-02F, 2.981233411e-02F, 2.986024879e-02F,
	2.990816534e-02F, 2.995608002e-02F, 3.000399470e-02F, 3.005191125e-02F, 3.009982593e-02F, 3.014774062e-02F, 3.019565716e-02F, 3.024357185e-02F,
	3.029148653e-02F, 3.033940122e-02F, 3.038731590e-02F, 3.043523058e-02F, 3.048314527e-02F, 3.053105995e-02F, 3.057897463e-02F, 3.062688932e-02F,
	3.067480400e-02F, 3.072271682e-02F, 3.077063151e-02F, 3.081854619e-02F, 3.086646087e-02F, 3.091437370e-02F, 3.096228838e-02F, 3.101020120e-02F,
	3.105811588e-02F, 3.110602871e-02F, 3.115394339e-02F, 3.120185621e-02F, 3.124977089e-02F, 3.129768372e-02F, 3.134559840e-02F, 3.139350936e-02F,
	3.144142404e-02F, 3.148933500e-02F, 3.153724968e-02F, 3.158516437e-02F, 3.163307533e-02F, 3.168099001e-02F, 3.172890097e-02F, 3.177681565e-02F,
	3.182472661e-02F, 3.187263757e-02F, 3.192055225e-02F, 3.196846321e-02F, 3.201637790e-02F, 3.206428885e-02F, 3.211219981e-02F, 3.216011450e-02F,
	3.220802546e-02F, 3.225593641e-02F, 3.230385110e-02F, 3.235176206e-02F, 3.239967301e-02F, 3.244758397e-02F, 3.249549493e-02F, 3.254340962e-02F,
	3.259132057e-02F, 3.263923153e-02F, 3.268714249e-02F, 3.273505345e-02F, 3.278296441e-02F, 3.283087537e-02F, 3.287878633e-02F, 3.292669728e-02F,
	3.297460824e-02F, 3.302251920e-02F, 3.307043016e-02F, 3.311834112e-02F, 3.316625208e-02F, 3.321416304e-02F, 3.326207027e-02F, 3.330998123e-02F,
	3.335789219e-02F, 3.340580314e-02F, 3.345371410e-02F, 3.350162134e-02F, 3.354953229e-02F, 3.359744325e-02F, 3.364535421e-02F, 3.369326144e-02F,
	3.374117240e-02F, 3.378907964e-02F, 3.383699059e-02F, 3.388490155e-02F, 3.393280879e-02F, 3.398071975e-02F, 3.402862698e-02F, 3.407653794e-02F,
	3.412444517e-02F, 3.417235613e-02F, 3.422026336e-02F, 3.426817432e-02F, 3.431608155e-02F, 3.436398879e-02F, 3.441189975e-02F, 3.445980698e-02F,
	3.450771421e-02F, 3.455562517e-02F, 3.460353240e-02F, 3.465143964e-02F, 3.469934687e-02F, 3.474725783e-02F, 3.479516506e-02F, 3.484307230e-02F,
	3.489097953e-02F, 3.493888676e-02F, 3.498679399e-02F, 3.503470123e-02F, 3.508260846e-02F, 3.513051569e-02F, 3.517842293e-02F, 3.522633016e-02F,
	3.527423739e-02F, 3.532214463e-02F, 3.537005186e-02F, 3.541795909e-02F, 3.546586633e-02F, 3.551377356e-02F, 3.556168079e-02F, 3.560958803e-02F,
	3.565749153e-02F, 3.570539877e-02F, 3.575330600e-02F, 3.580121323e-02F, 3.584911674e-02F, 3.589702398e-02F, 3.594493121e-02F, 3.599283472e-02F,
	3.604074195e-02F, 3.608864546e-02F, 3.613655269e-02F, 3.618445992e-02F, 3.623236343e-02F, 3.628027067e-02F, 3.632817417e-02F, 3.637608141e-02F,
	3.642398492e-02F, 3.647188842e-02F, 3.651979566e-02F, 3.656769916e-02F, 3.661560640e-02F, 3.666350991e-02F, 3.671141341e-02F, 3.675931692e-02F,
	3.680722415e-02F, 3.685512766e-02F, 3.690303117e-02F, 3.695093468e-02F, 3.699883819e-02F, 3.704674542e-02F, 3.709464893e-02F, 3.714255244e-02F,
	3.719045594e-02F, 3.723835945e-02F, 3.728626296e-02F, 3.733416647e-02F, 3.738206998e-02F, 3.742997348e-02F, 3.747787699e-02F, 3.752578050e-02F,
	3.757368401e-02F, 3.762158751e-02F, 3.766948730e-02F, 3.771739081e-02F, 3.776529431e-02F, 3.781319782e-02F, 3.786109760e-02F, 3.790900111e-02F,
	3.795690462e-02F, 3.800480813e-02F, 3.805270791e-02F, 3.810061142e-02F, 3.814851120e-02F, 3.819641471e-02F, 3.824431822e-02F, 3.829221800e-02F,
	3.834012151e-02F, 3.838802129e-02F, 3.843592480e-02F, 3.848382458e-02F, 3.853172809e-02F, 3.857962787e-02F, 3.862752765e-02F, 3.867543116e-02F,
	3.872333094e-02F, 3.877123073e-02F, 3.881913424e-02F, 3.886703402e-02F, 3.891493380e-02F, 3.896283358e-02F, 3.901073337e-02F, 3.905863687e-02F,
	3.910653666e-02F, 3.915443644e-02F, 3.920233622e-02F, 3.925023600e-02F, 3.929813579e-02F, 3.934603557e-02F, 3.939393535e-02F, 3.944183514e-02F,
	3.948973492e-02F, 3.953763470e-02F, 3.958553448e-02F, 3.963343427e-02F, 3.968133032e-02F, 3.972923011e-02F, 3.977712989e-02F, 3.982502967e-02F,
	3.987292573e-02F, 3.992082551e-02F, 3.996872529e-02F, 4.001662508e-02F, 4.006452113e-02F, 4.011242092e-02F, 4.016031697e-02F, 4.020821676e-02F,
	4.025611654e-02F, 4.030401260e-02F, 4.035191238e-02F, 4.039980844e-02F, 4.044770449e-02F, 4.049560428e-02F, 4.054350033e-02F, 4.059140012e-02F,
	4.063929617e-02F, 4.068719223e-02F, 4.073509201e-02F, 4.078298807e-02F, 4.083088413e-02F, 4.087878019e-02F, 4.092667997e-02F, 4.097457603e-02F,
	4.102247208e-02F, 4.107036814e-02F, 4.111826420e-02F, 4.116616026e-02F, 4.121405631e-02F, 4.126195237e-02F, 4.130984843e-02F, 4.135774449e-02F,
	4.140564054e-02F, 4.145353660e-02F, 4.150143266e-02F, 4.154932871e-02F, 4.159722477e-02F, 4.164511710e-02F, 4.169301316e-02F, 4.174090922e-02F,
	4.178880528e-02F, 4.183669761e-02F, 4.188459367e-02F, 4.193248972e-02F, 4.198038206e-02F, 4.202827811e-02F, 4.207617417e-02F, 4.212406650e-02F,
	4.217196256e-02F, 4.221985489e-02F, 4.226775095e-02F, 4.231564328e-02F, 4.236353934e-02F, 4.241143167e-02F, 4.245932400e-02F, 4.250722006e-02F,
	4.255511239e-02F, 4.260300472e-02F, 4.265090078e-02F, 4.269879311e-02F, 4.274668545e-02F, 4.279457778e-02F, 4.284247011e-02F, 4.289036244e-02F,
	4.293825850e-02F, 4.298615083e-02F, 4.303404316e-02F, 4.308193550e-02F, 4.312982783e-02F, 4.317772016e-02F, 4.322561249e-02F, 4.327350482e-02F,
	4.332139343e-02F, 4.336928576e-02F, 4.341717809e-02F, 4.346507043e-02F, 4.351296276e-02F, 4.356085509e-02F, 4.360874370e-02F, 4.365663603e-02F,
	4.370452836e-02F, 4.375241697e-02F, 4.380030930e-02F, 4.384820163e-02F, 4.389609024e-02F, 4.394398257e-02F, 4.399187118e-02F, 4.403976351e-02F,
	4.408765212e-02F, 4.413554445e-02F, 4.418343306e-02F, 4.423132166e-02F, 4.427921399e-02F, 4.432710260e-02F, 4.437499121e-02F, 4.442288354e-02F,
	4.447077215e-02F, 4.451866075e-02F, 4.456654936e-02F, 4.461443797e-02F, 4.466233030e-02F, 4.471021891e-02F, 4.475810751e-02F, 4.480599612e-02F,
	4.485388473e-02F, 4.490177333e-02F, 4.494966194e-02F, 4.499755055e-02F, 4.504543915e-02F, 4.509332776e-02F, 4.514121264e-02F, 4.518910125e-02F,
	4.523698986e-02F, 4.528487846e-02F, 4.533276707e-02F, 4.538065195e-02F, 4.542854056e-02F, 4.547642916e-02F, 4.552431405e-02F, 4.557220265e-02F,
	4.562009126e-02F, 4.566797614e-02F, 4.571586475e-02F, 4.576374963e-02F, 4.581163824e-02F, 4.585952312e-02F, 4.590740800e-02F, 4.595529661e-02F,
	4.600318149e-02F, 4.605106637e-02F, 4.609895498e-02F, 4.614683986e-02F, 4.619472474e-02F, 4.624261335e-02F, 4.629049823e-02F, 4.633838311e-02F,
	4.638626799e-02F, 4.643415287e-02F, 4.648203775e-02F, 4.652992263e-02F, 4.657780752e-02F, 4.662569240e-02F, 4.667357728e-02F, 4.672146216e-02F,
	4.676934704e-02F, 4.681723192e-02F, 4.686511680e-02F, 4.691299796e-02F, 4.696088284e-02F, 4.700876772e-02F, 4.705665261e-02F, 4.710453376e-02F,
	4.715241864e-02F, 4.720030352e-02F, 4.724818468e-02F, 4.729606956e-02F, 4.734395072e-02F, 4.739183560e-02F, 4.743971676e-02F, 4.748760164e-02F,
	4.753548279e-02F, 4.758336768e-02F, 4.763124883e-02F, 4.767912999e-02F, 4.772701487e-02F, 4.777489603e-02F, 4.782277718e-02F, 4.787066206e-02F,
	4.791854322e-02F, 4.796642438e-02F, 4.801430553e-02F, 4.806218669e-02F, 4.811006784e-02F, 4.815794900e-02F, 4.820583016e-02F, 4.825371131e-02F,
	4.830159247e-02F, 4.834947363e-02F, 4.839735478e-02F, 4.844523594e-02F, 4.849311709e-02F, 4.854099825e-02F, 4.858887568e-02F, 4.863675684e-02F,
	4.868463799e-02F, 4.873251915e-02F, 4.878039658e-02F, 4.882827774e-02F, 4.887615517e-02F, 4.892403632e-02F, 4.897191748e-02F, 4.901979491e-02F,
	4.906767607e-02F, 4.911555350e-02F, 4.916343093e-02F, 4.921131209e-02F, 4.925918952e-02F, 4.930706695e-02F, 4.935494810e-02F, 4.940282553e-02F,
	4.945070297e-02F, 4.949858040e-02F, 4.954646155e-02F, 4.959433898e-02F, 4.964221641e-02F, 4.969009385e-02F, 4.973797128e-02F, 4.978584871e-02F,
	4.983372614e-02F, 4.988160357e-02F, 4.992948100e-02F, 4.997735843e-02F, 5.002523586e-02F, 5.007311329e-02F, 5.012098700e-02F, 5.016886443e-02F,
	5.021674186e-02F, 5.026461929e-02F, 5.031249300e-02F, 5.036037043e-02F, 5.040824786e-02F, 5.045612156e-02F, 5.050399899e-02F, 5.055187270e-02F,
	5.059975013e-02F, 5.064762384e-02F, 5.069550127e-02F, 5.074337497e-02F, 5.079124868e-02F, 5.083912611e-02F, 5.088699982e-02F, 5.093487352e-02F,
	5.098275095e-02F, 5.103062466e-02F, 5.107849836e-02F, 5.112637207e-02F, 5.117424577e-02F, 5.122211948e-02F, 5.126999319e-02F, 5.131786689e-02F,
	5.136574060e-02F, 5.141361430e-02F, 5.146148801e-02F, 5.150936171e-02F, 5.155723542e-02F, 5.160510913e-02F, 5.165298283e-02F, 5.170085281e-02F,
	5.174872652e-02F, 5.179660022e-02F, 5.184447393e-02F, 5.189234391e-02F, 5.194021761e-02F, 5.198808759e-02F, 5.203596130e-02F, 5.208383128e-02F,
	5.213170499e-02F, 5.217957497e-02F, 5.222744867e-02F, 5.227531865e-02F, 5.232319236e-02F, 5.237106234e-02F, 5.241893232e-02F, 5.246680230e-02F,
	5.251467600e-02F, 5.256254598e-02F, 5.261041597e-02F, 5.265828595e-02F, 5.270615593e-02F, 5.275402591e-02F, 5.280189589e-02F, 5.284976587e-02F,
	5.289763585e-02F, 5.294550583e-02F, 5.299337581e-02F, 5.304124579e-02F, 5.308911577e-02F, 5.313698575e-02F, 5.318485200e-02F, 5.323272198e-02F,
	5.328059196e-02F, 5.332845822e-02F, 5.337632820e-02F, 5.342419818e-02F, 5.347206444e-02F, 5.351993442e-02F, 5.356780067e-02F, 5.361567065e-02F,
	5.366353691e-02F, 5.371140689e-02F, 5.375927314e-02F, 5.380713940e-02F, 5.385500938e-02F, 5.390287563e-02F, 5.395074189e-02F, 5.399860814e-02F,
	5.404647812e-02F, 5.409434438e-02F, 5.414221063e-02F, 5.419007689e-02F, 5.423794314e-02F, 5.428580940e-02F, 5.433367565e-02F, 5.438154191e-02F,
	5.442940816e-02F, 5.447727442e-02F, 5.452513695e-02F, 5.457300320e-02F, 5.462086946e-02F, 5.466873571e-02F, 5.471659824e-02F, 5.476446450e-02F,
	5.481233075e-02F, 5.486019328e-02F, 5.490805954e-02F, 5.495592207e-02F, 5.500378832e-02F, 5.505165085e-02F, 5.509951711e-02F, 5.514737964e-02F,
	5.519524589e-02F, 5.524310842e-02F, 5.529097095e-02F, 5.533883348e-02F, 5.538669974e-02F, 5.543456227e-02F, 5.548242480e-02F, 5.553028733e-02F,
	5.557814986e-02F, 5.562601238e-02F, 5.567387491e-02F, 5.572173744e-02F, 5.576959997e-02F, 5.581746250e-02F, 5.586532503e-02F, 5.591318756e-02F,
	5.596105009e-02F, 5.600891262e-02F, 5.605677143e-02F, 5.610463396e-02F, 5.615249649e-02F, 5.620035529e-02F, 5.624821782e-02F, 5.629608035e-02F,
	5.634393916e-02F, 5.639180169e-02F, 5.643966049e-02F, 5.648751929e-02F, 5.653538182e-02F, 5.658324063e-02F, 5.663110316e-02F, 5.667896196e-02F,
	5.672682077e-02F, 5.677467957e-02F, 5.682254210e-02F, 5.687040091e-02F, 5.691825971e-02F, 5.696611851e-02F, 5.701397732e-02F, 5.706183612e-02F,
	5.710969493e-02F, 5.715755373e-02F, 5.720541254e-02F, 5.725327134e-02F, 5.730112642e-02F, 5.734898522e-02F, 5.739684403e-02F, 5.744470283e-02F,
	5.749255791e-02F, 5.754041672e-02F, 5.758827552e-02F, 5.763613060e-02F, 5.768398941e-02F, 5.773184448e-02F, 5.777970329e-02F, 5.782755837e-02F,
	5.787541717e-02F, 5.792327225e-02F, 5.797113106e-02F, 5.801898614e-02F, 5.806684121e-02F, 5.811469629e-02F, 5.816255510e-02F, 5.821041018e-02F,
	5.825826526e-02F, 5.830612034e-02F, 5.835397542e-02F, 5.840183049e-02F, 5.844968557e-02F, 5.849754065e-02F, 5.854539573e-02F, 5.859325081e-02F,
	5.864110589e-02F, 5.868895724e-02F, 5.873681232e-02F, 5.878466740e-02F, 5.883251876e-02F, 5.888037384e-02F, 5.892822891e-02F, 5.897608027e-02F,
	5.902393535e-02F, 5.907178670e-02F, 5.911964178e-02F, 5.916749313e-02F, 5.921534821e-02F, 5.926319957e-02F, 5.931105092e-02F, 5.935890600e-02F,
	5.940675735e-02F, 5.945460871e-02F, 5.950246006e-02F, 5.955031514e-02F, 5.959816650e-02F, 5.964601785e-02F, 5.969386920e-02F, 5.974172056e-02F,
	5.978957191e-02F, 5.983742326e-02F, 5.988527089e-02F, 5.993312225e-02F, 5.998097360e-02F, 6.002882496e-02F, 6.007667631e-02F, 6.012452394e-02F,
	6.017237529e-02F, 6.022022665e-02F, 6.026807427e-02F, 6.031592563e-02F, 6.036377326e-02F, 6.041162461e-02F, 6.045947224e-02F, 6.050732359e-02F,
	6.055517122e-02F, 6.060301885e-02F, 6.065087020e-02F, 6.069871783e-02F, 6.074656546e-02F, 6.079441309e-02F, 6.084226072e-02F, 6.089011207e-02F,
	6.093795970e-02F, 6.098580733e-02F, 6.103365496e-02F, 6.108150259e-02F, 6.112935022e-02F, 6.117719412e-02F, 6.122504175e-02F, 6.127288938e-02F,
	6.132073700e-02F, 6.136858463e-02F, 6.141642854e-02F, 6.146427616e-02F, 6.151212007e-02F, 6.155996770e-02F, 6.160781533e-02F, 6.165565923e-02F,
	6.170350686e-02F, 6.175135076e-02F, 6.179919466e-02F, 6.184704229e-02F, 6.189488620e-02F, 6.194273010e-02F, 6.199057773e-02F, 6.203842163e-02F,
	6.208626553e-02F, 6.213410944e-02F, 6.218195334e-02F, 6.222979724e-02F, 6.227764115e-02F, 6.232548505e-02F, 6.237332895e-02F, 6.242117286e-02F,
	6.246901676e-02F, 6.251686066e-02F, 6.256470084e-02F, 6.261254847e-02F, 6.266038865e-02F, 6.270822883e-02F, 6.275607646e-02F, 6.280391663e-02F,
	6.285175681e-02F, 6.289959699e-02F, 6.294744462e-02F, 6.299528480e-02F, 6.304312497e-02F, 6.309096515e-02F, 6.313880533e-02F, 6.318664551e-02F,
	6.323449314e-02F, 6.328233331e-02F, 6.333017349e-02F, 6.337801367e-02F, 6.342585385e-02F, 6.347369403e-02F, 6.352153420e-02F, 6.356937438e-02F,
	6.361721456e-02F, 6.366505474e-02F, 6.371289492e-02F, 6.376073509e-02F, 6.380856782e-02F, 6.385640800e-02F, 6.390424818e-02F, 6.395208836e-02F,
	6.399992853e-02F, 6.404776871e-02F, 6.409560144e-02F, 6.414344162e-02F, 6.419128180e-02F, 6.423911452e-02F, 6.428695470e-02F, 6.433479488e-02F,
	6.438262761e-02F, 6.443046778e-02F, 6.447830796e-02F, 6.452614069e-02F, 6.457398087e-02F, 6.462181360e-02F, 6.466965377e-02F, 6.471748650e-02F,
	6.476532668e-02F, 6.481315941e-02F, 6.486099958e-02F, 6.490883231e-02F, 6.495667249e-02F, 6.500450522e-02F, 6.505233794e-02F, 6.510017812e-02F,
	6.514801085e-02F, 6.519584358e-02F, 6.524368376e-02F, 6.529151648e-02F, 6.533934921e-02F, 6.538718194e-02F, 6.543502212e-02F, 6.548285484e-02F,
	6.553068757e-02F, 6.557852030e-02F, 6.562635303e-02F, 6.567418575e-02F, 6.572201848e-02F, 6.576985121e-02F, 6.581768394e-02F, 6.586551666e-02F,
	6.591334939e-02F, 6.596118212e-02F, 6.600901484e-02F, 6.605684757e-02F, 6.610468030e-02F, 6.615251303e-02F, 6.620034575e-02F, 6.624817848e-02F,
	6.629601121e-02F, 6.634384394e-02F, 6.639166921e-02F, 6.643950194e-02F, 6.648733467e-02F, 6.653516740e-02F, 6.658299267e-02F, 6.663082540e-02F,
	6.667865813e-02F, 6.672648340e-02F, 6.677431613e-02F, 6.682214886e-02F, 6.686997414e-02F, 6.691780686e-02F, 6.696563214e-02F, 6.701346487e-02F,
	6.706129014e-02F, 6.710912287e-02F, 6.715694815e-02F, 6.720478088e-02F, 6.725260615e-02F, 6.730043888e-02F, 6.734826416e-02F, 6.739608943e-02F,
	6.744392216e-02F, 6.749174744e-02F, 6.753957272e-02F, 6.758740544e-02F, 6.763523072e-02F, 6.768305600e-02F, 6.773088127e-02F, 6.777870655e-02F,
	6.782653928e-02F, 6.787436455e-02F, 6.792218983e-02F, 6.797001511e-02F, 6.801784039e-02F, 6.806566566e-02F, 6.811349094e-02F, 6.816131622e-02F,
	6.820914149e-02F, 6.825696677e-02F, 6.830479205e-02F, 6.835261732e-02F, 6.840044260e-02F, 6.844826788e-02F, 6.849609315e-02F, 6.854391843e-02F,
	6.859174371e-02F, 6.863956153e-02F, 6.868738681e-02F, 6.873521209e-02F, 6.878303736e-02F, 6.883085519e-02F, 6.887868047e-02F, 6.892650574e-02F,
	6.897433102e-02F, 6.902214885e-02F, 6.906997412e-02F, 6.911779195e-02F, 6.916561723e-02F, 6.921344250e-02F, 6.926126033e-02F, 6.930908561e-02F,
	6.935690343e-02F, 6.940472871e-02F, 6.945254654e-02F, 6.950037181e-02F, 6.954818964e-02F, 6.959600747e-02F, 6.964383274e-02F, 6.969165057e-02F,
	6.973946840e-02F, 6.978729367e-02F, 6.983511150e-02F, 6.988292933e-02F, 6.993074715e-02F, 6.997857243e-02F, 7.002639025e-02F, 7.007420808e-02F,
	7.012202591e-02F, 7.016984373e-02F, 7.021766156e-02F, 7.026548684e-02F, 7.031330466e-02F, 7.036112249e-02F, 7.040894032e-02F, 7.045675814e-02F,
	7.050457597e-02F, 7.055239379e-02F, 7.060021162e-02F, 7.064802200e-02F, 7.069583982e-02F, 7.074365765e-02F, 7.079147547e-02F, 7.083929330e-02F,
	7.088711113e-02F, 7.093492895e-02F, 7.098273933e-02F, 7.103055716e-02F, 7.107837498e-02F, 7.112618536e-02F, 7.117400318e-02F, 7.122182101e-02F,
	7.126963139e-02F, 7.131744921e-02F, 7.136526704e-02F, 7.141307741e-02F, 7.146089524e-02F, 7.150870562e-02F, 7.155652344e-02F, 7.160433382e-02F,
	7.165215164e-02F, 7.169996202e-02F, 7.174777240e-02F, 7.179559022e-02F, 7.184340060e-02F, 7.189121842e-02F, 7.193902880e-02F, 7.198683918e-02F,
	7.203464955e-02F, 7.208246738e-02F, 7.213027775e-02F, 7.217808813e-02F, 7.222589850e-02F, 7.227371633e-02F, 7.232152671e-02F, 7.236933708e-02F,
	7.241714746e-02F, 7.246495783e-02F, 7.251276821e-02F, 7.256057858e-02F, 7.260838896e-02F, 7.265619934e-02F, 7.270400971e-02F, 7.275182009e-02F,
	7.279963046e-02F, 7.284744084e-02F, 7.289525121e-02F, 7.294306159e-02F, 7.299086452e-02F, 7.303867489e-02F, 7.308648527e-02F, 7.313429564e-02F,
	7.318209857e-02F, 7.322990894e-02F, 7.327771932e-02F, 7.332552969e-02F, 7.337333262e-02F, 7.342114300e-02F, 7.346894592e-02F, 7.351675630e-02F,
	7.356456667e-02F, 7.361236960e-02F, 7.366017997e-02F, 7.370798290e-02F, 7.375579327e-02F, 7.380359620e-02F, 7.385139912e-02F, 7.389920950e-02F,
	7.394701242e-02F, 7.399482280e-02F, 7.404262573e-02F, 7.409042865e-02F, 7.413823903e-02F, 7.418604195e-02F, 7.423384488e-02F, 7.428164780e-02F,
	7.432945073e-02F, 7.437726110e-02F, 7.442506403e-02F, 7.447286695e-02F, 7.452066988e-02F, 7.456847280e-02F, 7.461627573e-02F, 7.466407865e-02F,
	7.471188158e-02F, 7.475968450e-02F, 7.480748743e-02F, 7.485529035e-02F, 7.490309328e-02F, 7.495089620e-02F, 7.499869913e-02F, 7.504650205e-02F,
	7.509429753e-02F, 7.514210045e-02F, 7.518990338e-02F, 7.523770630e-02F, 7.528550923e-02F, 7.533330470e-02F, 7.538110763e-02F, 7.542891055e-02F,
	7.547670603e-02F, 7.552450895e-02F, 7.557230443e-02F, 7.562010735e-02F, 7.566791028e-02F, 7.571570575e-02F, 7.576350868e-02F, 7.581130415e-02F,
	7.585910708e-02F, 7.590690255e-02F, 7.595469803e-02F, 7.600250095e-02F, 7.605029643e-02F, 7.609809190e-02F, 7.614589483e-02F, 7.619369030e-02F,
	7.624148577e-02F, 7.628928870e-02F, 7.633708417e-02F, 7.638487965e-02F, 7.643267512e-02F, 7.648047060e-02F, 7.652826607e-02F, 7.657606900e-02F,
	7.662386447e-02F, 7.667165995e-02F, 7.671945542e-02F, 7.676725090e-02F, 7.681504637e-02F, 7.686284184e-02F, 7.691063732e-02F, 7.695842534e-02F,
	7.700622082e-02F, 7.705401629e-02F, 7.710181177e-02F, 7.714960724e-02F, 7.719740272e-02F, 7.724519074e-02F, 7.729298621e-02F, 7.734078169e-02F,
	7.738857716e-02F, 7.743636519e-02F, 7.748416066e-02F, 7.753195614e-02F, 7.757974416e-02F, 7.762753963e-02F, 7.767532766e-02F, 7.772312313e-02F,
	7.777091116e-02F, 7.781870663e-02F, 7.786649466e-02F, 7.791429013e-02F, 7.796207815e-02F, 7.800987363e-02F, 7.805766165e-02F, 7.810544968e-02F,
	7.815324515e-02F, 7.820103317e-02F, 7.824882120e-02F, 7.829660922e-02F, 7.834440470e-02F, 7.839219272e-02F, 7.843998075e-02F, 7.848776877e-02F,
	7.853555679e-02F, 7.858334482e-02F, 7.863113284e-02F, 7.867892087e-02F, 7.872670889e-02F, 7.877449691e-02F, 7.882228494e-02F, 7.887007296e-02F,
	7.891786098e-02F, 7.896564901e-02F, 7.901343703e-02F, 7.906122506e-02F, 7.910901308e-02F, 7.915680110e-02F, 7.920458168e-02F, 7.925236970e-02F,
	7.930015773e-02F, 7.934794575e-02F, 7.939572632e-02F, 7.944351435e-02F, 7.949129492e-02F, 7.953908294e-02F, 7.958687097e-02F, 7.963465154e-02F,
	7.968243957e-02F, 7.973022014e-02F, 7.977800816e-02F, 7.982578874e-02F, 7.987357676e-02F, 7.992135733e-02F, 7.996913791e-02F, 8.001692593e-02F,
	8.006470650e-02F, 8.011249453e-02F, 8.016027510e-02F, 8.020805568e-02F, 8.025583625e-02F, 8.030362427e-02F, 8.035140485e-02F, 8.039918542e-02F,
	8.044696599e-02F, 8.049474657e-02F, 8.054252714e-02F, 8.059030771e-02F, 8.063808829e-02F, 8.068586886e-02F, 8.073364943e-02F, 8.078143001e-02F,
	8.082921058e-02F, 8.087699115e-02F, 8.092477173e-02F, 8.097255230e-02F, 8.102033287e-02F, 8.106811345e-02F, 8.111588657e-02F, 8.116366714e-02F,
	8.121144772e-02F, 8.125922829e-02F, 8.130700141e-02F, 8.135478199e-02F, 8.140256256e-02F, 8.145033568e-02F, 8.149811625e-02F, 8.154588938e-02F,
	8.159366995e-02F, 8.164144307e-02F, 8.168922365e-02F, 8.173699677e-02F, 8.178477734e-02F, 8.183255047e-02F, 8.188033104e-02F, 8.192810416e-02F,
	8.197587729e-02F, 8.202365786e-02F, 8.207143098e-02F, 8.211920410e-02F, 8.216697723e-02F, 8.221475780e-02F, 8.226253092e-02F, 8.231030405e-02F,
	8.235807717e-02F, 8.240585029e-02F, 8.245362341e-02F, 8.250139654e-02F, 8.254916966e-02F, 8.259694278e-02F, 8.264471591e-02F, 8.269248903e-02F,
	8.274026215e-02F, 8.278803527e-02F, 8.283580840e-02F, 8.288358152e-02F, 8.293135464e-02F, 8.297912776e-02F, 8.302689344e-02F, 8.307466656e-02F,
	8.312243968e-02F, 8.317021281e-02F, 8.321797848e-02F, 8.326575160e-02F, 8.331352472e-02F, 8.336129040e-02F, 8.340906352e-02F, 8.345682919e-02F,
	8.350460231e-02F, 8.355236799e-02F, 8.360014111e-02F, 8.364790678e-02F, 8.369567990e-02F, 8.374344558e-02F, 8.379121125e-02F, 8.383898437e-02F,
	8.388675004e-02F, 8.393451571e-02F, 8.398228884e-02F, 8.403005451e-02F, 8.407782018e-02F, 8.412558585e-02F, 8.417335153e-02F, 8.422112465e-02F,
	8.426889032e-02F, 8.431665599e-02F, 8.436442167e-02F, 8.441218734e-02F, 8.445995301e-02F, 8.450771868e-02F, 8.455548435e-02F, 8.460325003e-02F,
	8.465101570e-02F, 8.469877392e-02F, 8.474653959e-02F, 8.479430526e-02F, 8.484207094e-02F, 8.488983661e-02F, 8.493759483e-02F, 8.498536050e-02F,
	8.503312618e-02F, 8.508089185e-02F, 8.512865007e-02F, 8.517641574e-02F, 8.522417396e-02F, 8.527193964e-02F, 8.531969786e-02F, 8.536746353e-02F,
	8.541522175e-02F, 8.546298742e-02F, 8.551074564e-02F, 8.555851132e-02F, 8.560626954e-02F, 8.565402776e-02F, 8.570179343e-02F, 8.574955165e-02F,
	8.579730988e-02F, 8.584507555e-02F, 8.589283377e-02F, 8.594059199e-02F, 8.598835021e-02F, 8.603610843e-02F, 8.608386666e-02F, 8.613162488e-02F,
	8.617939055e-02F, 8.622714877e-02F, 8.627490699e-02F, 8.632266521e-02F, 8.637042344e-02F, 8.641817421e-02F, 8.646593243e-02F, 8.651369065e-02F,
	8.656144887e-02F, 8.660920709e-02F, 8.665696532e-02F, 8.670471609e-02F, 8.675247431e-02F, 8.680023253e-02F, 8.684799075e-02F, 8.689574152e-02F,
	8.694349974e-02F, 8.699125051e-02F, 8.703900874e-02F, 8.708676696e-02F, 8.713451773e-02F, 8.718227595e-02F, 8.723002672e-02F, 8.727778494e-02F,
	8.732553571e-02F, 8.737328649e-02F, 8.742104471e-02F, 8.746879548e-02F, 8.751654625e-02F, 8.756430447e-02F, 8.761205524e-02F, 8.765980601e-02F,
	8.770755678e-02F, 8.775530756e-02F, 8.780306578e-02F, 8.785081655e-02F, 8.789856732e-02F, 8.794631809e-02F, 8.799406886e-02F, 8.804181963e-02F,
	8.808957040e-02F, 8.813732117e-02F, 8.818507195e-02F, 8.823282272e-02F, 8.828057349e-02F, 8.832831681e-02F, 8.837606758e-02F, 8.842381835e-02F,
	8.847156912e-02F, 8.851931989e-02F, 8.856706321e-02F, 8.861481398e-02F, 8.866256475e-02F, 8.871030807e-02F, 8.875805885e-02F, 8.880580217e-02F,
	8.885355294e-02F, 8.890129626e-02F, 8.894904703e-02F, 8.899679035e-02F, 8.904454112e-02F, 8.909228444e-02F, 8.914003521e-02F, 8.918777853e-02F,
	8.923552185e-02F, 8.928327262e-02F, 8.933101594e-02F, 8.937875926e-02F, 8.942650259e-02F, 8.947425336e-02F, 8.952199668e-02F, 8.956974000e-02F,
	8.961748332e-02F, 8.966522664e-02F, 8.971296996e-02F, 8.976071328e-02F, 8.980845660e-02F, 8.985619992e-02F, 8.990394324e-02F, 8.995168656e-02F,
	8.999942988e-02F, 9.004717320e-02F, 9.009491652e-02F, 9.014265239e-02F, 9.019039571e-02F, 9.023813903e-02F, 9.028588235e-02F, 9.033361822e-02F,
	9.038136154e-02F, 9.042910486e-02F, 9.047684073e-02F, 9.052458405e-02F, 9.057231992e-02F, 9.062006325e-02F, 9.066779912e-02F, 9.071554244e-02F,
	9.076327831e-02F, 9.081102163e-02F, 9.085875750e-02F, 9.090649337e-02F, 9.095423669e-02F, 9.100197256e-02F, 9.104970843e-02F, 9.109745175e-02F,
	9.114518762e-02F, 9.119292349e-02F, 9.124065936e-02F, 9.128839523e-02F, 9.133613110e-02F, 9.138386697e-02F, 9.143160284e-02F, 9.147933871e-02F,
	9.152707458e-02F, 9.157481045e-02F, 9.162254632e-02F, 9.167028219e-02F, 9.171801805e-02F, 9.176575392e-02F, 9.181348979e-02F, 9.186122566e-02F,
	9.190895408e-02F, 9.195668995e-02F, 9.200442582e-02F, 9.205215424e-02F, 9.209989011e-02F, 9.214762598e-02F, 9.219535440e-02F, 9.224309027e-02F,
	9.229081869e-02F, 9.233855456e-02F, 9.238628298e-02F, 9.243401885e-02F, 9.248174727e-02F, 9.252948314e-02F, 9.257721156e-02F, 9.262493998e-02F,
	9.267267585e-02F, 9.272040427e-02F, 9.276813269e-02F, 9.281586111e-02F, 9.286359698e-02F, 9.291132540e-02F, 9.295905381e-02F, 9.300678223e-02F,
	9.305451065e-02F, 9.310223907e-02F, 9.314996749e-02F, 9.319769591e-02F, 9.324542433e-02F, 9.329315275e-02F, 9.334088117e-02F, 9.338860959e-02F,
	9.343633801e-02F, 9.348406643e-02F, 9.353178740e-02F, 9.357951581e-02F, 9.362724423e-02F, 9.367497265e-02F, 9.372269362e-02F, 9.377042204e-02F,
	9.381814301e-02F, 9.386587143e-02F, 9.391359985e-02F, 9.396132082e-02F, 9.400904924e-02F, 9.405677021e-02F, 9.410449862e-02F, 9.415221959e-02F,
	9.419994056e-02F, 9.424766898e-02F, 9.429538995e-02F, 9.434311092e-02F, 9.439083934e-02F, 9.443856031e-02F, 9.448628128e-02F, 9.453400224e-02F,
	9.458172321e-02F, 9.462945163e-02F, 9.467717260e-02F, 9.472489357e-02F, 9.477261454e-02F, 9.482033551e-02F, 9.486805648e-02F, 9.491577744e-02F,
	9.496349841e-02F, 9.501121193e-02F, 9.505893290e-02F, 9.510665387e-02F, 9.515437484e-02F, 9.520209581e-02F, 9.524980932e-02F, 9.529753029e-02F,
	9.534525126e-02F, 9.539297223e-02F, 9.544068575e-02F, 9.548840672e-02F, 9.553612024e-02F, 9.558384120e-02F, 9.563155472e-02F, 9.567927569e-02F,
	9.572698921e-02F, 9.577471018e-02F, 9.582242370e-02F, 9.587013721e-02F, 9.591785818e-02F, 9.596557170e-02F, 9.601328522e-02F, 9.606100619e-02F,
	9.610871971e-02F, 9.615643322e-02F, 9.620414674e-02F, 9.625186026e-02F, 9.629957378e-02F, 9.634728730e-02F, 9.639500082e-02F, 9.644271433e-02F,
	9.649042785e-02F, 9.653814137e-02F, 9.658585489e-02F, 9.663356841e-02F, 9.668128192e-02F, 9.672899544e-02F, 9.677670896e-02F, 9.682441503e-02F,
	9.687212855e-02F, 9.691984206e-02F, 9.696755558e-02F, 9.701526165e-02F, 9.706297517e-02F, 9.711068124e-02F, 9.715839475e-02F, 9.720610827e-02F,
	9.725381434e-02F, 9.730152041e-02F, 9.734923393e-02F, 9.739693999e-02F, 9.744465351e-02F, 9.749235958e-02F, 9.754006565e-02F, 9.758777916e-02F,
	9.763548523e-02F, 9.768319130e-02F, 9.773089737e-02F, 9.777861089e-02F, 9.782631695e-02F, 9.787402302e-02F, 9.792172909e-02F, 9.796943516e-02F,
	9.801714122e-02F, 9.806484729e-02F, 9.811255336e-02F, 9.816025943e-02F, 9.820796549e-02F, 9.825567156e-02F, 9.830337018e-02F, 9.835107625e-02F,
	9.839878231e-02F, 9.844648838e-02F, 9.849418700e-02F, 9.854189306e-02F, 9.858959913e-02F, 9.863729775e-02F, 9.868500382e-02F, 9.873270243e-02F,
	9.878040850e-02F, 9.882811457e-02F, 9.887581319e-02F, 9.892351180e-02F, 9.897121787e-02F, 9.901891649e-02F, 9.906662256e-02F, 9.911432117e-02F,
	9.916201979e-02F, 9.920971841e-02F, 9.925742447e-02F, 9.930512309e-02F, 9.935282171e-02F, 9.940052032e-02F, 9.944821894e-02F, 9.949591756e-02F,
	9.954361618e-02F, 9.959131479e-02F, 9.963901341e-02F, 9.968671203e-02F, 9.973441064e-02F, 9.978210926e-02F, 9.982980788e-02F, 9.987750649e-02F,
	9.992520511e-02F, 9.997289628e-02F, 1.000205949e-01F, 1.000682935e-01F, 1.001159847e-01F, 1.001636833e-01F, 1.002113819e-01F, 1.002590731e-01F,
	1.003067717e-01F, 1.003544629e-01F, 1.004021615e-01F, 1.004498526e-01F, 1.004975513e-01F, 1.005452424e-01F, 1.005929336e-01F, 1.006406322e-01F,
	1.006883234e-01F, 1.007360145e-01F, 1.007837132e-01F, 1.008314043e-01F, 1.008790955e-01F, 1.009267867e-01F, 1.009744778e-01F, 1.010221690e-01F,
	1.010698602e-01F, 1.011175513e-01F, 1.011652425e-01F, 1.012129337e-01F, 1.012606248e-01F, 1.013083160e-01F, 1.013560072e-01F, 1.014036983e-01F,
	1.014513895e-01F, 1.014990732e-01F, 1.015467644e-01F, 1.015944555e-01F, 1.016421467e-01F, 1.016898304e-01F, 1.017375216e-01F, 1.017852053e-01F,
	1.018328965e-01F, 1.018805802e-01F, 1.019282714e-01F, 1.019759551e-01F, 1.020236462e-01F, 1.020713300e-01F, 1.021190211e-01F, 1.021667048e-01F,
	1.022143885e-01F, 1.022620723e-01F, 1.023097634e-01F, 1.023574471e-01F, 1.024051309e-01F, 1.024528146e-01F, 1.025004983e-01F, 1.025481820e-01F,
	1.025958657e-01F, 1.026435494e-01F, 1.026912332e-01F, 1.027389169e-01F, 1.027866006e-01F, 1.028342843e-01F, 1.028819680e-01F, 1.029296517e-01F,
	1.029773355e-01F, 1.030250117e-01F, 1.030726954e-01F, 1.031203791e-01F, 1.031680629e-01F, 1.032157391e-01F, 1.032634228e-01F, 1.033110991e-01F,
	1.033587828e-01F, 1.034064591e-01F, 1.034541428e-01F, 1.035018191e-01F, 1.035495028e-01F, 1.035971791e-01F, 1.036448553e-01F, 1.036925390e-01F,
	1.037402153e-01F, 1.037878916e-01F, 1.038355678e-01F, 1.038832515e-01F, 1.039309278e-01F, 1.039786041e-01F, 1.040262803e-01F, 1.040739566e-01F,
	1.041216329e-01F, 1.041693091e-01F, 1.042169854e-01F, 1.042646617e-01F, 1.043123379e-01F, 1.043600142e-01F, 1.044076905e-01F, 1.044553593e-01F,
	1.045030355e-01F, 1.045507118e-01F, 1.045983881e-01F, 1.046460569e-01F, 1.046937332e-01F, 1.047414094e-01F, 1.047890782e-01F, 1.048367545e-01F,
	1.048844233e-01F, 1.049320996e-01F, 1.049797684e-01F, 1.050274447e-01F, 1.050751135e-01F, 1.051227823e-01F, 1.051704586e-01F, 1.052181274e-01F,
	1.052657962e-01F, 1.053134650e-01F, 1.053611413e-01F, 1.054088101e-01F, 1.054564789e-01F, 1.055041477e-01F, 1.055518165e-01F, 1.055994853e-01F,
	1.056471542e-01F, 1.056948230e-01F, 1.057424918e-01F, 1.057901606e-01F, 1.058378294e-01F, 1.058854908e-01F, 1.059331596e-01F, 1.059808284e-01F,
	1.060284972e-01F, 1.060761586e-01F, 1.061238274e-01F, 1.061714962e-01F, 1.062191576e-01F, 1.062668264e-01F, 1.063144878e-01F, 1.063621566e-01F,
	1.064098179e-01F, 1.064574867e-01F, 1.065051481e-01F, 1.065528169e-01F, 1.066004783e-01F, 1.066481397e-01F, 1.066958010e-01F, 1.067434698e-01F,
	1.067911312e-01F, 1.068387926e-01F, 1.068864539e-01F, 1.069341153e-01F, 1.069817767e-01F, 1.070294380e-01F, 1.070770994e-01F, 1.071247607e-01F,
	1.071724221e-01F, 1.072200835e-01F, 1.072677448e-01F, 1.073154062e-01F, 1.073630676e-01F, 1.074107289e-01F, 1.074583828e-01F, 1.075060442e-01F,
	1.075537056e-01F, 1.076013595e-01F, 1.076490209e-01F, 1.076966822e-01F, 1.077443361e-01F, 1.077919975e-01F, 1.078396514e-01F, 1.078873128e-01F,
	1.079349667e-01F, 1.079826206e-01F, 1.080302820e-01F, 1.080779359e-01F, 1.081255898e-01F, 1.081732437e-01F, 1.082209051e-01F, 1.082685590e-01F,
	1.083162129e-01F, 1.083638668e-01F, 1.084115207e-01F, 1.084591746e-01F, 1.085068285e-01F, 1.085544825e-01F, 1.086021364e-01F, 1.086497903e-01F,
	1.086974442e-01F, 1.087450981e-01F, 1.087927520e-01F, 1.088403985e-01F, 1.088880524e-01F, 1.089357063e-01F, 1.089833602e-01F, 1.090310067e-01F,
	1.090786606e-01F, 1.091263071e-01F, 1.091739610e-01F, 1.092216074e-01F, 1.092692614e-01F, 1.093169078e-01F, 1.093645617e-01F, 1.094122082e-01F,
	1.094598547e-01F, 1.095075086e-01F, 1.095551550e-01F, 1.096028015e-01F, 1.096504480e-01F, 1.096981019e-01F, 1.097457483e-01F, 1.097933948e-01F,
	1.098410413e-01F, 1.098886877e-01F, 1.099363342e-01F, 1.099839807e-01F, 1.100316271e-01F, 1.100792736e-01F, 1.101269200e-01F, 1.101745591e-01F,
	1.102222055e-01F, 1.102698520e-01F, 1.103174984e-01F, 1.103651375e-01F, 1.104127839e-01F, 1.104604304e-01F, 1.105080694e-01F, 1.105557159e-01F,
	1.106033549e-01F, 1.106510013e-01F, 1.106986403e-01F, 1.107462868e-01F, 1.107939258e-01F, 1.108415648e-01F, 1.108892113e-01F, 1.109368503e-01F,
	1.109844893e-01F, 1.110321358e-01F, 1.110797748e-01F, 1.111274138e-01F, 1.111750528e-01F, 1.112226918e-01F, 1.112703308e-01F, 1.113179699e-01F,
	1.113656089e-01F, 1.114132479e-01F, 1.114608869e-01F, 1.115085259e-01F, 1.115561649e-01F, 1.116037965e-01F, 1.116514355e-01F, 1.116990745e-01F,
	1.117467135e-01F, 1.117943451e-01F, 1.118419841e-01F, 1.118896231e-01F, 1.119372547e-01F, 1.119848937e-01F, 1.120325252e-01F, 1.120801643e-01F,
	1.121277958e-01F, 1.121754274e-01F, 1.122230664e-01F, 1.122706980e-01F, 1.123183295e-01F, 1.123659685e-01F, 1.124136001e-01F, 1.124612316e-01F,
	1.125088632e-01F, 1.125564948e-01F, 1.126041263e-01F, 1.126517579e-01F, 1.126993895e-01F, 1.127470210e-01F, 1.127946526e-01F, 1.128422841e-01F,
	1.128899157e-01F, 1.129375473e-01F, 1.129851788e-01F, 1.130328104e-01F, 1.130804345e-01F, 1.131280661e-01F, 1.131756976e-01F, 1.132233217e-01F,
	1.132709533e-01F, 1.133185774e-01F, 1.133662090e-01F, 1.134138331e-01F, 1.134614646e-01F, 1.135090888e-01F, 1.135567203e-01F, 1.136043444e-01F,
	1.136519685e-01F, 1.136996001e-01F, 1.137472242e-01F, 1.137948483e-01F, 1.138424724e-01F, 1.138900965e-01F, 1.139377207e-01F, 1.139853522e-01F,
	1.140329763e-01F, 1.140806004e-01F, 1.141282171e-01F, 1.141758412e-01F, 1.142234653e-01F, 1.142710894e-01F, 1.143187135e-01F, 1.143663377e-01F,
	1.144139618e-01F, 1.144615784e-01F, 1.145092025e-01F, 1.145568267e-01F, 1.146044433e-01F, 1.146520674e-01F, 1.146996841e-01F, 1.147473082e-01F,
	1.147949249e-01F, 1.148425490e-01F, 1.148901656e-01F, 1.149377823e-01F, 1.149854064e-01F, 1.150330231e-01F, 1.150806397e-01F, 1.151282638e-01F,
	1.151758805e-01F, 1.152234972e-01F, 1.152711138e-01F, 1.153187305e-01F, 1.153663471e-01F, 1.154139638e-01F, 1.154615805e-01F, 1.155091971e-01F,
	1.155568138e-01F, 1.156044304e-01F, 1.156520471e-01F, 1.156996563e-01F, 1.157472730e-01F, 1.157948896e-01F, 1.158424988e-01F, 1.158901155e-01F,
	1.159377322e-01F, 1.159853414e-01F, 1.160329580e-01F, 1.160805672e-01F, 1.161281839e-01F, 1.161757931e-01F, 1.162234098e-01F, 1.162710190e-01F,
	1.163186282e-01F, 1.163662449e-01F, 1.164138541e-01F, 1.164614633e-01F, 1.165090725e-01F, 1.165566817e-01F, 1.166042984e-01F, 1.166519076e-01F,
	1.166995168e-01F, 1.167471260e-01F, 1.167947352e-01F, 1.168423444e-01F, 1.168899462e-01F, 1.169375554e-01F, 1.169851646e-01F, 1.170327738e-01F,
	1.170803830e-01F, 1.171279848e-01F, 1.171755940e-01F, 1.172232032e-01F, 1.172708049e-01F, 1.173184142e-01F, 1.173660159e-01F, 1.174136251e-01F,
	1.174612269e-01F, 1.175088361e-01F, 1.175564378e-01F, 1.176040471e-01F, 1.176516488e-01F, 1.176992506e-01F, 1.177468523e-01F, 1.177944615e-01F,
	1.178420633e-01F, 1.178896651e-01F, 1.179372668e-01F, 1.179848686e-01F, 1.180324703e-01F, 1.180800721e-01F, 1.181276739e-01F, 1.181752756e-01F,
	1.182228774e-01F, 1.182704791e-01F, 1.183180735e-01F, 1.183656752e-01F, 1.184132770e-01F, 1.184608787e-01F, 1.185084730e-01F, 1.185560748e-01F,
	1.186036766e-01F, 1.186512709e-01F, 1.186988726e-01F, 1.187464669e-01F, 1.187940687e-01F, 1.188416630e-01F, 1.188892573e-01F, 1.189368591e-01F,
	1.189844534e-01F, 1.190320477e-01F, 1.190796420e-01F, 1.191272438e-01F, 1.191748381e-01F, 1.192224324e-01F, 1.192700267e-01F, 1.193176210e-01F,
	1.193652153e-01F, 1.194128096e-01F, 1.194604039e-01F, 1.195079982e-01F, 1.195555925e-01F, 1.196031794e-01F, 1.196507737e-01F, 1.196983680e-01F,
	1.197459623e-01F, 1.197935492e-01F, 1.198411435e-01F, 1.198887303e-01F, 1.199363247e-01F, 1.199839190e-01F, 1.200315058e-01F, 1.200791001e-01F,
	1.201266870e-01F, 1.201742738e-01F, 1.202218682e-01F, 1.202694550e-01F, 1.203170419e-01F, 1.203646287e-01F, 1.204122230e-01F, 1.204598099e-01F,
	1.205073968e-01F, 1.205549836e-01F, 1.206025705e-01F, 1.206501573e-01F, 1.206977442e-01F, 1.207453310e-01F, 1.207929179e-01F, 1.208405048e-01F,
	1.208880842e-01F, 1.209356710e-01F, 1.209832579e-01F, 1.210308447e-01F, 1.210784242e-01F, 1.211260110e-01F, 1.211735979e-01F, 1.212211773e-01F,
	1.212687641e-01F, 1.213163435e-01F, 1.213639304e-01F, 1.214115098e-01F, 1.214590892e-01F, 1.215066761e-01F, 1.215542555e-01F, 1.216018349e-01F,
	1.216494143e-01F, 1.216970012e-01F, 1.217445806e-01F, 1.217921600e-01F, 1.218397394e-01F, 1.218873188e-01F, 1.219348982e-01F, 1.219824776e-01F,
	1.220300570e-01F, 1.220776364e-01F, 1.221252084e-01F, 1.221727878e-01F, 1.222203672e-01F, 1.222679466e-01F, 1.223155186e-01F, 1.223630980e-01F,
	1.224106774e-01F, 1.224582493e-01F, 1.225058287e-01F, 1.225534007e-01F, 1.226009801e-01F, 1.226485521e-01F, 1.226961315e-01F, 1.227437034e-01F,
	1.227912754e-01F, 1.228388548e-01F, 1.228864267e-01F, 1.229339987e-01F, 1.229815707e-01F, 1.230291426e-01F, 1.230767146e-01F, 1.231242865e-01F,
	1.231718585e-01F, 1.232194304e-01F, 1.232670024e-01F, 1.233145744e-01F, 1.233621463e-01F, 1.234097183e-01F, 1.234572902e-01F, 1.235048547e-01F,
	1.235524267e-01F, 1.235999987e-01F, 1.236475632e-01F, 1.236951351e-01F, 1.237427071e-01F, 1.237902716e-01F, 1.238378435e-01F, 1.238854080e-01F,
	1.239329726e-01F, 1.239805445e-01F, 1.240281090e-01F, 1.240756735e-01F, 1.241232455e-01F, 1.241708100e-01F, 1.242183745e-01F, 1.242659390e-01F,
	1.243135035e-01F, 1.243610680e-01F, 1.244086325e-01F, 1.244561970e-01F, 1.245037615e-01F, 1.245513260e-01F, 1.245988905e-01F, 1.246464550e-01F,
	1.246940196e-01F, 1.247415766e-01F, 1.247891411e-01F, 1.248367056e-01F, 1.248842627e-01F, 1.249318272e-01F, 1.249793842e-01F, 1.250269413e-01F,
	1.250745058e-01F, 1.251220703e-01F, 1.251696348e-01F, 1.252171844e-01F, 1.252647489e-01F, 1.253123134e-01F, 1.253598630e-01F, 1.254074275e-01F,
	1.254549772e-01F, 1.255025417e-01F, 1.255501062e-01F, 1.255976558e-01F, 1.256452203e-01F, 1.256927699e-01F, 1.257403344e-01F, 1.257878840e-01F,
	1.258354336e-01F, 1.258829981e-01F, 1.259305477e-01F, 1.259781122e-01F, 1.260256618e-01F, 1.260732114e-01F, 1.261207759e-01F, 1.261683255e-01F,
	1.262158751e-01F, 1.262634248e-01F, 1.263109893e-01F, 1.263585389e-01F, 1.264060885e-01F, 1.264536381e-01F, 1.265011877e-01F, 1.265487373e-01F,
	1.265963018e-01F, 1.266438514e-01F, 1.266914010e-01F, 1.267389506e-01F, 1.267865002e-01F, 1.268340498e-01F, 1.268815994e-01F, 1.269291490e-01F,
	1.269766986e-01F, 1.270242482e-01F, 1.270717978e-01F, 1.271193475e-01F, 1.271668971e-01F, 1.272144318e-01F, 1.272619814e-01F, 1.273095310e-01F,
	1.273570806e-01F, 1.274046302e-01F, 1.274521649e-01F, 1.274997145e-01F, 1.275472641e-01F, 1.275948137e-01F, 1.276423484e-01F, 1.276898980e-01F,
	1.277374476e-01F, 1.277849823e-01F, 1.278325319e-01F, 1.278800666e-01F, 1.279276162e-01F, 1.279751658e-01F, 1.280227005e-01F, 1.280702502e-01F,
	1.281177849e-01F, 1.281653345e-01F, 1.282128692e-01F, 1.282604039e-01F, 1.283079535e-01F, 1.283554882e-01F, 1.284030378e-01F, 1.284505725e-01F,
	1.284981072e-01F, 1.285456568e-01F, 1.285931915e-01F, 1.286407262e-01F, 1.286882609e-01F, 1.287358105e-01F, 1.287833452e-01F, 1.288308799e-01F,
	1.288784146e-01F, 1.289259493e-01F, 1.289734840e-01F, 1.290210336e-01F, 1.290685683e-01F, 1.291161031e-01F, 1.291636378e-01F, 1.292111725e-01F,
	1.292587072e-01F, 1.293062419e-01F, 1.293537766e-01F, 1.294013113e-01F, 1.294488460e-01F, 1.294963807e-01F, 1.295439154e-01F, 1.295914352e-01F,
	1.296389699e-01F, 1.296865046e-01F, 1.297340393e-01F, 1.297815740e-01F, 1.298290938e-01F, 1.298766285e-01F, 1.299241632e-01F, 1.299716979e-01F,
	1.300192177e-01F, 1.300667524e-01F, 1.301142871e-01F, 1.301618069e-01F, 1.302093416e-01F, 1.302568763e-01F, 1.303043962e-01F, 1.303519309e-01F,
	1.303994507e-01F, 1.304469854e-01F, 1.304945052e-01F, 1.305420399e-01F, 1.305895597e-01F, 1.306370944e-01F, 1.306846142e-01F, 1.307321340e-01F,
	1.307796687e-01F, 1.308271885e-01F, 1.308747083e-01F, 1.309222430e-01F, 1.309697628e-01F, 1.310172826e-01F, 1.310648173e-01F, 1.311123371e-01F,
	1.311598569e-01F, 1.312073767e-01F, 1.312548965e-01F, 1.313024163e-01F, 1.313499510e-01F, 1.313974708e-01F, 1.314449906e-01F, 1.314925104e-01F,
	1.315400302e-01F, 1.315875500e-01F, 1.316350698e-01F, 1.316825897e-01F, 1.317301095e-01F, 1.317776293e-01F, 1.318251491e-01F, 1.318726689e-01F,
	1.319201887e-01F, 1.319676936e-01F, 1.320152134e-01F, 1.320627332e-01F, 1.321102530e-01F, 1.321577728e-01F, 1.322052777e-01F, 1.322527975e-01F,
	1.323003173e-01F, 1.323478371e-01F, 1.323953420e-01F, 1.324428618e-01F, 1.324903816e-01F, 1.325378865e-01F, 1.325854063e-01F, 1.326329112e-01F,
	1.326804310e-01F, 1.327279359e-01F, 1.327754557e-01F, 1.328229755e-01F, 1.328704804e-01F, 1.329179853e-01F, 1.329655051e-01F, 1.330130100e-01F,
	1.330605298e-01F, 1.331080347e-01F, 1.331555396e-01F, 1.332030594e-01F, 1.332505643e-01F, 1.332980692e-01F, 1.333455890e-01F, 1.333930939e-01F,
	1.334405988e-01F, 1.334881037e-01F, 1.335356236e-01F, 1.335831285e-01F, 1.336306334e-01F, 1.336781383e-01F, 1.337256432e-01F, 1.337731481e-01F,
	1.338206530e-01F, 1.338681579e-01F, 1.339156628e-01F, 1.339631677e-01F, 1.340106726e-01F, 1.340581775e-01F, 1.341056824e-01F, 1.341531873e-01F,
	1.342006922e-01F, 1.342481971e-01F, 1.342957020e-01F, 1.343432069e-01F, 1.343906969e-01F, 1.344382018e-01F, 1.344857067e-01F, 1.345332116e-01F,
	1.345807016e-01F, 1.346282065e-01F, 1.346757114e-01F, 1.347232163e-01F, 1.347707063e-01F, 1.348182112e-01F, 1.348657012e-01F, 1.349132061e-01F,
	1.349607110e-01F, 1.350082010e-01F, 1.350557059e-01F, 1.351031959e-01F, 1.351507008e-01F, 1.351981908e-01F, 1.352456957e-01F, 1.352931857e-01F,
	1.353406757e-01F, 1.353881806e-01F, 1.354356706e-01F, 1.354831606e-01F, 1.355306655e-01F, 1.355781555e-01F, 1.356256455e-01F, 1.356731504e-01F,
	1.357206404e-01F, 1.357681304e-01F, 1.358156204e-01F, 1.358631104e-01F, 1.359106153e-01F, 1.359581053e-01F, 1.360055953e-01F, 1.360530853e-01F,
	1.361005753e-01F, 1.361480653e-01F, 1.361955553e-01F, 1.362430453e-01F, 1.362905353e-01F, 1.363380253e-01F, 1.363855153e-01F, 1.364330053e-01F,
	1.364804953e-01F, 1.365279853e-01F, 1.365754753e-01F, 1.366229504e-01F, 1.366704404e-01F, 1.367179304e-01F, 1.367654204e-01F, 1.368128955e-01F,
	1.368603855e-01F, 1.369078755e-01F, 1.369553655e-01F, 1.370028406e-01F, 1.370503306e-01F, 1.370978206e-01F, 1.371452957e-01F, 1.371927857e-01F,
	1.372402608e-01F, 1.372877508e-01F, 1.373352259e-01F, 1.373827159e-01F, 1.374301910e-01F, 1.374776810e-01F, 1.375251561e-01F, 1.375726461e-01F,
	1.376201212e-01F, 1.376675963e-01F, 1.377150863e-01F, 1.377625614e-01F, 1.378100365e-01F, 1.378575265e-01F, 1.379050016e-01F, 1.379524767e-01F,
	1.379999518e-01F, 1.380474418e-01F, 1.380949169e-01F, 1.381423920e-01F, 1.381898671e-01F, 1.382373422e-01F, 1.382848173e-01F, 1.383322924e-01F,
	1.383797675e-01F, 1.384272426e-01F, 1.384747177e-01F, 1.385221928e-01F, 1.385696679e-01F, 1.386171430e-01F, 1.386646181e-01F, 1.387120932e-01F,
	1.387595683e-01F, 1.388070434e-01F, 1.388545185e-01F, 1.389019936e-01F, 1.389494538e-01F, 1.389969289e-01F, 1.390444040e-01F, 1.390918791e-01F,
	1.391393393e-01F, 1.391868144e-01F, 1.392342895e-01F, 1.392817497e-01F, 1.393292248e-01F, 1.393766999e-01F, 1.394241601e-01F, 1.394716352e-01F,
	1.395190954e-01F, 1.395665705e-01F, 1.396140307e-01F, 1.396615058e-01F, 1.397089660e-01F, 1.397564411e-01F, 1.398039013e-01F, 1.398513615e-01F,
	1.398988366e-01F, 1.399462968e-01F, 1.399937570e-01F, 1.400412321e-01F, 1.400886923e-01F, 1.401361525e-01F, 1.401836127e-01F, 1.402310878e-01F,
	1.402785480e-01F, 1.403260082e-01F, 1.403734684e-01F, 1.404209286e-01F, 1.404683888e-01F, 1.405158639e-01F, 1.405633241e-01F, 1.406107843e-01F,
	1.406582445e-01F, 1.407057047e-01F, 1.407531649e-01F, 1.408006251e-01F, 1.408480853e-01F, 1.408955306e-01F, 1.409429908e-01F, 1.409904510e-01F,
	1.410379112e-01F, 1.410853714e-01F, 1.411328316e-01F, 1.411802769e-01F, 1.412277371e-01F, 1.412751973e-01F, 1.413226575e-01F, 1.413701028e-01F,
	1.414175630e-01F, 1.414650232e-01F, 1.415124685e-01F, 1.415599287e-01F, 1.416073740e-01F, 1.416548342e-01F, 1.417022943e-01F, 1.417497396e-01F,
	1.417971998e-01F, 1.418446451e-01F, 1.418921053e-01F, 1.419395506e-01F, 1.419869959e-01F, 1.420344561e-01F, 1.420819014e-01F, 1.421293467e-01F,
	1.421768069e-01F, 1.422242522e-01F, 1.422716975e-01F, 1.423191577e-01F, 1.423666030e-01F, 1.424140483e-01F, 1.424614936e-01F, 1.425089389e-01F,
	1.425563991e-01F, 1.426038444e-01F, 1.426512897e-01F, 1.426987350e-01F, 1.427461803e-01F, 1.427936256e-01F, 1.428410709e-01F, 1.428885162e-01F,
	1.429359615e-01F, 1.429834068e-01F, 1.430308521e-01F, 1.430782974e-01F, 1.431257427e-01F, 1.431731731e-01F, 1.432206184e-01F, 1.432680637e-01F,
	1.433155090e-01F, 1.433629543e-01F, 1.434103847e-01F, 1.434578300e-01F, 1.435052752e-01F, 1.435527205e-01F, 1.436001509e-01F, 1.436475962e-01F,
	1.436950266e-01F, 1.437424719e-01F, 1.437899172e-01F, 1.438373476e-01F, 1.438847929e-01F, 1.439322233e-01F, 1.439796686e-01F, 1.440270990e-01F,
	1.440745443e-01F, 1.441219747e-01F, 1.441694051e-01F, 1.442168504e-01F, 1.442642808e-01F, 1.443117112e-01F, 1.443591565e-01F, 1.444065869e-01F,
	1.444540173e-01F, 1.445014626e-01F, 1.445488930e-01F, 1.445963234e-01F, 1.446437538e-01F, 1.446911842e-01F, 1.447386146e-01F, 1.447860450e-01F,
	1.448334903e-01F, 1.448809206e-01F, 1.449283510e-01F, 1.449757814e-01F, 1.450232118e-01F, 1.450706422e-01F, 1.451180726e-01F, 1.451655030e-01F,
	1.452129185e-01F, 1.452603489e-01F, 1.453077793e-01F, 1.453552097e-01F, 1.454026401e-01F, 1.454500705e-01F, 1.454974860e-01F, 1.455449164e-01F,
	1.455923468e-01F, 1.456397772e-01F, 1.456871927e-01F, 1.457346231e-01F, 1.457820535e-01F, 1.458294690e-01F, 1.458768994e-01F, 1.459243149e-01F,
	1.459717453e-01F, 1.460191607e-01F, 1.460665911e-01F, 1.461140066e-01F, 1.461614370e-01F, 1.462088525e-01F, 1.462562829e-01F, 1.463036984e-01F,
	1.463511139e-01F, 1.463985443e-01F, 1.464459598e-01F, 1.464933753e-01F, 1.465408057e-01F, 1.465882212e-01F, 1.466356367e-01F, 1.466830522e-01F,
	1.467304677e-01F, 1.467778981e-01F, 1.468253136e-01F, 1.468727291e-01F, 1.469201446e-01F, 1.469675601e-01F, 1.470149755e-01F, 1.470623910e-01F,
	1.471098065e-01F, 1.471572220e-01F, 1.472046375e-01F, 1.472520530e-01F, 1.472994685e-01F, 1.473468840e-01F, 1.473942995e-01F, 1.474417001e-01F,
	1.474891156e-01F, 1.475365311e-01F, 1.475839466e-01F, 1.476313621e-01F, 1.476787627e-01F, 1.477261782e-01F, 1.477735937e-01F, 1.478209943e-01F,
	1.478684098e-01F, 1.479158252e-01F, 1.479632258e-01F, 1.480106413e-01F, 1.480580419e-01F, 1.481054574e-01F, 1.481528580e-01F, 1.482002735e-01F,
	1.482476741e-01F, 1.482950896e-01F, 1.483424902e-01F, 1.483899057e-01F, 1.484373063e-01F, 1.484847069e-01F, 1.485321224e-01F, 1.485795230e-01F,
	1.486269236e-01F, 1.486743242e-01F, 1.487217396e-01F, 1.487691402e-01F, 1.488165408e-01F, 1.488639414e-01F, 1.489113420e-01F, 1.489587426e-01F,
	1.490061432e-01F, 1.490535587e-01F, 1.491009593e-01F, 1.491483599e-01F, 1.491957605e-01F, 1.492431611e-01F, 1.492905617e-01F, 1.493379474e-01F,
	1.493853480e-01F, 1.494327486e-01F, 1.494801491e-01F, 1.495275497e-01F, 1.495749503e-01F, 1.496223509e-01F, 1.496697366e-01F, 1.497171372e-01F,
	1.497645378e-01F, 1.498119235e-01F, 1.498593241e-01F, 1.499067247e-01F, 1.499541104e-01F, 1.500015110e-01F, 1.500489116e-01F, 1.500962973e-01F,
	1.501436979e-01F, 1.501910836e-01F, 1.502384841e-01F, 1.502858698e-01F, 1.503332704e-01F, 1.503806561e-01F, 1.504280418e-01F, 1.504754424e-01F,
	1.505228281e-01F, 1.505702138e-01F, 1.506176144e-01F, 1.506650001e-01F, 1.507123858e-01F, 1.507597864e-01F, 1.508071721e-01F, 1.508545578e-01F,
	1.509019434e-01F, 1.509493291e-01F, 1.509967148e-01F, 1.510441005e-01F, 1.510915011e-01F, 1.511388868e-01F, 1.511862725e-01F, 1.512336582e-01F,
	1.512810439e-01F, 1.513284296e-01F, 1.513758004e-01F, 1.514231861e-01F, 1.514705718e-01F, 1.515179574e-01F, 1.515653431e-01F, 1.516127288e-01F,
	1.516601145e-01F, 1.517074853e-01F, 1.517548710e-01F, 1.518022567e-01F, 1.518496424e-01F, 1.518970132e-01F, 1.519443989e-01F, 1.519917697e-01F,
	1.520391554e-01F, 1.520865411e-01F, 1.521339118e-01F, 1.521812975e-01F, 1.522286683e-01F, 1.522760540e-01F, 1.523234248e-01F, 1.523708105e-01F,
	1.524181813e-01F, 1.524655521e-01F, 1.525129378e-01F, 1.525603086e-01F, 1.526076794e-01F, 1.526550651e-01F, 1.527024359e-01F, 1.527498066e-01F,
	1.527971923e-01F, 1.528445631e-01F, 1.528919339e-01F, 1.529393047e-01F, 1.529866755e-01F, 1.530340463e-01F, 1.530814171e-01F, 1.531287879e-01F,
	1.531761587e-01F, 1.532235444e-01F, 1.532709152e-01F, 1.533182710e-01F, 1.533656418e-01F, 1.534130126e-01F, 1.534603834e-01F, 1.535077542e-01F,
	1.535551250e-01F, 1.536024958e-01F, 1.536498666e-01F, 1.536972225e-01F, 1.537445933e-01F, 1.537919641e-01F, 1.538393348e-01F, 1.538866907e-01F,
	1.539340615e-01F, 1.539814323e-01F, 1.540287882e-01F, 1.540761590e-01F, 1.541235149e-01F, 1.541708857e-01F, 1.542182416e-01F, 1.542656124e-01F,
	1.543129683e-01F, 1.543603390e-01F, 1.544076949e-01F, 1.544550657e-01F, 1.545024216e-01F, 1.545497775e-01F, 1.545971483e-01F, 1.546445042e-01F,
	1.546918601e-01F, 1.547392160e-01F, 1.547865868e-01F, 1.548339427e-01F, 1.548812985e-01F, 1.549286544e-01F, 1.549760103e-01F, 1.550233811e-01F,
	1.550707370e-01F, 1.551180929e-01F, 1.551654488e-01F, 1.552128047e-01F, 1.552601606e-01F, 1.553075165e-01F, 1.553548723e-01F, 1.554022282e-01F,
	1.554495692e-01F, 1.554969251e-01F, 1.555442810e-01F, 1.555916369e-01F, 1.556389928e-01F, 1.556863487e-01F, 1.557336897e-01F, 1.557810456e-01F,
	1.558284014e-01F, 1.558757424e-01F, 1.559230983e-01F, 1.559704542e-01F, 1.560177952e-01F, 1.560651511e-01F, 1.561124921e-01F, 1.561598480e-01F,
	1.562072039e-01F, 1.562545449e-01F, 1.563018858e-01F, 1.563492417e-01F, 1.563965827e-01F, 1.564439386e-01F, 1.564912796e-01F, 1.565386206e-01F,
	1.565859765e-01F, 1.566333175e-01F, 1.566806585e-01F, 1.567280143e-01F, 1.567753553e-01F, 1.568226963e-01F, 1.568700373e-01F, 1.569173783e-01F,
	1.569647193e-01F, 1.570120752e-01F, 1.570594162e-01F, 1.571067572e-01F, 1.571540982e-01F, 1.572014391e-01F, 1.572487801e-01F, 1.572961211e-01F,
	1.573434621e-01F, 1.573907882e-01F, 1.574381292e-01F, 1.574854702e-01F, 1.575328112e-01F, 1.575801522e-01F, 1.576274931e-01F, 1.576748192e-01F,
	1.577221602e-01F, 1.577695012e-01F, 1.578168422e-01F, 1.578641683e-01F, 1.579115093e-01F, 1.579588354e-01F, 1.580061764e-01F, 1.580535173e-01F,
	1.581008434e-01F, 1.581481844e-01F, 1.581955105e-01F, 1.582428515e-01F, 1.582901776e-01F, 1.583375186e-01F, 1.583848447e-01F, 1.584321707e-01F,
	1.584795117e-01F, 1.585268378e-01F, 1.585741639e-01F, 1.586215049e-01F, 1.586688310e-01F, 1.587161571e-01F, 1.587634832e-01F, 1.588108093e-01F,
	1.588581502e-01F, 1.589054763e-01F, 1.589528024e-01F, 1.590001285e-01F, 1.590474546e-01F, 1.590947807e-01F, 1.591421068e-01F, 1.591894329e-01F,
	1.592367589e-01F, 1.592840850e-01F, 1.593314111e-01F, 1.593787372e-01F, 1.594260484e-01F, 1.594733745e-01F, 1.595207006e-01F, 1.595680267e-01F,
	1.596153527e-01F, 1.596626639e-01F, 1.597099900e-01F, 1.597573161e-01F, 1.598046273e-01F, 1.598519534e-01F, 1.598992795e-01F, 1.599465907e-01F,
	1.599939167e-01F, 1.600412279e-01F, 1.600885540e-01F, 1.601358652e-01F, 1.601831913e-01F, 1.602305025e-01F, 1.602778286e-01F, 1.603251398e-01F,
	1.603724509e-01F, 1.604197770e-01F, 1.604670882e-01F, 1.605143994e-01F, 1.605617255e-01F, 1.606090367e-01F, 1.606563479e-01F, 1.607036591e-01F,
	1.607509702e-01F, 1.607982963e-01F, 1.608456075e-01F, 1.608929187e-01F, 1.609402299e-01F, 1.609875411e-01F, 1.610348523e-01F, 1.610821635e-01F,
	1.611294746e-01F, 1.611767858e-01F, 1.612240970e-01F, 1.612714082e-01F, 1.613187194e-01F, 1.613660157e-01F, 1.614133269e-01F, 1.614606380e-01F,
	1.615079492e-01F, 1.615552455e-01F, 1.616025567e-01F, 1.616498679e-01F, 1.616971791e-01F, 1.617444754e-01F, 1.617917866e-01F, 1.618390828e-01F,
	1.618863940e-01F, 1.619337052e-01F, 1.619810015e-01F, 1.620283127e-01F, 1.620756090e-01F, 1.621229053e-01F, 1.621702164e-01F, 1.622175127e-01F,
	1.622648239e-01F, 1.623121202e-01F, 1.623594165e-01F, 1.624067277e-01F, 1.624540240e-01F, 1.625013202e-01F, 1.625486165e-01F, 1.625959277e-01F,
	1.626432240e-01F, 1.626905203e-01F, 1.627378166e-01F, 1.627851129e-01F, 1.628324091e-01F, 1.628797054e-01F, 1.629270017e-01F, 1.629742980e-01F,
	1.630215943e-01F, 1.630688906e-01F, 1.631161869e-01F, 1.631634831e-01F, 1.632107794e-01F, 1.632580757e-01F, 1.633053571e-01F, 1.633526534e-01F,
	1.633999497e-01F, 1.634472460e-01F, 1.634945273e-01F, 1.635418236e-01F, 1.635891199e-01F, 1.636364013e-01F, 1.636836976e-01F, 1.637309939e-01F,
	1.637782753e-01F, 1.638255715e-01F, 1.638728529e-01F, 1.639201492e-01F, 1.639674306e-01F, 1.640147269e-01F, 1.640620083e-01F, 1.641092896e-01F,
	1.641565859e-01F, 1.642038673e-01F, 1.642511487e-01F, 1.642984450e-01F, 1.643457264e-01F, 1.643930078e-01F, 1.644402891e-01F, 1.644875854e-01F,
	1.645348668e-01F, 1.645821482e-01F, 1.646294296e-01F, 1.646767110e-01F, 1.647239923e-01F, 1.647712737e-01F, 1.648185551e-01F, 1.648658365e-01F,
	1.649131179e-01F, 1.649603993e-01F, 1.650076807e-01F, 1.650549620e-01F, 1.651022434e-01F, 1.651495248e-01F, 1.651967913e-01F, 1.652440727e-01F,
	1.652913541e-01F, 1.653386354e-01F, 1.653859019e-01F, 1.654331833e-01F, 1.654804647e-01F, 1.655277312e-01F, 1.655750126e-01F, 1.656222790e-01F,
	1.656695604e-01F, 1.657168418e-01F, 1.657641083e-01F, 1.658113897e-01F, 1.658586562e-01F, 1.659059227e-01F, 1.659532040e-01F, 1.660004705e-01F,
	1.660477370e-01F, 1.660950184e-01F, 1.661422849e-01F, 1.661895514e-01F, 1.662368327e-01F, 1.662840992e-01F, 1.663313657e-01F, 1.663786322e-01F,
	1.664258987e-01F, 1.664731652e-01F, 1.665204465e-01F, 1.665677130e-01F, 1.666149795e-01F, 1.666622460e-01F, 1.667095125e-01F, 1.667567790e-01F,
	1.668040454e-01F, 1.668512970e-01F, 1.668985635e-01F, 1.669458300e-01F, 1.669930965e-01F, 1.670403630e-01F, 1.670876294e-01F, 1.671348810e-01F,
	1.671821475e-01F, 1.672294140e-01F, 1.672766656e-01F, 1.673239321e-01F, 1.673711985e-01F, 1.674184501e-01F, 1.674657166e-01F, 1.675129682e-01F,
	1.675602347e-01F, 1.676074862e-01F, 1.676547527e-01F, 1.677020043e-01F, 1.677492708e-01F, 1.677965224e-01F, 1.678437889e-01F, 1.678910404e-01F,
	1.679382920e-01F, 1.679855436e-01F, 1.680328101e-01F, 1.680800617e-01F, 1.681273133e-01F, 1.681745648e-01F, 1.682218313e-01F, 1.682690829e-01F,
	1.683163345e-01F, 1.683635861e-01F, 1.684108377e-01F, 1.684580892e-01F, 1.685053408e-01F, 1.685525924e-01F, 1.685998440e-01F, 1.686470956e-01F,
	1.686943471e-01F, 1.687415987e-01F, 1.687888354e-01F, 1.688360870e-01F, 1.688833386e-01F, 1.689305902e-01F, 1.689778417e-01F, 1.690250784e-01F,
	1.690723300e-01F, 1.691195816e-01F, 1.691668183e-01F, 1.692140698e-01F, 1.692613065e-01F, 1.693085581e-01F, 1.693558097e-01F, 1.694030464e-01F,
	1.694502980e-01F, 1.694975346e-01F, 1.695447713e-01F, 1.695920229e-01F, 1.696392596e-01F, 1.696865112e-01F, 1.697337478e-01F, 1.697809845e-01F,
	1.698282212e-01F, 1.698754728e-01F, 1.699227095e-01F, 1.699699461e-01F, 1.700171828e-01F, 1.700644195e-01F, 1.701116711e-01F, 1.701589078e-01F,
	1.702061445e-01F, 1.702533811e-01F, 1.703006178e-01F, 1.703478545e-01F, 1.703950912e-01F, 1.704423279e-01F, 1.704895645e-01F, 1.705367863e-01F,
	1.705840230e-01F, 1.706312597e-01F, 1.706784964e-01F, 1.707257330e-01F, 1.707729548e-01F, 1.708201915e-01F, 1.708674282e-01F, 1.709146500e-01F,
	1.709618866e-01F, 1.710091233e-01F, 1.710563451e-01F, 1.711035818e-01F, 1.711508036e-01F, 1.711980402e-01F, 1.712452620e-01F, 1.712924987e-01F,
	1.713397205e-01F, 1.713869572e-01F, 1.714341789e-01F, 1.714814007e-01F, 1.715286374e-01F, 1.715758592e-01F, 1.716230810e-01F, 1.716703176e-01F,
	1.717175394e-01F, 1.717647612e-01F, 1.718119830e-01F, 1.718592048e-01F, 1.719064265e-01F, 1.719536632e-01F, 1.720008850e-01F, 1.720481068e-01F,
	1.720953286e-01F, 1.721425503e-01F, 1.721897721e-01F, 1.722369790e-01F, 1.722842008e-01F, 1.723314226e-01F, 1.723786443e-01F, 1.724258661e-01F,
	1.724730879e-01F, 1.725203097e-01F, 1.725675166e-01F, 1.726147383e-01F, 1.726619601e-01F, 1.727091670e-01F, 1.727563888e-01F, 1.728036106e-01F,
	1.728508174e-01F, 1.728980392e-01F, 1.729452461e-01F, 1.729924679e-01F, 1.730396748e-01F, 1.730868965e-01F, 1.731341034e-01F, 1.731813103e-01F,
	1.732285321e-01F, 1.732757390e-01F, 1.733229458e-01F, 1.733701676e-01F, 1.734173745e-01F, 1.734645814e-01F, 1.735117882e-01F, 1.735590100e-01F,
	1.736062169e-01F, 1.736534238e-01F, 1.737006307e-01F, 1.737478375e-01F, 1.737950444e-01F, 1.738422513e-01F, 1.738894582e-01F, 1.739366651e-01F,
	1.739838719e-01F, 1.740310788e-01F, 1.740782857e-01F, 1.741254926e-01F, 1.741726995e-01F, 1.742198914e-01F, 1.742670983e-01F, 1.743143052e-01F,
	1.743615121e-01F, 1.744087040e-01F, 1.744559109e-01F, 1.745031178e-01F, 1.745503098e-01F, 1.745975167e-01F, 1.746447086e-01F, 1.746919155e-01F,
	1.747391075e-01F, 1.747863144e-01F, 1.748335063e-01F, 1.748807132e-01F, 1.749279052e-01F, 1.749751121e-01F, 1.750223041e-01F, 1.750694960e-01F,
	1.751167029e-01F, 1.751638949e-01F, 1.752110869e-01F, 1.752582788e-01F, 1.753054857e-01F, 1.753526777e-01F, 1.753998697e-01F, 1.754470617e-01F,
	1.754942536e-01F, 1.755414456e-01F, 1.755886376e-01F, 1.756358296e-01F, 1.756830215e-01F, 1.757302135e-01F, 1.757774055e-01F, 1.758245975e-01F,
	1.758717895e-01F, 1.759189665e-01F, 1.759661585e-01F, 1.760133505e-01F, 1.760605425e-01F, 1.761077344e-01F, 1.761549115e-01F, 1.762021035e-01F,
	1.762492955e-01F, 1.762964725e-01F, 1.763436645e-01F, 1.763908416e-01F, 1.764380336e-01F, 1.764852107e-01F, 1.765324026e-01F, 1.765795797e-01F,
	1.766267717e-01F, 1.766739488e-01F, 1.767211258e-01F, 1.767683178e-01F, 1.768154949e-01F, 1.768626720e-01F, 1.769098639e-01F, 1.769570410e-01F,
	1.770042181e-01F, 1.770513952e-01F, 1.770985723e-01F, 1.771457642e-01F, 1.771929413e-01F, 1.772401184e-01F, 1.772872955e-01F, 1.773344725e-01F,
	1.773816496e-01F, 1.774288267e-01F, 1.774760038e-01F, 1.775231808e-01F, 1.775703579e-01F, 1.776175201e-01F, 1.776646972e-01F, 1.777118742e-01F,
	1.777590513e-01F, 1.778062284e-01F, 1.778533906e-01F, 1.779005677e-01F, 1.779477447e-01F, 1.779949069e-01F, 1.780420840e-01F, 1.780892462e-01F,
	1.781364232e-01F, 1.781835854e-01F, 1.782307625e-01F, 1.782779247e-01F, 1.783251017e-01F, 1.783722639e-01F, 1.784194410e-01F, 1.784666032e-01F,
	1.785137653e-01F, 1.785609424e-01F, 1.786081046e-01F, 1.786552668e-01F, 1.787024289e-01F, 1.787496060e-01F, 1.787967682e-01F, 1.788439304e-01F,
	1.788910925e-01F, 1.789382547e-01F, 1.789854169e-01F, 1.790325791e-01F, 1.790797412e-01F, 1.791269034e-01F, 1.791740656e-01F, 1.792212278e-01F,
	1.792683899e-01F, 1.793155521e-01F, 1.793627143e-01F, 1.794098616e-01F, 1.794570237e-01F, 1.795041859e-01F, 1.795513481e-01F, 1.795984954e-01F,
	1.796456575e-01F, 1.796928197e-01F, 1.797399670e-01F, 1.797871292e-01F, 1.798342764e-01F, 1.798814386e-01F, 1.799285859e-01F, 1.799757481e-01F,
	1.800228953e-01F, 1.800700575e-01F, 1.801172048e-01F, 1.801643670e-01F, 1.802115142e-01F, 1.802586615e-01F, 1.803058237e-01F, 1.803529710e-01F,
	1.804001182e-01F, 1.804472655e-01F, 1.804944128e-01F, 1.805415601e-01F, 1.805887222e-01F, 1.806358695e-01F, 1.806830168e-01F, 1.807301641e-01F,
	1.807773113e-01F, 1.808244586e-01F, 1.808716059e-01F, 1.809187531e-01F, 1.809659004e-01F, 1.810130328e-01F, 1.810601801e-01F, 1.811073273e-01F,
	1.811544746e-01F, 1.812016219e-01F, 1.812487543e-01F, 1.812959015e-01F, 1.813430488e-01F, 1.813901812e-01F, 1.814373285e-01F, 1.814844608e-01F,
	1.815316081e-01F, 1.815787554e-01F, 1.816258878e-01F, 1.816730350e-01F, 1.817201674e-01F, 1.817672998e-01F, 1.818144470e-01F, 1.818615794e-01F,
	1.819087118e-01F, 1.819558591e-01F, 1.820029914e-01F, 1.820501238e-01F, 1.820972562e-01F, 1.821444035e-01F, 1.821915358e-01F, 1.822386682e-01F,
	1.822858006e-01F, 1.823329329e-01F, 1.823800653e-01F, 1.824271977e-01F, 1.824743301e-01F, 1.825214624e-01F, 1.825685948e-01F, 1.826157272e-01F,
	1.826628596e-01F, 1.827099919e-01F, 1.827571243e-01F, 1.828042418e-01F, 1.828513741e-01F, 1.828985065e-01F, 1.829456389e-01F, 1.829927564e-01F,
	1.830398887e-01F, 1.830870211e-01F, 1.831341386e-01F, 1.831812710e-01F, 1.832283884e-01F, 1.832755208e-01F, 1.833226383e-01F, 1.833697706e-01F,
	1.834168881e-01F, 1.834640205e-01F, 1.835111380e-01F, 1.835582554e-01F, 1.836053878e-01F, 1.836525053e-01F, 1.836996228e-01F, 1.837467402e-01F,
	1.837938726e-01F, 1.838409901e-01F, 1.838881075e-01F, 1.839352250e-01F, 1.839823425e-01F, 1.840294600e-01F, 1.840765774e-01F, 1.841236949e-01F,
	1.841708124e-01F, 1.842179298e-01F, 1.842650473e-01F, 1.843121648e-01F, 1.843592823e-01F, 1.844063997e-01F, 1.844535023e-01F, 1.845006198e-01F,
	1.845477372e-01F, 1.845948547e-01F, 1.846419573e-01F, 1.846890748e-01F, 1.847361922e-01F, 1.847832948e-01F, 1.848304123e-01F, 1.848775148e-01F,
	1.849246323e-01F, 1.849717349e-01F, 1.850188524e-01F, 1.850659549e-01F, 1.851130724e-01F, 1.851601750e-01F, 1.852072775e-01F, 1.852543950e-01F,
	1.853014976e-01F, 1.853486001e-01F, 1.853957176e-01F, 1.854428202e-01F, 1.854899228e-01F, 1.855370253e-01F, 1.855841279e-01F, 1.856312305e-01F,
	1.856783330e-01F, 1.857254356e-01F, 1.857725382e-01F, 1.858196408e-01F, 1.858667433e-01F, 1.859138459e-01F, 1.859609485e-01F, 1.860080510e-01F,
	1.860551536e-01F, 1.861022562e-01F, 1.861493438e-01F, 1.861964464e-01F, 1.862435490e-01F, 1.862906516e-01F, 1.863377392e-01F, 1.863848418e-01F,
	1.864319444e-01F, 1.864790320e-01F, 1.865261346e-01F, 1.865732223e-01F, 1.866203249e-01F, 1.866674125e-01F, 1.867145151e-01F, 1.867616028e-01F,
	1.868086904e-01F, 1.868557930e-01F, 1.869028807e-01F, 1.869499683e-01F, 1.869970709e-01F, 1.870441586e-01F, 1.870912462e-01F, 1.871383339e-01F,
	1.871854216e-01F, 1.872325093e-01F, 1.872795969e-01F, 1.873266995e-01F, 1.873737872e-01F, 1.874208748e-01F, 1.874679625e-01F, 1.875150353e-01F,
	1.875621229e-01F, 1.876092106e-01F, 1.876562983e-01F, 1.877033859e-01F, 1.877504736e-01F, 1.877975613e-01F, 1.878446341e-01F, 1.878917217e-01F,
	1.879388094e-01F, 1.879858822e-01F, 1.880329698e-01F, 1.880800575e-01F, 1.881271303e-01F, 1.881742179e-01F, 1.882212907e-01F, 1.882683784e-01F,
	1.883154511e-01F, 1.883625239e-01F, 1.884096116e-01F, 1.884566844e-01F, 1.885037720e-01F, 1.885508448e-01F, 1.885979176e-01F, 1.886449903e-01F,
	1.886920780e-01F, 1.887391508e-01F, 1.887862235e-01F, 1.888332963e-01F, 1.888803691e-01F, 1.889274418e-01F, 1.889745146e-01F, 1.890215874e-01F,
	1.890686601e-01F, 1.891157329e-01F, 1.891628057e-01F, 1.892098784e-01F, 1.892569512e-01F, 1.893040240e-01F, 1.893510967e-01F, 1.893981546e-01F,
	1.894452274e-01F, 1.894923002e-01F, 1.895393580e-01F, 1.895864308e-01F, 1.896335036e-01F, 1.896805614e-01F, 1.897276342e-01F, 1.897747070e-01F,
	1.898217648e-01F, 1.898688376e-01F, 1.899158955e-01F, 1.899629533e-01F, 1.900100261e-01F, 1.900570840e-01F, 1.901041567e-01F, 1.901512146e-01F,
	1.901982725e-01F, 1.902453303e-01F, 1.902924031e-01F, 1.903394610e-01F, 1.903865188e-01F, 1.904335767e-01F, 1.904806346e-01F, 1.905276924e-01F,
	1.905747503e-01F, 1.906218082e-01F, 1.906688660e-01F, 1.907159239e-01F, 1.907629818e-01F, 1.908100396e-01F, 1.908570975e-01F, 1.909041554e-01F,
	1.909512132e-01F, 1.909982562e-01F, 1.910453141e-01F, 1.910923719e-01F, 1.911394298e-01F, 1.911864728e-01F, 1.912335306e-01F, 1.912805736e-01F,
	1.913276315e-01F, 1.913746893e-01F, 1.914217323e-01F, 1.914687902e-01F, 1.915158331e-01F, 1.915628761e-01F, 1.916099340e-01F, 1.916569769e-01F,
	1.917040348e-01F, 1.917510778e-01F, 1.917981207e-01F, 1.918451637e-01F, 1.918922216e-01F, 1.919392645e-01F, 1.919863075e-01F, 1.920333505e-01F,
	1.920803934e-01F, 1.921274364e-01F, 1.921744794e-01F, 1.922215223e-01F, 1.922685653e-01F, 1.923156083e-01F, 1.923626512e-01F, 1.924096942e-01F,
	1.924567372e-01F, 1.925037801e-01F, 1.925508231e-01F, 1.925978512e-01F, 1.926448941e-01F, 1.926919371e-01F, 1.927389801e-01F, 1.927860081e-01F,
	1.928330511e-01F, 1.928800792e-01F, 1.929271221e-01F, 1.929741651e-01F, 1.930211931e-01F, 1.930682361e-01F, 1.931152642e-01F, 1.931622922e-01F,
	1.932093352e-01F, 1.932563633e-01F, 1.933033913e-01F, 1.933504343e-01F, 1.933974624e-01F, 1.934444904e-01F, 1.934915334e-01F, 1.935385615e-01F,
	1.935855895e-01F, 1.936326176e-01F, 1.936796457e-01F, 1.937266737e-01F, 1.937737018e-01F, 1.938207299e-01F, 1.938677579e-01F, 1.939147860e-01F,
	1.939618140e-01F, 1.940088421e-01F, 1.940558702e-01F, 1.941028982e-01F, 1.941499114e-01F, 1.941969395e-01F, 1.942439675e-01F, 1.942909956e-01F,
	1.943380088e-01F, 1.943850368e-01F, 1.944320500e-01F, 1.944790781e-01F, 1.945261061e-01F, 1.945731193e-01F, 1.946201473e-01F, 1.946671605e-01F,
	1.947141886e-01F, 1.947612017e-01F, 1.948082149e-01F, 1.948552430e-01F, 1.949022561e-01F, 1.949492693e-01F, 1.949962825e-01F, 1.950433105e-01F,
	1.950903237e-01F, 1.951373369e-01F, 1.951843500e-01F, 1.952313632e-01F, 1.952783763e-01F, 1.953253895e-01F, 1.953724027e-01F, 1.954194158e-01F,
	1.954664290e-01F, 1.955134422e-01F, 1.955604553e-01F, 1.956074685e-01F, 1.956544816e-01F, 1.957014948e-01F, 1.957484931e-01F, 1.957955062e-01F,
	1.958425194e-01F, 1.958895326e-01F, 1.959365308e-01F, 1.959835440e-01F, 1.960305423e-01F, 1.960775554e-01F, 1.961245537e-01F, 1.961715668e-01F,
	1.962185651e-01F, 1.962655783e-01F, 1.963125765e-01F, 1.963595897e-01F, 1.964065880e-01F, 1.964535862e-01F, 1.965005994e-01F, 1.965475976e-01F,
	1.965945959e-01F, 1.966415942e-01F, 1.966885924e-01F, 1.967356056e-01F, 1.967826039e-01F, 1.968296021e-01F, 1.968766004e-01F, 1.969235986e-01F,
	1.969705969e-01F, 1.970175952e-01F, 1.970645934e-01F, 1.971115917e-01F, 1.971585751e-01F, 1.972055733e-01F, 1.972525716e-01F, 1.972995698e-01F,
	1.973465681e-01F, 1.973935515e-01F, 1.974405497e-01F, 1.974875480e-01F, 1.975345314e-01F, 1.975815296e-01F, 1.976285130e-01F, 1.976755112e-01F,
	1.977224946e-01F, 1.977694929e-01F, 1.978164762e-01F, 1.978634745e-01F, 1.979104578e-01F, 1.979574412e-01F, 1.980044395e-01F, 1.980514228e-01F,
	1.980984062e-01F, 1.981454045e-01F, 1.981923878e-01F, 1.982393712e-01F, 1.982863545e-01F, 1.983333379e-01F, 1.983803213e-01F, 1.984273046e-01F,
	1.984742880e-01F, 1.985212713e-01F, 1.985682547e-01F, 1.986152381e-01F, 1.986622214e-01F, 1.987092048e-01F, 1.987561882e-01F, 1.988031566e-01F,
	1.988501400e-01F, 1.988971233e-01F, 1.989441067e-01F, 1.989910752e-01F, 1.990380585e-01F, 1.990850419e-01F, 1.991320103e-01F, 1.991789937e-01F,
	1.992259622e-01F, 1.992729455e-01F, 1.993199140e-01F, 1.993668973e-01F, 1.994138658e-01F, 1.994608343e-01F, 1.995078176e-01F, 1.995547861e-01F,
	1.996017545e-01F, 1.996487230e-01F, 1.996957064e-01F, 1.997426748e-01F, 1.997896433e-01F, 1.998366117e-01F, 1.998835802e-01F, 1.999305487e-01F,
	1.999775171e-01F, 2.000244856e-01F, 2.000714540e-01F, 2.001184225e-01F, 2.001653910e-01F, 2.002123594e-01F, 2.002593279e-01F, 2.003062963e-01F,
	2.003532499e-01F, 2.004002184e-01F, 2.004471868e-01F, 2.004941553e-01F, 2.005411088e-01F, 2.005880773e-01F, 2.006350309e-01F, 2.006819993e-01F,
	2.007289529e-01F, 2.007759213e-01F, 2.008228749e-01F, 2.008698434e-01F, 2.009167969e-01F, 2.009637654e-01F, 2.010107189e-01F, 2.010576725e-01F,
	2.011046410e-01F, 2.011515945e-01F, 2.011985481e-01F, 2.012455016e-01F, 2.012924552e-01F, 2.013394237e-01F, 2.013863772e-01F, 2.014333308e-01F,
	2.014802843e-01F, 2.015272379e-01F, 2.015741915e-01F, 2.016211450e-01F, 2.016680986e-01F, 2.017150372e-01F, 2.017619908e-01F, 2.018089443e-01F,
	2.018558979e-01F, 2.019028515e-01F, 2.019497901e-01F, 2.019967437e-01F, 2.020436972e-01F, 2.020906359e-01F, 2.021375895e-01F, 2.021845430e-01F,
	2.022314817e-01F, 2.022784352e-01F, 2.023253739e-01F, 2.023723125e-01F, 2.024192661e-01F, 2.024662048e-01F, 2.025131583e-01F, 2.025600970e-01F,
	2.026070356e-01F, 2.026539743e-01F, 2.027009279e-01F, 2.027478665e-01F, 2.027948052e-01F, 2.028417438e-01F, 2.028886825e-01F, 2.029356211e-01F,
	2.029825598e-01F, 2.030294985e-01F, 2.030764371e-01F, 2.031233758e-01F, 2.031703144e-01F, 2.032172531e-01F, 2.032641917e-01F, 2.033111304e-01F,
	2.033580691e-01F, 2.034049928e-01F, 2.034519315e-01F, 2.034988701e-01F, 2.035457939e-01F, 2.035927325e-01F, 2.036396712e-01F, 2.036865950e-01F,
	2.037335336e-01F, 2.037804574e-01F, 2.038273960e-01F, 2.038743198e-01F, 2.039212584e-01F, 2.039681822e-01F, 2.040151060e-01F, 2.040620446e-01F,
	2.041089684e-01F, 2.041558921e-01F, 2.042028159e-01F, 2.042497545e-01F, 2.042966783e-01F, 2.043436021e-01F, 2.043905258e-01F, 2.044374496e-01F,
	2.044843733e-01F, 2.045312971e-01F, 2.045782208e-01F, 2.046251446e-01F, 2.046720684e-01F, 2.047189921e-01F, 2.047659159e-01F, 2.048128247e-01F,
	2.048597485e-01F, 2.049066722e-01F, 2.049535960e-01F, 2.050005049e-01F, 2.050474286e-01F, 2.050943524e-01F, 2.051412612e-01F, 2.051881850e-01F,
	2.052350938e-01F, 2.052820176e-01F, 2.053289264e-01F, 2.053758502e-01F, 2.054227591e-01F, 2.054696679e-01F, 2.055165917e-01F, 2.055635005e-01F,
	2.056104094e-01F, 2.056573182e-01F, 2.057042420e-01F, 2.057511508e-01F, 2.057980597e-01F, 2.058449686e-01F, 2.058918774e-01F, 2.059387863e-01F,
	2.059856951e-01F, 2.060326040e-01F, 2.060795128e-01F, 2.061264217e-01F, 2.061733305e-01F, 2.062202394e-01F, 2.062671483e-01F, 2.063140571e-01F,
	2.063609511e-01F, 2.064078599e-01F, 2.064547688e-01F, 2.065016627e-01F, 2.065485716e-01F, 2.065954804e-01F, 2.066423744e-01F, 2.066892833e-01F,
	2.067361772e-01F, 2.067830861e-01F, 2.068299800e-01F, 2.068768889e-01F, 2.069237828e-01F, 2.069706768e-01F, 2.070175856e-01F, 2.070644796e-01F,
	2.071113735e-01F, 2.071582675e-01F, 2.072051764e-01F, 2.072520703e-01F, 2.072989643e-01F, 2.073458582e-01F, 2.073927522e-01F, 2.074396461e-01F,
	2.074865401e-01F, 2.075334340e-01F, 2.075803280e-01F, 2.076272219e-01F, 2.076741159e-01F, 2.077210099e-01F, 2.077678889e-01F, 2.078147829e-01F,
	2.078616768e-01F, 2.079085708e-01F, 2.079554498e-01F, 2.080023438e-01F, 2.080492377e-01F, 2.080961168e-01F, 2.081430107e-01F, 2.081898898e-01F,
	2.082367837e-01F, 2.082836628e-01F, 2.083305568e-01F, 2.083774358e-01F, 2.084243149e-01F, 2.084712088e-01F, 2.085180879e-01F, 2.085649669e-01F,
	2.086118460e-01F, 2.086587399e-01F, 2.087056190e-01F, 2.087524980e-01F, 2.087993771e-01F, 2.088462561e-01F, 2.088931352e-01F, 2.089400142e-01F,
	2.089868933e-01F, 2.090337723e-01F, 2.090806514e-01F, 2.091275305e-01F, 2.091744095e-01F, 2.092212737e-01F, 2.092681527e-01F, 2.093150318e-01F,
	2.093619108e-01F, 2.094087750e-01F, 2.094556540e-01F, 2.095025331e-01F, 2.095493972e-01F, 2.095962763e-01F, 2.096431404e-01F, 2.096900195e-01F,
	2.097368836e-01F, 2.097837627e-01F, 2.098306268e-01F, 2.098774910e-01F, 2.099243701e-01F, 2.099712342e-01F, 2.100180984e-01F, 2.100649625e-01F,
	2.101118416e-01F, 2.101587057e-01F, 2.102055699e-01F, 2.102524340e-01F, 2.102992982e-01F, 2.103461623e-01F, 2.103930265e-01F, 2.104398906e-01F,
	2.104867548e-01F, 2.105336189e-01F, 2.105804831e-01F, 2.106273472e-01F, 2.106742114e-01F, 2.107210606e-01F, 2.107679248e-01F, 2.108147889e-01F,
	2.108616382e-01F, 2.109085023e-01F, 2.109553665e-01F, 2.110022157e-01F, 2.110490799e-01F, 2.110959291e-01F, 2.111427933e-01F, 2.111896425e-01F,
	2.112365067e-01F, 2.112833560e-01F, 2.113302052e-01F, 2.113770694e-01F, 2.114239186e-01F, 2.114707679e-01F, 2.115176171e-01F, 2.115644813e-01F,
	2.116113305e-01F, 2.116581798e-01F, 2.117050290e-01F, 2.117518783e-01F, 2.117987275e-01F, 2.118455768e-01F, 2.118924260e-01F, 2.119392753e-01F,
	2.119861245e-01F, 2.120329738e-01F, 2.120798230e-01F, 2.121266574e-01F, 2.121735066e-01F, 2.122203559e-01F, 2.122672051e-01F, 2.123140395e-01F,
	2.123608887e-01F, 2.124077231e-01F, 2.124545723e-01F, 2.125014216e-01F, 2.125482559e-01F, 2.125950903e-01F, 2.126419395e-01F, 2.126887739e-01F,
	2.127356231e-01F, 2.127824575e-01F, 2.128292918e-01F, 2.128761411e-01F, 2.129229754e-01F, 2.129698098e-01F, 2.130166441e-01F, 2.130634785e-01F,
	2.131103128e-01F, 2.131571621e-01F, 2.132039964e-01F, 2.132508308e-01F, 2.132976651e-01F, 2.133444995e-01F, 2.133913189e-01F, 2.134381533e-01F,
	2.134849876e-01F, 2.135318220e-01F, 2.135786563e-01F, 2.136254758e-01F, 2.136723101e-01F, 2.137191445e-01F, 2.137659788e-01F, 2.138127983e-01F,
	2.138596326e-01F, 2.139064521e-01F, 2.139532864e-01F, 2.140001059e-01F, 2.140469402e-01F, 2.140937597e-01F, 2.141405940e-01F, 2.141874135e-01F,
	2.142342329e-01F, 2.142810524e-01F, 2.143278867e-01F, 2.143747061e-01F, 2.144215256e-01F, 2.144683450e-01F, 2.145151645e-01F, 2.145619839e-01F,
	2.146088183e-01F, 2.146556377e-01F, 2.147024572e-01F, 2.147492617e-01F, 2.147960812e-01F, 2.148429006e-01F, 2.148897201e-01F, 2.149365395e-01F,
	2.149833590e-01F, 2.150301635e-01F, 2.150769830e-01F, 2.151238024e-01F, 2.151706219e-01F, 2.152174264e-01F, 2.152642459e-01F, 2.153110504e-01F,
	2.153578699e-01F, 2.154046744e-01F, 2.154514939e-01F, 2.154982984e-01F, 2.155451179e-01F, 2.155919224e-01F, 2.156387269e-01F, 2.156855464e-01F,
	2.157323509e-01F, 2.157791555e-01F, 2.158259600e-01F, 2.158727646e-01F, 2.159195691e-01F, 2.159663886e-01F, 2.160131931e-01F, 2.160599977e-01F,
	2.161068022e-01F, 2.161536068e-01F, 2.162004113e-01F, 2.162472010e-01F, 2.162940055e-01F, 2.163408101e-01F, 2.163876146e-01F, 2.164344192e-01F,
	2.164812088e-01F, 2.165280133e-01F, 2.165748179e-01F, 2.166216075e-01F, 2.166684121e-01F, 2.167152017e-01F, 2.167620063e-01F, 2.168087959e-01F,
	2.168556005e-01F, 2.169023901e-01F, 2.169491947e-01F, 2.169959843e-01F, 2.170427740e-01F, 2.170895785e-01F, 2.171363682e-01F, 2.171831578e-01F,
	2.172299474e-01F, 2.172767520e-01F, 2.173235416e-01F, 2.173703313e-01F, 2.174171209e-01F, 2.174639106e-01F, 2.175107002e-01F, 2.175574899e-01F,
	2.176042795e-01F, 2.176510692e-01F, 2.176978439e-01F, 2.177446336e-01F, 2.177914232e-01F, 2.178382128e-01F, 2.178849876e-01F, 2.179317772e-01F,
	2.179785669e-01F, 2.180253416e-01F, 2.180721313e-01F, 2.181189209e-01F, 2.181656957e-01F, 2.182124853e-01F, 2.182592601e-01F, 2.183060348e-01F,
	2.183528244e-01F, 2.183995992e-01F, 2.184463739e-01F, 2.184931636e-01F, 2.185399383e-01F, 2.185867131e-01F, 2.186334878e-01F, 2.186802775e-01F,
	2.187270522e-01F, 2.187738270e-01F, 2.188206017e-01F, 2.188673764e-01F, 2.189141512e-01F, 2.189609259e-01F, 2.190077007e-01F, 2.190544605e-01F,
	2.191012353e-01F, 2.191480100e-01F, 2.191947848e-01F, 2.192415595e-01F, 2.192883193e-01F, 2.193350941e-01F, 2.193818688e-01F, 2.194286287e-01F,
	2.194754034e-01F, 2.195221633e-01F, 2.195689380e-01F, 2.196156979e-01F, 2.196624726e-01F, 2.197092324e-01F, 2.197560072e-01F, 2.198027670e-01F,
	2.198495269e-01F, 2.198962867e-01F, 2.199430615e-01F, 2.199898213e-01F, 2.200365812e-01F, 2.200833410e-01F, 2.201301008e-01F, 2.201768607e-01F,
	2.202236205e-01F, 2.202703804e-01F, 2.203171402e-01F, 2.203639001e-01F, 2.204106599e-01F, 2.204574198e-01F, 2.205041796e-01F, 2.205509394e-01F,
	2.205976844e-01F, 2.206444442e-01F, 2.206912041e-01F, 2.207379490e-01F, 2.207847089e-01F, 2.208314687e-01F, 2.208782136e-01F, 2.209249735e-01F,
	2.209717184e-01F, 2.210184783e-01F, 2.210652232e-01F, 2.211119682e-01F, 2.211587280e-01F, 2.212054729e-01F, 2.212522179e-01F, 2.212989777e-01F,
	2.213457227e-01F, 2.213924676e-01F, 2.214392126e-01F, 2.214859575e-01F, 2.215327024e-01F, 2.215794474e-01F, 2.216261923e-01F, 2.216729373e-01F,
	2.217196822e-01F, 2.217664272e-01F, 2.218131721e-01F, 2.218599170e-01F, 2.219066620e-01F, 2.219534069e-01F, 2.220001370e-01F, 2.220468819e-01F,
	2.220936269e-01F, 2.221403569e-01F, 2.221871018e-01F, 2.222338319e-01F, 2.222805768e-01F, 2.223273069e-01F, 2.223740518e-01F, 2.224207819e-01F,
	2.224675268e-01F, 2.225142568e-01F, 2.225609869e-01F, 2.226077318e-01F, 2.226544619e-01F, 2.227011919e-01F, 2.227479219e-01F, 2.227946520e-01F,
	2.228413969e-01F, 2.228881270e-01F, 2.229348570e-01F, 2.229815871e-01F, 2.230283171e-01F, 2.230750471e-01F, 2.231217772e-01F, 2.231684923e-01F,
	2.232152224e-01F, 2.232619524e-01F, 2.233086824e-01F, 2.233554125e-01F, 2.234021276e-01F, 2.234488577e-01F, 2.234955877e-01F, 2.235423028e-01F,
	2.235890329e-01F, 2.236357480e-01F, 2.236824781e-01F, 2.237291932e-01F, 2.237759233e-01F, 2.238226384e-01F, 2.238693535e-01F, 2.239160836e-01F,
	2.239627987e-01F, 2.240095139e-01F, 2.240562439e-01F, 2.241029590e-01F, 2.241496742e-01F, 2.241963893e-01F, 2.242431045e-01F, 2.242898196e-01F,
	2.243365347e-01F, 2.243832499e-01F, 2.244299650e-01F, 2.244766802e-01F, 2.245233953e-01F, 2.245701104e-01F, 2.246168107e-01F, 2.246635258e-01F,
	2.247102410e-01F, 2.247569561e-01F, 2.248036563e-01F, 2.248503715e-01F, 2.248970866e-01F, 2.249437869e-01F, 2.249905020e-01F, 2.250372022e-01F,
	2.250839174e-01F, 2.251306176e-01F, 2.251773179e-01F, 2.252240330e-01F, 2.252707332e-01F, 2.253174335e-01F, 2.253641486e-01F, 2.254108489e-01F,
	2.254575491e-01F, 2.255042493e-01F, 2.255509496e-01F, 2.255976498e-01F, 2.256443501e-01F, 2.256910503e-01F, 2.257377505e-01F, 2.257844508e-01F,
	2.258311510e-01F, 2.258778512e-01F, 2.259245515e-01F, 2.259712517e-01F, 2.260179371e-01F, 2.260646373e-01F, 2.261113375e-01F, 2.261580378e-01F,
	2.262047231e-01F, 2.262514234e-01F, 2.262981087e-01F, 2.263448089e-01F, 2.263914943e-01F, 2.264381945e-01F, 2.264848799e-01F, 2.265315801e-01F,
	2.265782654e-01F, 2.266249508e-01F, 2.266716361e-01F, 2.267183363e-01F, 2.267650217e-01F, 2.268117070e-01F, 2.268583924e-01F, 2.269050777e-01F,
	2.269517630e-01F, 2.269984484e-01F, 2.270451337e-01F, 2.270918190e-01F, 2.271385044e-01F, 2.271851897e-01F, 2.272318751e-01F, 2.272785604e-01F,
	2.273252457e-01F, 2.273719162e-01F, 2.274186015e-01F, 2.274652869e-01F, 2.275119573e-01F, 2.275586426e-01F, 2.276053280e-01F, 2.276519984e-01F,
	2.276986837e-01F, 2.277453542e-01F, 2.277920395e-01F, 2.278387100e-01F, 2.278853804e-01F, 2.279320657e-01F, 2.279787362e-01F, 2.280254066e-01F,
	2.280720770e-01F, 2.281187624e-01F, 2.281654328e-01F, 2.282121032e-01F, 2.282587737e-01F, 2.283054441e-01F, 2.283521146e-01F, 2.283987850e-01F,
	2.284454554e-01F, 2.284921259e-01F, 2.285387963e-01F, 2.285854667e-01F, 2.286321223e-01F, 2.286787927e-01F, 2.287254632e-01F, 2.287721336e-01F,
	2.288187891e-01F, 2.288654596e-01F, 2.289121151e-01F, 2.289587855e-01F, 2.290054411e-01F, 2.290521115e-01F, 2.290987670e-01F, 2.291454375e-01F,
	2.291920930e-01F, 2.292387635e-01F, 2.292854190e-01F, 2.293320745e-01F, 2.293787301e-01F, 2.294254005e-01F, 2.294720560e-01F, 2.295187116e-01F,
	2.295653671e-01F, 2.296120226e-01F, 2.296586782e-01F, 2.297053337e-01F, 2.297519892e-01F, 2.297986448e-01F, 2.298453003e-01F, 2.298919559e-01F,
	2.299385965e-01F, 2.299852520e-01F, 2.300319076e-01F, 2.300785631e-01F, 2.301252037e-01F, 2.301718593e-01F, 2.302184999e-01F, 2.302651554e-01F,
	2.303118110e-01F, 2.303584516e-01F, 2.304051071e-01F, 2.304517478e-01F, 2.304983884e-01F, 2.305450439e-01F, 2.305916846e-01F, 2.306383252e-01F,
	2.306849808e-01F, 2.307316214e-01F, 2.307782620e-01F, 2.308249027e-01F, 2.308715433e-01F, 2.309181839e-01F, 2.309648246e-01F, 2.310114652e-01F,
	2.310581058e-01F, 2.311047465e-01F, 2.311513871e-01F, 2.311980277e-01F, 2.312446684e-01F, 2.312912941e-01F, 2.313379347e-01F, 2.313845754e-01F,
	2.314312160e-01F, 2.314778417e-01F, 2.315244824e-01F, 2.315711081e-01F, 2.316177487e-01F, 2.316643745e-01F, 2.317110151e-01F, 2.317576408e-01F,
	2.318042815e-01F, 2.318509072e-01F, 2.318975329e-01F, 2.319441736e-01F, 2.319907993e-01F, 2.320374250e-01F, 2.320840508e-01F, 2.321306765e-01F,
	2.321773022e-01F, 2.322239280e-01F, 2.322705686e-01F, 2.323171943e-01F, 2.323638052e-01F, 2.324104309e-01F, 2.324570566e-01F, 2.325036824e-01F,
	2.325503081e-01F, 2.325969338e-01F, 2.326435447e-01F, 2.326901704e-01F, 2.327367961e-01F, 2.327834070e-01F, 2.328300327e-01F, 2.328766584e-01F,
	2.329232693e-01F, 2.329698950e-01F, 2.330165058e-01F, 2.330631316e-01F, 2.331097424e-01F, 2.331563532e-01F, 2.332029790e-01F, 2.332495898e-01F,
	2.332962006e-01F, 2.333428115e-01F, 2.333894223e-01F, 2.334360480e-01F, 2.334826589e-01F, 2.335292697e-01F, 2.335758805e-01F, 2.336224914e-01F,
	2.336691022e-01F, 2.337157130e-01F, 2.337623090e-01F, 2.338089198e-01F, 2.338555306e-01F, 2.339021415e-01F, 2.339487523e-01F, 2.339953482e-01F,
	2.340419590e-01F, 2.340885699e-01F, 2.341351658e-01F, 2.341817766e-01F, 2.342283726e-01F, 2.342749834e-01F, 2.343215793e-01F, 2.343681902e-01F,
	2.344147861e-01F, 2.344613820e-01F, 2.345079929e-01F, 2.345545888e-01F, 2.346011847e-01F, 2.346477807e-01F, 2.346943766e-01F, 2.347409874e-01F,
	2.347875834e-01F, 2.348341793e-01F, 2.348807752e-01F, 2.349273711e-01F, 2.349739671e-01F, 2.350205630e-01F, 2.350671440e-01F, 2.351137400e-01F,
	2.351603359e-01F, 2.352069318e-01F, 2.352535129e-01F, 2.353001088e-01F, 2.353467047e-01F, 2.353932858e-01F, 2.354398817e-01F, 2.354864776e-01F,
	2.355330586e-01F, 2.355796546e-01F, 2.356262356e-01F, 2.356728166e-01F, 2.357194126e-01F, 2.357659936e-01F, 2.358125746e-01F, 2.358591706e-01F,
	2.359057516e-01F, 2.359523326e-01F, 2.359989136e-01F, 2.360454947e-01F, 2.360920757e-01F, 2.361386567e-01F, 2.361852378e-01F, 2.362318188e-01F,
	2.362783998e-01F, 2.363249809e-01F, 2.363715619e-01F, 2.364181429e-01F, 2.364647090e-01F, 2.365112901e-01F, 2.365578711e-01F, 2.366044521e-01F,
	2.366510183e-01F, 2.366975993e-01F, 2.367441654e-01F, 2.367907465e-01F, 2.368373126e-01F, 2.368838936e-01F, 2.369304597e-01F, 2.369770408e-01F,
	2.370236069e-01F, 2.370701730e-01F, 2.371167541e-01F, 2.371633202e-01F, 2.372098863e-01F, 2.372564524e-01F, 2.373030186e-01F, 2.373495847e-01F,
	2.373961508e-01F, 2.374427170e-01F, 2.374892831e-01F, 2.375358492e-01F, 2.375824153e-01F, 2.376289815e-01F, 2.376755476e-01F, 2.377221137e-01F,
	2.377686650e-01F, 2.378152311e-01F, 2.378617972e-01F, 2.379083484e-01F, 2.379549146e-01F, 2.380014807e-01F, 2.380480319e-01F, 2.380945981e-01F,
	2.381411493e-01F, 2.381877005e-01F, 2.382342666e-01F, 2.382808179e-01F, 2.383273840e-01F, 2.383739352e-01F, 2.384204865e-01F, 2.384670377e-01F,
	2.385135889e-01F, 2.385601550e-01F, 2.386067063e-01F, 2.386532575e-01F, 2.386998087e-01F, 2.387463599e-01F, 2.387929112e-01F, 2.388394624e-01F,
	2.388859987e-01F, 2.389325500e-01F, 2.389791012e-01F, 2.390256524e-01F, 2.390721887e-01F, 2.391187400e-01F, 2.391652912e-01F, 2.392118275e-01F,
	2.392583787e-01F, 2.393049300e-01F, 2.393514663e-01F, 2.393980175e-01F, 2.394445539e-01F, 2.394910902e-01F, 2.395376414e-01F, 2.395841777e-01F,
	2.396307141e-01F, 2.396772653e-01F, 2.397238016e-01F, 2.397703379e-01F, 2.398168743e-01F, 2.398634106e-01F, 2.399099469e-01F, 2.399564832e-01F,
	2.400030196e-01F, 2.400495559e-01F, 2.400960922e-01F, 2.401426286e-01F, 2.401891649e-01F, 2.402357012e-01F, 2.402822226e-01F, 2.403287590e-01F,
	2.403752953e-01F, 2.404218167e-01F, 2.404683530e-01F, 2.405148894e-01F, 2.405614108e-01F, 2.406079471e-01F, 2.406544685e-01F, 2.407010049e-01F,
	2.407475263e-01F, 2.407940477e-01F, 2.408405840e-01F, 2.408871055e-01F, 2.409336269e-01F, 2.409801483e-01F, 2.410266697e-01F, 2.410732061e-01F,
	2.411197275e-01F, 2.411662489e-01F, 2.412127703e-01F, 2.412592918e-01F, 2.413058132e-01F, 2.413523346e-01F, 2.413988411e-01F, 2.414453626e-01F,
	2.414918840e-01F, 2.415384054e-01F, 2.415849268e-01F, 2.416314334e-01F, 2.416779548e-01F, 2.417244762e-01F, 2.417709827e-01F, 2.418175042e-01F,
	2.418640107e-01F, 2.419105321e-01F, 2.419570386e-01F, 2.420035452e-01F, 2.420500666e-01F, 2.420965731e-01F, 2.421430796e-01F, 2.421896011e-01F,
	2.422361076e-01F, 2.422826141e-01F, 2.423291206e-01F, 2.423756272e-01F, 2.424221337e-01F, 2.424686402e-01F, 2.425151467e-01F, 2.425616533e-01F,
	2.426081598e-01F, 2.426546663e-01F, 2.427011728e-01F, 2.427476645e-01F, 2.427941710e-01F, 2.428406775e-01F, 2.428871840e-01F, 2.429336756e-01F,
	2.429801822e-01F, 2.430266738e-01F, 2.430731803e-01F, 2.431196719e-01F, 2.431661785e-01F, 2.432126701e-01F, 2.432591766e-01F, 2.433056682e-01F,
	2.433521599e-01F, 2.433986664e-01F, 2.434451580e-01F, 2.434916496e-01F, 2.435381413e-01F, 2.435846329e-01F, 2.436311245e-01F, 2.436776161e-01F,
	2.437241077e-01F, 2.437705994e-01F, 2.438170910e-01F, 2.438635826e-01F, 2.439100742e-01F, 2.439565659e-01F, 2.440030575e-01F, 2.440495342e-01F,
	2.440960258e-01F, 2.441425174e-01F, 2.441889942e-01F, 2.442354858e-01F, 2.442819625e-01F, 2.443284541e-01F, 2.443749309e-01F, 2.444214225e-01F,
	2.444678992e-01F, 2.445143908e-01F, 2.445608675e-01F, 2.446073443e-01F, 2.446538210e-01F, 2.447003126e-01F, 2.447467893e-01F, 2.447932661e-01F,
	2.448397428e-01F, 2.448862195e-01F, 2.449326962e-01F, 2.449791729e-01F, 2.450256497e-01F, 2.450721264e-01F, 2.451186031e-01F, 2.451650798e-01F,
	2.452115417e-01F, 2.452580184e-01F, 2.453044951e-01F, 2.453509718e-01F, 2.453974336e-01F, 2.454439104e-01F, 2.454903722e-01F, 2.455368489e-01F,
	2.455833107e-01F, 2.456297874e-01F, 2.456762493e-01F, 2.457227260e-01F, 2.457691878e-01F, 2.458156496e-01F, 2.458621264e-01F, 2.459085882e-01F,
	2.459550500e-01F, 2.460015118e-01F, 2.460479736e-01F, 2.460944355e-01F, 2.461408973e-01F, 2.461873591e-01F, 2.462338209e-01F, 2.462802827e-01F,
	2.463267446e-01F, 2.463732064e-01F, 2.464196682e-01F, 2.464661300e-01F, 2.465125769e-01F, 2.465590388e-01F, 2.466055006e-01F, 2.466519475e-01F,
	2.466984093e-01F, 2.467448562e-01F, 2.467913181e-01F, 2.468377650e-01F, 2.468842268e-01F, 2.469306737e-01F, 2.469771355e-01F, 2.470235825e-01F,
	2.470700294e-01F, 2.471164763e-01F, 2.471629381e-01F, 2.472093850e-01F, 2.472558320e-01F, 2.473022789e-01F, 2.473487258e-01F, 2.473951727e-01F,
	2.474416196e-01F, 2.474880666e-01F, 2.475345135e-01F, 2.475809604e-01F, 2.476273924e-01F, 2.476738393e-01F, 2.477202863e-01F, 2.477667332e-01F,
	2.478131652e-01F, 2.478596121e-01F, 2.479060590e-01F, 2.479524910e-01F, 2.479989380e-01F, 2.480453700e-01F, 2.480918169e-01F, 2.481382489e-01F,
	2.481846809e-01F, 2.482311279e-01F, 2.482775599e-01F, 2.483239919e-01F, 2.483704239e-01F, 2.484168708e-01F, 2.484633029e-01F, 2.485097349e-01F,
	2.485561669e-01F, 2.486025989e-01F, 2.486490309e-01F, 2.486954629e-01F, 2.487418950e-01F, 2.487883121e-01F, 2.488347441e-01F, 2.488811761e-01F,
	2.489276081e-01F, 2.489740402e-01F, 2.490204573e-01F, 2.490668893e-01F, 2.491133064e-01F, 2.491597384e-01F, 2.492061704e-01F, 2.492525876e-01F,
	2.492990047e-01F, 2.493454367e-01F, 2.493918538e-01F, 2.494382858e-01F, 2.494847029e-01F, 2.495311201e-01F, 2.495775372e-01F, 2.496239543e-01F,
	2.496703863e-01F, 2.497168034e-01F, 2.497632205e-01F, 2.498096377e-01F, 2.498560548e-01F, 2.499024719e-01F, 2.499488890e-01F, 2.499952912e-01F,
	2.500417233e-01F, 2.500881255e-01F, 2.501345277e-01F, 2.501809597e-01F, 2.502273619e-01F, 2.502737641e-01F, 2.503201962e-01F, 2.503665984e-01F,
	2.504130006e-01F, 2.504594028e-01F, 2.505058348e-01F, 2.505522370e-01F, 2.505986392e-01F, 2.506450415e-01F, 2.506914437e-01F, 2.507378459e-01F,
	2.507842779e-01F, 2.508306801e-01F, 2.508770823e-01F, 2.509234846e-01F, 2.509698868e-01F, 2.510162890e-01F, 2.510626912e-01F, 2.511090934e-01F,
	2.511554956e-01F, 2.512018979e-01F, 2.512483001e-01F, 2.512946725e-01F, 2.513410747e-01F, 2.513874769e-01F, 2.514338791e-01F, 2.514802814e-01F,
	2.515266836e-01F, 2.515730560e-01F, 2.516194582e-01F, 2.516658604e-01F, 2.517122626e-01F, 2.517586350e-01F, 2.518050373e-01F, 2.518514395e-01F,
	2.518978119e-01F, 2.519442141e-01F, 2.519905865e-01F, 2.520369887e-01F, 2.520833910e-01F, 2.521297634e-01F, 2.521761656e-01F, 2.522225380e-01F,
	2.522689402e-01F, 2.523153126e-01F, 2.523617148e-01F, 2.524080873e-01F, 2.524544597e-01F, 2.525008619e-01F, 2.525472343e-01F, 2.525936067e-01F,
	2.526400089e-01F, 2.526863813e-01F, 2.527327538e-01F, 2.527791560e-01F, 2.528255284e-01F, 2.528719008e-01F, 2.529182732e-01F, 2.529646754e-01F,
	2.530110478e-01F, 2.530574203e-01F, 2.531037927e-01F, 2.531501651e-01F, 2.531965375e-01F, 2.532429099e-01F, 2.532892823e-01F, 2.533356547e-01F,
	2.533820271e-01F, 2.534283996e-01F, 2.534747720e-01F, 2.535211444e-01F, 2.535675168e-01F, 2.536138892e-01F, 2.536602616e-01F, 2.537066340e-01F,
	2.537530065e-01F, 2.537993789e-01F, 2.538457215e-01F, 2.538920939e-01F, 2.539384663e-01F, 2.539848387e-01F, 2.540311813e-01F, 2.540775537e-01F,
	2.541239262e-01F, 2.541702986e-01F, 2.542166412e-01F, 2.542630136e-01F, 2.543093860e-01F, 2.543557286e-01F, 2.544021010e-01F, 2.544484437e-01F,
	2.544948161e-01F, 2.545411587e-01F, 2.545875311e-01F, 2.546338737e-01F, 2.546802461e-01F, 2.547265887e-01F, 2.547729611e-01F, 2.548193038e-01F,
	2.548656464e-01F, 2.549120188e-01F, 2.549583614e-01F, 2.550047040e-01F, 2.550510764e-01F, 2.550974190e-01F, 2.551437616e-01F, 2.551901340e-01F,
	2.552364767e-01F, 2.552828193e-01F, 2.553291619e-01F, 2.553755045e-01F, 2.554218769e-01F, 2.554682195e-01F, 2.555145621e-01F, 2.555609047e-01F,
	2.556072474e-01F, 2.556535900e-01F, 2.556999326e-01F, 2.557462752e-01F, 2.557926178e-01F, 2.558389604e-01F, 2.558853030e-01F, 2.559316456e-01F,
	2.559779882e-01F, 2.560243309e-01F, 2.560706735e-01F, 2.561169863e-01F, 2.561633289e-01F, 2.562096715e-01F, 2.562560141e-01F, 2.563023567e-01F,
	2.563486695e-01F, 2.563950121e-01F, 2.564413548e-01F, 2.564876974e-01F, 2.565340102e-01F, 2.565803528e-01F, 2.566266954e-01F, 2.566730082e-01F,
	2.567193508e-01F, 2.567656636e-01F, 2.568120062e-01F, 2.568583190e-01F, 2.569046617e-01F, 2.569509745e-01F, 2.569973171e-01F, 2.570436299e-01F,
	2.570899725e-01F, 2.571362853e-01F, 2.571826279e-01F, 2.572289407e-01F, 2.572752535e-01F, 2.573215961e-01F, 2.573679090e-01F, 2.574142218e-01F,
	2.574605644e-01F, 2.575068772e-01F, 2.575531900e-01F, 2.575995028e-01F, 2.576458454e-01F, 2.576921582e-01F, 2.577384710e-01F, 2.577847838e-01F,
	2.578310966e-01F, 2.578774095e-01F, 2.579237223e-01F, 2.579700351e-01F, 2.580163479e-01F, 2.580626607e-01F, 2.581090033e-01F, 2.581552863e-01F,
	2.582015991e-01F, 2.582479119e-01F, 2.582942247e-01F, 2.583405375e-01F, 2.583868504e-01F, 2.584331632e-01F, 2.584794760e-01F, 2.585257888e-01F,
	2.585720718e-01F, 2.586183846e-01F, 2.586646974e-01F, 2.587110102e-01F, 2.587572932e-01F, 2.588036060e-01F, 2.588499188e-01F, 2.588962317e-01F,
	2.589425147e-01F, 2.589888275e-01F, 2.590351105e-01F, 2.590814233e-01F, 2.591277361e-01F, 2.591740191e-01F, 2.592203319e-01F, 2.592666149e-01F,
	2.593129277e-01F, 2.593592107e-01F, 2.594054937e-01F, 2.594518065e-01F, 2.594980896e-01F, 2.595444024e-01F, 2.595906854e-01F, 2.596369684e-01F,
	2.596832812e-01F, 2.597295642e-01F, 2.597758472e-01F, 2.598221600e-01F, 2.598684430e-01F, 2.599147260e-01F, 2.599610090e-01F, 2.600072920e-01F,
	2.600536048e-01F, 2.600998878e-01F, 2.601461709e-01F, 2.601924539e-01F, 2.602387369e-01F, 2.602850199e-01F, 2.603313029e-01F, 2.603775859e-01F,
	2.604238689e-01F, 2.604701519e-01F, 2.605164349e-01F, 2.605627179e-01F, 2.606090009e-01F, 2.606552839e-01F, 2.607015669e-01F, 2.607478499e-01F,
	2.607941031e-01F, 2.608403862e-01F, 2.608866692e-01F, 2.609329522e-01F, 2.609792352e-01F, 2.610254884e-01F, 2.610717714e-01F, 2.611180544e-01F,
	2.611643374e-01F, 2.612105906e-01F, 2.612568736e-01F, 2.613031268e-01F, 2.613494098e-01F, 2.613956928e-01F, 2.614419460e-01F, 2.614882290e-01F,
	2.615344822e-01F, 2.615807652e-01F, 2.616270185e-01F, 2.616733015e-01F, 2.617195547e-01F, 2.617658377e-01F, 2.618120909e-01F, 2.618583441e-01F,
	2.619046271e-01F, 2.619508803e-01F, 2.619971335e-01F, 2.620434165e-01F, 2.620896697e-01F, 2.621359229e-01F, 2.621821761e-01F, 2.622284591e-01F,
	2.622747123e-01F, 2.623209655e-01F, 2.623672187e-01F, 2.624134719e-01F, 2.624597251e-01F, 2.625060081e-01F, 2.625522614e-01F, 2.625985146e-01F,
	2.626447678e-01F, 2.626910210e-01F, 2.627372742e-01F, 2.627835274e-01F, 2.628297806e-01F, 2.628760338e-01F, 2.629222572e-01F, 2.629685104e-01F,
	2.630147636e-01F, 2.630610168e-01F, 2.631072700e-01F, 2.631535232e-01F, 2.631997764e-01F, 2.632459998e-01F, 2.632922530e-01F, 2.633385062e-01F,
	2.633847296e-01F, 2.634309828e-01F, 2.634772360e-01F, 2.635234594e-01F, 2.635697126e-01F, 2.636159658e-01F, 2.636621892e-01F, 2.637084424e-01F,
	2.637546659e-01F, 2.638009191e-01F, 2.638471425e-01F, 2.638933957e-01F, 2.639396191e-01F, 2.639858723e-01F, 2.640320957e-01F, 2.640783489e-01F,
	2.641245723e-01F, 2.641707957e-01F, 2.642170489e-01F, 2.642632723e-01F, 2.643094957e-01F, 2.643557489e-01F, 2.644019723e-01F, 2.644481957e-01F,
	2.644944191e-01F, 2.645406723e-01F, 2.645868957e-01F, 2.646331191e-01F, 2.646793425e-01F, 2.647255659e-01F, 2.647717893e-01F, 2.648180127e-01F,
	2.648642361e-01F, 2.649104893e-01F, 2.649567127e-01F, 2.650029361e-01F, 2.650491595e-01F, 2.650953531e-01F, 2.651415765e-01F, 2.651877999e-01F,
	2.652340233e-01F, 2.652802467e-01F, 2.653264701e-01F, 2.653726935e-01F, 2.654189169e-01F, 2.654651105e-01F, 2.655113339e-01F, 2.655575573e-01F,
	2.656037807e-01F, 2.656499743e-01F, 2.656961977e-01F, 2.657424212e-01F, 2.657886147e-01F, 2.658348382e-01F, 2.658810616e-01F, 2.659272552e-01F,
	2.659734786e-01F, 2.660196722e-01F, 2.660658956e-01F, 2.661120892e-01F, 2.661583126e-01F, 2.662045062e-01F, 2.662507296e-01F, 2.662969232e-01F,
	2.663431466e-01F, 2.663893402e-01F, 2.664355338e-01F, 2.664817572e-01F, 2.665279508e-01F, 2.665741444e-01F, 2.666203678e-01F, 2.666665614e-01F,
	2.667127550e-01F, 2.667589486e-01F, 2.668051720e-01F, 2.668513656e-01F, 2.668975592e-01F, 2.669437528e-01F, 2.669899464e-01F, 2.670361400e-01F,
	2.670823336e-01F, 2.671285272e-01F, 2.671747208e-01F, 2.672209144e-01F, 2.672671080e-01F, 2.673133016e-01F, 2.673594952e-01F, 2.674056888e-01F,
	2.674518824e-01F, 2.674980760e-01F, 2.675442696e-01F, 2.675904632e-01F, 2.676366568e-01F, 2.676828206e-01F, 2.677290142e-01F, 2.677752078e-01F,
	2.678214014e-01F, 2.678675652e-01F, 2.679137588e-01F, 2.679599524e-01F, 2.680061162e-01F, 2.680523098e-01F, 2.680985034e-01F, 2.681446671e-01F,
	2.681908607e-01F, 2.682370245e-01F, 2.682832181e-01F, 2.683293819e-01F, 2.683755755e-01F, 2.684217393e-01F, 2.684679329e-01F, 2.685140967e-01F,
	2.685602903e-01F, 2.686064541e-01F, 2.686526477e-01F, 2.686988115e-01F, 2.687449753e-01F, 2.687911689e-01F, 2.688373327e-01F, 2.688834965e-01F,
	2.689296603e-01F, 2.689758539e-01F, 2.690220177e-01F, 2.690681815e-01F, 2.691143453e-01F, 2.691605091e-01F, 2.692066729e-01F, 2.692528367e-01F,
	2.692990303e-01F, 2.693451941e-01F, 2.693913579e-01F, 2.694375217e-01F, 2.694836855e-01F, 2.695298493e-01F, 2.695760131e-01F, 2.696221769e-01F,
	2.696683109e-01F, 2.697144747e-01F, 2.697606385e-01F, 2.698068023e-01F, 2.698529661e-01F, 2.698991299e-01F, 2.699452937e-01F, 2.699914277e-01F,
	2.700375915e-01F, 2.700837553e-01F, 2.701299191e-01F, 2.701760530e-01F, 2.702222168e-01F, 2.702683806e-01F, 2.703145146e-01F, 2.703606784e-01F,
	2.704068124e-01F, 2.704529762e-01F, 2.704991102e-01F, 2.705452740e-01F, 2.705914080e-01F, 2.706375718e-01F, 2.706837058e-01F, 2.707298696e-01F,
	2.707760036e-01F, 2.708221674e-01F, 2.708683014e-01F, 2.709144354e-01F, 2.709605992e-01F, 2.710067332e-01F, 2.710528672e-01F, 2.710990310e-01F,
	2.711451650e-01F, 2.711912990e-01F, 2.712374330e-01F, 2.712835670e-01F, 2.713297307e-01F, 2.713758647e-01F, 2.714219987e-01F, 2.714681327e-01F,
	2.715142667e-01F, 2.715604007e-01F, 2.716065347e-01F, 2.716526687e-01F, 2.716988027e-01F, 2.717449367e-01F, 2.717910707e-01F, 2.718372047e-01F,
	2.718833387e-01F, 2.719294727e-01F, 2.719756067e-01F, 2.720217407e-01F, 2.720678449e-01F, 2.721139789e-01F, 2.721601129e-01F, 2.722062469e-01F,
	2.722523808e-01F, 2.722984850e-01F, 2.723446190e-01F, 2.723907530e-01F, 2.724368572e-01F, 2.724829912e-01F, 2.725291252e-01F, 2.725752294e-01F,
	2.726213634e-01F, 2.726674676e-01F, 2.727136016e-01F, 2.727597058e-01F, 2.728058398e-01F, 2.728519440e-01F, 2.728980780e-01F, 2.729441822e-01F,
	2.729903162e-01F, 2.730364203e-01F, 2.730825245e-01F, 2.731286585e-01F, 2.731747627e-01F, 2.732208669e-01F, 2.732670009e-01F, 2.733131051e-01F,
	2.733592093e-01F, 2.734053135e-01F, 2.734514475e-01F, 2.734975517e-01F, 2.735436559e-01F, 2.735897601e-01F, 2.736358643e-01F, 2.736819685e-01F,
	2.737280726e-01F, 2.737741768e-01F, 2.738202810e-01F, 2.738663852e-01F, 2.739124894e-01F, 2.739585936e-01F, 2.740046978e-01F, 2.740508020e-01F,
	2.740969062e-01F, 2.741430104e-01F, 2.741891146e-01F, 2.742352188e-01F, 2.742813230e-01F, 2.743273973e-01F, 2.743735015e-01F, 2.744196057e-01F,
	2.744657099e-01F, 2.745117843e-01F, 2.745578885e-01F, 2.746039927e-01F, 2.746500671e-01F, 2.746961713e-01F, 2.747422755e-01F, 2.747883499e-01F,
	2.748344541e-01F, 2.748805285e-01F, 2.749266326e-01F, 2.749727070e-01F, 2.750188112e-01F, 2.750648856e-01F, 2.751109898e-01F, 2.751570642e-01F,
	2.752031386e-01F, 2.752492428e-01F, 2.752953172e-01F, 2.753414214e-01F, 2.753874958e-01F, 2.754335701e-01F, 2.754796445e-01F, 2.755257487e-01F,
	2.755718231e-01F, 2.756178975e-01F, 2.756639719e-01F, 2.757100463e-01F, 2.757561505e-01F, 2.758022249e-01F, 2.758482993e-01F, 2.758943737e-01F,
	2.759404480e-01F, 2.759865224e-01F, 2.760325968e-01F, 2.760786712e-01F, 2.761247456e-01F, 2.761708200e-01F, 2.762168944e-01F, 2.762629688e-01F,
	2.763090432e-01F, 2.763550878e-01F, 2.764011621e-01F, 2.764472365e-01F, 2.764933109e-01F, 2.765393853e-01F, 2.765854299e-01F, 2.766315043e-01F,
	2.766775787e-01F, 2.767236531e-01F, 2.767696977e-01F, 2.768157721e-01F, 2.768618464e-01F, 2.769078910e-01F, 2.769539654e-01F, 2.770000100e-01F,
	2.770460844e-01F, 2.770921290e-01F, 2.771382034e-01F, 2.771842480e-01F, 2.772303224e-01F, 2.772763669e-01F, 2.773224413e-01F, 2.773684859e-01F,
	2.774145305e-01F, 2.774606049e-01F, 2.775066495e-01F, 2.775526941e-01F, 2.775987685e-01F, 2.776448131e-01F, 2.776908576e-01F, 2.777369022e-01F,
	2.777829766e-01F, 2.778290212e-01F, 2.778750658e-01F, 2.779211104e-01F, 2.779671550e-01F, 2.780131996e-01F, 2.780592442e-01F, 2.781052887e-01F,
	2.781513631e-01F, 2.781974077e-01F, 2.782434523e-01F, 2.782894671e-01F, 2.783355117e-01F, 2.783815563e-01F, 2.784276009e-01F, 2.784736454e-01F,
	2.785196900e-01F, 2.785657346e-01F, 2.786117792e-01F, 2.786577940e-01F, 2.787038386e-01F, 2.787498832e-01F, 2.787959278e-01F, 2.788419425e-01F,
	2.788879871e-01F, 2.789340317e-01F, 2.789800465e-01F, 2.790260911e-01F, 2.790721357e-01F, 2.791181505e-01F, 2.791641951e-01F, 2.792102098e-01F,
	2.792562544e-01F, 2.793022692e-01F, 2.793483138e-01F, 2.793943286e-01F, 2.794403732e-01F, 2.794863880e-01F, 2.795324028e-01F, 2.795784473e-01F,
	2.796244621e-01F, 2.796704769e-01F, 2.797165215e-01F, 2.797625363e-01F, 2.798085511e-01F, 2.798545957e-01F, 2.799006104e-01F, 2.799466252e-01F,
	2.799926400e-01F, 2.800386548e-01F, 2.800846696e-01F, 2.801306844e-01F, 2.801767290e-01F, 2.802227437e-01F, 2.802687585e-01F, 2.803147733e-01F,
	2.803607881e-01F, 2.804068029e-01F, 2.804528177e-01F, 2.804988325e-01F, 2.805448174e-01F, 2.805908322e-01F, 2.806368470e-01F, 2.806828618e-01F,
	2.807288766e-01F, 2.807748914e-01F, 2.808208764e-01F, 2.808668911e-01F, 2.809129059e-01F, 2.809589207e-01F, 2.810049057e-01F, 2.810509205e-01F,
	2.810969353e-01F, 2.811429203e-01F, 2.811889350e-01F, 2.812349498e-01F, 2.812809348e-01F, 2.813269496e-01F, 2.813729346e-01F, 2.814189494e-01F,
	2.814649343e-01F, 2.815109491e-01F, 2.815569341e-01F, 2.816029191e-01F, 2.816489339e-01F, 2.816949189e-01F, 2.817409337e-01F, 2.817869186e-01F,
	2.818329036e-01F, 2.818788886e-01F, 2.819249034e-01F, 2.819708884e-01F, 2.820168734e-01F, 2.820628583e-01F, 2.821088731e-01F, 2.821548581e-01F,
	2.822008431e-01F, 2.822468281e-01F, 2.822928131e-01F, 2.823387980e-01F, 2.823847830e-01F, 2.824307680e-01F, 2.824767530e-01F, 2.825227380e-01F,
	2.825687230e-01F, 2.826147079e-01F, 2.826606929e-01F, 2.827066779e-01F, 2.827526629e-01F, 2.827986479e-01F, 2.828446031e-01F, 2.828905880e-01F,
	2.829365730e-01F, 2.829825580e-01F, 2.830285132e-01F, 2.830744982e-01F, 2.831204832e-01F, 2.831664383e-01F, 2.832124233e-01F, 2.832584083e-01F,
	2.833043635e-01F, 2.833503485e-01F, 2.833963335e-01F, 2.834422886e-01F, 2.834882736e-01F, 2.835342288e-01F, 2.835802138e-01F, 2.836261690e-01F,
	2.836721241e-01F, 2.837181091e-01F, 2.837640643e-01F, 2.838100493e-01F, 2.838560045e-01F, 2.839019597e-01F, 2.839479446e-01F, 2.839938998e-01F,
	2.840398550e-01F, 2.840858102e-01F, 2.841317952e-01F, 2.841777503e-01F, 2.842237055e-01F, 2.842696607e-01F, 2.843156159e-01F, 2.843615711e-01F,
	2.844075263e-01F, 2.844534814e-01F, 2.844994366e-01F, 2.845453918e-01F, 2.845913470e-01F, 2.846373022e-01F, 2.846832573e-01F, 2.847292125e-01F,
	2.847751677e-01F, 2.848211229e-01F, 2.848670781e-01F, 2.849130332e-01F, 2.849589884e-01F, 2.850049138e-01F, 2.850508690e-01F, 2.850968242e-01F,
	2.851427794e-01F, 2.851887047e-01F, 2.852346599e-01F, 2.852806151e-01F, 2.853265405e-01F, 2.853724957e-01F, 2.854184508e-01F, 2.854643762e-01F,
	2.855103314e-01F, 2.855562568e-01F, 2.856022120e-01F, 2.856481373e-01F, 2.856940925e-01F, 2.857400179e-01F, 2.857859731e-01F, 2.858318985e-01F,
	2.858778238e-01F, 2.859237790e-01F, 2.859697044e-01F, 2.860156298e-01F, 2.860615849e-01F, 2.861075103e-01F, 2.861534357e-01F, 2.861993611e-01F,
	2.862453163e-01F, 2.862912416e-01F, 2.863371670e-01F, 2.863830924e-01F, 2.864290178e-01F, 2.864749432e-01F, 2.865208685e-01F, 2.865667939e-01F,
	2.866127193e-01F, 2.866586447e-01F, 2.867045701e-01F, 2.867504954e-01F, 2.867964208e-01F, 2.868423462e-01F, 2.868882716e-01F, 2.869341969e-01F,
	2.869801223e-01F, 2.870260477e-01F, 2.870719433e-01F, 2.871178687e-01F, 2.871637940e-01F, 2.872097194e-01F, 2.872556150e-01F, 2.873015404e-01F,
	2.873474658e-01F, 2.873933613e-01F, 2.874392867e-01F, 2.874852121e-01F, 2.875311077e-01F, 2.875770330e-01F, 2.876229286e-01F, 2.876688540e-01F,
	2.877147496e-01F, 2.877606750e-01F, 2.878065705e-01F, 2.878524959e-01F, 2.878983915e-01F, 2.879442871e-01F, 2.879902124e-01F, 2.880361080e-01F,
	2.880820334e-01F, 2.881279290e-01F, 2.881738245e-01F, 2.882197201e-01F, 2.882656455e-01F, 2.883115411e-01F, 2.883574367e-01F, 2.884033322e-01F,
	2.884492278e-01F, 2.884951234e-01F, 2.885410190e-01F, 2.885869443e-01F, 2.886328399e-01F, 2.886787355e-01F, 2.887246311e-01F, 2.887705266e-01F,
	2.888164222e-01F, 2.888622880e-01F, 2.889081836e-01F, 2.889540792e-01F, 2.889999747e-01F, 2.890458703e-01F, 2.890917659e-01F, 2.891376615e-01F,
	2.891835272e-01F, 2.892294228e-01F, 2.892753184e-01F, 2.893212140e-01F, 2.893670797e-01F, 2.894129753e-01F, 2.894588709e-01F, 2.895047367e-01F,
	2.895506322e-01F, 2.895964980e-01F, 2.896423936e-01F, 2.896882892e-01F, 2.897341549e-01F, 2.897800505e-01F, 2.898259163e-01F, 2.898717821e-01F,
	2.899176776e-01F, 2.899635434e-01F, 2.900094390e-01F, 2.900553048e-01F, 2.901011705e-01F, 2.901470661e-01F, 2.901929319e-01F, 2.902387977e-01F,
	2.902846634e-01F, 2.903305590e-01F, 2.903764248e-01F, 2.904222906e-01F, 2.904681563e-01F, 2.905140221e-01F, 2.905598879e-01F, 2.906057835e-01F,
	2.906516492e-01F, 2.906975150e-01F, 2.907433808e-01F, 2.907892466e-01F, 2.908351123e-01F, 2.908809781e-01F, 2.909268439e-01F, 2.909726799e-01F,
	2.910185456e-01F, 2.910644114e-01F, 2.911102772e-01F, 2.911561430e-01F, 2.912020087e-01F, 2.912478447e-01F, 2.912937105e-01F, 2.913395762e-01F,
	2.913854420e-01F, 2.914312780e-01F, 2.914771438e-01F, 2.915230095e-01F, 2.915688455e-01F, 2.916147113e-01F, 2.916605473e-01F, 2.917064130e-01F,
	2.917522490e-01F, 2.917981148e-01F, 2.918439507e-01F, 2.918898165e-01F, 2.919356525e-01F, 2.919815183e-01F, 2.920273542e-01F, 2.920732200e-01F,
	2.921190560e-01F, 2.921648920e-01F, 2.922107577e-01F, 2.922565937e-01F, 2.923024297e-01F, 2.923482656e-01F, 2.923941016e-01F, 2.924399674e-01F,
	2.924858034e-01F, 2.925316393e-01F, 2.925774753e-01F, 2.926233113e-01F, 2.926691473e-01F, 2.927149832e-01F, 2.927608192e-01F, 2.928066552e-01F,
	2.928524911e-01F, 2.928983271e-01F, 2.929441631e-01F, 2.929899991e-01F, 2.930358350e-01F, 2.930816710e-01F, 2.931275070e-01F, 2.931733429e-01F,
	2.932191491e-01F, 2.932649851e-01F, 2.933108211e-01F, 2.933566570e-01F, 2.934024632e-01F, 2.934482992e-01F, 2.934941351e-01F, 2.935399413e-01F,
	2.935857773e-01F, 2.936316133e-01F, 2.936774194e-01F, 2.937232554e-01F, 2.937690616e-01F, 2.938148975e-01F, 2.938607037e-01F, 2.939065397e-01F,
	2.939523458e-01F, 2.939981818e-01F, 2.940439880e-01F, 2.940897942e-01F, 2.941356301e-01F, 2.941814363e-01F, 2.942272425e-01F, 2.942730784e-01F,
	2.943188846e-01F, 2.943646908e-01F, 2.944104970e-01F, 2.944563329e-01F, 2.945021391e-01F, 2.945479453e-01F, 2.945937514e-01F, 2.946395576e-01F,
	2.946853638e-01F, 2.947311699e-01F, 2.947769761e-01F, 2.948227823e-01F, 2.948685884e-01F, 2.949143946e-01F, 2.949602008e-01F, 2.950060070e-01F,
	2.950518131e-01F, 2.950976193e-01F, 2.951434255e-01F, 2.951892316e-01F, 2.952350080e-01F, 2.952808142e-01F, 2.953266203e-01F, 2.953724265e-01F,
	2.954182029e-01F, 2.954640090e-01F, 2.955098152e-01F, 2.955555916e-01F, 2.956013978e-01F, 2.956472039e-01F, 2.956929803e-01F, 2.957387865e-01F,
	2.957845628e-01F, 2.958303690e-01F, 2.958761454e-01F, 2.959219515e-01F, 2.959677279e-01F, 2.960135341e-01F, 2.960593104e-01F, 2.961050868e-01F,
	2.961508930e-01F, 2.961966693e-01F, 2.962424457e-01F, 2.962882519e-01F, 2.963340282e-01F, 2.963798046e-01F, 2.964255810e-01F, 2.964713871e-01F,
	2.965171635e-01F, 2.965629399e-01F, 2.966087162e-01F, 2.966544926e-01F, 2.967002690e-01F, 2.967460454e-01F, 2.967918217e-01F, 2.968375981e-01F,
	2.968833745e-01F, 2.969291508e-01F, 2.969749272e-01F, 2.970207036e-01F, 2.970664799e-01F, 2.971122563e-01F, 2.971580327e-01F, 2.972038090e-01F,
	2.972495556e-01F, 2.972953320e-01F, 2.973411083e-01F, 2.973868847e-01F, 2.974326313e-01F, 2.974784076e-01F, 2.975241840e-01F, 2.975699306e-01F,
	2.976157069e-01F, 2.976614833e-01F, 2.977072299e-01F, 2.977530062e-01F, 2.977987528e-01F, 2.978445292e-01F, 2.978902757e-01F, 2.979360521e-01F,
	2.979817986e-01F, 2.980275750e-01F, 2.980733216e-01F, 2.981190681e-01F, 2.981648445e-01F, 2.982105911e-01F, 2.982563376e-01F, 2.983021140e-01F,
	2.983478606e-01F, 2.983936071e-01F, 2.984393537e-01F, 2.984851003e-01F, 2.985308766e-01F, 2.985766232e-01F, 2.986223698e-01F, 2.986681163e-01F,
	2.987138629e-01F, 2.987596095e-01F, 2.988053560e-01F, 2.988511026e-01F, 2.988968492e-01F, 2.989425957e-01F, 2.989883423e-01F, 2.990340889e-01F,
	2.990798354e-01F, 2.991255820e-01F, 2.991712987e-01F, 2.992170453e-01F, 2.992627919e-01F, 2.993085384e-01F, 2.993542850e-01F, 2.994000018e-01F,
	2.994457483e-01F, 2.994914949e-01F, 2.995372117e-01F, 2.995829582e-01F, 2.996286750e-01F, 2.996744215e-01F, 2.997201681e-01F, 2.997658849e-01F,
	2.998116314e-01F, 2.998573482e-01F, 2.999030948e-01F, 2.999488115e-01F, 2.999945581e-01F, 3.000402749e-01F, 3.000859916e-01F, 3.001317382e-01F,
	3.001774549e-01F, 3.002231717e-01F, 3.002689183e-01F, 3.003146350e-01F, 3.003603518e-01F, 3.004060686e-01F, 3.004517853e-01F, 3.004975319e-01F,
	3.005432487e-01F, 3.005889654e-01F, 3.006346822e-01F, 3.006803989e-01F, 3.007261157e-01F, 3.007718325e-01F, 3.008175492e-01F, 3.008632660e-01F,
	3.009089828e-01F, 3.009546995e-01F, 3.010004163e-01F, 3.010461330e-01F, 3.010918498e-01F, 3.011375666e-01F, 3.011832535e-01F, 3.012289703e-01F,
	3.012746871e-01F, 3.013204038e-01F, 3.013660908e-01F, 3.014118075e-01F, 3.014575243e-01F, 3.015032113e-01F, 3.015489280e-01F, 3.015946448e-01F,
	3.016403317e-01F, 3.016860485e-01F, 3.017317355e-01F, 3.017774522e-01F, 3.018231392e-01F, 3.018688560e-01F, 3.019145429e-01F, 3.019602597e-01F,
	3.020059466e-01F, 3.020516336e-01F, 3.020973504e-01F, 3.021430373e-01F, 3.021887243e-01F, 3.022344410e-01F, 3.022801280e-01F, 3.023258150e-01F,
	3.023715019e-01F, 3.024172187e-01F, 3.024629056e-01F, 3.025085926e-01F, 3.025542796e-01F, 3.025999665e-01F, 3.026456535e-01F, 3.026913404e-01F,
	3.027370274e-01F, 3.027827144e-01F, 3.028284013e-01F, 3.028740883e-01F, 3.029197752e-01F, 3.029654622e-01F, 3.030111492e-01F, 3.030568361e-01F,
	3.031025231e-01F, 3.031482100e-01F, 3.031938672e-01F, 3.032395542e-01F, 3.032852411e-01F, 3.033309281e-01F, 3.033765852e-01F, 3.034222722e-01F,
	3.034679592e-01F, 3.035136163e-01F, 3.035593033e-01F, 3.036049604e-01F, 3.036506474e-01F, 3.036963046e-01F, 3.037419915e-01F, 3.037876487e-01F,
	3.038333356e-01F, 3.038789928e-01F, 3.039246798e-01F, 3.039703369e-01F, 3.040160239e-01F, 3.040616810e-01F, 3.041073382e-01F, 3.041530252e-01F,
	3.041986823e-01F, 3.042443395e-01F, 3.042899966e-01F, 3.043356836e-01F, 3.043813407e-01F, 3.044269979e-01F, 3.044726551e-01F, 3.045183122e-01F,
	3.045639694e-01F, 3.046096265e-01F, 3.046552837e-01F, 3.047009408e-01F, 3.047465980e-01F, 3.047922552e-01F, 3.048379123e-01F, 3.048835695e-01F,
	3.049292266e-01F, 3.049748838e-01F, 3.050205410e-01F, 3.050661981e-01F, 3.051118255e-01F, 3.051574826e-01F, 3.052031398e-01F, 3.052487969e-01F,
	3.052944243e-01F, 3.053400815e-01F, 3.053857386e-01F, 3.054313660e-01F, 3.054770231e-01F, 3.055226803e-01F, 3.055683076e-01F, 3.056139648e-01F,
	3.056595922e-01F, 3.057052493e-01F, 3.057508767e-01F, 3.057965338e-01F, 3.058421612e-01F, 3.058878183e-01F, 3.059334457e-01F, 3.059790730e-01F,
	3.060247302e-01F, 3.060703576e-01F, 3.061159849e-01F, 3.061616421e-01F, 3.062072694e-01F, 3.062528968e-01F, 3.062985241e-01F, 3.063441515e-01F,
	3.063898087e-01F, 3.064354360e-01F, 3.064810634e-01F, 3.065266907e-01F, 3.065723181e-01F, 3.066179454e-01F, 3.066635728e-01F, 3.067092001e-01F,
	3.067548275e-01F, 3.068004549e-01F, 3.068460822e-01F, 3.068917096e-01F, 3.069373071e-01F, 3.069829345e-01F, 3.070285618e-01F, 3.070741892e-01F,
	3.071198165e-01F, 3.071654141e-01F, 3.072110415e-01F, 3.072566688e-01F, 3.073022962e-01F, 3.073478937e-01F, 3.073935211e-01F, 3.074391186e-01F,
	3.074847460e-01F, 3.075303733e-01F, 3.075759709e-01F, 3.076215982e-01F, 3.076671958e-01F, 3.077128232e-01F, 3.077584207e-01F, 3.078040183e-01F,
	3.078496456e-01F, 3.078952432e-01F, 3.079408705e-01F, 3.079864681e-01F, 3.080320656e-01F, 3.080776632e-01F, 3.081232905e-01F, 3.081688881e-01F,
	3.082144856e-01F, 3.082600832e-01F, 3.083056808e-01F, 3.083513081e-01F, 3.083969057e-01F, 3.084425032e-01F, 3.084881008e-01F, 3.085336983e-01F,
	3.085792959e-01F, 3.086248934e-01F, 3.086704910e-01F, 3.087160885e-01F, 3.087616861e-01F, 3.088072836e-01F, 3.088528514e-01F, 3.088984489e-01F,
	3.089440465e-01F, 3.089896441e-01F, 3.090352416e-01F, 3.090808094e-01F, 3.091264069e-01F, 3.091720045e-01F, 3.092175722e-01F, 3.092631698e-01F,
	3.093087673e-01F, 3.093543351e-01F, 3.093999326e-01F, 3.094455302e-01F, 3.094910979e-01F, 3.095366955e-01F, 3.095822632e-01F, 3.096278608e-01F,
	3.096734285e-01F, 3.097189963e-01F, 3.097645938e-01F, 3.098101616e-01F, 3.098557293e-01F, 3.099013269e-01F, 3.099468946e-01F, 3.099924624e-01F,
	3.100380599e-01F, 3.100836277e-01F, 3.101291955e-01F, 3.101747632e-01F, 3.102203310e-01F, 3.102658987e-01F, 3.103114963e-01F, 3.103570640e-01F,
	3.104026318e-01F, 3.104481995e-01F, 3.104937673e-01F, 3.105393350e-01F, 3.105849028e-01F, 3.106304705e-01F, 3.106760383e-01F, 3.107215762e-01F,
	3.107671440e-01F, 3.108127117e-01F, 3.108582795e-01F, 3.109038472e-01F, 3.109494150e-01F, 3.109949529e-01F, 3.110405207e-01F, 3.110860884e-01F,
	3.111316264e-01F, 3.111771941e-01F, 3.112227619e-01F, 3.112682998e-01F, 3.113138676e-01F, 3.113594055e-01F, 3.114049733e-01F, 3.114505112e-01F,
	3.114960790e-01F, 3.115416169e-01F, 3.115871847e-01F, 3.116327226e-01F, 3.116782904e-01F, 3.117238283e-01F, 3.117693663e-01F, 3.118149340e-01F,
	3.118604720e-01F, 3.119060099e-01F, 3.119515479e-01F, 3.119971156e-01F, 3.120426536e-01F, 3.120881915e-01F, 3.121337295e-01F, 3.121792674e-01F,
	3.122248054e-01F, 3.122703433e-01F, 3.123158813e-01F, 3.123614192e-01F, 3.124069571e-01F, 3.124524951e-01F, 3.124980330e-01F, 3.125435710e-01F,
	3.125891089e-01F, 3.126346469e-01F, 3.126801848e-01F, 3.127257228e-01F, 3.127712607e-01F, 3.128167689e-01F, 3.128623068e-01F, 3.129078448e-01F,
	3.129533827e-01F, 3.129988909e-01F, 3.130444288e-01F, 3.130899668e-01F, 3.131354749e-01F, 3.131810129e-01F, 3.132265210e-01F, 3.132720590e-01F,
	3.133175671e-01F, 3.133631051e-01F, 3.134086132e-01F, 3.134541512e-01F, 3.134996593e-01F, 3.135451972e-01F, 3.135907054e-01F, 3.136362135e-01F,
	3.136817515e-01F, 3.137272596e-01F, 3.137727678e-01F, 3.138182759e-01F, 3.138638139e-01F, 3.139093220e-01F, 3.139548302e-01F, 3.140003383e-01F,
	3.140458465e-01F, 3.140913546e-01F, 3.141368926e-01F, 3.141824007e-01F, 3.142279088e-01F, 3.142734170e-01F, 3.143189251e-01F, 3.143644333e-01F,
	3.144099414e-01F, 3.144554198e-01F, 3.145009279e-01F, 3.145464361e-01F, 3.145919442e-01F, 3.146374524e-01F, 3.146829605e-01F, 3.147284389e-01F,
	3.147739470e-01F, 3.148194551e-01F, 3.148649633e-01F, 3.149104416e-01F, 3.149559498e-01F, 3.150014281e-01F, 3.150469363e-01F, 3.150924444e-01F,
	3.151379228e-01F, 3.151834309e-01F, 3.152289093e-01F, 3.152744174e-01F, 3.153198957e-01F, 3.153654039e-01F, 3.154108822e-01F, 3.154563606e-01F,
	3.155018687e-01F, 3.155473471e-01F, 3.155928254e-01F, 3.156383336e-01F, 3.156838119e-01F, 3.157292902e-01F, 3.157747686e-01F, 3.158202767e-01F,
	3.158657551e-01F, 3.159112334e-01F, 3.159567118e-01F, 3.160021901e-01F, 3.160476685e-01F, 3.160931468e-01F, 3.161386251e-01F, 3.161841035e-01F,
	3.162295818e-01F, 3.162750602e-01F, 3.163205385e-01F, 3.163660169e-01F, 3.164114952e-01F, 3.164569736e-01F, 3.165024221e-01F, 3.165479004e-01F,
	3.165933788e-01F, 3.166388571e-01F, 3.166843057e-01F, 3.167297840e-01F, 3.167752624e-01F, 3.168207109e-01F, 3.168661892e-01F, 3.169116676e-01F,
	3.169571161e-01F, 3.170025945e-01F, 3.170480430e-01F, 3.170935214e-01F, 3.171389699e-01F, 3.171844482e-01F, 3.172298968e-01F, 3.172753453e-01F,
	3.173208237e-01F, 3.173662722e-01F, 3.174117506e-01F, 3.174571991e-01F, 3.175026476e-01F, 3.175480962e-01F, 3.175935745e-01F, 3.176390231e-01F,
	3.176844716e-01F, 3.177299201e-01F, 3.177753687e-01F, 3.178208172e-01F, 3.178662658e-01F, 3.179117441e-01F, 3.179571927e-01F, 3.180026412e-01F,
	3.180480897e-01F, 3.180935383e-01F, 3.181389570e-01F, 3.181844056e-01F, 3.182298541e-01F, 3.182753026e-01F, 3.183207512e-01F, 3.183661997e-01F,
	3.184116483e-01F, 3.184570670e-01F, 3.185025156e-01F, 3.185479641e-01F, 3.185934126e-01F, 3.186388314e-01F, 3.186842799e-01F, 3.187296987e-01F,
	3.187751472e-01F, 3.188205957e-01F, 3.188660145e-01F, 3.189114630e-01F, 3.189568818e-01F, 3.190023303e-01F, 3.190477490e-01F, 3.190931678e-01F,
	3.191386163e-01F, 3.191840351e-01F, 3.192294836e-01F, 3.192749023e-01F, 3.193203211e-01F, 3.193657398e-01F, 3.194111884e-01F, 3.194566071e-01F,
	3.195020258e-01F, 3.195474446e-01F, 3.195928633e-01F, 3.196383119e-01F, 3.196837306e-01F, 3.197291493e-01F, 3.197745681e-01F, 3.198199868e-01F,
	3.198654056e-01F, 3.199108243e-01F, 3.199562430e-01F, 3.200016618e-01F, 3.200470805e-01F, 3.200924993e-01F, 3.201378882e-01F, 3.201833069e-01F,
	3.202287257e-01F, 3.202741444e-01F, 3.203195632e-01F, 3.203649521e-01F, 3.204103708e-01F, 3.204557896e-01F, 3.205011785e-01F, 3.205465972e-01F,
	3.205920160e-01F, 3.206374049e-01F, 3.206828237e-01F, 3.207282126e-01F, 3.207736313e-01F, 3.208190203e-01F, 3.208644390e-01F, 3.209098279e-01F,
	3.209552467e-01F, 3.210006356e-01F, 3.210460246e-01F, 3.210914433e-01F, 3.211368322e-01F, 3.211822212e-01F, 3.212276101e-01F, 3.212730289e-01F,
	3.213184178e-01F, 3.213638067e-01F, 3.214091957e-01F, 3.214545846e-01F, 3.215000033e-01F, 3.215453923e-01F, 3.215907812e-01F, 3.216361701e-01F,
	3.216815591e-01F, 3.217269480e-01F, 3.217723370e-01F, 3.218177259e-01F, 3.218631148e-01F, 3.219084740e-01F, 3.219538629e-01F, 3.219992518e-01F,
	3.220446408e-01F, 3.220900297e-01F, 3.221353889e-01F, 3.221807778e-01F, 3.222261667e-01F, 3.222715557e-01F, 3.223169148e-01F, 3.223623037e-01F,
	3.224076927e-01F, 3.224530518e-01F, 3.224984407e-01F, 3.225437999e-01F, 3.225891888e-01F, 3.226345479e-01F, 3.226799369e-01F, 3.227252960e-01F,
	3.227706850e-01F, 3.228160441e-01F, 3.228614032e-01F, 3.229067922e-01F, 3.229521513e-01F, 3.229975104e-01F, 3.230428994e-01F, 3.230882585e-01F,
	3.231336176e-01F, 3.231789768e-01F, 3.232243359e-01F, 3.232697248e-01F, 3.233150840e-01F, 3.233604431e-01F, 3.234058022e-01F, 3.234511614e-01F,
	3.234965205e-01F, 3.235418797e-01F, 3.235872388e-01F, 3.236325979e-01F, 3.236779571e-01F, 3.237233162e-01F, 3.237686455e-01F, 3.238140047e-01F,
	3.238593638e-01F, 3.239047229e-01F, 3.239500821e-01F, 3.239954114e-01F, 3.240407705e-01F, 3.240861297e-01F, 3.241314590e-01F, 3.241768181e-01F,
	3.242221773e-01F, 3.242675066e-01F, 3.243128657e-01F, 3.243581951e-01F, 3.244035542e-01F, 3.244488835e-01F, 3.244942427e-01F, 3.245395720e-01F,
	3.245849311e-01F, 3.246302605e-01F, 3.246756196e-01F, 3.247209489e-01F, 3.247662783e-01F, 3.248116374e-01F, 3.248569667e-01F, 3.249022961e-01F,
	3.249476254e-01F, 3.249929547e-01F, 3.250383139e-01F, 3.250836432e-01F, 3.251289725e-01F, 3.251743019e-01F, 3.252196312e-01F, 3.252649605e-01F,
	3.253102899e-01F, 3.253556192e-01F, 3.254009485e-01F, 3.254462779e-01F, 3.254916072e-01F, 3.255369365e-01F, 3.255822659e-01F, 3.256275654e-01F,
	3.256728947e-01F, 3.257182240e-01F, 3.257635534e-01F, 3.258088827e-01F, 3.258541822e-01F, 3.258995116e-01F, 3.259448409e-01F, 3.259901404e-01F,
	3.260354698e-01F, 3.260807991e-01F, 3.261260986e-01F, 3.261714280e-01F, 3.262167275e-01F, 3.262620568e-01F, 3.263073564e-01F, 3.263526857e-01F,
	3.263979852e-01F, 3.264432847e-01F, 3.264886141e-01F, 3.265339136e-01F, 3.265792131e-01F, 3.266245425e-01F, 3.266698420e-01F, 3.267151415e-01F,
	3.267604411e-01F, 3.268057704e-01F, 3.268510699e-01F, 3.268963695e-01F, 3.269416690e-01F, 3.269869685e-01F, 3.270322680e-01F, 3.270775676e-01F,
	3.271228671e-01F, 3.271681666e-01F, 3.272134662e-01F, 3.272587657e-01F, 3.273040652e-01F, 3.273493648e-01F, 3.273946643e-01F, 3.274399638e-01F,
	3.274852335e-01F, 3.275305331e-01F, 3.275758326e-01F, 3.276211321e-01F, 3.276664019e-01F, 3.277117014e-01F, 3.277570009e-01F, 3.278022707e-01F,
	3.278475702e-01F, 3.278928697e-01F, 3.279381394e-01F, 3.279834390e-01F, 3.280287087e-01F, 3.280740082e-01F, 3.281192780e-01F, 3.281645477e-01F,
	3.282098472e-01F, 3.282551169e-01F, 3.283004165e-01F, 3.283456862e-01F, 3.283909559e-01F, 3.284362555e-01F, 3.284815252e-01F, 3.285267949e-01F,
	3.285720646e-01F, 3.286173344e-01F, 3.286626339e-01F, 3.287079036e-01F, 3.287531734e-01F, 3.287984431e-01F, 3.288437128e-01F, 3.288889825e-01F,
	3.289342523e-01F, 3.289795220e-01F, 3.290247917e-01F, 3.290700614e-01F, 3.291153312e-01F, 3.291606009e-01F, 3.292058408e-01F, 3.292511106e-01F,
	3.292963803e-01F, 3.293416500e-01F, 3.293869197e-01F, 3.294321597e-01F, 3.294774294e-01F, 3.295226991e-01F, 3.295679390e-01F, 3.296132088e-01F,
	3.296584487e-01F, 3.297037184e-01F, 3.297489882e-01F, 3.297942281e-01F, 3.298394978e-01F, 3.298847377e-01F, 3.299299777e-01F, 3.299752474e-01F,
	3.300204873e-01F, 3.300657570e-01F, 3.301109970e-01F, 3.301562369e-01F, 3.302015066e-01F, 3.302467465e-01F, 3.302919865e-01F, 3.303372264e-01F,
	3.303824961e-01F, 3.304277360e-01F, 3.304729760e-01F, 3.305182159e-01F, 3.305634558e-01F, 3.306086957e-01F, 3.306539357e-01F, 3.306991756e-01F,
	3.307444155e-01F, 3.307896554e-01F, 3.308348954e-01F, 3.308801353e-01F, 3.309253752e-01F, 3.309706151e-01F, 3.310158253e-01F, 3.310610652e-01F,
	3.311063051e-01F, 3.311515450e-01F, 3.311967850e-01F, 3.312419951e-01F, 3.312872350e-01F, 3.313324749e-01F, 3.313776851e-01F, 3.314229250e-01F,
	3.314681351e-01F, 3.315133750e-01F, 3.315585852e-01F, 3.316038251e-01F, 3.316490352e-01F, 3.316942751e-01F, 3.317394853e-01F, 3.317847252e-01F,
	3.318299353e-01F, 3.318751454e-01F, 3.319203854e-01F, 3.319655955e-01F, 3.320108056e-01F, 3.320560157e-01F, 3.321012557e-01F, 3.321464658e-01F,
	3.321916759e-01F, 3.322368860e-01F, 3.322820961e-01F, 3.323273063e-01F, 3.323725164e-01F, 3.324177265e-01F, 3.324629366e-01F, 3.325081468e-01F,
	3.325533569e-01F, 3.325985670e-01F, 3.326437771e-01F, 3.326889873e-01F, 3.327341974e-01F, 3.327794075e-01F, 3.328246176e-01F, 3.328697979e-01F,
	3.329150081e-01F, 3.329602182e-01F, 3.330054283e-01F, 3.330506086e-01F, 3.330958188e-01F, 3.331410289e-01F, 3.331862092e-01F, 3.332314193e-01F,
	3.332765996e-01F, 3.333218098e-01F, 3.333669901e-01F, 3.334122002e-01F, 3.334573805e-01F, 3.335025907e-01F, 3.335477710e-01F, 3.335929513e-01F,
	3.336381614e-01F, 3.336833417e-01F, 3.337285221e-01F, 3.337737322e-01F, 3.338189125e-01F, 3.338640928e-01F, 3.339092731e-01F, 3.339544535e-01F,
	3.339996636e-01F, 3.340448439e-01F, 3.340900242e-01F, 3.341352046e-01F, 3.341803849e-01F, 3.342255652e-01F, 3.342707455e-01F, 3.343159258e-01F,
	3.343611062e-01F, 3.344062865e-01F, 3.344514668e-01F, 3.344966173e-01F, 3.345417976e-01F, 3.345869780e-01F, 3.346321583e-01F, 3.346773386e-01F,
	3.347224891e-01F, 3.347676694e-01F, 3.348128498e-01F, 3.348580003e-01F, 3.349031806e-01F, 3.349483609e-01F, 3.349935114e-01F, 3.350386918e-01F,
	3.350838423e-01F, 3.351290226e-01F, 3.351741731e-01F, 3.352193534e-01F, 3.352645040e-01F, 3.353096545e-01F, 3.353548348e-01F, 3.353999853e-01F,
	3.354451358e-01F, 3.354903162e-01F, 3.355354667e-01F, 3.355806172e-01F, 3.356257677e-01F, 3.356709480e-01F, 3.357160985e-01F, 3.357612491e-01F,
	3.358063996e-01F, 3.358515501e-01F, 3.358967006e-01F, 3.359418511e-01F, 3.359870017e-01F, 3.360321522e-01F, 3.360773027e-01F, 3.361224532e-01F,
	3.361676037e-01F, 3.362127542e-01F, 3.362579048e-01F, 3.363030255e-01F, 3.363481760e-01F, 3.363933265e-01F, 3.364384770e-01F, 3.364835978e-01F,
	3.365287483e-01F, 3.365738988e-01F, 3.366190195e-01F, 3.366641700e-01F, 3.367093205e-01F, 3.367544413e-01F, 3.367995918e-01F, 3.368447125e-01F,
	3.368898630e-01F, 3.369349837e-01F, 3.369801342e-01F, 3.370252550e-01F, 3.370703757e-01F, 3.371155262e-01F, 3.371606469e-01F, 3.372057676e-01F,
	3.372509181e-01F, 3.372960389e-01F, 3.373411596e-01F, 3.373862803e-01F, 3.374314010e-01F, 3.374765515e-01F, 3.375216722e-01F, 3.375667930e-01F,
	3.376119137e-01F, 3.376570344e-01F, 3.377021551e-01F, 3.377472758e-01F, 3.377923965e-01F, 3.378375173e-01F, 3.378826380e-01F, 3.379277587e-01F,
	3.379728496e-01F, 3.380179703e-01F, 3.380630910e-01F, 3.381082118e-01F, 3.381533325e-01F, 3.381984234e-01F, 3.382435441e-01F, 3.382886648e-01F,
	3.383337557e-01F, 3.383788764e-01F, 3.384239972e-01F, 3.384690881e-01F, 3.385142088e-01F, 3.385592997e-01F, 3.386044204e-01F, 3.386495113e-01F,
	3.386946321e-01F, 3.387397230e-01F, 3.387848139e-01F, 3.388299346e-01F, 3.388750255e-01F, 3.389201164e-01F, 3.389652371e-01F, 3.390103281e-01F,
	3.390554190e-01F, 3.391005099e-01F, 3.391456306e-01F, 3.391907215e-01F, 3.392358124e-01F, 3.392809033e-01F, 3.393259943e-01F, 3.393710852e-01F,
	3.394161761e-01F, 3.394612670e-01F, 3.395063579e-01F, 3.395514488e-01F, 3.395965397e-01F, 3.396416306e-01F, 3.396867216e-01F, 3.397318125e-01F,
	3.397768736e-01F, 3.398219645e-01F, 3.398670554e-01F, 3.399121463e-01F, 3.399572074e-01F, 3.400022984e-01F, 3.400473893e-01F, 3.400924504e-01F,
	3.401375413e-01F, 3.401826024e-01F, 3.402276933e-01F, 3.402727842e-01F, 3.403178453e-01F, 3.403629363e-01F, 3.404079974e-01F, 3.404530585e-01F,
	3.404981494e-01F, 3.405432105e-01F, 3.405883014e-01F, 3.406333625e-01F, 3.406784236e-01F, 3.407234848e-01F, 3.407685757e-01F, 3.408136368e-01F,
	3.408586979e-01F, 3.409037590e-01F, 3.409488201e-01F, 3.409938812e-01F, 3.410389423e-01F, 3.410840333e-01F, 3.411290944e-01F, 3.411741555e-01F,
	3.412192166e-01F, 3.412642479e-01F, 3.413093090e-01F, 3.413543701e-01F, 3.413994312e-01F, 3.414444923e-01F, 3.414895535e-01F, 3.415346146e-01F,
	3.415796459e-01F, 3.416247070e-01F, 3.416697681e-01F, 3.417147994e-01F, 3.417598605e-01F, 3.418049216e-01F, 3.418499529e-01F, 3.418950140e-01F,
	3.419400752e-01F, 3.419851065e-01F, 3.420301676e-01F, 3.420751989e-01F, 3.421202302e-01F, 3.421652913e-01F, 3.422103226e-01F, 3.422553837e-01F,
	3.423004150e-01F, 3.423454463e-01F, 3.423905075e-01F, 3.424355388e-01F, 3.424805701e-01F, 3.425256014e-01F, 3.425706327e-01F, 3.426156938e-01F,
	3.426607251e-01F, 3.427057564e-01F, 3.427507877e-01F, 3.427958190e-01F, 3.428408504e-01F, 3.428858817e-01F, 3.429309130e-01F, 3.429759443e-01F,
	3.430209756e-01F, 3.430660069e-01F, 3.431110382e-01F, 3.431560397e-01F, 3.432010710e-01F, 3.432461023e-01F, 3.432911336e-01F, 3.433361650e-01F,
	3.433811665e-01F, 3.434261978e-01F, 3.434712291e-01F, 3.435162306e-01F, 3.435612619e-01F, 3.436062634e-01F, 3.436512947e-01F, 3.436962962e-01F,
	3.437413275e-01F, 3.437863290e-01F, 3.438313603e-01F, 3.438763618e-01F, 3.439213932e-01F, 3.439663947e-01F, 3.440113962e-01F, 3.440564275e-01F,
	3.441014290e-01F, 3.441464305e-01F, 3.441914320e-01F, 3.442364633e-01F, 3.442814648e-01F, 3.443264663e-01F, 3.443714678e-01F, 3.444164693e-01F,
	3.444614708e-01F, 3.445064723e-01F, 3.445514739e-01F, 3.445964754e-01F, 3.446414769e-01F, 3.446864784e-01F, 3.447314799e-01F, 3.447764814e-01F,
	3.448214829e-01F, 3.448664844e-01F, 3.449114561e-01F, 3.449564576e-01F, 3.450014591e-01F, 3.450464606e-01F, 3.450914323e-01F, 3.451364338e-01F,
	3.451814353e-01F, 3.452264071e-01F, 3.452714086e-01F, 3.453163803e-01F, 3.453613818e-01F, 3.454063833e-01F, 3.454513550e-01F, 3.454963267e-01F,
	3.455413282e-01F, 3.455862999e-01F, 3.456313014e-01F, 3.456762731e-01F, 3.457212448e-01F, 3.457662463e-01F, 3.458112180e-01F, 3.458561897e-01F,
	3.459011614e-01F, 3.459461629e-01F, 3.459911346e-01F, 3.460361063e-01F, 3.460810781e-01F, 3.461260498e-01F, 3.461710215e-01F, 3.462159932e-01F,
	3.462609649e-01F, 3.463059366e-01F, 3.463509083e-01F, 3.463958800e-01F, 3.464408517e-01F, 3.464858234e-01F, 3.465307951e-01F, 3.465757370e-01F,
	3.466207087e-01F, 3.466656804e-01F, 3.467106521e-01F, 3.467555940e-01F, 3.468005657e-01F, 3.468455374e-01F, 3.468904793e-01F, 3.469354510e-01F,
	3.469804227e-01F, 3.470253646e-01F, 3.470703363e-01F, 3.471152782e-01F, 3.471602499e-01F, 3.472051919e-01F, 3.472501338e-01F, 3.472951055e-01F,
	3.473400474e-01F, 3.473850191e-01F, 3.474299610e-01F, 3.474749029e-01F, 3.475198448e-01F, 3.475648165e-01F, 3.476097584e-01F, 3.476547003e-01F,
	3.476996422e-01F, 3.477445841e-01F, 3.477895260e-01F, 3.478344679e-01F, 3.478794396e-01F, 3.479243815e-01F, 3.479693234e-01F, 3.480142355e-01F,
	3.480591774e-01F, 3.481041193e-01F, 3.481490612e-01F, 3.481940031e-01F, 3.482389450e-01F, 3.482838869e-01F, 3.483287990e-01F, 3.483737409e-01F,
	3.484186828e-01F, 3.484636247e-01F, 3.485085368e-01F, 3.485534787e-01F, 3.485984206e-01F, 3.486433327e-01F, 3.486882746e-01F, 3.487331867e-01F,
	3.487781286e-01F, 3.488230407e-01F, 3.488679826e-01F, 3.489128947e-01F, 3.489578068e-01F, 3.490027487e-01F, 3.490476608e-01F, 3.490925729e-01F,
	3.491375148e-01F, 3.491824269e-01F, 3.492273390e-01F, 3.492722511e-01F, 3.493171930e-01F, 3.493621051e-01F, 3.494070172e-01F, 3.494519293e-01F,
	3.494968414e-01F, 3.495417535e-01F, 3.495866656e-01F, 3.496315777e-01F, 3.496764898e-01F, 3.497214019e-01F, 3.497663140e-01F, 3.498112261e-01F,
	3.498561382e-01F, 3.499010503e-01F, 3.499459326e-01F, 3.499908447e-01F, 3.500357568e-01F, 3.500806689e-01F, 3.501255512e-01F, 3.501704633e-01F,
	3.502153754e-01F, 3.502602577e-01F, 3.503051698e-01F, 3.503500521e-01F, 3.503949642e-01F, 3.504398465e-01F, 3.504847586e-01F, 3.505296409e-01F,
	3.505745530e-01F, 3.506194353e-01F, 3.506643474e-01F, 3.507092297e-01F, 3.507541120e-01F, 3.507989943e-01F, 3.508439064e-01F, 3.508887887e-01F,
	3.509336710e-01F, 3.509785533e-01F, 3.510234654e-01F, 3.510683477e-01F, 3.511132300e-01F, 3.511581123e-01F, 3.512029946e-01F, 3.512478769e-01F,
	3.512927592e-01F, 3.513376415e-01F, 3.513825238e-01F, 3.514274061e-01F, 3.514722884e-01F, 3.515171409e-01F, 3.515620232e-01F, 3.516069055e-01F,
	3.516517878e-01F, 3.516966701e-01F, 3.517415226e-01F, 3.517864048e-01F, 3.518312871e-01F, 3.518761396e-01F, 3.519210219e-01F, 3.519659042e-01F,
	3.520107567e-01F, 3.520556390e-01F, 3.521004915e-01F, 3.521453738e-01F, 3.521902263e-01F, 3.522350788e-01F, 3.522799611e-01F, 3.523248136e-01F,
	3.523696959e-01F, 3.524145484e-01F, 3.524594009e-01F, 3.525042534e-01F, 3.525491357e-01F, 3.525939882e-01F, 3.526388407e-01F, 3.526836932e-01F,
	3.527285457e-01F, 3.527733982e-01F, 3.528182805e-01F, 3.528631330e-01F, 3.529079854e-01F, 3.529528379e-01F, 3.529976904e-01F, 3.530425131e-01F,
	3.530873656e-01F, 3.531322181e-01F, 3.531770706e-01F, 3.532219231e-01F, 3.532667756e-01F, 3.533115983e-01F, 3.533564508e-01F, 3.534013033e-01F,
	3.534461558e-01F, 3.534909785e-01F, 3.535358310e-01F, 3.535806835e-01F, 3.536255062e-01F, 3.536703587e-01F, 3.537151814e-01F, 3.537600338e-01F,
	3.538048565e-01F, 3.538497090e-01F, 3.538945317e-01F, 3.539393544e-01F, 3.539842069e-01F, 3.540290296e-01F, 3.540738523e-01F, 3.541187048e-01F,
	3.541635275e-01F, 3.542083502e-01F, 3.542531729e-01F, 3.542980254e-01F, 3.543428481e-01F, 3.543876708e-01F, 3.544324934e-01F, 3.544773161e-01F,
	3.545221388e-01F, 3.545669615e-01F, 3.546117842e-01F, 3.546566069e-01F, 3.547014296e-01F, 3.547462523e-01F, 3.547910750e-01F, 3.548358679e-01F,
	3.548806906e-01F, 3.549255133e-01F, 3.549703360e-01F, 3.550151587e-01F, 3.550599515e-01F, 3.551047742e-01F, 3.551495969e-01F, 3.551943898e-01F,
	3.552392125e-01F, 3.552840054e-01F, 3.553288281e-01F, 3.553736210e-01F, 3.554184437e-01F, 3.554632366e-01F, 3.555080593e-01F, 3.555528522e-01F,
	3.555976748e-01F, 3.556424677e-01F, 3.556872606e-01F, 3.557320833e-01F, 3.557768762e-01F, 3.558216691e-01F, 3.558664620e-01F, 3.559112549e-01F,
	3.559560776e-01F, 3.560008705e-01F, 3.560456634e-01F, 3.560904562e-01F, 3.561352491e-01F, 3.561800420e-01F, 3.562248349e-01F, 3.562696278e-01F,
	3.563144207e-01F, 3.563592136e-01F, 3.564040065e-01F, 3.564487696e-01F, 3.564935625e-01F, 3.565383554e-01F, 3.565831482e-01F, 3.566279411e-01F,
	3.566727042e-01F, 3.567174971e-01F, 3.567622900e-01F, 3.568070531e-01F, 3.568518460e-01F, 3.568966389e-01F, 3.569414020e-01F, 3.569861948e-01F,
	3.570309579e-01F, 3.570757508e-01F, 3.571205139e-01F, 3.571652770e-01F, 3.572100699e-01F, 3.572548330e-01F, 3.572996259e-01F, 3.573443890e-01F,
	3.573891521e-01F, 3.574339151e-01F, 3.574787080e-01F, 3.575234711e-01F, 3.575682342e-01F, 3.576129973e-01F, 3.576577604e-01F, 3.577025235e-01F,
	3.577472866e-01F, 3.577920496e-01F, 3.578368127e-01F, 3.578815758e-01F, 3.579263389e-01F, 3.579711020e-01F, 3.580158651e-01F, 3.580606282e-01F,
	3.581053913e-01F, 3.581501544e-01F, 3.581948876e-01F, 3.582396507e-01F, 3.582844138e-01F, 3.583291769e-01F, 3.583739102e-01F, 3.584186733e-01F,
	3.584634066e-01F, 3.585081697e-01F, 3.585529327e-01F, 3.585976660e-01F, 3.586424291e-01F, 3.586871624e-01F, 3.587319255e-01F, 3.587766588e-01F,
	3.588213921e-01F, 3.588661551e-01F, 3.589108884e-01F, 3.589556217e-01F, 3.590003848e-01F, 3.590451181e-01F, 3.590898514e-01F, 3.591345847e-01F,
	3.591793478e-01F, 3.592240810e-01F, 3.592688143e-01F, 3.593135476e-01F, 3.593582809e-01F, 3.594030142e-01F, 3.594477475e-01F, 3.594924808e-01F,
	3.595372140e-01F, 3.595819473e-01F, 3.596266806e-01F, 3.596714139e-01F, 3.597161174e-01F, 3.597608507e-01F, 3.598055840e-01F, 3.598503172e-01F,
	3.598950505e-01F, 3.599397540e-01F, 3.599844873e-01F, 3.600292206e-01F, 3.600739241e-01F, 3.601186574e-01F, 3.601633608e-01F, 3.602080941e-01F,
	3.602527976e-01F, 3.602975309e-01F, 3.603422344e-01F, 3.603869677e-01F, 3.604316711e-01F, 3.604763746e-01F, 3.605211079e-01F, 3.605658114e-01F,
	3.606105149e-01F, 3.606552482e-01F, 3.606999516e-01F, 3.607446551e-01F, 3.607893586e-01F, 3.608340621e-01F, 3.608787954e-01F, 3.609234989e-01F,
	3.609682024e-01F, 3.610129058e-01F, 3.610576093e-01F, 3.611023128e-01F, 3.611470163e-01F, 3.611917198e-01F, 3.612363935e-01F, 3.612810969e-01F,
	3.613258004e-01F, 3.613705039e-01F, 3.614152074e-01F, 3.614599109e-01F, 3.615045846e-01F, 3.615492880e-01F, 3.615939915e-01F, 3.616386652e-01F,
	3.616833687e-01F, 3.617280424e-01F, 3.617727458e-01F, 3.618174493e-01F, 3.618621230e-01F, 3.619068265e-01F, 3.619515002e-01F, 3.619961739e-01F,
	3.620408773e-01F, 3.620855510e-01F, 3.621302545e-01F, 3.621749282e-01F, 3.622196019e-01F, 3.622642756e-01F, 3.623089790e-01F, 3.623536527e-01F,
	3.623983264e-01F, 3.624430001e-01F, 3.624876738e-01F, 3.625323474e-01F, 3.625770211e-01F, 3.626216948e-01F, 3.626663685e-01F, 3.627110422e-01F,
	3.627557158e-01F, 3.628003895e-01F, 3.628450632e-01F, 3.628897369e-01F, 3.629344106e-01F, 3.629790843e-01F, 3.630237281e-01F, 3.630684018e-01F,
	3.631130755e-01F, 3.631577492e-01F, 3.632023931e-01F, 3.632470667e-01F, 3.632917106e-01F, 3.633363843e-01F, 3.633810580e-01F, 3.634257019e-01F,
	3.634703755e-01F, 3.635150194e-01F, 3.635596931e-01F, 3.636043370e-01F, 3.636489809e-01F, 3.636936545e-01F, 3.637382984e-01F, 3.637829423e-01F,
	3.638276160e-01F, 3.638722599e-01F, 3.639169037e-01F, 3.639615476e-01F, 3.640061915e-01F, 3.640508652e-01F, 3.640955091e-01F, 3.641401529e-01F,
	3.641847968e-01F, 3.642294407e-01F, 3.642740846e-01F, 3.643187284e-01F, 3.643633723e-01F, 3.644080162e-01F, 3.644526303e-01F, 3.644972742e-01F,
	3.645419180e-01F, 3.645865619e-01F, 3.646312058e-01F, 3.646758199e-01F, 3.647204638e-01F, 3.647651076e-01F, 3.648097217e-01F, 3.648543656e-01F,
	3.648990095e-01F, 3.649436235e-01F, 3.649882674e-01F, 3.650328815e-01F, 3.650775254e-01F, 3.651221395e-01F, 3.651667833e-01F, 3.652113974e-01F,
	3.652560115e-01F, 3.653006554e-01F, 3.653452694e-01F, 3.653898835e-01F, 3.654345274e-01F, 3.654791415e-01F, 3.655237556e-01F, 3.655683696e-01F,
	3.656129837e-01F, 3.656576276e-01F, 3.657022417e-01F, 3.657468557e-01F, 3.657914698e-01F, 3.658360839e-01F, 3.658806980e-01F, 3.659253120e-01F,
	3.659699261e-01F, 3.660145402e-01F, 3.660591245e-01F, 3.661037385e-01F, 3.661483526e-01F, 3.661929667e-01F, 3.662375808e-01F, 3.662821651e-01F,
	3.663267791e-01F, 3.663713932e-01F, 3.664159775e-01F, 3.664605916e-01F, 3.665052056e-01F, 3.665497899e-01F, 3.665944040e-01F, 3.666389883e-01F,
	3.666836023e-01F, 3.667281866e-01F, 3.667727709e-01F, 3.668173850e-01F, 3.668619692e-01F, 3.669065833e-01F, 3.669511676e-01F, 3.669957519e-01F,
	3.670403361e-01F, 3.670849502e-01F, 3.671295345e-01F, 3.671741188e-01F, 3.672187030e-01F, 3.672632873e-01F, 3.673078716e-01F, 3.673524559e-01F,
	3.673970401e-01F, 3.674416244e-01F, 3.674862087e-01F, 3.675307930e-01F, 3.675753772e-01F, 3.676199615e-01F, 3.676645458e-01F, 3.677091300e-01F,
	3.677536845e-01F, 3.677982688e-01F, 3.678428531e-01F, 3.678874373e-01F, 3.679319918e-01F, 3.679765761e-01F, 3.680211604e-01F, 3.680657148e-01F,
	3.681102991e-01F, 3.681548536e-01F, 3.681994379e-01F, 3.682439923e-01F, 3.682885766e-01F, 3.683331311e-01F, 3.683776855e-01F, 3.684222698e-01F,
	3.684668243e-01F, 3.685113788e-01F, 3.685559630e-01F, 3.686005175e-01F, 3.686450720e-01F, 3.686896265e-01F, 3.687342107e-01F, 3.687787652e-01F,
	3.688233197e-01F, 3.688678741e-01F, 3.689124286e-01F, 3.689569831e-01F, 3.690015376e-01F, 3.690460920e-01F, 3.690906465e-01F, 3.691352010e-01F,
	3.691797554e-01F, 3.692243099e-01F, 3.692688346e-01F, 3.693133891e-01F, 3.693579435e-01F, 3.694024980e-01F, 3.694470227e-01F, 3.694915771e-01F,
	3.695361316e-01F, 3.695806563e-01F, 3.696252108e-01F, 3.696697652e-01F, 3.697142899e-01F, 3.697588444e-01F, 3.698033690e-01F, 3.698479235e-01F,
	3.698924482e-01F, 3.699369729e-01F, 3.699815273e-01F, 3.700260520e-01F, 3.700705767e-01F, 3.701151311e-01F, 3.701596558e-01F, 3.702041805e-01F,
	3.702487051e-01F, 3.702932596e-01F, 3.703377843e-01F, 3.703823090e-01F, 3.704268336e-01F, 3.704713583e-01F, 3.705158830e-01F, 3.705604076e-01F,
	3.706049323e-01F, 3.706494570e-01F, 3.706939816e-01F, 3.707385063e-01F, 3.707830310e-01F, 3.708275259e-01F, 3.708720505e-01F, 3.709165752e-01F,
	3.709610999e-01F, 3.710055947e-01F, 3.710501194e-01F, 3.710946441e-01F, 3.711391389e-01F, 3.711836636e-01F, 3.712281585e-01F, 3.712726831e-01F,
	3.713172078e-01F, 3.713617027e-01F, 3.714061975e-01F, 3.714507222e-01F, 3.714952171e-01F, 3.715397418e-01F, 3.715842366e-01F, 3.716287315e-01F,
	3.716732562e-01F, 3.717177510e-01F, 3.717622459e-01F, 3.718067408e-01F, 3.718512356e-01F, 3.718957603e-01F, 3.719402552e-01F, 3.719847500e-01F,
	3.720292449e-01F, 3.720737398e-01F, 3.721182346e-01F, 3.721627295e-01F, 3.722072244e-01F, 3.722517192e-01F, 3.722962141e-01F, 3.723406792e-01F,
	3.723851740e-01F, 3.724296689e-01F, 3.724741638e-01F, 3.725186586e-01F, 3.725631237e-01F, 3.726076186e-01F, 3.726521134e-01F, 3.726965785e-01F,
	3.727410734e-01F, 3.727855384e-01F, 3.728300333e-01F, 3.728744984e-01F, 3.729189932e-01F, 3.729634583e-01F, 3.730079532e-01F, 3.730524182e-01F,
	3.730969131e-01F, 3.731413782e-01F, 3.731858432e-01F, 3.732303083e-01F, 3.732748032e-01F, 3.733192682e-01F, 3.733637333e-01F, 3.734081984e-01F,
	3.734526634e-01F, 3.734971285e-01F, 3.735416234e-01F, 3.735860884e-01F, 3.736305535e-01F, 3.736750185e-01F, 3.737194836e-01F, 3.737639487e-01F,
	3.738083839e-01F, 3.738528490e-01F, 3.738973141e-01F, 3.739417791e-01F, 3.739862442e-01F, 3.740307093e-01F, 3.740751445e-01F, 3.741196096e-01F,
	3.741640747e-01F, 3.742085099e-01F, 3.742529750e-01F, 3.742974102e-01F, 3.743418753e-01F, 3.743863404e-01F, 3.744307756e-01F, 3.744752407e-01F,
	3.745196760e-01F, 3.745641112e-01F, 3.746085763e-01F, 3.746530116e-01F, 3.746974468e-01F, 3.747419119e-01F, 3.747863472e-01F, 3.748307824e-01F,
	3.748752177e-01F, 3.749196827e-01F, 3.749641180e-01F, 3.750085533e-01F, 3.750529885e-01F, 3.750974238e-01F, 3.751418591e-01F, 3.751862943e-01F,
	3.752307296e-01F, 3.752751648e-01F, 3.753196001e-01F, 3.753640354e-01F, 3.754084706e-01F, 3.754529059e-01F, 3.754973114e-01F, 3.755417466e-01F,
	3.755861819e-01F, 3.756306171e-01F, 3.756750226e-01F, 3.757194579e-01F, 3.757638931e-01F, 3.758082986e-01F, 3.758527339e-01F, 3.758971393e-01F,
	3.759415746e-01F, 3.759859800e-01F, 3.760304153e-01F, 3.760748208e-01F, 3.761192560e-01F, 3.761636615e-01F, 3.762080669e-01F, 3.762525022e-01F,
	3.762969077e-01F, 3.763413131e-01F, 3.763857186e-01F, 3.764301538e-01F, 3.764745593e-01F, 3.765189648e-01F, 3.765633702e-01F, 3.766077757e-01F,
	3.766521811e-01F, 3.766965866e-01F, 3.767409921e-01F, 3.767853975e-01F, 3.768298030e-01F, 3.768742085e-01F, 3.769186139e-01F, 3.769630194e-01F,
	3.770074248e-01F, 3.770518005e-01F, 3.770962059e-01F, 3.771406114e-01F, 3.771849871e-01F, 3.772293925e-01F, 3.772737980e-01F, 3.773181736e-01F,
	3.773625791e-01F, 3.774069846e-01F, 3.774513602e-01F, 3.774957657e-01F, 3.775401413e-01F, 3.775845468e-01F, 3.776289225e-01F, 3.776732981e-01F,
	3.777177036e-01F, 3.777620792e-01F, 3.778064549e-01F, 3.778508604e-01F, 3.778952360e-01F, 3.779396117e-01F, 3.779839873e-01F, 3.780283630e-01F,
	3.780727386e-01F, 3.781171441e-01F, 3.781615198e-01F, 3.782058954e-01F, 3.782502711e-01F, 3.782946467e-01F, 3.783390224e-01F, 3.783833683e-01F,
	3.784277439e-01F, 3.784721196e-01F, 3.785164952e-01F, 3.785608709e-01F, 3.786052465e-01F, 3.786495924e-01F, 3.786939681e-01F, 3.787383437e-01F,
	3.787826896e-01F, 3.788270652e-01F, 3.788714409e-01F, 3.789157867e-01F, 3.789601624e-01F, 3.790045083e-01F, 3.790488839e-01F, 3.790932298e-01F,
	3.791376054e-01F, 3.791819513e-01F, 3.792262971e-01F, 3.792706728e-01F, 3.793150187e-01F, 3.793593645e-01F, 3.794037402e-01F, 3.794480860e-01F,
	3.794924319e-01F, 3.795367777e-01F, 3.795811236e-01F, 3.796254694e-01F, 3.796698153e-01F, 3.797141612e-01F, 3.797585070e-01F, 3.798028529e-01F,
	3.798471987e-01F, 3.798915446e-01F, 3.799358904e-01F, 3.799802363e-01F, 3.800245821e-01F, 3.800689280e-01F, 3.801132441e-01F, 3.801575899e-01F,
	3.802019358e-01F, 3.802462816e-01F, 3.802905977e-01F, 3.803349435e-01F, 3.803792596e-01F, 3.804236054e-01F, 3.804679513e-01F, 3.805122674e-01F,
	3.805566132e-01F, 3.806009293e-01F, 3.806452453e-01F, 3.806895912e-01F, 3.807339072e-01F, 3.807782531e-01F, 3.808225691e-01F, 3.808668852e-01F,
	3.809112012e-01F, 3.809555471e-01F, 3.809998631e-01F, 3.810441792e-01F, 3.810884953e-01F, 3.811328113e-01F, 3.811771274e-01F, 3.812214434e-01F,
	3.812657595e-01F, 3.813100755e-01F, 3.813543916e-01F, 3.813987076e-01F, 3.814430237e-01F, 3.814873397e-01F, 3.815316558e-01F, 3.815759718e-01F,
	3.816202581e-01F, 3.816645741e-01F, 3.817088902e-01F, 3.817532063e-01F, 3.817974925e-01F, 3.818418086e-01F, 3.818860948e-01F, 3.819304109e-01F,
	3.819747269e-01F, 3.820190132e-01F, 3.820633292e-01F, 3.821076155e-01F, 3.821519017e-01F, 3.821962178e-01F, 3.822405040e-01F, 3.822848201e-01F,
	3.823291063e-01F, 3.823733926e-01F, 3.824176788e-01F, 3.824619949e-01F, 3.825062811e-01F, 3.825505674e-01F, 3.825948536e-01F, 3.826391399e-01F,
	3.826834261e-01F, 3.827277124e-01F, 3.827719986e-01F, 3.828162849e-01F, 3.828605711e-01F, 3.829048574e-01F, 3.829491436e-01F, 3.829934299e-01F,
	3.830377162e-01F, 3.830820024e-01F, 3.831262589e-01F, 3.831705451e-01F, 3.832148314e-01F, 3.832590878e-01F, 3.833033741e-01F, 3.833476603e-01F,
	3.833919168e-01F, 3.834362030e-01F, 3.834804595e-01F, 3.835247457e-01F, 3.835690022e-01F, 3.836132884e-01F, 3.836575449e-01F, 3.837018311e-01F,
	3.837460876e-01F, 3.837903440e-01F, 3.838346303e-01F, 3.838788867e-01F, 3.839231431e-01F, 3.839673996e-01F, 3.840116858e-01F, 3.840559423e-01F,
	3.841001987e-01F, 3.841444552e-01F, 3.841887116e-01F, 3.842329681e-01F, 3.842772245e-01F, 3.843214810e-01F, 3.843657374e-01F, 3.844099939e-01F,
	3.844542503e-01F, 3.844985068e-01F, 3.845427334e-01F, 3.845869899e-01F, 3.846312463e-01F, 3.846755028e-01F, 3.847197592e-01F, 3.847639859e-01F,
	3.848082423e-01F, 3.848524690e-01F, 3.848967254e-01F, 3.849409819e-01F, 3.849852085e-01F, 3.850294650e-01F, 3.850736916e-01F, 3.851179481e-01F,
	3.851621747e-01F, 3.852064013e-01F, 3.852506578e-01F, 3.852948844e-01F, 3.853391111e-01F, 3.853833675e-01F, 3.854275942e-01F, 3.854718208e-01F,
	3.855160475e-01F, 3.855602741e-01F, 3.856045008e-01F, 3.856487572e-01F, 3.856929839e-01F, 3.857372105e-01F, 3.857814372e-01F, 3.858256638e-01F,
	3.858698905e-01F, 3.859140873e-01F, 3.859583139e-01F, 3.860025406e-01F, 3.860467672e-01F, 3.860909939e-01F, 3.861352205e-01F, 3.861794174e-01F,
	3.862236440e-01F, 3.862678707e-01F, 3.863120675e-01F, 3.863562942e-01F, 3.864004910e-01F, 3.864447176e-01F, 3.864889443e-01F, 3.865331411e-01F,
	3.865773380e-01F, 3.866215646e-01F, 3.866657615e-01F, 3.867099881e-01F, 3.867541850e-01F, 3.867983818e-01F, 3.868426085e-01F, 3.868868053e-01F,
	3.869310021e-01F, 3.869751990e-01F, 3.870193958e-01F, 3.870636225e-01F, 3.871078193e-01F, 3.871520162e-01F, 3.871962130e-01F, 3.872404099e-01F,
	3.872846067e-01F, 3.873288035e-01F, 3.873730004e-01F, 3.874171972e-01F, 3.874613643e-01F, 3.875055611e-01F, 3.875497580e-01F, 3.875939548e-01F,
	3.876381516e-01F, 3.876823187e-01F, 3.877265155e-01F, 3.877707124e-01F, 3.878148794e-01F, 3.878590763e-01F, 3.879032433e-01F, 3.879474401e-01F,
	3.879916072e-01F, 3.880358040e-01F, 3.880799711e-01F, 3.881241679e-01F, 3.881683350e-01F, 3.882125318e-01F, 3.882566988e-01F, 3.883008659e-01F,
	3.883450329e-01F, 3.883892298e-01F, 3.884333968e-01F, 3.884775639e-01F, 3.885217309e-01F, 3.885658979e-01F, 3.886100650e-01F, 3.886542320e-01F,
	3.886984289e-01F, 3.887425959e-01F, 3.887867332e-01F, 3.888309002e-01F, 3.888750672e-01F, 3.889192343e-01F, 3.889634013e-01F, 3.890075684e-01F,
	3.890517354e-01F, 3.890958726e-01F, 3.891400397e-01F, 3.891842067e-01F, 3.892283440e-01F, 3.892725110e-01F, 3.893166780e-01F, 3.893608153e-01F,
	3.894049823e-01F, 3.894491196e-01F, 3.894932866e-01F, 3.895374238e-01F, 3.895815909e-01F, 3.896257281e-01F, 3.896698952e-01F, 3.897140324e-01F,
	3.897581697e-01F, 3.898023069e-01F, 3.898464739e-01F, 3.898906112e-01F, 3.899347484e-01F, 3.899788857e-01F, 3.900230229e-01F, 3.900671601e-01F,
	3.901113272e-01F, 3.901554644e-01F, 3.901996017e-01F, 3.902437389e-01F, 3.902878463e-01F, 3.903319836e-01F, 3.903761208e-01F, 3.904202580e-01F,
	3.904643953e-01F, 3.905085325e-01F, 3.905526698e-01F, 3.905967772e-01F, 3.906409144e-01F, 3.906850517e-01F, 3.907291591e-01F, 3.907732964e-01F,
	3.908174038e-01F, 3.908615410e-01F, 3.909056783e-01F, 3.909497857e-01F, 3.909939229e-01F, 3.910380304e-01F, 3.910821378e-01F, 3.911262751e-01F,
	3.911703825e-01F, 3.912144899e-01F, 3.912586272e-01F, 3.913027346e-01F, 3.913468421e-01F, 3.913909495e-01F, 3.914350569e-01F, 3.914791942e-01F,
	3.915233016e-01F, 3.915674090e-01F, 3.916115165e-01F, 3.916556239e-01F, 3.916997313e-01F, 3.917438388e-01F, 3.917879462e-01F, 3.918320537e-01F,
	3.918761313e-01F, 3.919202387e-01F, 3.919643462e-01F, 3.920084536e-01F, 3.920525610e-01F, 3.920966387e-01F, 3.921407461e-01F, 3.921848536e-01F,
	3.922289312e-01F, 3.922730386e-01F, 3.923171163e-01F, 3.923612237e-01F, 3.924053013e-01F, 3.924494088e-01F, 3.924934864e-01F, 3.925375938e-01F,
	3.925816715e-01F, 3.926257491e-01F, 3.926698565e-01F, 3.927139342e-01F, 3.927580118e-01F, 3.928021193e-01F, 3.928461969e-01F, 3.928902745e-01F,
	3.929343522e-01F, 3.929784298e-01F, 3.930225074e-01F, 3.930665851e-01F, 3.931106627e-01F, 3.931547403e-01F, 3.931988180e-01F, 3.932428956e-01F,
	3.932869732e-01F, 3.933310509e-01F, 3.933751285e-01F, 3.934191763e-01F, 3.934632540e-01F, 3.935073316e-01F, 3.935514092e-01F, 3.935954571e-01F,
	3.936395347e-01F, 3.936836123e-01F, 3.937276602e-01F, 3.937717378e-01F, 3.938157856e-01F, 3.938598633e-01F, 3.939039111e-01F, 3.939479887e-01F,
	3.939920366e-01F, 3.940360844e-01F, 3.940801620e-01F, 3.941242099e-01F, 3.941682577e-01F, 3.942123353e-01F, 3.942563832e-01F, 3.943004310e-01F,
	3.943444788e-01F, 3.943885267e-01F, 3.944326043e-01F, 3.944766521e-01F, 3.945207000e-01F, 3.945647478e-01F, 3.946087956e-01F, 3.946528435e-01F,
	3.946968615e-01F, 3.947409093e-01F, 3.947849572e-01F, 3.948290050e-01F, 3.948730528e-01F, 3.949171007e-01F, 3.949611187e-01F, 3.950051665e-01F,
	3.950492144e-01F, 3.950932324e-01F, 3.951372802e-01F, 3.951813281e-01F, 3.952253461e-01F, 3.952693939e-01F, 3.953134120e-01F, 3.953574598e-01F,
	3.954014778e-01F, 3.954454958e-01F, 3.954895437e-01F, 3.955335617e-01F, 3.955775797e-01F, 3.956216276e-01F, 3.956656456e-01F, 3.957096636e-01F,
	3.957536817e-01F, 3.957977295e-01F, 3.958417475e-01F, 3.958857656e-01F, 3.959297836e-01F, 3.959738016e-01F, 3.960178196e-01F, 3.960618377e-01F,
	3.961058557e-01F, 3.961498737e-01F, 3.961938918e-01F, 3.962378800e-01F, 3.962818980e-01F, 3.963259161e-01F, 3.963699341e-01F, 3.964139521e-01F,
	3.964579403e-01F, 3.965019584e-01F, 3.965459764e-01F, 3.965899646e-01F, 3.966339827e-01F, 3.966779709e-01F, 3.967219889e-01F, 3.967659771e-01F,
	3.968099952e-01F, 3.968539834e-01F, 3.968980014e-01F, 3.969419897e-01F, 3.969859779e-01F, 3.970299959e-01F, 3.970739841e-01F, 3.971179724e-01F,
	3.971619606e-01F, 3.972059488e-01F, 3.972499669e-01F, 3.972939551e-01F, 3.973379433e-01F, 3.973819315e-01F, 3.974259198e-01F, 3.974699080e-01F,
	3.975138962e-01F, 3.975578845e-01F, 3.976018727e-01F, 3.976458609e-01F, 3.976898193e-01F, 3.977338076e-01F, 3.977777958e-01F, 3.978217840e-01F,
	3.978657424e-01F, 3.979097307e-01F, 3.979537189e-01F, 3.979976773e-01F, 3.980416656e-01F, 3.980856538e-01F, 3.981296122e-01F, 3.981736004e-01F,
	3.982175589e-01F, 3.982615471e-01F, 3.983055055e-01F, 3.983494639e-01F, 3.983934522e-01F, 3.984374106e-01F, 3.984813690e-01F, 3.985253572e-01F,
	3.985693157e-01F, 3.986132741e-01F, 3.986572325e-01F, 3.987011909e-01F, 3.987451494e-01F, 3.987891078e-01F, 3.988330960e-01F, 3.988770545e-01F,
	3.989210129e-01F, 3.989649415e-01F, 3.990088999e-01F, 3.990528584e-01F, 3.990968168e-01F, 3.991407752e-01F, 3.991847336e-01F, 3.992286921e-01F,
	3.992726207e-01F, 3.993165791e-01F, 3.993605375e-01F, 3.994044662e-01F, 3.994484246e-01F, 3.994923532e-01F, 3.995363116e-01F, 3.995802701e-01F,
	3.996241987e-01F, 3.996681273e-01F, 3.997120857e-01F, 3.997560143e-01F, 3.997999728e-01F, 3.998439014e-01F, 3.998878300e-01F, 3.999317884e-01F,
	3.999757171e-01F, 4.000196457e-01F, 4.000635743e-01F, 4.001075029e-01F, 4.001514614e-01F, 4.001953900e-01F, 4.002393186e-01F, 4.002832472e-01F,
	4.003271759e-01F, 4.003711045e-01F, 4.004150331e-01F, 4.004589319e-01F, 4.005028605e-01F, 4.005467892e-01F, 4.005907178e-01F, 4.006346464e-01F,
	4.006785750e-01F, 4.007224739e-01F, 4.007664025e-01F, 4.008103311e-01F, 4.008542299e-01F, 4.008981586e-01F, 4.009420574e-01F, 4.009859860e-01F,
	4.010298848e-01F, 4.010738134e-01F, 4.011177123e-01F, 4.011616409e-01F, 4.012055397e-01F, 4.012494385e-01F, 4.012933671e-01F, 4.013372660e-01F,
	4.013811648e-01F, 4.014250934e-01F, 4.014689922e-01F, 4.015128911e-01F, 4.015567899e-01F, 4.016006887e-01F, 4.016445875e-01F, 4.016884863e-01F,
	4.017323852e-01F, 4.017762840e-01F, 4.018201828e-01F, 4.018640816e-01F, 4.019079804e-01F, 4.019518793e-01F, 4.019957781e-01F, 4.020396471e-01F,
	4.020835459e-01F, 4.021274447e-01F, 4.021713436e-01F, 4.022152126e-01F, 4.022591114e-01F, 4.023030102e-01F, 4.023468792e-01F, 4.023907781e-01F,
	4.024346471e-01F, 4.024785459e-01F, 4.025224149e-01F, 4.025662839e-01F, 4.026101828e-01F, 4.026540518e-01F, 4.026979506e-01F, 4.027418196e-01F,
	4.027856886e-01F, 4.028295577e-01F, 4.028734565e-01F, 4.029173255e-01F, 4.029611945e-01F, 4.030050635e-01F, 4.030489326e-01F, 4.030928016e-01F,
	4.031366706e-01F, 4.031805396e-01F, 4.032244086e-01F, 4.032682776e-01F, 4.033121467e-01F, 4.033560157e-01F, 4.033998847e-01F, 4.034437239e-01F,
	4.034875929e-01F, 4.035314620e-01F, 4.035753310e-01F, 4.036191702e-01F, 4.036630392e-01F, 4.037068784e-01F, 4.037507474e-01F, 4.037946165e-01F,
	4.038384557e-01F, 4.038823247e-01F, 4.039261639e-01F, 4.039700031e-01F, 4.040138721e-01F, 4.040577114e-01F, 4.041015804e-01F, 4.041454196e-01F,
	4.041892588e-01F, 4.042330980e-01F, 4.042769670e-01F, 4.043208063e-01F, 4.043646455e-01F, 4.044084847e-01F, 4.044523239e-01F, 4.044961631e-01F,
	4.045400023e-01F, 4.045838416e-01F, 4.046276808e-01F, 4.046715200e-01F, 4.047153592e-01F, 4.047591984e-01F, 4.048030376e-01F, 4.048468471e-01F,
	4.048906863e-01F, 4.049345255e-01F, 4.049783647e-01F, 4.050221741e-01F, 4.050660133e-01F, 4.051098228e-01F, 4.051536620e-01F, 4.051975012e-01F,
	4.052413106e-01F, 4.052851498e-01F, 4.053289592e-01F, 4.053727686e-01F, 4.054166079e-01F, 4.054604173e-01F, 4.055042565e-01F, 4.055480659e-01F,
	4.055918753e-01F, 4.056356847e-01F, 4.056795239e-01F, 4.057233334e-01F, 4.057671428e-01F, 4.058109522e-01F, 4.058547616e-01F, 4.058985710e-01F,
	4.059423804e-01F, 4.059861898e-01F, 4.060299993e-01F, 4.060738087e-01F, 4.061176181e-01F, 4.061614275e-01F, 4.062052369e-01F, 4.062490165e-01F,
	4.062928259e-01F, 4.063366354e-01F, 4.063804448e-01F, 4.064242244e-01F, 4.064680338e-01F, 4.065118432e-01F, 4.065556228e-01F, 4.065994322e-01F,
	4.066432118e-01F, 4.066870213e-01F, 4.067308009e-01F, 4.067746103e-01F, 4.068183899e-01F, 4.068621695e-01F, 4.069059789e-01F, 4.069497585e-01F,
	4.069935381e-01F, 4.070373178e-01F, 4.070811272e-01F, 4.071249068e-01F, 4.071686864e-01F, 4.072124660e-01F, 4.072562456e-01F, 4.073000252e-01F,
	4.073438048e-01F, 4.073875844e-01F, 4.074313641e-01F, 4.074751437e-01F, 4.075189233e-01F, 4.075627029e-01F, 4.076064825e-01F, 4.076502323e-01F,
	4.076940119e-01F, 4.077377915e-01F, 4.077815711e-01F, 4.078253210e-01F, 4.078691006e-01F, 4.079128504e-01F, 4.079566300e-01F, 4.080004096e-01F,
	4.080441594e-01F, 4.080879390e-01F, 4.081316888e-01F, 4.081754386e-01F, 4.082192183e-01F, 4.082629681e-01F, 4.083067477e-01F, 4.083504975e-01F,
	4.083942473e-01F, 4.084379971e-01F, 4.084817469e-01F, 4.085255265e-01F, 4.085692763e-01F, 4.086130261e-01F, 4.086567760e-01F, 4.087005258e-01F,
	4.087442756e-01F, 4.087880254e-01F, 4.088317752e-01F, 4.088755250e-01F, 4.089192748e-01F, 4.089630246e-01F, 4.090067446e-01F, 4.090504944e-01F,
	4.090942442e-01F, 4.091379941e-01F, 4.091817141e-01F, 4.092254639e-01F, 4.092692137e-01F, 4.093129337e-01F, 4.093566835e-01F, 4.094004035e-01F,
	4.094441533e-01F, 4.094878733e-01F, 4.095316231e-01F, 4.095753431e-01F, 4.096190929e-01F, 4.096628129e-01F, 4.097065330e-01F, 4.097502530e-01F,
	4.097940028e-01F, 4.098377228e-01F, 4.098814428e-01F, 4.099251628e-01F, 4.099688828e-01F, 4.100126326e-01F, 4.100563526e-01F, 4.101000726e-01F,
	4.101437926e-01F, 4.101875126e-01F, 4.102312028e-01F, 4.102749228e-01F, 4.103186429e-01F, 4.103623629e-01F, 4.104060829e-01F, 4.104498029e-01F,
	4.104934931e-01F, 4.105372131e-01F, 4.105809331e-01F, 4.106246233e-01F, 4.106683433e-01F, 4.107120633e-01F, 4.107557535e-01F, 4.107994735e-01F,
	4.108431637e-01F, 4.108868837e-01F, 4.109305739e-01F, 4.109742939e-01F, 4.110179842e-01F, 4.110616744e-01F, 4.111053944e-01F, 4.111490846e-01F,
	4.111927748e-01F, 4.112364650e-01F, 4.112801552e-01F, 4.113238752e-01F, 4.113675654e-01F, 4.114112556e-01F, 4.114549458e-01F, 4.114986360e-01F,
	4.115423262e-01F, 4.115860164e-01F, 4.116297066e-01F, 4.116733968e-01F, 4.117170572e-01F, 4.117607474e-01F, 4.118044376e-01F, 4.118481278e-01F,
	4.118918180e-01F, 4.119354784e-01F, 4.119791687e-01F, 4.120228589e-01F, 4.120665193e-01F, 4.121102095e-01F, 4.121538699e-01F, 4.121975601e-01F,
	4.122412205e-01F, 4.122849107e-01F, 4.123285711e-01F, 4.123722315e-01F, 4.124159217e-01F, 4.124595821e-01F, 4.125032425e-01F, 4.125469327e-01F,
	4.125905931e-01F, 4.126342535e-01F, 4.126779139e-01F, 4.127215743e-01F, 4.127652347e-01F, 4.128088951e-01F, 4.128525853e-01F, 4.128962457e-01F,
	4.129398763e-01F, 4.129835367e-01F, 4.130271971e-01F, 4.130708575e-01F, 4.131145179e-01F, 4.131581783e-01F, 4.132018387e-01F, 4.132454693e-01F,
	4.132891297e-01F, 4.133327901e-01F, 4.133764207e-01F, 4.134200811e-01F, 4.134637415e-01F, 4.135073721e-01F, 4.135510325e-01F, 4.135946631e-01F,
	4.136383235e-01F, 4.136819541e-01F, 4.137255847e-01F, 4.137692451e-01F, 4.138128757e-01F, 4.138565063e-01F, 4.139001667e-01F, 4.139437973e-01F,
	4.139874279e-01F, 4.140310585e-01F, 4.140746891e-01F, 4.141183496e-01F, 4.141619802e-01F, 4.142056108e-01F, 4.142492414e-01F, 4.142928720e-01F,
	4.143365026e-01F, 4.143801332e-01F, 4.144237339e-01F, 4.144673645e-01F, 4.145109951e-01F, 4.145546257e-01F, 4.145982563e-01F, 4.146418571e-01F,
	4.146854877e-01F, 4.147291183e-01F, 4.147727191e-01F, 4.148163497e-01F, 4.148599505e-01F, 4.149035811e-01F, 4.149471819e-01F, 4.149908125e-01F,
	4.150344133e-01F, 4.150780439e-01F, 4.151216447e-01F, 4.151652455e-01F, 4.152088761e-01F, 4.152524769e-01F, 4.152960777e-01F, 4.153397083e-01F,
	4.153833091e-01F, 4.154269099e-01F, 4.154705107e-01F, 4.155141115e-01F, 4.155577123e-01F, 4.156013131e-01F, 4.156449139e-01F, 4.156885147e-01F,
	4.157321155e-01F, 4.157757163e-01F, 4.158193171e-01F, 4.158629179e-01F, 4.159064889e-01F, 4.159500897e-01F, 4.159936905e-01F, 4.160372913e-01F,
	4.160808623e-01F, 4.161244631e-01F, 4.161680341e-01F, 4.162116349e-01F, 4.162552357e-01F, 4.162988067e-01F, 4.163424075e-01F, 4.163859785e-01F,
	4.164295495e-01F, 4.164731503e-01F, 4.165167212e-01F, 4.165602922e-01F, 4.166038930e-01F, 4.166474640e-01F, 4.166910350e-01F, 4.167346060e-01F,
	4.167781770e-01F, 4.168217778e-01F, 4.168653488e-01F, 4.169089198e-01F, 4.169524908e-01F, 4.169960618e-01F, 4.170396328e-01F, 4.170832038e-01F,
	4.171267748e-01F, 4.171703160e-01F, 4.172138870e-01F, 4.172574580e-01F, 4.173010290e-01F, 4.173446000e-01F, 4.173881412e-01F, 4.174317122e-01F,
	4.174752831e-01F, 4.175188243e-01F, 4.175623953e-01F, 4.176059365e-01F, 4.176495075e-01F, 4.176930487e-01F, 4.177366197e-01F, 4.177801609e-01F,
	4.178237021e-01F, 4.178672731e-01F, 4.179108143e-01F, 4.179543555e-01F, 4.179979265e-01F, 4.180414677e-01F, 4.180850089e-01F, 4.181285501e-01F,
	4.181720912e-01F, 4.182156324e-01F, 4.182591736e-01F, 4.183027446e-01F, 4.183462560e-01F, 4.183897972e-01F, 4.184333384e-01F, 4.184768796e-01F,
	4.185204208e-01F, 4.185639620e-01F, 4.186075032e-01F, 4.186510444e-01F, 4.186945558e-01F, 4.187380970e-01F, 4.187816381e-01F, 4.188251495e-01F,
	4.188686907e-01F, 4.189122021e-01F, 4.189557433e-01F, 4.189992845e-01F, 4.190427959e-01F, 4.190863073e-01F, 4.191298485e-01F, 4.191733599e-01F,
	4.192169011e-01F, 4.192604125e-01F, 4.193039238e-01F, 4.193474352e-01F, 4.193909764e-01F, 4.194344878e-01F, 4.194779992e-01F, 4.195215106e-01F,
	4.195650220e-01F, 4.196085334e-01F, 4.196520448e-01F, 4.196955562e-01F, 4.197390676e-01F, 4.197825789e-01F, 4.198260903e-01F, 4.198696017e-01F,
	4.199131131e-01F, 4.199566245e-01F, 4.200001061e-01F, 4.200436175e-01F, 4.200871289e-01F, 4.201306105e-01F, 4.201741219e-01F, 4.202176332e-01F,
	4.202611148e-01F, 4.203046262e-01F, 4.203481078e-01F, 4.203916192e-01F, 4.204351008e-01F, 4.204786122e-01F, 4.205220938e-01F, 4.205655754e-01F,
	4.206090868e-01F, 4.206525683e-01F, 4.206960499e-01F, 4.207395315e-01F, 4.207830429e-01F, 4.208265245e-01F, 4.208700061e-01F, 4.209134877e-01F,
	4.209569693e-01F, 4.210004508e-01F, 4.210439324e-01F, 4.210874140e-01F, 4.211308956e-01F, 4.211743772e-01F, 4.212178588e-01F, 4.212613106e-01F,
	4.213047922e-01F, 4.213482738e-01F, 4.213917553e-01F, 4.214352071e-01F, 4.214786887e-01F, 4.215221703e-01F, 4.215656221e-01F, 4.216091037e-01F,
	4.216525555e-01F, 4.216960371e-01F, 4.217394888e-01F, 4.217829704e-01F, 4.218264222e-01F, 4.218698740e-01F, 4.219133556e-01F, 4.219568074e-01F,
	4.220002592e-01F, 4.220437407e-01F, 4.220871925e-01F, 4.221306443e-01F, 4.221740961e-01F, 4.222175479e-01F, 4.222609997e-01F, 4.223044515e-01F,
	4.223479033e-01F, 4.223913550e-01F, 4.224348068e-01F, 4.224782586e-01F, 4.225217104e-01F, 4.225651622e-01F, 4.226086140e-01F, 4.226520658e-01F,
	4.226954877e-01F, 4.227389395e-01F, 4.227823913e-01F, 4.228258133e-01F, 4.228692651e-01F, 4.229127169e-01F, 4.229561388e-01F, 4.229995906e-01F,
	4.230430126e-01F, 4.230864644e-01F, 4.231298864e-01F, 4.231733084e-01F, 4.232167602e-01F, 4.232601821e-01F, 4.233036041e-01F, 4.233470559e-01F,
	4.233904779e-01F, 4.234338999e-01F, 4.234773219e-01F, 4.235207438e-01F, 4.235641658e-01F, 4.236076176e-01F, 4.236510396e-01F, 4.236944616e-01F,
	4.237378836e-01F, 4.237812757e-01F, 4.238246977e-01F, 4.238681197e-01F, 4.239115417e-01F, 4.239549637e-01F, 4.239983857e-01F, 4.240417778e-01F,
	4.240851998e-01F, 4.241286218e-01F, 4.241720140e-01F, 4.242154360e-01F, 4.242588580e-01F, 4.243022501e-01F, 4.243456721e-01F, 4.243890643e-01F,
	4.244324863e-01F, 4.244758785e-01F, 4.245192707e-01F, 4.245626926e-01F, 4.246060848e-01F, 4.246494770e-01F, 4.246928990e-01F, 4.247362912e-01F,
	4.247796834e-01F, 4.248230755e-01F, 4.248664677e-01F, 4.249098599e-01F, 4.249532521e-01F, 4.249966443e-01F, 4.250400364e-01F, 4.250834286e-01F,
	4.251268208e-01F, 4.251702130e-01F, 4.252136052e-01F, 4.252569973e-01F, 4.253003895e-01F, 4.253437519e-01F, 4.253871441e-01F, 4.254305363e-01F,
	4.254738986e-01F, 4.255172908e-01F, 4.255606830e-01F, 4.256040454e-01F, 4.256474376e-01F, 4.256908000e-01F, 4.257341921e-01F, 4.257775545e-01F,
	4.258209169e-01F, 4.258643091e-01F, 4.259076715e-01F, 4.259510338e-01F, 4.259944260e-01F, 4.260377884e-01F, 4.260811508e-01F, 4.261245131e-01F,
	4.261678755e-01F, 4.262112677e-01F, 4.262546301e-01F, 4.262979925e-01F, 4.263413548e-01F, 4.263847172e-01F, 4.264280796e-01F, 4.264714122e-01F,
	4.265147746e-01F, 4.265581369e-01F, 4.266014993e-01F, 4.266448617e-01F, 4.266881943e-01F, 4.267315567e-01F, 4.267749190e-01F, 4.268182516e-01F,
	4.268616140e-01F, 4.269049764e-01F, 4.269483089e-01F, 4.269916713e-01F, 4.270350039e-01F, 4.270783663e-01F, 4.271216989e-01F, 4.271650314e-01F,
	4.272083938e-01F, 4.272517264e-01F, 4.272950590e-01F, 4.273384213e-01F, 4.273817539e-01F, 4.274250865e-01F, 4.274684191e-01F, 4.275117517e-01F,
	4.275550842e-01F, 4.275984168e-01F, 4.276417494e-01F, 4.276850820e-01F, 4.277284145e-01F, 4.277717471e-01F, 4.278150797e-01F, 4.278584123e-01F,
	4.279017448e-01F, 4.279450774e-01F, 4.279883802e-01F, 4.280317128e-01F, 4.280750453e-01F, 4.281183481e-01F, 4.281616807e-01F, 4.282050133e-01F,
	4.282483160e-01F, 4.282916486e-01F, 4.283349514e-01F, 4.283782840e-01F, 4.284215868e-01F, 4.284648895e-01F, 4.285082221e-01F, 4.285515249e-01F,
	4.285948277e-01F, 4.286381602e-01F, 4.286814630e-01F, 4.287247658e-01F, 4.287680686e-01F, 4.288113713e-01F, 4.288546741e-01F, 4.288979769e-01F,
	4.289412796e-01F, 4.289845824e-01F, 4.290278852e-01F, 4.290711880e-01F, 4.291144907e-01F, 4.291577935e-01F, 4.292010963e-01F, 4.292443991e-01F,
	4.292876720e-01F, 4.293309748e-01F, 4.293742776e-01F, 4.294175506e-01F, 4.294608533e-01F, 4.295041561e-01F, 4.295474291e-01F, 4.295907319e-01F,
	4.296340048e-01F, 4.296773076e-01F, 4.297205806e-01F, 4.297638834e-01F, 4.298071563e-01F, 4.298504293e-01F, 4.298937321e-01F, 4.299370050e-01F,
	4.299802780e-01F, 4.300235510e-01F, 4.300668240e-01F, 4.301101267e-01F, 4.301533997e-01F, 4.301966727e-01F, 4.302399457e-01F, 4.302832186e-01F,
	4.303264916e-01F, 4.303697646e-01F, 4.304130077e-01F, 4.304562807e-01F, 4.304995537e-01F, 4.305428267e-01F, 4.305860996e-01F, 4.306293428e-01F,
	4.306726158e-01F, 4.307158887e-01F, 4.307591319e-01F, 4.308024049e-01F, 4.308456779e-01F, 4.308889210e-01F, 4.309321940e-01F, 4.309754372e-01F,
	4.310187101e-01F, 4.310619533e-01F, 4.311051965e-01F, 4.311484694e-01F, 4.311917126e-01F, 4.312349558e-01F, 4.312781990e-01F, 4.313214719e-01F,
	4.313647151e-01F, 4.314079583e-01F, 4.314512014e-01F, 4.314944446e-01F, 4.315376878e-01F, 4.315809309e-01F, 4.316241741e-01F, 4.316674173e-01F,
	4.317106605e-01F, 4.317539036e-01F, 4.317971468e-01F, 4.318403602e-01F, 4.318836033e-01F, 4.319268465e-01F, 4.319700897e-01F, 4.320133030e-01F,
	4.320565462e-01F, 4.320997894e-01F, 4.321430027e-01F, 4.321862459e-01F, 4.322294593e-01F, 4.322727025e-01F, 4.323159158e-01F, 4.323591292e-01F,
	4.324023724e-01F, 4.324455857e-01F, 4.324887991e-01F, 4.325320423e-01F, 4.325752556e-01F, 4.326184690e-01F, 4.326616824e-01F, 4.327048957e-01F,
	4.327481389e-01F, 4.327913523e-01F, 4.328345656e-01F, 4.328777790e-01F, 4.329209924e-01F, 4.329641759e-01F, 4.330073893e-01F, 4.330506027e-01F,
	4.330938160e-01F, 4.331370294e-01F, 4.331802428e-01F, 4.332234263e-01F, 4.332666397e-01F, 4.333098531e-01F, 4.333530366e-01F, 4.333962500e-01F,
	4.334394634e-01F, 4.334826469e-01F, 4.335258603e-01F, 4.335690439e-01F, 4.336122274e-01F, 4.336554408e-01F, 4.336986244e-01F, 4.337418377e-01F,
	4.337850213e-01F, 4.338282049e-01F, 4.338713884e-01F, 4.339146018e-01F, 4.339577854e-01F, 4.340009689e-01F, 4.340441525e-01F, 4.340873361e-01F,
	4.341305196e-01F, 4.341737032e-01F, 4.342168868e-01F, 4.342600703e-01F, 4.343032539e-01F, 4.343464375e-01F, 4.343896210e-01F, 4.344327748e-01F,
	4.344759583e-01F, 4.345191419e-01F, 4.345622957e-01F, 4.346054792e-01F, 4.346486628e-01F, 4.346918166e-01F, 4.347350001e-01F, 4.347781539e-01F,
	4.348213375e-01F, 4.348644912e-01F, 4.349076748e-01F, 4.349508286e-01F, 4.349940121e-01F, 4.350371659e-01F, 4.350803196e-01F, 4.351234734e-01F,
	4.351666570e-01F, 4.352098107e-01F, 4.352529645e-01F, 4.352961183e-01F, 4.353392720e-01F, 4.353824258e-01F, 4.354255795e-01F, 4.354687333e-01F,
	4.355118871e-01F, 4.355550408e-01F, 4.355981946e-01F, 4.356413484e-01F, 4.356845021e-01F, 4.357276559e-01F, 4.357707798e-01F, 4.358139336e-01F,
	4.358570874e-01F, 4.359002113e-01F, 4.359433651e-01F, 4.359865189e-01F, 4.360296428e-01F, 4.360727966e-01F, 4.361159205e-01F, 4.361590743e-01F,
	4.362021983e-01F, 4.362453222e-01F, 4.362884760e-01F, 4.363316000e-01F, 4.363747239e-01F, 4.364178777e-01F, 4.364610016e-01F, 4.365041256e-01F,
	4.365472496e-01F, 4.365903735e-01F, 4.366334975e-01F, 4.366766214e-01F, 4.367197454e-01F, 4.367628694e-01F, 4.368059933e-01F, 4.368491173e-01F,
	4.368922412e-01F, 4.369353652e-01F, 4.369784892e-01F, 4.370216131e-01F, 4.370647073e-01F, 4.371078312e-01F, 4.371509552e-01F, 4.371940494e-01F,
	4.372371733e-01F, 4.372802973e-01F, 4.373233914e-01F, 4.373665154e-01F, 4.374096096e-01F, 4.374527335e-01F, 4.374958277e-01F, 4.375389218e-01F,
	4.375820458e-01F, 4.376251400e-01F, 4.376682341e-01F, 4.377113581e-01F, 4.377544522e-01F, 4.377975464e-01F, 4.378406405e-01F, 4.378837347e-01F,
	4.379268289e-01F, 4.379699230e-01F, 4.380130172e-01F, 4.380561113e-01F, 4.380992055e-01F, 4.381422997e-01F, 4.381853938e-01F, 4.382284880e-01F,
	4.382715821e-01F, 4.383146465e-01F, 4.383577406e-01F, 4.384008348e-01F, 4.384438992e-01F, 4.384869933e-01F, 4.385300875e-01F, 4.385731518e-01F,
	4.386162460e-01F, 4.386593103e-01F, 4.387024045e-01F, 4.387454689e-01F, 4.387885630e-01F, 4.388316274e-01F, 4.388746917e-01F, 4.389177859e-01F,
	4.389608502e-01F, 4.390039146e-01F, 4.390469790e-01F, 4.390900433e-01F, 4.391331077e-01F, 4.391762018e-01F, 4.392192662e-01F, 4.392623305e-01F,
	4.393053949e-01F, 4.393484592e-01F, 4.393915236e-01F, 4.394345582e-01F, 4.394776225e-01F, 4.395206869e-01F, 4.395637512e-01F, 4.396068156e-01F,
	4.396498501e-01F, 4.396929145e-01F, 4.397359788e-01F, 4.397790134e-01F, 4.398220778e-01F, 4.398651123e-01F, 4.399081767e-01F, 4.399512112e-01F,
	4.399942756e-01F, 4.400373101e-01F, 4.400803745e-01F, 4.401234090e-01F, 4.401664436e-01F, 4.402095079e-01F, 4.402525425e-01F, 4.402955770e-01F,
	4.403386116e-01F, 4.403816462e-01F, 4.404246807e-01F, 4.404677451e-01F, 4.405107796e-01F, 4.405538142e-01F, 4.405968487e-01F, 4.406398535e-01F,
	4.406828880e-01F, 4.407259226e-01F, 4.407689571e-01F, 4.408119917e-01F, 4.408550262e-01F, 4.408980310e-01F, 4.409410655e-01F, 4.409841001e-01F,
	4.410271049e-01F, 4.410701394e-01F, 4.411131740e-01F, 4.411561787e-01F, 4.411992133e-01F, 4.412422180e-01F, 4.412852228e-01F, 4.413282573e-01F,
	4.413712621e-01F, 4.414142966e-01F, 4.414573014e-01F, 4.415003061e-01F, 4.415433109e-01F, 4.415863454e-01F, 4.416293502e-01F, 4.416723549e-01F,
	4.417153597e-01F, 4.417583644e-01F, 4.418013692e-01F, 4.418443739e-01F, 4.418873787e-01F, 4.419303834e-01F, 4.419733882e-01F, 4.420163929e-01F,
	4.420593679e-01F, 4.421023726e-01F, 4.421453774e-01F, 4.421883821e-01F, 4.422313571e-01F, 4.422743618e-01F, 4.423173666e-01F, 4.423603415e-01F,
	4.424033463e-01F, 4.424463212e-01F, 4.424893260e-01F, 4.425323009e-01F, 4.425752759e-01F, 4.426182806e-01F, 4.426612556e-01F, 4.427042305e-01F,
	4.427472353e-01F, 4.427902102e-01F, 4.428331852e-01F, 4.428761601e-01F, 4.429191351e-01F, 4.429621398e-01F, 4.430051148e-01F, 4.430480897e-01F,
	4.430910647e-01F, 4.431340396e-01F, 4.431770146e-01F, 4.432199597e-01F, 4.432629347e-01F, 4.433059096e-01F, 4.433488846e-01F, 4.433918595e-01F,
	4.434348047e-01F, 4.434777796e-01F, 4.435207546e-01F, 4.435636997e-01F, 4.436066747e-01F, 4.436496198e-01F, 4.436925948e-01F, 4.437355399e-01F,
	4.437785149e-01F, 4.438214600e-01F, 4.438644350e-01F, 4.439073801e-01F, 4.439503253e-01F, 4.439933002e-01F, 4.440362453e-01F, 4.440791905e-01F,
	4.441221356e-01F, 4.441650808e-01F, 4.442080557e-01F, 4.442510009e-01F, 4.442939460e-01F, 4.443368912e-01F, 4.443798363e-01F, 4.444227815e-01F,
	4.444656968e-01F, 4.445086420e-01F, 4.445515871e-01F, 4.445945323e-01F, 4.446374774e-01F, 4.446803927e-01F, 4.447233379e-01F, 4.447662830e-01F,
	4.448091984e-01F, 4.448521435e-01F, 4.448950887e-01F, 4.449380040e-01F, 4.449809492e-01F, 4.450238645e-01F, 4.450667799e-01F, 4.451097250e-01F,
	4.451526403e-01F, 4.451955855e-01F, 4.452385008e-01F, 4.452814162e-01F, 4.453243315e-01F, 4.453672469e-01F, 4.454101920e-01F, 4.454531074e-01F,
	4.454960227e-01F, 4.455389380e-01F, 4.455818534e-01F, 4.456247687e-01F, 4.456676841e-01F, 4.457105994e-01F, 4.457535148e-01F, 4.457964003e-01F,
	4.458393157e-01F, 4.458822310e-01F, 4.459251463e-01F, 4.459680319e-01F, 4.460109472e-01F, 4.460538626e-01F, 4.460967481e-01F, 4.461396635e-01F,
	4.461825490e-01F, 4.462254643e-01F, 4.462683499e-01F, 4.463112652e-01F, 4.463541508e-01F, 4.463970363e-01F, 4.464399517e-01F, 4.464828372e-01F,
	4.465257227e-01F, 4.465686381e-01F, 4.466115236e-01F, 4.466544092e-01F, 4.466972947e-01F, 4.467401803e-01F, 4.467830658e-01F, 4.468259513e-01F,
	4.468688369e-01F, 4.469117224e-01F, 4.469546080e-01F, 4.469974935e-01F, 4.470403790e-01F, 4.470832348e-01F, 4.471261203e-01F, 4.471690059e-01F,
	4.472118914e-01F, 4.472547472e-01F, 4.472976327e-01F, 4.473405182e-01F, 4.473833740e-01F, 4.474262595e-01F, 4.474691153e-01F, 4.475120008e-01F,
	4.475548565e-01F, 4.475977123e-01F, 4.476405978e-01F, 4.476834536e-01F, 4.477263093e-01F, 4.477691948e-01F, 4.478120506e-01F, 4.478549063e-01F,
	4.478977621e-01F, 4.479406178e-01F, 4.479834735e-01F, 4.480263293e-01F, 4.480691850e-01F, 4.481120408e-01F, 4.481548965e-01F, 4.481977522e-01F,
	4.482406080e-01F, 4.482834637e-01F, 4.483263195e-01F, 4.483691752e-01F, 4.484120011e-01F, 4.484548569e-01F, 4.484977126e-01F, 4.485405385e-01F,
	4.485833943e-01F, 4.486262202e-01F, 4.486690760e-01F, 4.487119019e-01F, 4.487547576e-01F, 4.487975836e-01F, 4.488404393e-01F, 4.488832653e-01F,
	4.489260912e-01F, 4.489689469e-01F, 4.490117729e-01F, 4.490545988e-01F, 4.490974247e-01F, 4.491402507e-01F, 4.491831064e-01F, 4.492259324e-01F,
	4.492687583e-01F, 4.493115842e-01F, 4.493544102e-01F, 4.493972361e-01F, 4.494400620e-01F, 4.494828582e-01F, 4.495256841e-01F, 4.495685101e-01F,
	4.496113360e-01F, 4.496541619e-01F, 4.496969581e-01F, 4.497397840e-01F, 4.497825801e-01F, 4.498254061e-01F, 4.498682320e-01F, 4.499110281e-01F,
	4.499538541e-01F, 4.499966502e-01F, 4.500394762e-01F, 4.500822723e-01F, 4.501250684e-01F, 4.501678944e-01F, 4.502106905e-01F, 4.502534866e-01F,
	4.502962828e-01F, 4.503390789e-01F, 4.503819048e-01F, 4.504247010e-01F, 4.504674971e-01F, 4.505102932e-01F, 4.505530894e-01F, 4.505958855e-01F,
	4.506386817e-01F, 4.506814778e-01F, 4.507242441e-01F, 4.507670403e-01F, 4.508098364e-01F, 4.508526325e-01F, 4.508954287e-01F, 4.509381950e-01F,
	4.509809911e-01F, 4.510237873e-01F, 4.510665536e-01F, 4.511093497e-01F, 4.511521161e-01F, 4.511949122e-01F, 4.512376785e-01F, 4.512804747e-01F,
	4.513232410e-01F, 4.513660073e-01F, 4.514088035e-01F, 4.514515698e-01F, 4.514943361e-01F, 4.515371025e-01F, 4.515798688e-01F, 4.516226649e-01F,
	4.516654313e-01F, 4.517081976e-01F, 4.517509639e-01F, 4.517937303e-01F, 4.518364966e-01F, 4.518792629e-01F, 4.519220293e-01F, 4.519647658e-01F,
	4.520075321e-01F, 4.520502985e-01F, 4.520930648e-01F, 4.521358013e-01F, 4.521785676e-01F, 4.522213340e-01F, 4.522640705e-01F, 4.523068368e-01F,
	4.523495734e-01F, 4.523923397e-01F, 4.524350762e-01F, 4.524778426e-01F, 4.525205791e-01F, 4.525633454e-01F, 4.526060820e-01F, 4.526488185e-01F,
	4.526915848e-01F, 4.527343214e-01F, 4.527770579e-01F, 4.528197944e-01F, 4.528625309e-01F, 4.529052675e-01F, 4.529480040e-01F, 4.529907405e-01F,
	4.530334771e-01F, 4.530762136e-01F, 4.531189501e-01F, 4.531616867e-01F, 4.532044232e-01F, 4.532471597e-01F, 4.532898664e-01F, 4.533326030e-01F,
	4.533753395e-01F, 4.534180760e-01F, 4.534607828e-01F, 4.535035193e-01F, 4.535462260e-01F, 4.535889626e-01F, 4.536316693e-01F, 4.536744058e-01F,
	4.537171125e-01F, 4.537598491e-01F, 4.538025558e-01F, 4.538452625e-01F, 4.538879991e-01F, 4.539307058e-01F, 4.539734125e-01F, 4.540161192e-01F,
	4.540588260e-01F, 4.541015625e-01F, 4.541442692e-01F, 4.541869760e-01F, 4.542296827e-01F, 4.542723894e-01F, 4.543150961e-01F, 4.543577731e-01F,
	4.544004798e-01F, 4.544431865e-01F, 4.544858932e-01F, 4.545286000e-01F, 4.545712769e-01F, 4.546139836e-01F, 4.546566904e-01F, 4.546993673e-01F,
	4.547420740e-01F, 4.547847509e-01F, 4.548274577e-01F, 4.548701346e-01F, 4.549128413e-01F, 4.549555182e-01F, 4.549982250e-01F, 4.550409019e-01F,
	4.550835788e-01F, 4.551262856e-01F, 4.551689625e-01F, 4.552116394e-01F, 4.552543163e-01F, 4.552969933e-01F, 4.553396702e-01F, 4.553823471e-01F,
	4.554250240e-01F, 4.554677010e-01F, 4.555103779e-01F, 4.555530548e-01F, 4.555957317e-01F, 4.556384087e-01F, 4.556810856e-01F, 4.557237625e-01F,
	4.557664096e-01F, 4.558090866e-01F, 4.558517635e-01F, 4.558944106e-01F, 4.559370875e-01F, 4.559797347e-01F, 4.560224116e-01F, 4.560650587e-01F,
	4.561077356e-01F, 4.561503828e-01F, 4.561930597e-01F, 4.562357068e-01F, 4.562783539e-01F, 4.563210309e-01F, 4.563636780e-01F, 4.564063251e-01F,
	4.564489722e-01F, 4.564916193e-01F, 4.565342963e-01F, 4.565769434e-01F, 4.566195905e-01F, 4.566622376e-01F, 4.567048848e-01F, 4.567475319e-01F,
	4.567901492e-01F, 4.568327963e-01F, 4.568754435e-01F, 4.569180906e-01F, 4.569607377e-01F, 4.570033550e-01F, 4.570460021e-01F, 4.570886493e-01F,
	4.571312666e-01F, 4.571739137e-01F, 4.572165310e-01F, 4.572591782e-01F, 4.573017955e-01F, 4.573444426e-01F, 4.573870599e-01F, 4.574297071e-01F,
	4.574723244e-01F, 4.575149417e-01F, 4.575575888e-01F, 4.576002061e-01F, 4.576428235e-01F, 4.576854408e-01F, 4.577280581e-01F, 4.577706754e-01F,
	4.578132927e-01F, 4.578559101e-01F, 4.578985274e-01F, 4.579411447e-01F, 4.579837620e-01F, 4.580263793e-01F, 4.580689967e-01F, 4.581116140e-01F,
	4.581542015e-01F, 4.581968188e-01F, 4.582394361e-01F, 4.582820535e-01F, 4.583246410e-01F, 4.583672583e-01F, 4.584098458e-01F, 4.584524632e-01F,
	4.584950507e-01F, 4.585376680e-01F, 4.585802555e-01F, 4.586228728e-01F, 4.586654603e-01F, 4.587080479e-01F, 4.587506354e-01F, 4.587932527e-01F,
	4.588358402e-01F, 4.588784277e-01F, 4.589210153e-01F, 4.589636028e-01F, 4.590061903e-01F, 4.590487778e-01F, 4.590913653e-01F, 4.591339529e-01F,
	4.591765404e-01F, 4.592191279e-01F, 4.592617154e-01F, 4.593043029e-01F, 4.593468904e-01F, 4.593894482e-01F, 4.594320357e-01F, 4.594746232e-01F,
	4.595171809e-01F, 4.595597684e-01F, 4.596023262e-01F, 4.596449137e-01F, 4.596874714e-01F, 4.597300589e-01F, 4.597726166e-01F, 4.598152041e-01F,
	4.598577619e-01F, 4.599003196e-01F, 4.599429071e-01F, 4.599854648e-01F, 4.600280225e-01F, 4.600705802e-01F, 4.601131380e-01F, 4.601557255e-01F,
	4.601982832e-01F, 4.602408409e-01F, 4.602833986e-01F, 4.603259563e-01F, 4.603685141e-01F, 4.604110420e-01F, 4.604535997e-01F, 4.604961574e-01F,
	4.605387151e-01F, 4.605812728e-01F, 4.606238008e-01F, 4.606663585e-01F, 4.607089162e-01F, 4.607514441e-01F, 4.607940018e-01F, 4.608365297e-01F,
	4.608790874e-01F, 4.609216154e-01F, 4.609641731e-01F, 4.610067010e-01F, 4.610492289e-01F, 4.610917866e-01F, 4.611343145e-01F, 4.611768425e-01F,
	4.612194002e-01F, 4.612619281e-01F, 4.613044560e-01F, 4.613469839e-01F, 4.613895118e-01F, 4.614320397e-01F, 4.614745677e-01F, 4.615170956e-01F,
	4.615596235e-01F, 4.616021514e-01F, 4.616446793e-01F, 4.616872072e-01F, 4.617297053e-01F, 4.617722332e-01F, 4.618147612e-01F, 4.618572593e-01F,
	4.618997872e-01F, 4.619423151e-01F, 4.619848132e-01F, 4.620273411e-01F, 4.620698392e-01F, 4.621123672e-01F, 4.621548653e-01F, 4.621973932e-01F,
	4.622398913e-01F, 4.622823894e-01F, 4.623249173e-01F, 4.623674154e-01F, 4.624099135e-01F, 4.624524117e-01F, 4.624949098e-01F, 4.625374377e-01F,
	4.625799358e-01F, 4.626224339e-01F, 4.626649320e-01F, 4.627074301e-01F, 4.627499282e-01F, 4.627923965e-01F, 4.628348947e-01F, 4.628773928e-01F,
	4.629198909e-01F, 4.629623890e-01F, 4.630048573e-01F, 4.630473554e-01F, 4.630898535e-01F, 4.631323218e-01F, 4.631748199e-01F, 4.632172883e-01F,
	4.632597864e-01F, 4.633022547e-01F, 4.633447528e-01F, 4.633872211e-01F, 4.634297192e-01F, 4.634721875e-01F, 4.635146558e-01F, 4.635571241e-01F,
	4.635996222e-01F, 4.636420906e-01F, 4.636845589e-01F, 4.637270272e-01F, 4.637694955e-01F, 4.638119638e-01F, 4.638544321e-01F, 4.638969004e-01F,
	4.639393687e-01F, 4.639818370e-01F, 4.640243053e-01F, 4.640667737e-01F, 4.641092122e-01F, 4.641516805e-01F, 4.641941488e-01F, 4.642366171e-01F,
	4.642790556e-01F, 4.643215239e-01F, 4.643639624e-01F, 4.644064307e-01F, 4.644488692e-01F, 4.644913375e-01F, 4.645337760e-01F, 4.645762444e-01F,
	4.646186829e-01F, 4.646611214e-01F, 4.647035897e-01F, 4.647460282e-01F, 4.647884667e-01F, 4.648309052e-01F, 4.648733735e-01F, 4.649158120e-01F,
	4.649582505e-01F, 4.650006890e-01F, 4.650431275e-01F, 4.650855660e-01F, 4.651280046e-01F, 4.651704431e-01F, 4.652128518e-01F, 4.652552903e-01F,
	4.652977288e-01F, 4.653401673e-01F, 4.653825760e-01F, 4.654250145e-01F, 4.654674530e-01F, 4.655098617e-01F, 4.655523002e-01F, 4.655947089e-01F,
	4.656371474e-01F, 4.656795561e-01F, 4.657219946e-01F, 4.657644033e-01F, 4.658068419e-01F, 4.658492506e-01F, 4.658916593e-01F, 4.659340680e-01F,
	4.659765065e-01F, 4.660189152e-01F, 4.660613239e-01F, 4.661037326e-01F, 4.661461413e-01F, 4.661885500e-01F, 4.662309587e-01F, 4.662733674e-01F,
	4.663157761e-01F, 4.663581848e-01F, 4.664005935e-01F, 4.664430022e-01F, 4.664853811e-01F, 4.665277898e-01F, 4.665701985e-01F, 4.666125774e-01F,
	4.666549861e-01F, 4.666973948e-01F, 4.667397738e-01F, 4.667821825e-01F, 4.668245614e-01F, 4.668669701e-01F, 4.669093490e-01F, 4.669517577e-01F,
	4.669941366e-01F, 4.670365155e-01F, 4.670788944e-01F, 4.671213031e-01F, 4.671636820e-01F, 4.672060609e-01F, 4.672484398e-01F, 4.672908187e-01F,
	4.673331976e-01F, 4.673755765e-01F, 4.674179554e-01F, 4.674603343e-01F, 4.675027132e-01F, 4.675450921e-01F, 4.675874710e-01F, 4.676298499e-01F,
	4.676722288e-01F, 4.677145779e-01F, 4.677569568e-01F, 4.677993357e-01F, 4.678416848e-01F, 4.678840637e-01F, 4.679264128e-01F, 4.679687917e-01F,
	4.680111408e-01F, 4.680535197e-01F, 4.680958688e-01F, 4.681382477e-01F, 4.681805968e-01F, 4.682229459e-01F, 4.682653248e-01F, 4.683076739e-01F,
	4.683500230e-01F, 4.683923721e-01F, 4.684347212e-01F, 4.684770703e-01F, 4.685194194e-01F, 4.685617685e-01F, 4.686041176e-01F, 4.686464667e-01F,
	4.686888158e-01F, 4.687311649e-01F, 4.687735140e-01F, 4.688158631e-01F, 4.688581824e-01F, 4.689005315e-01F, 4.689428806e-01F, 4.689852297e-01F,
	4.690275490e-01F, 4.690698981e-01F, 4.691122174e-01F, 4.691545665e-01F, 4.691968858e-01F, 4.692392349e-01F, 4.692815542e-01F, 4.693238735e-01F,
	4.693662226e-01F, 4.694085419e-01F, 4.694508612e-01F, 4.694932103e-01F, 4.695355296e-01F, 4.695778489e-01F, 4.696201682e-01F, 4.696624875e-01F,
	4.697048068e-01F, 4.697471261e-01F, 4.697894454e-01F, 4.698317647e-01F, 4.698740840e-01F, 4.699164033e-01F, 4.699587226e-01F, 4.700010121e-01F,
	4.700433314e-01F, 4.700856507e-01F, 4.701279402e-01F, 4.701702595e-01F, 4.702125788e-01F, 4.702548683e-01F, 4.702971876e-01F, 4.703394771e-01F,
	4.703817964e-01F, 4.704240859e-01F, 4.704664052e-01F, 4.705086946e-01F, 4.705509841e-01F, 4.705932736e-01F, 4.706355929e-01F, 4.706778824e-01F,
	4.707201719e-01F, 4.707624614e-01F, 4.708047509e-01F, 4.708470404e-01F, 4.708893299e-01F, 4.709316194e-01F, 4.709739089e-01F, 4.710161984e-01F,
	4.710584879e-01F, 4.711007774e-01F, 4.711430669e-01F, 4.711853266e-01F, 4.712276161e-01F, 4.712699056e-01F, 4.713121951e-01F, 4.713544548e-01F,
	4.713967443e-01F, 4.714390039e-01F, 4.714812934e-01F, 4.715235531e-01F, 4.715658426e-01F, 4.716081023e-01F, 4.716503620e-01F, 4.716926515e-01F,
	4.717349112e-01F, 4.717771709e-01F, 4.718194604e-01F, 4.718617201e-01F, 4.719039798e-01F, 4.719462395e-01F, 4.719884992e-01F, 4.720307589e-01F,
	4.720730186e-01F, 4.721152782e-01F, 4.721575379e-01F, 4.721997976e-01F, 4.722420573e-01F, 4.722843170e-01F, 4.723265469e-01F, 4.723688066e-01F,
	4.724110663e-01F, 4.724533260e-01F, 4.724955559e-01F, 4.725378156e-01F, 4.725800455e-01F, 4.726223052e-01F, 4.726645350e-01F, 4.727067947e-01F,
	4.727490246e-01F, 4.727912843e-01F, 4.728335142e-01F, 4.728757441e-01F, 4.729180038e-01F, 4.729602337e-01F, 4.730024636e-01F, 4.730446935e-01F,
	4.730869234e-01F, 4.731291533e-01F, 4.731713831e-01F, 4.732136130e-01F, 4.732558429e-01F, 4.732980728e-01F, 4.733403027e-01F, 4.733825326e-01F,
	4.734247625e-01F, 4.734669924e-01F, 4.735092223e-01F, 4.735514224e-01F, 4.735936522e-01F, 4.736358821e-01F, 4.736780822e-01F, 4.737203121e-01F,
	4.737625122e-01F, 4.738047421e-01F, 4.738469422e-01F, 4.738891721e-01F, 4.739313722e-01F, 4.739736021e-01F, 4.740158021e-01F, 4.740580022e-01F,
	4.741002023e-01F, 4.741424322e-01F, 4.741846323e-01F, 4.742268324e-01F, 4.742690325e-01F, 4.743112326e-01F, 4.743534327e-01F, 4.743956327e-01F,
	4.744378328e-01F, 4.744800329e-01F, 4.745222330e-01F, 4.745644331e-01F, 4.746066332e-01F, 4.746488035e-01F, 4.746910036e-01F, 4.747332036e-01F,
	4.747753739e-01F, 4.748175740e-01F, 4.748597741e-01F, 4.749019444e-01F, 4.749441445e-01F, 4.749863148e-01F, 4.750285149e-01F, 4.750706851e-01F,
	4.751128554e-01F, 4.751550555e-01F, 4.751972258e-01F, 4.752393961e-01F, 4.752815962e-01F, 4.753237665e-01F, 4.753659368e-01F, 4.754081070e-01F,
	4.754502773e-01F, 4.754924476e-01F, 4.755346179e-01F, 4.755767882e-01F, 4.756189585e-01F, 4.756611288e-01F, 4.757032990e-01F, 4.757454693e-01F,
	4.757876098e-01F, 4.758297801e-01F, 4.758719504e-01F, 4.759141207e-01F, 4.759562612e-01F, 4.759984314e-01F, 4.760405719e-01F, 4.760827422e-01F,
	4.761248827e-01F, 4.761670530e-01F, 4.762091935e-01F, 4.762513638e-01F, 4.762935042e-01F, 4.763356447e-01F, 4.763778150e-01F, 4.764199555e-01F,
	4.764620960e-01F, 4.765042365e-01F, 4.765463769e-01F, 4.765885174e-01F, 4.766306877e-01F, 4.766728282e-01F, 4.767149389e-01F, 4.767570794e-01F,
	4.767992198e-01F, 4.768413603e-01F, 4.768835008e-01F, 4.769256413e-01F, 4.769677818e-01F, 4.770098925e-01F, 4.770520329e-01F, 4.770941734e-01F,
	4.771362841e-01F, 4.771784246e-01F, 4.772205353e-01F, 4.772626758e-01F, 4.773047864e-01F, 4.773469269e-01F, 4.773890376e-01F, 4.774311781e-01F,
	4.774732888e-01F, 4.775153995e-01F, 4.775575101e-01F, 4.775996506e-01F, 4.776417613e-01F, 4.776838720e-01F, 4.777259827e-01F, 4.777680933e-01F,
	4.778102040e-01F, 4.778523147e-01F, 4.778944254e-01F, 4.779365361e-01F, 4.779786468e-01F, 4.780207574e-01F, 4.780628383e-01F, 4.781049490e-01F,
	4.781470597e-01F, 4.781891704e-01F, 4.782312512e-01F, 4.782733619e-01F, 4.783154428e-01F, 4.783575535e-01F, 4.783996344e-01F, 4.784417450e-01F,
	4.784838259e-01F, 4.785259366e-01F, 4.785680175e-01F, 4.786100984e-01F, 4.786522090e-01F, 4.786942899e-01F, 4.787363708e-01F, 4.787784517e-01F,
	4.788205624e-01F, 4.788626432e-01F, 4.789047241e-01F, 4.789468050e-01F, 4.789888859e-01F, 4.790309668e-01F, 4.790730476e-01F, 4.791150987e-01F,
	4.791571796e-01F, 4.791992605e-01F, 4.792413414e-01F, 4.792834222e-01F, 4.793254733e-01F, 4.793675542e-01F, 4.794096351e-01F, 4.794516861e-01F,
	4.794937670e-01F, 4.795358181e-01F, 4.795778990e-01F, 4.796199501e-01F, 4.796620309e-01F, 4.797040820e-01F, 4.797461331e-01F, 4.797881842e-01F,
	4.798302650e-01F, 4.798723161e-01F, 4.799143672e-01F, 4.799564183e-01F, 4.799984694e-01F, 4.800405204e-01F, 4.800825715e-01F, 4.801246226e-01F,
	4.801666737e-01F, 4.802087247e-01F, 4.802507758e-01F, 4.802928269e-01F, 4.803348780e-01F, 4.803769290e-01F, 4.804189503e-01F, 4.804610014e-01F,
	4.805030525e-01F, 4.805450737e-01F, 4.805871248e-01F, 4.806291461e-01F, 4.806711972e-01F, 4.807132185e-01F, 4.807552695e-01F, 4.807972908e-01F,
	4.808393419e-01F, 4.808813632e-01F, 4.809233844e-01F, 4.809654057e-01F, 4.810074568e-01F, 4.810494781e-01F, 4.810914993e-01F, 4.811335206e-01F,
	4.811755419e-01F, 4.812175632e-01F, 4.812595844e-01F, 4.813016057e-01F, 4.813436270e-01F, 4.813856483e-01F, 4.814276695e-01F, 4.814696908e-01F,
	4.815116823e-01F, 4.815537035e-01F, 4.815957248e-01F, 4.816377163e-01F, 4.816797376e-01F, 4.817217588e-01F, 4.817637503e-01F, 4.818057716e-01F,
	4.818477631e-01F, 4.818897843e-01F, 4.819317758e-01F, 4.819737673e-01F, 4.820157886e-01F, 4.820577800e-01F, 4.820997715e-01F, 4.821417630e-01F,
	4.821837842e-01F, 4.822257757e-01F, 4.822677672e-01F, 4.823097587e-01F, 4.823517501e-01F, 4.823937416e-01F, 4.824357331e-01F, 4.824777246e-01F,
	4.825197160e-01F, 4.825616777e-01F, 4.826036692e-01F, 4.826456606e-01F, 4.826876521e-01F, 4.827296138e-01F, 4.827716053e-01F, 4.828135967e-01F,
	4.828555584e-01F, 4.828975499e-01F, 4.829395115e-01F, 4.829815030e-01F, 4.830234647e-01F, 4.830654562e-01F, 4.831074178e-01F, 4.831493795e-01F,
	4.831913710e-01F, 4.832333326e-01F, 4.832752943e-01F, 4.833172560e-01F, 4.833592176e-01F, 4.834011793e-01F, 4.834431410e-01F, 4.834851325e-01F,
	4.835270643e-01F, 4.835690260e-01F, 4.836109877e-01F, 4.836529493e-01F, 4.836949110e-01F, 4.837368727e-01F, 4.837788343e-01F, 4.838207662e-01F,
	4.838627279e-01F, 4.839046896e-01F, 4.839466214e-01F, 4.839885831e-01F, 4.840305150e-01F, 4.840724766e-01F, 4.841144085e-01F, 4.841563702e-01F,
	4.841983020e-01F, 4.842402339e-01F, 4.842821956e-01F, 4.843241274e-01F, 4.843660593e-01F, 4.844079912e-01F, 4.844499528e-01F, 4.844918847e-01F,
	4.845338166e-01F, 4.845757484e-01F, 4.846176803e-01F, 4.846596122e-01F, 4.847015440e-01F, 4.847434759e-01F, 4.847854078e-01F, 4.848273098e-01F,
	4.848692417e-01F, 4.849111736e-01F, 4.849531054e-01F, 4.849950075e-01F, 4.850369394e-01F, 4.850788713e-01F, 4.851207733e-01F, 4.851627052e-01F,
	4.852046072e-01F, 4.852465391e-01F, 4.852884412e-01F, 4.853303432e-01F, 4.853722751e-01F, 4.854141772e-01F, 4.854560792e-01F, 4.854980111e-01F,
	4.855399132e-01F, 4.855818152e-01F, 4.856237173e-01F, 4.856656194e-01F, 4.857075214e-01F, 4.857494235e-01F, 4.857913256e-01F, 4.858332276e-01F,
	4.858751297e-01F, 4.859170318e-01F, 4.859589338e-01F, 4.860008061e-01F, 4.860427082e-01F, 4.860846102e-01F, 4.861264825e-01F, 4.861683846e-01F,
	4.862102866e-01F, 4.862521589e-01F, 4.862940609e-01F, 4.863359332e-01F, 4.863778353e-01F, 4.864197075e-01F, 4.864615798e-01F, 4.865034819e-01F,
	4.865453541e-01F, 4.865872264e-01F, 4.866290987e-01F, 4.866710007e-01F, 4.867128730e-01F, 4.867547452e-01F, 4.867966175e-01F, 4.868384898e-01F,
	4.868803620e-01F, 4.869222343e-01F, 4.869641066e-01F, 4.870059788e-01F, 4.870478511e-01F, 4.870896935e-01F, 4.871315658e-01F, 4.871734381e-01F,
	4.872153103e-01F, 4.872571528e-01F, 4.872990251e-01F, 4.873408675e-01F, 4.873827398e-01F, 4.874245822e-01F, 4.874664545e-01F, 4.875082970e-01F,
	4.875501692e-01F, 4.875920117e-01F, 4.876338542e-01F, 4.876757264e-01F, 4.877175689e-01F, 4.877594113e-01F, 4.878012538e-01F, 4.878430963e-01F,
	4.878849387e-01F, 4.879267812e-01F, 4.879686534e-01F, 4.880104661e-01F, 4.880523086e-01F, 4.880941510e-01F, 4.881359935e-01F, 4.881778359e-01F,
	4.882196784e-01F, 4.882615209e-01F, 4.883033335e-01F, 4.883451760e-01F, 4.883870184e-01F, 4.884288311e-01F, 4.884706736e-01F, 4.885124862e-01F,
	4.885543287e-01F, 4.885961413e-01F, 4.886379838e-01F, 4.886797965e-01F, 4.887216091e-01F, 4.887634516e-01F, 4.888052642e-01F, 4.888470769e-01F,
	4.888888896e-01F, 4.889307022e-01F, 4.889725447e-01F, 4.890143573e-01F, 4.890561700e-01F, 4.890979826e-01F, 4.891397953e-01F, 4.891815782e-01F,
	4.892233908e-01F, 4.892652035e-01F, 4.893070161e-01F, 4.893488288e-01F, 4.893906415e-01F, 4.894324243e-01F, 4.894742370e-01F, 4.895160198e-01F,
	4.895578325e-01F, 4.895996451e-01F, 4.896414280e-01F, 4.896832407e-01F, 4.897250235e-01F, 4.897668064e-01F, 4.898086190e-01F, 4.898504019e-01F,
	4.898921847e-01F, 4.899339974e-01F, 4.899757802e-01F, 4.900175631e-01F, 4.900593460e-01F, 4.901011288e-01F, 4.901429117e-01F, 4.901846945e-01F,
	4.902264774e-01F, 4.902682602e-01F, 4.903100431e-01F, 4.903518260e-01F, 4.903936088e-01F, 4.904353917e-01F, 4.904771447e-01F, 4.905189276e-01F,
	4.905607104e-01F, 4.906024635e-01F, 4.906442463e-01F, 4.906859994e-01F, 4.907277822e-01F, 4.907695353e-01F, 4.908113182e-01F, 4.908530712e-01F,
	4.908948541e-01F, 4.909366071e-01F, 4.909783602e-01F, 4.910201430e-01F, 4.910618961e-01F, 4.911036491e-01F, 4.911454022e-01F, 4.911871552e-01F,
	4.912289083e-01F, 4.912706614e-01F, 4.913124144e-01F, 4.913541675e-01F, 4.913959205e-01F, 4.914376736e-01F, 4.914794266e-01F, 4.915211797e-01F,
	4.915629029e-01F, 4.916046560e-01F, 4.916464090e-01F, 4.916881621e-01F, 4.917298853e-01F, 4.917716384e-01F, 4.918133616e-01F, 4.918551147e-01F,
	4.918968379e-01F, 4.919385910e-01F, 4.919803143e-01F, 4.920220375e-01F, 4.920637906e-01F, 4.921055138e-01F, 4.921472371e-01F, 4.921889603e-01F,
	4.922307134e-01F, 4.922724366e-01F, 4.923141599e-01F, 4.923558831e-01F, 4.923976064e-01F, 4.924393296e-01F, 4.924810529e-01F, 4.925227761e-01F,
	4.925644696e-01F, 4.926061928e-01F, 4.926479161e-01F, 4.926896393e-01F, 4.927313328e-01F, 4.927730560e-01F, 4.928147793e-01F, 4.928564727e-01F,
	4.928981960e-01F, 4.929398894e-01F, 4.929816127e-01F, 4.930233061e-01F, 4.930650294e-01F, 4.931067228e-01F, 4.931484163e-01F, 4.931901395e-01F,
	4.932318330e-01F, 4.932735264e-01F, 4.933152199e-01F, 4.933569133e-01F, 4.933986366e-01F, 4.934403300e-01F, 4.934820235e-01F, 4.935237169e-01F,
	4.935654104e-01F, 4.936070740e-01F, 4.936487675e-01F, 4.936904609e-01F, 4.937321544e-01F, 4.937738478e-01F, 4.938155115e-01F, 4.938572049e-01F,
	4.938988984e-01F, 4.939405620e-01F, 4.939822555e-01F, 4.940239191e-01F, 4.940656126e-01F, 4.941072762e-01F, 4.941489697e-01F, 4.941906333e-01F,
	4.942322969e-01F, 4.942739904e-01F, 4.943156540e-01F, 4.943573177e-01F, 4.943989813e-01F, 4.944406450e-01F, 4.944823384e-01F, 4.945240021e-01F,
	4.945656657e-01F, 4.946073294e-01F, 4.946489930e-01F, 4.946906567e-01F, 4.947322905e-01F, 4.947739542e-01F, 4.948156178e-01F, 4.948572814e-01F,
	4.948989451e-01F, 4.949405789e-01F, 4.949822426e-01F, 4.950238764e-01F, 4.950655401e-01F, 4.951072037e-01F, 4.951488376e-01F, 4.951905012e-01F,
	4.952321351e-01F, 4.952737689e-01F, 4.953154325e-01F, 4.953570664e-01F, 4.953987002e-01F, 4.954403341e-01F, 4.954819977e-01F, 4.955236316e-01F,
	4.955652654e-01F, 4.956068993e-01F, 4.956485331e-01F, 4.956901670e-01F, 4.957318008e-01F, 4.957734346e-01F, 4.958150685e-01F, 4.958567023e-01F,
	4.958983064e-01F, 4.959399402e-01F, 4.959815741e-01F, 4.960232079e-01F, 4.960648119e-01F, 4.961064458e-01F, 4.961480498e-01F, 4.961896837e-01F,
	4.962312877e-01F, 4.962729216e-01F, 4.963145256e-01F, 4.963561594e-01F, 4.963977635e-01F, 4.964393675e-01F, 4.964810014e-01F, 4.965226054e-01F,
	4.965642095e-01F, 4.966058135e-01F, 4.966474175e-01F, 4.966890216e-01F, 4.967306256e-01F, 4.967722297e-01F, 4.968138337e-01F, 4.968554378e-01F,
	4.968970418e-01F, 4.969386458e-01F, 4.969802499e-01F, 4.970218539e-01F, 4.970634282e-01F, 4.971050322e-01F, 4.971466362e-01F, 4.971882105e-01F,
	4.972298145e-01F, 4.972713888e-01F, 4.973129928e-01F, 4.973545671e-01F, 4.973961711e-01F, 4.974377453e-01F, 4.974793494e-01F, 4.975209236e-01F,
	4.975624979e-01F, 4.976040721e-01F, 4.976456761e-01F, 4.976872504e-01F, 4.977288246e-01F, 4.977703989e-01F, 4.978119731e-01F, 4.978535473e-01F,
	4.978951216e-01F, 4.979366958e-01F, 4.979782701e-01F, 4.980198443e-01F, 4.980614185e-01F, 4.981029630e-01F, 4.981445372e-01F, 4.981861115e-01F,
	4.982276559e-01F, 4.982692301e-01F, 4.983108044e-01F, 4.983523488e-01F, 4.983939230e-01F, 4.984354675e-01F, 4.984770417e-01F, 4.985185862e-01F,
	4.985601306e-01F, 4.986017048e-01F, 4.986432493e-01F, 4.986847937e-01F, 4.987263381e-01F, 4.987678826e-01F, 4.988094568e-01F, 4.988510013e-01F,
	4.988925457e-01F, 4.989340901e-01F, 4.989756346e-01F, 4.990171790e-01F, 4.990586936e-01F, 4.991002381e-01F, 4.991417825e-01F, 4.991833270e-01F,
	4.992248714e-01F, 4.992663860e-01F, 4.993079305e-01F, 4.993494749e-01F, 4.993909895e-01F, 4.994325340e-01F, 4.994740486e-01F, 4.995155931e-01F,
	4.995571077e-01F, 4.995986521e-01F, 4.996401668e-01F, 4.996816814e-01F, 4.997231960e-01F, 4.997647405e-01F, 4.998062551e-01F, 4.998477697e-01F,
	4.998892844e-01F, 4.999307990e-01F, 4.999723136e-01F, 5.000138283e-01F, 5.000553727e-01F, 5.000968575e-01F, 5.001384020e-01F, 5.001798868e-01F,
	5.002213717e-01F, 5.002629161e-01F, 5.003044009e-01F, 5.003458858e-01F, 5.003874302e-01F, 5.004289150e-01F, 5.004703999e-01F, 5.005119443e-01F,
	5.005534291e-01F, 5.005949140e-01F, 5.006363988e-01F, 5.006779432e-01F, 5.007194281e-01F, 5.007609129e-01F, 5.008023977e-01F, 5.008438826e-01F,
	5.008853674e-01F, 5.009268522e-01F, 5.009683371e-01F, 5.010098219e-01F, 5.010513067e-01F, 5.010927916e-01F, 5.011342764e-01F, 5.011757612e-01F,
	5.012172461e-01F, 5.012587309e-01F, 5.013002157e-01F, 5.013417006e-01F, 5.013831854e-01F, 5.014246702e-01F, 5.014661551e-01F, 5.015075803e-01F,
	5.015490651e-01F, 5.015905499e-01F, 5.016320348e-01F, 5.016734600e-01F, 5.017149448e-01F, 5.017564297e-01F, 5.017979145e-01F, 5.018393397e-01F,
	5.018808246e-01F, 5.019222498e-01F, 5.019637346e-01F, 5.020052195e-01F, 5.020466447e-01F, 5.020881295e-01F, 5.021295547e-01F, 5.021710396e-01F,
	5.022124648e-01F, 5.022539496e-01F, 5.022953749e-01F, 5.023368001e-01F, 5.023782849e-01F, 5.024197102e-01F, 5.024611950e-01F, 5.025026202e-01F,
	5.025440454e-01F, 5.025855303e-01F, 5.026269555e-01F, 5.026683807e-01F, 5.027098060e-01F, 5.027512908e-01F, 5.027927160e-01F, 5.028341413e-01F,
	5.028755665e-01F, 5.029169917e-01F, 5.029584169e-01F, 5.029999018e-01F, 5.030413270e-01F, 5.030827522e-01F, 5.031241775e-01F, 5.031656027e-01F,
	5.032070279e-01F, 5.032484531e-01F, 5.032898784e-01F, 5.033313036e-01F, 5.033727288e-01F, 5.034141541e-01F, 5.034555197e-01F, 5.034969449e-01F,
	5.035383701e-01F, 5.035797954e-01F, 5.036212206e-01F, 5.036626458e-01F, 5.037040114e-01F, 5.037454367e-01F, 5.037868619e-01F, 5.038282871e-01F,
	5.038696527e-01F, 5.039110780e-01F, 5.039525032e-01F, 5.039938688e-01F, 5.040352941e-01F, 5.040767193e-01F, 5.041180849e-01F, 5.041595101e-01F,
	5.042008758e-01F, 5.042423010e-01F, 5.042836666e-01F, 5.043250918e-01F, 5.043664575e-01F, 5.044078827e-01F, 5.044492483e-01F, 5.044906735e-01F,
	5.045320392e-01F, 5.045734048e-01F, 5.046148300e-01F, 5.046561956e-01F, 5.046975613e-01F, 5.047389865e-01F, 5.047803521e-01F, 5.048217177e-01F,
	5.048630834e-01F, 5.049045086e-01F, 5.049458742e-01F, 5.049872398e-01F, 5.050286055e-01F, 5.050699711e-01F, 5.051113367e-01F, 5.051527619e-01F,
	5.051941276e-01F, 5.052354932e-01F, 5.052768588e-01F, 5.053182244e-01F, 5.053595901e-01F, 5.054009557e-01F, 5.054423213e-01F, 5.054836869e-01F,
	5.055250525e-01F, 5.055663586e-01F, 5.056077242e-01F, 5.056490898e-01F, 5.056904554e-01F, 5.057318211e-01F, 5.057731867e-01F, 5.058144927e-01F,
	5.058558583e-01F, 5.058972239e-01F, 5.059385896e-01F, 5.059798956e-01F, 5.060212612e-01F, 5.060626268e-01F, 5.061039329e-01F, 5.061452985e-01F,
	5.061866641e-01F, 5.062279701e-01F, 5.062693357e-01F, 5.063106418e-01F, 5.063520074e-01F, 5.063933134e-01F, 5.064346790e-01F, 5.064759851e-01F,
	5.065173507e-01F, 5.065586567e-01F, 5.066000223e-01F, 5.066413283e-01F, 5.066826940e-01F, 5.067240000e-01F, 5.067653060e-01F, 5.068066716e-01F,
	5.068479776e-01F, 5.068892837e-01F, 5.069305897e-01F, 5.069719553e-01F, 5.070132613e-01F, 5.070545673e-01F, 5.070958734e-01F, 5.071371794e-01F,
	5.071785450e-01F, 5.072198510e-01F, 5.072611570e-01F, 5.073024631e-01F, 5.073437691e-01F, 5.073850751e-01F, 5.074263811e-01F, 5.074676871e-01F,
	5.075089931e-01F, 5.075502992e-01F, 5.075916052e-01F, 5.076329112e-01F, 5.076742172e-01F, 5.077155232e-01F, 5.077567697e-01F, 5.077980757e-01F,
	5.078393817e-01F, 5.078806877e-01F, 5.079219937e-01F, 5.079632998e-01F, 5.080045462e-01F, 5.080458522e-01F, 5.080871582e-01F, 5.081284046e-01F,
	5.081697106e-01F, 5.082110167e-01F, 5.082522631e-01F, 5.082935691e-01F, 5.083348751e-01F, 5.083761215e-01F, 5.084174275e-01F, 5.084586740e-01F,
	5.084999800e-01F, 5.085412264e-01F, 5.085825324e-01F, 5.086237788e-01F, 5.086650848e-01F, 5.087063313e-01F, 5.087475777e-01F, 5.087888837e-01F,
	5.088301301e-01F, 5.088714361e-01F, 5.089126825e-01F, 5.089539289e-01F, 5.089951754e-01F, 5.090364814e-01F, 5.090777278e-01F, 5.091189742e-01F,
	5.091602206e-01F, 5.092015266e-01F, 5.092427731e-01F, 5.092840195e-01F, 5.093252659e-01F, 5.093665123e-01F, 5.094077587e-01F, 5.094490051e-01F,
	5.094902515e-01F, 5.095314980e-01F, 5.095727444e-01F, 5.096139908e-01F, 5.096552372e-01F, 5.096964836e-01F, 5.097377300e-01F, 5.097789764e-01F,
	5.098202229e-01F, 5.098614693e-01F, 5.099027157e-01F, 5.099439621e-01F, 5.099851489e-01F, 5.100263953e-01F, 5.100676417e-01F, 5.101088881e-01F,
	5.101500750e-01F, 5.101913214e-01F, 5.102325678e-01F, 5.102737546e-01F, 5.103150010e-01F, 5.103562474e-01F, 5.103974342e-01F, 5.104386806e-01F,
	5.104799271e-01F, 5.105211139e-01F, 5.105623603e-01F, 5.106035471e-01F, 5.106447935e-01F, 5.106859803e-01F, 5.107272267e-01F, 5.107684135e-01F,
	5.108096004e-01F, 5.108508468e-01F, 5.108920336e-01F, 5.109332800e-01F, 5.109744668e-01F, 5.110156536e-01F, 5.110568404e-01F, 5.110980868e-01F,
	5.111392736e-01F, 5.111804605e-01F, 5.112216473e-01F, 5.112628937e-01F, 5.113040805e-01F, 5.113452673e-01F, 5.113864541e-01F, 5.114276409e-01F,
	5.114688277e-01F, 5.115100145e-01F, 5.115512609e-01F, 5.115924478e-01F, 5.116336346e-01F, 5.116748214e-01F, 5.117160082e-01F, 5.117571950e-01F,
	5.117983222e-01F, 5.118395090e-01F, 5.118806958e-01F, 5.119218826e-01F, 5.119630694e-01F, 5.120042562e-01F, 5.120454431e-01F, 5.120866299e-01F,
	5.121277571e-01F, 5.121689439e-01F, 5.122101307e-01F, 5.122513175e-01F, 5.122924447e-01F, 5.123336315e-01F, 5.123748183e-01F, 5.124159455e-01F,
	5.124571323e-01F, 5.124983191e-01F, 5.125394464e-01F, 5.125806332e-01F, 5.126217604e-01F, 5.126629472e-01F, 5.127040744e-01F, 5.127452612e-01F,
	5.127863884e-01F, 5.128275752e-01F, 5.128687024e-01F, 5.129098296e-01F, 5.129510164e-01F, 5.129921436e-01F, 5.130333304e-01F, 5.130744576e-01F,
	5.131155849e-01F, 5.131567717e-01F, 5.131978989e-01F, 5.132390261e-01F, 5.132801533e-01F, 5.133213401e-01F, 5.133624673e-01F, 5.134035945e-01F,
	5.134447217e-01F, 5.134858489e-01F, 5.135269761e-01F, 5.135681033e-01F, 5.136092305e-01F, 5.136503577e-01F, 5.136915445e-01F, 5.137326717e-01F,
	5.137737989e-01F, 5.138149261e-01F, 5.138559937e-01F, 5.138971210e-01F, 5.139382482e-01F, 5.139793754e-01F, 5.140205026e-01F, 5.140616298e-01F,
	5.141027570e-01F, 5.141438842e-01F, 5.141849518e-01F, 5.142260790e-01F, 5.142672062e-01F, 5.143083334e-01F, 5.143494010e-01F, 5.143905282e-01F,
	5.144316554e-01F, 5.144727230e-01F, 5.145138502e-01F, 5.145549774e-01F, 5.145960450e-01F, 5.146371722e-01F, 5.146782398e-01F, 5.147193670e-01F,
	5.147604346e-01F, 5.148015618e-01F, 5.148426294e-01F, 5.148837566e-01F, 5.149248242e-01F, 5.149659514e-01F, 5.150070190e-01F, 5.150481462e-01F,
	5.150892138e-01F, 5.151302814e-01F, 5.151714087e-01F, 5.152124763e-01F, 5.152535439e-01F, 5.152946115e-01F, 5.153357387e-01F, 5.153768063e-01F,
	5.154178739e-01F, 5.154589415e-01F, 5.155000091e-01F, 5.155411363e-01F, 5.155822039e-01F, 5.156232715e-01F, 5.156643391e-01F, 5.157054067e-01F,
	5.157464743e-01F, 5.157875419e-01F, 5.158286095e-01F, 5.158696771e-01F, 5.159107447e-01F, 5.159518123e-01F, 5.159928799e-01F, 5.160339475e-01F,
	5.160750151e-01F, 5.161160231e-01F, 5.161570907e-01F, 5.161981583e-01F, 5.162392259e-01F, 5.162802935e-01F, 5.163213015e-01F, 5.163623691e-01F,
	5.164034367e-01F, 5.164445043e-01F, 5.164855123e-01F, 5.165265799e-01F, 5.165676475e-01F, 5.166086555e-01F, 5.166497231e-01F, 5.166907310e-01F,
	5.167317986e-01F, 5.167728662e-01F, 5.168138742e-01F, 5.168549418e-01F, 5.168959498e-01F, 5.169370174e-01F, 5.169780254e-01F, 5.170190334e-01F,
	5.170601010e-01F, 5.171011090e-01F, 5.171421766e-01F, 5.171831846e-01F, 5.172241926e-01F, 5.172652602e-01F, 5.173062682e-01F, 5.173472762e-01F,
	5.173882842e-01F, 5.174293518e-01F, 5.174703598e-01F, 5.175113678e-01F, 5.175523758e-01F, 5.175933838e-01F, 5.176343918e-01F, 5.176753998e-01F,
	5.177164674e-01F, 5.177574754e-01F, 5.177984834e-01F, 5.178394914e-01F, 5.178804994e-01F, 5.179215074e-01F, 5.179625154e-01F, 5.180035233e-01F,
	5.180445313e-01F, 5.180854797e-01F, 5.181264877e-01F, 5.181674957e-01F, 5.182085037e-01F, 5.182495117e-01F, 5.182905197e-01F, 5.183314681e-01F,
	5.183724761e-01F, 5.184134841e-01F, 5.184544921e-01F, 5.184954405e-01F, 5.185364485e-01F, 5.185774565e-01F, 5.186184049e-01F, 5.186594129e-01F,
	5.187004209e-01F, 5.187413692e-01F, 5.187823772e-01F, 5.188233256e-01F, 5.188643336e-01F, 5.189052820e-01F, 5.189462900e-01F, 5.189872384e-01F,
	5.190282464e-01F, 5.190691948e-01F, 5.191102028e-01F, 5.191511512e-01F, 5.191920996e-01F, 5.192331076e-01F, 5.192740560e-01F, 5.193150043e-01F,
	5.193560123e-01F, 5.193969607e-01F, 5.194379091e-01F, 5.194788575e-01F, 5.195198655e-01F, 5.195608139e-01F, 5.196017623e-01F, 5.196427107e-01F,
	5.196836591e-01F, 5.197246075e-01F, 5.197655559e-01F, 5.198065042e-01F, 5.198475122e-01F, 5.198884606e-01F, 5.199294090e-01F, 5.199703574e-01F,
	5.200112462e-01F, 5.200521946e-01F, 5.200931430e-01F, 5.201340914e-01F, 5.201750398e-01F, 5.202159882e-01F, 5.202569366e-01F, 5.202978849e-01F,
	5.203387737e-01F, 5.203797221e-01F, 5.204206705e-01F, 5.204616189e-01F, 5.205025673e-01F, 5.205434561e-01F, 5.205844045e-01F, 5.206253529e-01F,
	5.206662416e-01F, 5.207071900e-01F, 5.207480788e-01F, 5.207890272e-01F, 5.208299756e-01F, 5.208708644e-01F, 5.209118128e-01F, 5.209527016e-01F,
	5.209936500e-01F, 5.210345387e-01F, 5.210754871e-01F, 5.211163759e-01F, 5.211572647e-01F, 5.211982131e-01F, 5.212391019e-01F, 5.212799907e-01F,
	5.213209391e-01F, 5.213618279e-01F, 5.214027166e-01F, 5.214436650e-01F, 5.214845538e-01F, 5.215254426e-01F, 5.215663314e-01F, 5.216072202e-01F,
	5.216481686e-01F, 5.216890574e-01F, 5.217299461e-01F, 5.217708349e-01F, 5.218117237e-01F, 5.218526125e-01F, 5.218935013e-01F, 5.219343901e-01F,
	5.219752789e-01F, 5.220161676e-01F, 5.220570564e-01F, 5.220979452e-01F, 5.221388340e-01F, 5.221797228e-01F, 5.222206116e-01F, 5.222615004e-01F,
	5.223023891e-01F, 5.223432183e-01F, 5.223841071e-01F, 5.224249959e-01F, 5.224658847e-01F, 5.225067139e-01F, 5.225476027e-01F, 5.225884914e-01F,
	5.226293802e-01F, 5.226702094e-01F, 5.227110982e-01F, 5.227519274e-01F, 5.227928162e-01F, 5.228337049e-01F, 5.228745341e-01F, 5.229154229e-01F,
	5.229562521e-01F, 5.229971409e-01F, 5.230379701e-01F, 5.230788589e-01F, 5.231196880e-01F, 5.231605768e-01F, 5.232014060e-01F, 5.232422352e-01F,
	5.232831240e-01F, 5.233239532e-01F, 5.233647823e-01F, 5.234056711e-01F, 5.234465003e-01F, 5.234873295e-01F, 5.235281587e-01F, 5.235690475e-01F,
	5.236098766e-01F, 5.236507058e-01F, 5.236915350e-01F, 5.237323642e-01F, 5.237731934e-01F, 5.238140225e-01F, 5.238549113e-01F, 5.238957405e-01F,
	5.239365697e-01F, 5.239773989e-01F, 5.240182281e-01F, 5.240590572e-01F, 5.240998864e-01F, 5.241406560e-01F, 5.241814852e-01F, 5.242223144e-01F,
	5.242631435e-01F, 5.243039727e-01F, 5.243448019e-01F, 5.243856311e-01F, 5.244264007e-01F, 5.244672298e-01F, 5.245080590e-01F, 5.245488882e-01F,
	5.245896578e-01F, 5.246304870e-01F, 5.246713161e-01F, 5.247120857e-01F, 5.247529149e-01F, 5.247937441e-01F, 5.248345137e-01F, 5.248753428e-01F,
	5.249161124e-01F, 5.249569416e-01F, 5.249977112e-01F, 5.250385404e-01F, 5.250793099e-01F, 5.251201391e-01F, 5.251609087e-01F, 5.252017379e-01F,
	5.252425075e-01F, 5.252832770e-01F, 5.253241062e-01F, 5.253648758e-01F, 5.254056454e-01F, 5.254464746e-01F, 5.254872441e-01F, 5.255280137e-01F,
	5.255687833e-01F, 5.256096125e-01F, 5.256503820e-01F, 5.256911516e-01F, 5.257319212e-01F, 5.257726908e-01F, 5.258134604e-01F, 5.258542299e-01F,
	5.258949995e-01F, 5.259358287e-01F, 5.259765983e-01F, 5.260173678e-01F, 5.260581374e-01F, 5.260988474e-01F, 5.261396170e-01F, 5.261803865e-01F,
	5.262211561e-01F, 5.262619257e-01F, 5.263026953e-01F, 5.263434649e-01F, 5.263842344e-01F, 5.264249444e-01F, 5.264657140e-01F, 5.265064836e-01F,
	5.265472531e-01F, 5.265879631e-01F, 5.266287327e-01F, 5.266695023e-01F, 5.267102122e-01F, 5.267509818e-01F, 5.267917514e-01F, 5.268324614e-01F,
	5.268732309e-01F, 5.269139409e-01F, 5.269547105e-01F, 5.269954205e-01F, 5.270361900e-01F, 5.270769000e-01F, 5.271176696e-01F, 5.271583796e-01F,
	5.271991491e-01F, 5.272398591e-01F, 5.272806287e-01F, 5.273213387e-01F, 5.273620486e-01F, 5.274028182e-01F, 5.274435282e-01F, 5.274842381e-01F,
	5.275249481e-01F, 5.275657177e-01F, 5.276064277e-01F, 5.276471376e-01F, 5.276878476e-01F, 5.277285576e-01F, 5.277692676e-01F, 5.278100371e-01F,
	5.278507471e-01F, 5.278914571e-01F, 5.279321671e-01F, 5.279728770e-01F, 5.280135870e-01F, 5.280542970e-01F, 5.280950069e-01F, 5.281357169e-01F,
	5.281764269e-01F, 5.282170773e-01F, 5.282577872e-01F, 5.282984972e-01F, 5.283392072e-01F, 5.283799171e-01F, 5.284206271e-01F, 5.284612775e-01F,
	5.285019875e-01F, 5.285426974e-01F, 5.285834074e-01F, 5.286240578e-01F, 5.286647677e-01F, 5.287054777e-01F, 5.287461281e-01F, 5.287868381e-01F,
	5.288275480e-01F, 5.288681984e-01F, 5.289089084e-01F, 5.289495587e-01F, 5.289902687e-01F, 5.290309191e-01F, 5.290716290e-01F, 5.291122794e-01F,
	5.291529894e-01F, 5.291936398e-01F, 5.292342901e-01F, 5.292750001e-01F, 5.293156505e-01F, 5.293563604e-01F, 5.293970108e-01F, 5.294376612e-01F,
	5.294783115e-01F, 5.295190215e-01F, 5.295596719e-01F, 5.296003222e-01F, 5.296409726e-01F, 5.296816230e-01F, 5.297223330e-01F, 5.297629833e-01F,
	5.298036337e-01F, 5.298442841e-01F, 5.298849344e-01F, 5.299255848e-01F, 5.299662352e-01F, 5.300068855e-01F, 5.300475359e-01F, 5.300881863e-01F,
	5.301288366e-01F, 5.301694870e-01F, 5.302101374e-01F, 5.302507877e-01F, 5.302914381e-01F, 5.303320289e-01F, 5.303726792e-01F, 5.304133296e-01F,
	5.304539800e-01F, 5.304946303e-01F, 5.305352211e-01F, 5.305758715e-01F, 5.306165218e-01F, 5.306571126e-01F, 5.306977630e-01F, 5.307384133e-01F,
	5.307790041e-01F, 5.308196545e-01F, 5.308603048e-01F, 5.309008956e-01F, 5.309415460e-01F, 5.309821367e-01F, 5.310227871e-01F, 5.310633779e-01F,
	5.311040282e-01F, 5.311446190e-01F, 5.311852098e-01F, 5.312258601e-01F, 5.312664509e-01F, 5.313071012e-01F, 5.313476920e-01F, 5.313882828e-01F,
	5.314288735e-01F, 5.314695239e-01F, 5.315101147e-01F, 5.315507054e-01F, 5.315912962e-01F, 5.316319466e-01F, 5.316725373e-01F, 5.317131281e-01F,
	5.317537189e-01F, 5.317943096e-01F, 5.318349004e-01F, 5.318754911e-01F, 5.319160819e-01F, 5.319566727e-01F, 5.319972634e-01F, 5.320378542e-01F,
	5.320784450e-01F, 5.321190357e-01F, 5.321596265e-01F, 5.322002172e-01F, 5.322408080e-01F, 5.322813988e-01F, 5.323219895e-01F, 5.323625207e-01F,
	5.324031115e-01F, 5.324437022e-01F, 5.324842930e-01F, 5.325248837e-01F, 5.325654149e-01F, 5.326060057e-01F, 5.326465964e-01F, 5.326871276e-01F,
	5.327277184e-01F, 5.327683091e-01F, 5.328088403e-01F, 5.328494310e-01F, 5.328899622e-01F, 5.329305530e-01F, 5.329710841e-01F, 5.330116749e-01F,
	5.330522060e-01F, 5.330927968e-01F, 5.331333280e-01F, 5.331739187e-01F, 5.332144499e-01F, 5.332549810e-01F, 5.332955718e-01F, 5.333361030e-01F,
	5.333766341e-01F, 5.334172249e-01F, 5.334577560e-01F, 5.334982872e-01F, 5.335388184e-01F, 5.335794091e-01F, 5.336199403e-01F, 5.336604714e-01F,
	5.337010026e-01F, 5.337415338e-01F, 5.337820649e-01F, 5.338225961e-01F, 5.338631272e-01F, 5.339036584e-01F, 5.339441895e-01F, 5.339847207e-01F,
	5.340252519e-01F, 5.340657830e-01F, 5.341063142e-01F, 5.341468453e-01F, 5.341873765e-01F, 5.342279077e-01F, 5.342684388e-01F, 5.343089700e-01F,
	5.343494415e-01F, 5.343899727e-01F, 5.344305038e-01F, 5.344710350e-01F, 5.345115066e-01F, 5.345520377e-01F, 5.345925689e-01F, 5.346331000e-01F,
	5.346735716e-01F, 5.347141027e-01F, 5.347545743e-01F, 5.347951055e-01F, 5.348356366e-01F, 5.348761082e-01F, 5.349166393e-01F, 5.349571109e-01F,
	5.349976420e-01F, 5.350381136e-01F, 5.350786448e-01F, 5.351191163e-01F, 5.351595879e-01F, 5.352001190e-01F, 5.352405906e-01F, 5.352810621e-01F,
	5.353215933e-01F, 5.353620648e-01F, 5.354025364e-01F, 5.354430676e-01F, 5.354835391e-01F, 5.355240107e-01F, 5.355644822e-01F, 5.356049538e-01F,
	5.356454849e-01F, 5.356859565e-01F, 5.357264280e-01F, 5.357668996e-01F, 5.358073711e-01F, 5.358478427e-01F, 5.358883142e-01F, 5.359287858e-01F,
	5.359692574e-01F, 5.360097289e-01F, 5.360502005e-01F, 5.360906720e-01F, 5.361311436e-01F, 5.361716151e-01F, 5.362120271e-01F, 5.362524986e-01F,
	5.362929702e-01F, 5.363334417e-01F, 5.363739133e-01F, 5.364143252e-01F, 5.364547968e-01F, 5.364952683e-01F, 5.365357399e-01F, 5.365761518e-01F,
	5.366166234e-01F, 5.366570950e-01F, 5.366975069e-01F, 5.367379785e-01F, 5.367783904e-01F, 5.368188620e-01F, 5.368592739e-01F, 5.368997455e-01F,
	5.369401574e-01F, 5.369806290e-01F, 5.370210409e-01F, 5.370615125e-01F, 5.371019244e-01F, 5.371423960e-01F, 5.371828079e-01F, 5.372232199e-01F,
	5.372636914e-01F, 5.373041034e-01F, 5.373445153e-01F, 5.373849273e-01F, 5.374253988e-01F, 5.374658108e-01F, 5.375062227e-01F, 5.375466347e-01F,
	5.375870466e-01F, 5.376275182e-01F, 5.376679301e-01F, 5.377083421e-01F, 5.377487540e-01F, 5.377891660e-01F, 5.378295779e-01F, 5.378699899e-01F,
	5.379104018e-01F, 5.379508138e-01F, 5.379912257e-01F, 5.380316377e-01F, 5.380720496e-01F, 5.381124616e-01F, 5.381528735e-01F, 5.381932259e-01F,
	5.382336378e-01F, 5.382740498e-01F, 5.383144617e-01F, 5.383548737e-01F, 5.383952260e-01F, 5.384356380e-01F, 5.384760499e-01F, 5.385164022e-01F,
	5.385568142e-01F, 5.385972261e-01F, 5.386375785e-01F, 5.386779904e-01F, 5.387184024e-01F, 5.387587547e-01F, 5.387991667e-01F, 5.388395190e-01F,
	5.388799310e-01F, 5.389202833e-01F, 5.389606953e-01F, 5.390010476e-01F, 5.390414000e-01F, 5.390818119e-01F, 5.391221642e-01F, 5.391625762e-01F,
	5.392029285e-01F, 5.392432809e-01F, 5.392836332e-01F, 5.393240452e-01F, 5.393643975e-01F, 5.394047499e-01F, 5.394451022e-01F, 5.394855142e-01F,
	5.395258665e-01F, 5.395662189e-01F, 5.396065712e-01F, 5.396469235e-01F, 5.396872759e-01F, 5.397276282e-01F, 5.397679806e-01F, 5.398083329e-01F,
	5.398486853e-01F, 5.398890376e-01F, 5.399293900e-01F, 5.399697423e-01F, 5.400100946e-01F, 5.400504470e-01F, 5.400907993e-01F, 5.401311517e-01F,
	5.401714444e-01F, 5.402117968e-01F, 5.402521491e-01F, 5.402925014e-01F, 5.403328538e-01F, 5.403731465e-01F, 5.404134989e-01F, 5.404538512e-01F,
	5.404941440e-01F, 5.405344963e-01F, 5.405748487e-01F, 5.406151414e-01F, 5.406554937e-01F, 5.406957865e-01F, 5.407361388e-01F, 5.407764316e-01F,
	5.408167839e-01F, 5.408570766e-01F, 5.408974290e-01F, 5.409377217e-01F, 5.409780741e-01F, 5.410183668e-01F, 5.410586596e-01F, 5.410990119e-01F,
	5.411393046e-01F, 5.411795974e-01F, 5.412199497e-01F, 5.412602425e-01F, 5.413005352e-01F, 5.413408279e-01F, 5.413811803e-01F, 5.414214730e-01F,
	5.414617658e-01F, 5.415020585e-01F, 5.415423512e-01F, 5.415826440e-01F, 5.416229367e-01F, 5.416632295e-01F, 5.417035818e-01F, 5.417438745e-01F,
	5.417841673e-01F, 5.418244600e-01F, 5.418646932e-01F, 5.419049859e-01F, 5.419452786e-01F, 5.419855714e-01F, 5.420258641e-01F, 5.420661569e-01F,
	5.421064496e-01F, 5.421467423e-01F, 5.421869755e-01F, 5.422272682e-01F, 5.422675610e-01F, 5.423078537e-01F, 5.423480868e-01F, 5.423883796e-01F,
	5.424286723e-01F, 5.424689054e-01F, 5.425091982e-01F, 5.425494313e-01F, 5.425897241e-01F, 5.426300168e-01F, 5.426702499e-01F, 5.427105427e-01F,
	5.427507758e-01F, 5.427910686e-01F, 5.428313017e-01F, 5.428715944e-01F, 5.429118276e-01F, 5.429520607e-01F, 5.429923534e-01F, 5.430325866e-01F,
	5.430728197e-01F, 5.431131124e-01F, 5.431533456e-01F, 5.431935787e-01F, 5.432338119e-01F, 5.432741046e-01F, 5.433143377e-01F, 5.433545709e-01F,
	5.433948040e-01F, 5.434350371e-01F, 5.434752703e-01F, 5.435155630e-01F, 5.435557961e-01F, 5.435960293e-01F, 5.436362624e-01F, 5.436764956e-01F,
	5.437167287e-01F, 5.437569618e-01F, 5.437971950e-01F, 5.438374281e-01F, 5.438776016e-01F, 5.439178348e-01F, 5.439580679e-01F, 5.439983010e-01F,
	5.440385342e-01F, 5.440787673e-01F, 5.441189408e-01F, 5.441591740e-01F, 5.441994071e-01F, 5.442396402e-01F, 5.442798138e-01F, 5.443200469e-01F,
	5.443602800e-01F, 5.444004536e-01F, 5.444406867e-01F, 5.444809198e-01F, 5.445210934e-01F, 5.445613265e-01F, 5.446015000e-01F, 5.446417332e-01F,
	5.446819067e-01F, 5.447221398e-01F, 5.447623134e-01F, 5.448025465e-01F, 5.448427200e-01F, 5.448828936e-01F, 5.449231267e-01F, 5.449633002e-01F,
	5.450034738e-01F, 5.450437069e-01F, 5.450838804e-01F, 5.451240540e-01F, 5.451642275e-01F, 5.452044606e-01F, 5.452446342e-01F, 5.452848077e-01F,
	5.453249812e-01F, 5.453651547e-01F, 5.454053283e-01F, 5.454455018e-01F, 5.454857349e-01F, 5.455259085e-01F, 5.455660820e-01F, 5.456062555e-01F,
	5.456464291e-01F, 5.456866026e-01F, 5.457267165e-01F, 5.457668900e-01F, 5.458070636e-01F, 5.458472371e-01F, 5.458874106e-01F, 5.459275842e-01F,
	5.459677577e-01F, 5.460078716e-01F, 5.460480452e-01F, 5.460882187e-01F, 5.461283922e-01F, 5.461685061e-01F, 5.462086797e-01F, 5.462488532e-01F,
	5.462889671e-01F, 5.463291407e-01F, 5.463693142e-01F, 5.464094281e-01F, 5.464496017e-01F, 5.464897156e-01F, 5.465298891e-01F, 5.465700030e-01F,
	5.466101766e-01F, 5.466502905e-01F, 5.466904640e-01F, 5.467305779e-01F, 5.467707515e-01F, 5.468108654e-01F, 5.468509793e-01F, 5.468911529e-01F,
	5.469312668e-01F, 5.469713807e-01F, 5.470114946e-01F, 5.470516682e-01F, 5.470917821e-01F, 5.471318960e-01F, 5.471720099e-01F, 5.472121239e-01F,
	5.472522974e-01F, 5.472924113e-01F, 5.473325253e-01F, 5.473726392e-01F, 5.474127531e-01F, 5.474528670e-01F, 5.474929810e-01F, 5.475330949e-01F,
	5.475732088e-01F, 5.476133227e-01F, 5.476534367e-01F, 5.476935506e-01F, 5.477336645e-01F, 5.477737784e-01F, 5.478138328e-01F, 5.478539467e-01F,
	5.478940606e-01F, 5.479341745e-01F, 5.479742885e-01F, 5.480143428e-01F, 5.480544567e-01F, 5.480945706e-01F, 5.481346250e-01F, 5.481747389e-01F,
	5.482148528e-01F, 5.482549071e-01F, 5.482950211e-01F, 5.483350754e-01F, 5.483751893e-01F, 5.484152436e-01F, 5.484553576e-01F, 5.484954119e-01F,
	5.485355258e-01F, 5.485755801e-01F, 5.486156940e-01F, 5.486557484e-01F, 5.486958623e-01F, 5.487359166e-01F, 5.487759709e-01F, 5.488160849e-01F,
	5.488561392e-01F, 5.488961935e-01F, 5.489362478e-01F, 5.489763618e-01F, 5.490164161e-01F, 5.490564704e-01F, 5.490965247e-01F, 5.491365790e-01F,
	5.491766334e-01F, 5.492167473e-01F, 5.492568016e-01F, 5.492968559e-01F, 5.493369102e-01F, 5.493769646e-01F, 5.494170189e-01F, 5.494570732e-01F,
	5.494971275e-01F, 5.495371819e-01F, 5.495772362e-01F, 5.496172309e-01F, 5.496572852e-01F, 5.496973395e-01F, 5.497373939e-01F, 5.497774482e-01F,
	5.498175025e-01F, 5.498574972e-01F, 5.498975515e-01F, 5.499376059e-01F, 5.499776602e-01F, 5.500176549e-01F, 5.500577092e-01F, 5.500977635e-01F,
	5.501377583e-01F, 5.501778126e-01F, 5.502178073e-01F, 5.502578616e-01F, 5.502978563e-01F, 5.503379107e-01F, 5.503779054e-01F, 5.504179597e-01F,
	5.504579544e-01F, 5.504980087e-01F, 5.505380034e-01F, 5.505780578e-01F, 5.506180525e-01F, 5.506580472e-01F, 5.506981015e-01F, 5.507380962e-01F,
	5.507780910e-01F, 5.508180857e-01F, 5.508581400e-01F, 5.508981347e-01F, 5.509381294e-01F, 5.509781241e-01F, 5.510181189e-01F, 5.510581136e-01F,
	5.510981679e-01F, 5.511381626e-01F, 5.511781573e-01F, 5.512181520e-01F, 5.512581468e-01F, 5.512981415e-01F, 5.513381362e-01F, 5.513781309e-01F,
	5.514181256e-01F, 5.514581203e-01F, 5.514980555e-01F, 5.515380502e-01F, 5.515780449e-01F, 5.516180396e-01F, 5.516580343e-01F, 5.516980290e-01F,
	5.517379642e-01F, 5.517779589e-01F, 5.518179536e-01F, 5.518579483e-01F, 5.518978834e-01F, 5.519378781e-01F, 5.519778728e-01F, 5.520178080e-01F,
	5.520578027e-01F, 5.520977378e-01F, 5.521377325e-01F, 5.521776676e-01F, 5.522176623e-01F, 5.522575974e-01F, 5.522975922e-01F, 5.523375273e-01F,
	5.523775220e-01F, 5.524174571e-01F, 5.524574518e-01F, 5.524973869e-01F, 5.525373220e-01F, 5.525773168e-01F, 5.526172519e-01F, 5.526571870e-01F,
	5.526971221e-01F, 5.527371168e-01F, 5.527770519e-01F, 5.528169870e-01F, 5.528569221e-01F, 5.528968573e-01F, 5.529368520e-01F, 5.529767871e-01F,
	5.530167222e-01F, 5.530566573e-01F, 5.530965924e-01F, 5.531365275e-01F, 5.531764627e-01F, 5.532163978e-01F, 5.532563329e-01F, 5.532962680e-01F,
	5.533362031e-01F, 5.533761382e-01F, 5.534160137e-01F, 5.534559488e-01F, 5.534958839e-01F, 5.535358191e-01F, 5.535757542e-01F, 5.536156297e-01F,
	5.536555648e-01F, 5.536954999e-01F, 5.537354350e-01F, 5.537753105e-01F, 5.538152456e-01F, 5.538551807e-01F, 5.538950562e-01F, 5.539349914e-01F,
	5.539748669e-01F, 5.540148020e-01F, 5.540546775e-01F, 5.540946126e-01F, 5.541344881e-01F, 5.541744232e-01F, 5.542142987e-01F, 5.542542338e-01F,
	5.542941093e-01F, 5.543340445e-01F, 5.543739200e-01F, 5.544137955e-01F, 5.544537306e-01F, 5.544936061e-01F, 5.545334816e-01F, 5.545733571e-01F,
	5.546132922e-01F, 5.546531677e-01F, 5.546930432e-01F, 5.547329187e-01F, 5.547727942e-01F, 5.548126698e-01F, 5.548526049e-01F, 5.548924804e-01F,
	5.549323559e-01F, 5.549722314e-01F, 5.550121069e-01F, 5.550519824e-01F, 5.550918579e-01F, 5.551317334e-01F, 5.551716089e-01F, 5.552114844e-01F,
	5.552513003e-01F, 5.552911758e-01F, 5.553310513e-01F, 5.553709269e-01F, 5.554108024e-01F, 5.554506779e-01F, 5.554904938e-01F, 5.555303693e-01F,
	5.555702448e-01F, 5.556100607e-01F, 5.556499362e-01F, 5.556898117e-01F, 5.557296276e-01F, 5.557695031e-01F, 5.558093786e-01F, 5.558491945e-01F,
	5.558890700e-01F, 5.559288859e-01F, 5.559687614e-01F, 5.560085773e-01F, 5.560484529e-01F, 5.560882688e-01F, 5.561281443e-01F, 5.561679602e-01F,
	5.562077761e-01F, 5.562476516e-01F, 5.562874675e-01F, 5.563272834e-01F, 5.563671589e-01F, 5.564069748e-01F, 5.564467907e-01F, 5.564866066e-01F,
	5.565264821e-01F, 5.565662980e-01F, 5.566061139e-01F, 5.566459298e-01F, 5.566857457e-01F, 5.567255616e-01F, 5.567653775e-01F, 5.568051934e-01F,
	5.568450093e-01F, 5.568848252e-01F, 5.569246411e-01F, 5.569644570e-01F, 5.570042729e-01F, 5.570440888e-01F, 5.570839047e-01F, 5.571237206e-01F,
	5.571635365e-01F, 5.572033525e-01F, 5.572431684e-01F, 5.572829247e-01F, 5.573227406e-01F, 5.573625565e-01F, 5.574023724e-01F, 5.574421287e-01F,
	5.574819446e-01F, 5.575217605e-01F, 5.575615168e-01F, 5.576013327e-01F, 5.576411486e-01F, 5.576809049e-01F, 5.577207208e-01F, 5.577604771e-01F,
	5.578002930e-01F, 5.578400493e-01F, 5.578798652e-01F, 5.579196215e-01F, 5.579594374e-01F, 5.579991937e-01F, 5.580389500e-01F, 5.580787659e-01F,
	5.581185222e-01F, 5.581582785e-01F, 5.581980944e-01F, 5.582378507e-01F, 5.582776070e-01F, 5.583174229e-01F, 5.583571792e-01F, 5.583969355e-01F,
	5.584366918e-01F, 5.584764481e-01F, 5.585162044e-01F, 5.585560203e-01F, 5.585957766e-01F, 5.586355329e-01F, 5.586752892e-01F, 5.587150455e-01F,
	5.587548018e-01F, 5.587945580e-01F, 5.588343143e-01F, 5.588740706e-01F, 5.589138269e-01F, 5.589535236e-01F, 5.589932799e-01F, 5.590330362e-01F,
	5.590727925e-01F, 5.591125488e-01F, 5.591523051e-01F, 5.591920018e-01F, 5.592317581e-01F, 5.592715144e-01F, 5.593112111e-01F, 5.593509674e-01F,
	5.593907237e-01F, 5.594304204e-01F, 5.594701767e-01F, 5.595099330e-01F, 5.595496297e-01F, 5.595893860e-01F, 5.596290827e-01F, 5.596688390e-01F,
	5.597085357e-01F, 5.597482920e-01F, 5.597879887e-01F, 5.598277450e-01F, 5.598674417e-01F, 5.599071383e-01F, 5.599468946e-01F, 5.599865913e-01F,
	5.600262880e-01F, 5.600660443e-01F, 5.601057410e-01F, 5.601454377e-01F, 5.601851344e-01F, 5.602248907e-01F, 5.602645874e-01F, 5.603042841e-01F,
	5.603439808e-01F, 5.603836775e-01F, 5.604233742e-01F, 5.604630709e-01F, 5.605027676e-01F, 5.605424643e-01F, 5.605821609e-01F, 5.606218576e-01F,
	5.606615543e-01F, 5.607012510e-01F, 5.607409477e-01F, 5.607806444e-01F, 5.608203411e-01F, 5.608600378e-01F, 5.608997345e-01F, 5.609394312e-01F,
	5.609790683e-01F, 5.610187650e-01F, 5.610584617e-01F, 5.610981584e-01F, 5.611377954e-01F, 5.611774921e-01F, 5.612171888e-01F, 5.612568259e-01F,
	5.612965226e-01F, 5.613361597e-01F, 5.613758564e-01F, 5.614155531e-01F, 5.614551902e-01F, 5.614948869e-01F, 5.615345240e-01F, 5.615742207e-01F,
	5.616138577e-01F, 5.616534948e-01F, 5.616931915e-01F, 5.617328286e-01F, 5.617725253e-01F, 5.618121624e-01F, 5.618517995e-01F, 5.618914962e-01F,
	5.619311333e-01F, 5.619707704e-01F, 5.620104074e-01F, 5.620500445e-01F, 5.620897412e-01F, 5.621293783e-01F, 5.621690154e-01F, 5.622086525e-01F,
	5.622482896e-01F, 5.622879267e-01F, 5.623275638e-01F, 5.623672009e-01F, 5.624068379e-01F, 5.624464750e-01F, 5.624861121e-01F, 5.625257492e-01F,
	5.625653863e-01F, 5.626050234e-01F, 5.626446605e-01F, 5.626842976e-01F, 5.627239347e-01F, 5.627635121e-01F, 5.628031492e-01F, 5.628427863e-01F,
	5.628824234e-01F, 5.629220605e-01F, 5.629616380e-01F, 5.630012751e-01F, 5.630409122e-01F, 5.630804896e-01F, 5.631201267e-01F, 5.631597042e-01F,
	5.631993413e-01F, 5.632389784e-01F, 5.632785559e-01F, 5.633181930e-01F, 5.633577704e-01F, 5.633974075e-01F, 5.634369850e-01F, 5.634765625e-01F,
	5.635161996e-01F, 5.635557771e-01F, 5.635954142e-01F, 5.636349916e-01F, 5.636745691e-01F, 5.637142062e-01F, 5.637537837e-01F, 5.637933612e-01F,
	5.638329387e-01F, 5.638725758e-01F, 5.639121532e-01F, 5.639517307e-01F, 5.639913082e-01F, 5.640308857e-01F, 5.640704632e-01F, 5.641100407e-01F,
	5.641496181e-01F, 5.641891956e-01F, 5.642287731e-01F, 5.642683506e-01F, 5.643079281e-01F, 5.643475056e-01F, 5.643870831e-01F, 5.644266605e-01F,
	5.644662380e-01F, 5.645058155e-01F, 5.645453930e-01F, 5.645849705e-01F, 5.646244884e-01F, 5.646640658e-01F, 5.647036433e-01F, 5.647432208e-01F,
	5.647827387e-01F, 5.648223162e-01F, 5.648618937e-01F, 5.649014115e-01F, 5.649409890e-01F, 5.649805665e-01F, 5.650200844e-01F, 5.650596619e-01F,
	5.650991797e-01F, 5.651387572e-01F, 5.651782751e-01F, 5.652178526e-01F, 5.652573705e-01F, 5.652969480e-01F, 5.653364658e-01F, 5.653759837e-01F,
	5.654155612e-01F, 5.654550791e-01F, 5.654945970e-01F, 5.655341744e-01F, 5.655736923e-01F, 5.656132102e-01F, 5.656527281e-01F, 5.656923056e-01F,
	5.657318234e-01F, 5.657713413e-01F, 5.658108592e-01F, 5.658503771e-01F, 5.658898950e-01F, 5.659294128e-01F, 5.659689307e-01F, 5.660084486e-01F,
	5.660479665e-01F, 5.660874844e-01F, 5.661270022e-01F, 5.661665201e-01F, 5.662060380e-01F, 5.662455559e-01F, 5.662850738e-01F, 5.663245916e-01F,
	5.663641095e-01F, 5.664036274e-01F, 5.664430857e-01F, 5.664826035e-01F, 5.665221214e-01F, 5.665616393e-01F, 5.666010976e-01F, 5.666406155e-01F,
	5.666801333e-01F, 5.667195916e-01F, 5.667591095e-01F, 5.667986274e-01F, 5.668380857e-01F, 5.668776035e-01F, 5.669170618e-01F, 5.669565797e-01F,
	5.669960380e-01F, 5.670355558e-01F, 5.670750141e-01F, 5.671145320e-01F, 5.671539903e-01F, 5.671934485e-01F, 5.672329664e-01F, 5.672724247e-01F,
	5.673118830e-01F, 5.673514009e-01F, 5.673908591e-01F, 5.674303174e-01F, 5.674697757e-01F, 5.675092936e-01F, 5.675487518e-01F, 5.675882101e-01F,
	5.676276684e-01F, 5.676671267e-01F, 5.677065849e-01F, 5.677460432e-01F, 5.677855015e-01F, 5.678249598e-01F, 5.678644180e-01F, 5.679038763e-01F,
	5.679433346e-01F, 5.679827929e-01F, 5.680222511e-01F, 5.680617094e-01F, 5.681011677e-01F, 5.681406260e-01F, 5.681800842e-01F, 5.682194829e-01F,
	5.682589412e-01F, 5.682983994e-01F, 5.683378577e-01F, 5.683772564e-01F, 5.684167147e-01F, 5.684561729e-01F, 5.684955716e-01F, 5.685350299e-01F,
	5.685744882e-01F, 5.686138868e-01F, 5.686533451e-01F, 5.686927438e-01F, 5.687322021e-01F, 5.687716007e-01F, 5.688110590e-01F, 5.688504577e-01F,
	5.688899159e-01F, 5.689293146e-01F, 5.689687729e-01F, 5.690081716e-01F, 5.690475702e-01F, 5.690870285e-01F, 5.691264272e-01F, 5.691658258e-01F,
	5.692052245e-01F, 5.692446828e-01F, 5.692840815e-01F, 5.693234801e-01F, 5.693628788e-01F, 5.694022775e-01F, 5.694417357e-01F, 5.694811344e-01F,
	5.695205331e-01F, 5.695599318e-01F, 5.695993304e-01F, 5.696387291e-01F, 5.696781278e-01F, 5.697175264e-01F, 5.697569251e-01F, 5.697963238e-01F,
	5.698357224e-01F, 5.698751211e-01F, 5.699144602e-01F, 5.699538589e-01F, 5.699932575e-01F, 5.700326562e-01F, 5.700720549e-01F, 5.701113939e-01F,
	5.701507926e-01F, 5.701901913e-01F, 5.702295899e-01F, 5.702689290e-01F, 5.703083277e-01F, 5.703476667e-01F, 5.703870654e-01F, 5.704264641e-01F,
	5.704658031e-01F, 5.705052018e-01F, 5.705445409e-01F, 5.705839396e-01F, 5.706232786e-01F, 5.706626773e-01F, 5.707020164e-01F, 5.707413554e-01F,
	5.707807541e-01F, 5.708200932e-01F, 5.708594918e-01F, 5.708988309e-01F, 5.709381700e-01F, 5.709775090e-01F, 5.710169077e-01F, 5.710562468e-01F,
	5.710955858e-01F, 5.711349249e-01F, 5.711742640e-01F, 5.712136626e-01F, 5.712530017e-01F, 5.712923408e-01F, 5.713316798e-01F, 5.713710189e-01F,
	5.714103580e-01F, 5.714496970e-01F, 5.714890361e-01F, 5.715283751e-01F, 5.715677142e-01F, 5.716070533e-01F, 5.716463923e-01F, 5.716857314e-01F,
	5.717250109e-01F, 5.717643499e-01F, 5.718036890e-01F, 5.718430281e-01F, 5.718823671e-01F, 5.719216466e-01F, 5.719609857e-01F, 5.720003247e-01F,
	5.720396042e-01F, 5.720789433e-01F, 5.721182823e-01F, 5.721575618e-01F, 5.721969008e-01F, 5.722361803e-01F, 5.722755194e-01F, 5.723148584e-01F,
	5.723541379e-01F, 5.723934770e-01F, 5.724327564e-01F, 5.724720359e-01F, 5.725113750e-01F, 5.725506544e-01F, 5.725899935e-01F, 5.726292729e-01F,
	5.726685524e-01F, 5.727078915e-01F, 5.727471709e-01F, 5.727864504e-01F, 5.728257298e-01F, 5.728650689e-01F, 5.729043484e-01F, 5.729436278e-01F,
	5.729829073e-01F, 5.730221868e-01F, 5.730614662e-01F, 5.731007457e-01F, 5.731400251e-01F, 5.731793046e-01F, 5.732185841e-01F, 5.732578635e-01F,
	5.732971430e-01F, 5.733364224e-01F, 5.733757019e-01F, 5.734149814e-01F, 5.734542608e-01F, 5.734935403e-01F, 5.735328197e-01F, 5.735720992e-01F,
	5.736113191e-01F, 5.736505985e-01F, 5.736898780e-01F, 5.737291574e-01F, 5.737683773e-01F, 5.738076568e-01F, 5.738469362e-01F, 5.738861561e-01F,
	5.739254355e-01F, 5.739646554e-01F, 5.740039349e-01F, 5.740432143e-01F, 5.740824342e-01F, 5.741217136e-01F, 5.741609335e-01F, 5.742002130e-01F,
	5.742394328e-01F, 5.742786527e-01F, 5.743179321e-01F, 5.743571520e-01F, 5.743964314e-01F, 5.744356513e-01F, 5.744748712e-01F, 5.745140910e-01F,
	5.745533705e-01F, 5.745925903e-01F, 5.746318102e-01F, 5.746710300e-01F, 5.747103095e-01F, 5.747495294e-01F, 5.747887492e-01F, 5.748279691e-01F,
	5.748671889e-01F, 5.749064088e-01F, 5.749456286e-01F, 5.749848485e-01F, 5.750240684e-01F, 5.750632882e-01F, 5.751025081e-01F, 5.751417279e-01F,
	5.751809478e-01F, 5.752201676e-01F, 5.752593875e-01F, 5.752985477e-01F, 5.753377676e-01F, 5.753769875e-01F, 5.754162073e-01F, 5.754554272e-01F,
	5.754945874e-01F, 5.755338073e-01F, 5.755730271e-01F, 5.756121874e-01F, 5.756514072e-01F, 5.756906271e-01F, 5.757297873e-01F, 5.757690072e-01F,
	5.758081675e-01F, 5.758473873e-01F, 5.758865476e-01F, 5.759257674e-01F, 5.759649277e-01F, 5.760041475e-01F, 5.760433078e-01F, 5.760825276e-01F,
	5.761216879e-01F, 5.761608481e-01F, 5.762000680e-01F, 5.762392282e-01F, 5.762783885e-01F, 5.763176084e-01F, 5.763567686e-01F, 5.763959289e-01F,
	5.764350891e-01F, 5.764742494e-01F, 5.765134692e-01F, 5.765526295e-01F, 5.765917897e-01F, 5.766309500e-01F, 5.766701102e-01F, 5.767092705e-01F,
	5.767484307e-01F, 5.767875910e-01F, 5.768267512e-01F, 5.768659115e-01F, 5.769050717e-01F, 5.769442320e-01F, 5.769833922e-01F, 5.770224929e-01F,
	5.770616531e-01F, 5.771008134e-01F, 5.771399736e-01F, 5.771791339e-01F, 5.772182345e-01F, 5.772573948e-01F, 5.772965550e-01F, 5.773357153e-01F,
	5.773748159e-01F, 5.774139762e-01F, 5.774531364e-01F, 5.774922371e-01F, 5.775313973e-01F, 5.775704980e-01F, 5.776096582e-01F, 5.776487589e-01F,
	5.776879191e-01F, 5.777270198e-01F, 5.777661800e-01F, 5.778052807e-01F, 5.778443813e-01F, 5.778835416e-01F, 5.779226422e-01F, 5.779618025e-01F,
	5.780009031e-01F, 5.780400038e-01F, 5.780791044e-01F, 5.781182647e-01F, 5.781573653e-01F, 5.781964660e-01F, 5.782355666e-01F, 5.782746673e-01F,
	5.783137679e-01F, 5.783529282e-01F, 5.783920288e-01F, 5.784311295e-01F, 5.784702301e-01F, 5.785093307e-01F, 5.785484314e-01F, 5.785875320e-01F,
	5.786266327e-01F, 5.786657333e-01F, 5.787048340e-01F, 5.787438750e-01F, 5.787829757e-01F, 5.788220763e-01F, 5.788611770e-01F, 5.789002776e-01F,
	5.789393187e-01F, 5.789784193e-01F, 5.790175200e-01F, 5.790566206e-01F, 5.790956616e-01F, 5.791347623e-01F, 5.791738629e-01F, 5.792129040e-01F,
	5.792520046e-01F, 5.792910457e-01F, 5.793301463e-01F, 5.793692470e-01F, 5.794082880e-01F, 5.794473290e-01F, 5.794864297e-01F, 5.795254707e-01F,
	5.795645714e-01F, 5.796036124e-01F, 5.796427131e-01F, 5.796817541e-01F, 5.797207952e-01F, 5.797598958e-01F, 5.797989368e-01F, 5.798379779e-01F,
	5.798770189e-01F, 5.799161196e-01F, 5.799551606e-01F, 5.799942017e-01F, 5.800332427e-01F, 5.800722837e-01F, 5.801113248e-01F, 5.801503658e-01F,
	5.801894069e-01F, 5.802284479e-01F, 5.802674890e-01F, 5.803065300e-01F, 5.803455710e-01F, 5.803846121e-01F, 5.804236531e-01F, 5.804626942e-01F,
	5.805017352e-01F, 5.805407763e-01F, 5.805798173e-01F, 5.806188583e-01F, 5.806578398e-01F, 5.806968808e-01F, 5.807359219e-01F, 5.807749629e-01F,
	5.808139443e-01F, 5.808529854e-01F, 5.808920264e-01F, 5.809310079e-01F, 5.809700489e-01F, 5.810090303e-01F, 5.810480714e-01F, 5.810870528e-01F,
	5.811260939e-01F, 5.811651349e-01F, 5.812041163e-01F, 5.812430978e-01F, 5.812821388e-01F, 5.813211203e-01F, 5.813601613e-01F, 5.813991427e-01F,
	5.814381242e-01F, 5.814771652e-01F, 5.815161467e-01F, 5.815551281e-01F, 5.815941095e-01F, 5.816331506e-01F, 5.816721320e-01F, 5.817111135e-01F,
	5.817500949e-01F, 5.817890763e-01F, 5.818281174e-01F, 5.818670988e-01F, 5.819060802e-01F, 5.819450617e-01F, 5.819840431e-01F, 5.820230246e-01F,
	5.820620060e-01F, 5.821009874e-01F, 5.821399689e-01F, 5.821789503e-01F, 5.822178721e-01F, 5.822568536e-01F, 5.822958350e-01F, 5.823348165e-01F,
	5.823737979e-01F, 5.824127793e-01F, 5.824517012e-01F, 5.824906826e-01F, 5.825296640e-01F, 5.825685859e-01F, 5.826075673e-01F, 5.826465487e-01F,
	5.826854706e-01F, 5.827244520e-01F, 5.827634335e-01F, 5.828023553e-01F, 5.828413367e-01F, 5.828802586e-01F, 5.829192400e-01F, 5.829581618e-01F,
	5.829971433e-01F, 5.830360651e-01F, 5.830749869e-01F, 5.831139684e-01F, 5.831528902e-01F, 5.831918120e-01F, 5.832307935e-01F, 5.832697153e-01F,
	5.833086371e-01F, 5.833476186e-01F, 5.833865404e-01F, 5.834254622e-01F, 5.834643841e-01F, 5.835033059e-01F, 5.835422277e-01F, 5.835811496e-01F,
	5.836201310e-01F, 5.836590528e-01F, 5.836979747e-01F, 5.837368965e-01F, 5.837758183e-01F, 5.838147402e-01F, 5.838536620e-01F, 5.838925242e-01F,
	5.839314461e-01F, 5.839703679e-01F, 5.840092897e-01F, 5.840482116e-01F, 5.840871334e-01F, 5.841260552e-01F, 5.841649175e-01F, 5.842038393e-01F,
	5.842427611e-01F, 5.842816830e-01F, 5.843205452e-01F, 5.843594670e-01F, 5.843983293e-01F, 5.844372511e-01F, 5.844761729e-01F, 5.845150352e-01F,
	5.845539570e-01F, 5.845928192e-01F, 5.846317410e-01F, 5.846706033e-01F, 5.847095251e-01F, 5.847483873e-01F, 5.847873092e-01F, 5.848261714e-01F,
	5.848650336e-01F, 5.849039555e-01F, 5.849428177e-01F, 5.849816799e-01F, 5.850206017e-01F, 5.850594640e-01F, 5.850983262e-01F, 5.851371884e-01F,
	5.851760507e-01F, 5.852149725e-01F, 5.852538347e-01F, 5.852926970e-01F, 5.853315592e-01F, 5.853704214e-01F, 5.854092836e-01F, 5.854481459e-01F,
	5.854870081e-01F, 5.855258703e-01F, 5.855647326e-01F, 5.856035948e-01F, 5.856424570e-01F, 5.856813192e-01F, 5.857201815e-01F, 5.857589841e-01F,
	5.857978463e-01F, 5.858367085e-01F, 5.858755708e-01F, 5.859144330e-01F, 5.859532356e-01F, 5.859920979e-01F, 5.860309601e-01F, 5.860697627e-01F,
	5.861086249e-01F, 5.861474872e-01F, 5.861862898e-01F, 5.862251520e-01F, 5.862639546e-01F, 5.863028169e-01F, 5.863416195e-01F, 5.863804817e-01F,
	5.864192843e-01F, 5.864581466e-01F, 5.864969492e-01F, 5.865357518e-01F, 5.865746140e-01F, 5.866134167e-01F, 5.866522789e-01F, 5.866910815e-01F,
	5.867298841e-01F, 5.867686868e-01F, 5.868075490e-01F, 5.868463516e-01F, 5.868851542e-01F, 5.869239569e-01F, 5.869627595e-01F, 5.870015621e-01F,
	5.870403647e-01F, 5.870792270e-01F, 5.871180296e-01F, 5.871568322e-01F, 5.871956348e-01F, 5.872344375e-01F, 5.872732401e-01F, 5.873120427e-01F,
	5.873507857e-01F, 5.873895884e-01F, 5.874283910e-01F, 5.874671936e-01F, 5.875059962e-01F, 5.875447989e-01F, 5.875835419e-01F, 5.876223445e-01F,
	5.876611471e-01F, 5.876999497e-01F, 5.877386928e-01F, 5.877774954e-01F, 5.878162980e-01F, 5.878550410e-01F, 5.878938437e-01F, 5.879325867e-01F,
	5.879713893e-01F, 5.880101919e-01F, 5.880489349e-01F, 5.880877376e-01F, 5.881264806e-01F, 5.881652236e-01F, 5.882040262e-01F, 5.882427692e-01F,
	5.882815719e-01F, 5.883203149e-01F, 5.883590579e-01F, 5.883978605e-01F, 5.884366035e-01F, 5.884753466e-01F, 5.885140896e-01F, 5.885528922e-01F,
	5.885916352e-01F, 5.886303782e-01F, 5.886691213e-01F, 5.887078643e-01F, 5.887466073e-01F, 5.887853503e-01F, 5.888240933e-01F, 5.888628364e-01F,
	5.889015794e-01F, 5.889403224e-01F, 5.889790654e-01F, 5.890178084e-01F, 5.890565515e-01F, 5.890952945e-01F, 5.891340375e-01F, 5.891727805e-01F,
	5.892115235e-01F, 5.892502666e-01F, 5.892889500e-01F, 5.893276930e-01F, 5.893664360e-01F, 5.894051194e-01F, 5.894438624e-01F, 5.894826055e-01F,
	5.895212889e-01F, 5.895600319e-01F, 5.895987749e-01F, 5.896374583e-01F, 5.896762013e-01F, 5.897148848e-01F, 5.897536278e-01F, 5.897923112e-01F,
	5.898310542e-01F, 5.898697376e-01F, 5.899084806e-01F, 5.899471641e-01F, 5.899858475e-01F, 5.900245905e-01F, 5.900632739e-01F, 5.901019573e-01F,
	5.901407003e-01F, 5.901793838e-01F, 5.902180672e-01F, 5.902567506e-01F, 5.902954936e-01F, 5.903341770e-01F, 5.903728604e-01F, 5.904115438e-01F,
	5.904502273e-01F, 5.904889107e-01F, 5.905275941e-01F, 5.905662775e-01F, 5.906049609e-01F, 5.906436443e-01F, 5.906823277e-01F, 5.907210112e-01F,
	5.907596946e-01F, 5.907983780e-01F, 5.908370614e-01F, 5.908757448e-01F, 5.909144282e-01F, 5.909530520e-01F, 5.909917355e-01F, 5.910304189e-01F,
	5.910691023e-01F, 5.911077261e-01F, 5.911464095e-01F, 5.911850929e-01F, 5.912237167e-01F, 5.912624002e-01F, 5.913010836e-01F, 5.913397074e-01F,
	5.913783908e-01F, 5.914170146e-01F, 5.914556980e-01F, 5.914943218e-01F, 5.915330052e-01F, 5.915716290e-01F, 5.916103125e-01F, 5.916489363e-01F,
	5.916875601e-01F, 5.917262435e-01F, 5.917648673e-01F, 5.918034911e-01F, 5.918421745e-01F, 5.918807983e-01F, 5.919194221e-01F, 5.919580460e-01F,
	5.919966698e-01F, 5.920353532e-01F, 5.920739770e-01F, 5.921126008e-01F, 5.921512246e-01F, 5.921898484e-01F, 5.922284722e-01F, 5.922670960e-01F,
	5.923057199e-01F, 5.923443437e-01F, 5.923829675e-01F, 5.924215913e-01F, 5.924602151e-01F, 5.924988389e-01F, 5.925374627e-01F, 5.925760269e-01F,
	5.926146507e-01F, 5.926532745e-01F, 5.926918983e-01F, 5.927305222e-01F, 5.927690864e-01F, 5.928077102e-01F, 5.928463340e-01F, 5.928848982e-01F,
	5.929235220e-01F, 5.929621458e-01F, 5.930007100e-01F, 5.930393338e-01F, 5.930778980e-01F, 5.931165218e-01F, 5.931550860e-01F, 5.931937099e-01F,
	5.932322741e-01F, 5.932708979e-01F, 5.933094621e-01F, 5.933480859e-01F, 5.933866501e-01F, 5.934252143e-01F, 5.934638381e-01F, 5.935024023e-01F,
	5.935409665e-01F, 5.935795307e-01F, 5.936181545e-01F, 5.936567187e-01F, 5.936952829e-01F, 5.937338471e-01F, 5.937724113e-01F, 5.938109756e-01F,
	5.938495994e-01F, 5.938881636e-01F, 5.939267278e-01F, 5.939652920e-01F, 5.940038562e-01F, 5.940424204e-01F, 5.940809846e-01F, 5.941195488e-01F,
	5.941580534e-01F, 5.941966176e-01F, 5.942351818e-01F, 5.942737460e-01F, 5.943123102e-01F, 5.943508744e-01F, 5.943893790e-01F, 5.944279432e-01F,
	5.944665074e-01F, 5.945050716e-01F, 5.945435762e-01F, 5.945821404e-01F, 5.946207047e-01F, 5.946592093e-01F, 5.946977735e-01F, 5.947362781e-01F,
	5.947748423e-01F, 5.948133469e-01F, 5.948519111e-01F, 5.948904157e-01F, 5.949289799e-01F, 5.949674845e-01F, 5.950060487e-01F, 5.950445533e-01F,
	5.950830579e-01F, 5.951216221e-01F, 5.951601267e-01F, 5.951986313e-01F, 5.952371955e-01F, 5.952757001e-01F, 5.953142047e-01F, 5.953527093e-01F,
	5.953912139e-01F, 5.954297185e-01F, 5.954682827e-01F, 5.955067873e-01F, 5.955452919e-01F, 5.955837965e-01F, 5.956223011e-01F, 5.956608057e-01F,
	5.956993103e-01F, 5.957378149e-01F, 5.957763195e-01F, 5.958148241e-01F, 5.958533287e-01F, 5.958918333e-01F, 5.959302783e-01F, 5.959687829e-01F,
	5.960072875e-01F, 5.960457921e-01F, 5.960842967e-01F, 5.961227417e-01F, 5.961612463e-01F, 5.961997509e-01F, 5.962381959e-01F, 5.962767005e-01F,
	5.963152051e-01F, 5.963536501e-01F, 5.963921547e-01F, 5.964305997e-01F, 5.964691043e-01F, 5.965075493e-01F, 5.965460539e-01F, 5.965844989e-01F,
	5.966230035e-01F, 5.966614485e-01F, 5.966999531e-01F, 5.967383981e-01F, 5.967768431e-01F, 5.968153477e-01F, 5.968537927e-01F, 5.968922377e-01F,
	5.969306827e-01F, 5.969691873e-01F, 5.970076323e-01F, 5.970460773e-01F, 5.970845222e-01F, 5.971229672e-01F, 5.971614122e-01F, 5.971999168e-01F,
	5.972383618e-01F, 5.972768068e-01F, 5.973152518e-01F, 5.973536968e-01F, 5.973921418e-01F, 5.974305868e-01F, 5.974690318e-01F, 5.975074172e-01F,
	5.975458622e-01F, 5.975843072e-01F, 5.976227522e-01F, 5.976611972e-01F, 5.976996422e-01F, 5.977380276e-01F, 5.977764726e-01F, 5.978149176e-01F,
	5.978533626e-01F, 5.978917480e-01F, 5.979301929e-01F, 5.979686379e-01F, 5.980070233e-01F, 5.980454683e-01F, 5.980838537e-01F, 5.981222987e-01F,
	5.981606841e-01F, 5.981991291e-01F, 5.982375145e-01F, 5.982759595e-01F, 5.983143449e-01F, 5.983527899e-01F, 5.983911753e-01F, 5.984295607e-01F,
	5.984680057e-01F, 5.985063910e-01F, 5.985447764e-01F, 5.985832214e-01F, 5.986216068e-01F, 5.986599922e-01F, 5.986983776e-01F, 5.987367630e-01F,
	5.987752080e-01F, 5.988135934e-01F, 5.988519788e-01F, 5.988903642e-01F, 5.989287496e-01F, 5.989671350e-01F, 5.990055203e-01F, 5.990439057e-01F,
	5.990822911e-01F, 5.991206765e-01F, 5.991590619e-01F, 5.991974473e-01F, 5.992357731e-01F, 5.992741585e-01F, 5.993125439e-01F, 5.993509293e-01F,
	5.993893147e-01F, 5.994276404e-01F, 5.994660258e-01F, 5.995044112e-01F, 5.995427966e-01F, 5.995811224e-01F, 5.996195078e-01F, 5.996578932e-01F,
	5.996962190e-01F, 5.997346044e-01F, 5.997729301e-01F, 5.998113155e-01F, 5.998496413e-01F, 5.998880267e-01F, 5.999263525e-01F, 5.999647379e-01F,
	6.000030637e-01F, 6.000413895e-01F, 6.000797749e-01F, 6.001181006e-01F, 6.001564264e-01F, 6.001948118e-01F, 6.002331376e-01F, 6.002714634e-01F,
	6.003097892e-01F, 6.003481746e-01F, 6.003865004e-01F, 6.004248261e-01F, 6.004631519e-01F, 6.005014777e-01F, 6.005398035e-01F, 6.005781293e-01F,
	6.006164551e-01F, 6.006547809e-01F, 6.006931067e-01F, 6.007314324e-01F, 6.007697582e-01F, 6.008080840e-01F, 6.008464098e-01F, 6.008847356e-01F,
	6.009230614e-01F, 6.009613872e-01F, 6.009997129e-01F, 6.010379791e-01F, 6.010763049e-01F, 6.011146307e-01F, 6.011529565e-01F, 6.011912227e-01F,
	6.012295485e-01F, 6.012678742e-01F, 6.013061404e-01F, 6.013444662e-01F, 6.013827324e-01F, 6.014210582e-01F, 6.014593244e-01F, 6.014976501e-01F,
	6.015359163e-01F, 6.015742421e-01F, 6.016125083e-01F, 6.016508341e-01F, 6.016891003e-01F, 6.017273664e-01F, 6.017656922e-01F, 6.018039584e-01F,
	6.018422246e-01F, 6.018805504e-01F, 6.019188166e-01F, 6.019570827e-01F, 6.019953489e-01F, 6.020336747e-01F, 6.020719409e-01F, 6.021102071e-01F,
	6.021484733e-01F, 6.021867394e-01F, 6.022250056e-01F, 6.022632718e-01F, 6.023015380e-01F, 6.023398042e-01F, 6.023780704e-01F, 6.024163365e-01F,
	6.024546027e-01F, 6.024928689e-01F, 6.025311351e-01F, 6.025694013e-01F, 6.026076078e-01F, 6.026458740e-01F, 6.026841402e-01F, 6.027224064e-01F,
	6.027606726e-01F, 6.027988791e-01F, 6.028371453e-01F, 6.028754115e-01F, 6.029136181e-01F, 6.029518843e-01F, 6.029900908e-01F, 6.030283570e-01F,
	6.030666232e-01F, 6.031048298e-01F, 6.031430960e-01F, 6.031813025e-01F, 6.032195687e-01F, 6.032577753e-01F, 6.032959819e-01F, 6.033342481e-01F,
	6.033724546e-01F, 6.034107208e-01F, 6.034489274e-01F, 6.034871340e-01F, 6.035253406e-01F, 6.035636067e-01F, 6.036018133e-01F, 6.036400199e-01F,
	6.036782265e-01F, 6.037164330e-01F, 6.037546992e-01F, 6.037929058e-01F, 6.038311124e-01F, 6.038693190e-01F, 6.039075255e-01F, 6.039457321e-01F,
	6.039839387e-01F, 6.040221453e-01F, 6.040603518e-01F, 6.040985584e-01F, 6.041367650e-01F, 6.041749120e-01F, 6.042131186e-01F, 6.042513251e-01F,
	6.042895317e-01F, 6.043277383e-01F, 6.043659449e-01F, 6.044040918e-01F, 6.044422984e-01F, 6.044805050e-01F, 6.045186520e-01F, 6.045568585e-01F,
	6.045950651e-01F, 6.046332121e-01F, 6.046714187e-01F, 6.047095656e-01F, 6.047477722e-01F, 6.047859192e-01F, 6.048241258e-01F, 6.048622727e-01F,
	6.049004793e-01F, 6.049386263e-01F, 6.049768329e-01F, 6.050149798e-01F, 6.050531268e-01F, 6.050913334e-01F, 6.051294804e-01F, 6.051676273e-01F,
	6.052057743e-01F, 6.052439809e-01F, 6.052821279e-01F, 6.053202748e-01F, 6.053584218e-01F, 6.053965688e-01F, 6.054347157e-01F, 6.054728627e-01F,
	6.055110693e-01F, 6.055492163e-01F, 6.055873632e-01F, 6.056255102e-01F, 6.056636572e-01F, 6.057017446e-01F, 6.057398915e-01F, 6.057780385e-01F,
	6.058161855e-01F, 6.058543324e-01F, 6.058924794e-01F, 6.059306264e-01F, 6.059687138e-01F, 6.060068607e-01F, 6.060450077e-01F, 6.060831547e-01F,
	6.061212420e-01F, 6.061593890e-01F, 6.061975360e-01F, 6.062356234e-01F, 6.062737703e-01F, 6.063118577e-01F, 6.063500047e-01F, 6.063881516e-01F,
	6.064262390e-01F, 6.064643264e-01F, 6.065024734e-01F, 6.065405607e-01F, 6.065787077e-01F, 6.066167951e-01F, 6.066549420e-01F, 6.066930294e-01F,
	6.067311168e-01F, 6.067692041e-01F, 6.068073511e-01F, 6.068454385e-01F, 6.068835258e-01F, 6.069216132e-01F, 6.069597602e-01F, 6.069978476e-01F,
	6.070359349e-01F, 6.070740223e-01F, 6.071121097e-01F, 6.071501970e-01F, 6.071882844e-01F, 6.072263718e-01F, 6.072644591e-01F, 6.073025465e-01F,
	6.073406339e-01F, 6.073787212e-01F, 6.074168086e-01F, 6.074548960e-01F, 6.074929833e-01F, 6.075310111e-01F, 6.075690985e-01F, 6.076071858e-01F,
	6.076452732e-01F, 6.076833010e-01F, 6.077213883e-01F, 6.077594757e-01F, 6.077975035e-01F, 6.078355908e-01F, 6.078736782e-01F, 6.079117060e-01F,
	6.079497933e-01F, 6.079878211e-01F, 6.080259085e-01F, 6.080639362e-01F, 6.081020236e-01F, 6.081400514e-01F, 6.081781387e-01F, 6.082161665e-01F,
	6.082542539e-01F, 6.082922816e-01F, 6.083303094e-01F, 6.083683968e-01F, 6.084064245e-01F, 6.084444523e-01F, 6.084824800e-01F, 6.085205674e-01F,
	6.085585952e-01F, 6.085966229e-01F, 6.086346507e-01F, 6.086726785e-01F, 6.087107062e-01F, 6.087487340e-01F, 6.087867618e-01F, 6.088247895e-01F,
	6.088628173e-01F, 6.089008451e-01F, 6.089388728e-01F, 6.089769006e-01F, 6.090149283e-01F, 6.090529561e-01F, 6.090909839e-01F, 6.091290116e-01F,
	6.091670394e-01F, 6.092050076e-01F, 6.092430353e-01F, 6.092810631e-01F, 6.093190908e-01F, 6.093570590e-01F, 6.093950868e-01F, 6.094331145e-01F,
	6.094710827e-01F, 6.095091105e-01F, 6.095470786e-01F, 6.095851064e-01F, 6.096230745e-01F, 6.096611023e-01F, 6.096990705e-01F, 6.097370982e-01F,
	6.097750664e-01F, 6.098130941e-01F, 6.098510623e-01F, 6.098890901e-01F, 6.099270582e-01F, 6.099650264e-01F, 6.100030541e-01F, 6.100410223e-01F,
	6.100789905e-01F, 6.101169586e-01F, 6.101549268e-01F, 6.101929545e-01F, 6.102309227e-01F, 6.102688909e-01F, 6.103068590e-01F, 6.103448272e-01F,
	6.103827953e-01F, 6.104207635e-01F, 6.104587317e-01F, 6.104966998e-01F, 6.105346680e-01F, 6.105726361e-01F, 6.106106043e-01F, 6.106485724e-01F,
	6.106865406e-01F, 6.107245088e-01F, 6.107624769e-01F, 6.108003855e-01F, 6.108383536e-01F, 6.108763218e-01F, 6.109142900e-01F, 6.109521985e-01F,
	6.109901667e-01F, 6.110281348e-01F, 6.110660434e-01F, 6.111040115e-01F, 6.111419201e-01F, 6.111798882e-01F, 6.112178564e-01F, 6.112557650e-01F,
	6.112937331e-01F, 6.113316417e-01F, 6.113696098e-01F, 6.114075184e-01F, 6.114454269e-01F, 6.114833951e-01F, 6.115213037e-01F, 6.115592122e-01F,
	6.115971804e-01F, 6.116350889e-01F, 6.116729975e-01F, 6.117109656e-01F, 6.117488742e-01F, 6.117867827e-01F, 6.118246913e-01F, 6.118625998e-01F,
	6.119005084e-01F, 6.119384170e-01F, 6.119763851e-01F, 6.120142937e-01F, 6.120522022e-01F, 6.120901108e-01F, 6.121280193e-01F, 6.121659279e-01F,
	6.122037768e-01F, 6.122416854e-01F, 6.122795939e-01F, 6.123175025e-01F, 6.123554111e-01F, 6.123933196e-01F, 6.124312282e-01F, 6.124690771e-01F,
	6.125069857e-01F, 6.125448942e-01F, 6.125827432e-01F, 6.126206517e-01F, 6.126585603e-01F, 6.126964092e-01F, 6.127343178e-01F, 6.127722263e-01F,
	6.128100753e-01F, 6.128479838e-01F, 6.128858328e-01F, 6.129237413e-01F, 6.129615903e-01F, 6.129994988e-01F, 6.130373478e-01F, 6.130751967e-01F,
	6.131131053e-01F, 6.131509542e-01F, 6.131888032e-01F, 6.132267118e-01F, 6.132645607e-01F, 6.133024096e-01F, 6.133402586e-01F, 6.133781672e-01F,
	6.134160161e-01F, 6.134538651e-01F, 6.134917140e-01F, 6.135295630e-01F, 6.135674119e-01F, 6.136052608e-01F, 6.136431098e-01F, 6.136809587e-01F,
	6.137188077e-01F, 6.137566566e-01F, 6.137945056e-01F, 6.138323545e-01F, 6.138702035e-01F, 6.139080524e-01F, 6.139459014e-01F, 6.139837503e-01F,
	6.140215397e-01F, 6.140593886e-01F, 6.140972376e-01F, 6.141350865e-01F, 6.141728759e-01F, 6.142107248e-01F, 6.142485738e-01F, 6.142863631e-01F,
	6.143242121e-01F, 6.143620014e-01F, 6.143998504e-01F, 6.144376993e-01F, 6.144754887e-01F, 6.145133376e-01F, 6.145511270e-01F, 6.145889163e-01F,
	6.146267653e-01F, 6.146645546e-01F, 6.147024035e-01F, 6.147401929e-01F, 6.147779822e-01F, 6.148158312e-01F, 6.148536205e-01F, 6.148914099e-01F,
	6.149291992e-01F, 6.149670482e-01F, 6.150048375e-01F, 6.150426269e-01F, 6.150804162e-01F, 6.151182055e-01F, 6.151559949e-01F, 6.151937842e-01F,
	6.152315736e-01F, 6.152693629e-01F, 6.153071523e-01F, 6.153449416e-01F, 6.153827310e-01F, 6.154205203e-01F, 6.154583097e-01F, 6.154960990e-01F,
	6.155338883e-01F, 6.155716777e-01F, 6.156094074e-01F, 6.156471968e-01F, 6.156849861e-01F, 6.157227755e-01F, 6.157605052e-01F, 6.157982945e-01F,
	6.158360839e-01F, 6.158738136e-01F, 6.159116030e-01F, 6.159493327e-01F, 6.159871221e-01F, 6.160249114e-01F, 6.160626411e-01F, 6.161004305e-01F,
	6.161381602e-01F, 6.161759496e-01F, 6.162136793e-01F, 6.162514091e-01F, 6.162891984e-01F, 6.163269281e-01F, 6.163646579e-01F, 6.164024472e-01F,
	6.164401770e-01F, 6.164779067e-01F, 6.165156364e-01F, 6.165534258e-01F, 6.165911555e-01F, 6.166288853e-01F, 6.166666150e-01F, 6.167043447e-01F,
	6.167420745e-01F, 6.167798042e-01F, 6.168175340e-01F, 6.168552637e-01F, 6.168929935e-01F, 6.169307232e-01F, 6.169684529e-01F, 6.170061827e-01F,
	6.170439124e-01F, 6.170816422e-01F, 6.171193719e-01F, 6.171571016e-01F, 6.171948314e-01F, 6.172325015e-01F, 6.172702312e-01F, 6.173079610e-01F,
	6.173456311e-01F, 6.173833609e-01F, 6.174210906e-01F, 6.174587607e-01F, 6.174964905e-01F, 6.175342202e-01F, 6.175718904e-01F, 6.176096201e-01F,
	6.176472902e-01F, 6.176850200e-01F, 6.177226901e-01F, 6.177604198e-01F, 6.177980900e-01F, 6.178358197e-01F, 6.178734899e-01F, 6.179111600e-01F,
	6.179488897e-01F, 6.179865599e-01F, 6.180242300e-01F, 6.180619001e-01F, 6.180996299e-01F, 6.181373000e-01F, 6.181749701e-01F, 6.182126403e-01F,
	6.182503104e-01F, 6.182879806e-01F, 6.183257103e-01F, 6.183633804e-01F, 6.184010506e-01F, 6.184387207e-01F, 6.184763908e-01F, 6.185140610e-01F,
	6.185517311e-01F, 6.185893416e-01F, 6.186270118e-01F, 6.186646819e-01F, 6.187023520e-01F, 6.187400222e-01F, 6.187776923e-01F, 6.188153028e-01F,
	6.188529730e-01F, 6.188906431e-01F, 6.189283133e-01F, 6.189659238e-01F, 6.190035939e-01F, 6.190412641e-01F, 6.190788746e-01F, 6.191165447e-01F,
	6.191541553e-01F, 6.191918254e-01F, 6.192294359e-01F, 6.192671061e-01F, 6.193047166e-01F, 6.193423867e-01F, 6.193799973e-01F, 6.194176674e-01F,
	6.194552779e-01F, 6.194928885e-01F, 6.195305586e-01F, 6.195681691e-01F, 6.196057796e-01F, 6.196434498e-01F, 6.196810603e-01F, 6.197186708e-01F,
	6.197562814e-01F, 6.197938919e-01F, 6.198315024e-01F, 6.198691726e-01F, 6.199067831e-01F, 6.199443936e-01F, 6.199820042e-01F, 6.200196147e-01F,
	6.200572252e-01F, 6.200948358e-01F, 6.201324463e-01F, 6.201700568e-01F, 6.202076077e-01F, 6.202452183e-01F, 6.202828288e-01F, 6.203204393e-01F,
	6.203580499e-01F, 6.203956604e-01F, 6.204332113e-01F, 6.204708219e-01F, 6.205084324e-01F, 6.205459833e-01F, 6.205835938e-01F, 6.206212044e-01F,
	6.206587553e-01F, 6.206963658e-01F, 6.207339764e-01F, 6.207715273e-01F, 6.208091378e-01F, 6.208466887e-01F, 6.208842397e-01F, 6.209218502e-01F,
	6.209594011e-01F, 6.209970117e-01F, 6.210345626e-01F, 6.210721135e-01F, 6.211097240e-01F, 6.211472750e-01F, 6.211848259e-01F, 6.212224364e-01F,
	6.212599874e-01F, 6.212975383e-01F, 6.213350892e-01F, 6.213726401e-01F, 6.214101911e-01F, 6.214478016e-01F, 6.214853525e-01F, 6.215229034e-01F,
	6.215604544e-01F, 6.215980053e-01F, 6.216355562e-01F, 6.216731071e-01F, 6.217106581e-01F, 6.217482090e-01F, 6.217857003e-01F, 6.218232512e-01F,
	6.218608022e-01F, 6.218983531e-01F, 6.219359040e-01F, 6.219734550e-01F, 6.220109463e-01F, 6.220484972e-01F, 6.220860481e-01F, 6.221235394e-01F,
	6.221610904e-01F, 6.221986413e-01F, 6.222361326e-01F, 6.222736835e-01F, 6.223111749e-01F, 6.223487258e-01F, 6.223862171e-01F, 6.224237680e-01F,
	6.224612594e-01F, 6.224988103e-01F, 6.225363016e-01F, 6.225738525e-01F, 6.226113439e-01F, 6.226488352e-01F, 6.226863861e-01F, 6.227238774e-01F,
	6.227613688e-01F, 6.227988601e-01F, 6.228364110e-01F, 6.228739023e-01F, 6.229113936e-01F, 6.229488850e-01F, 6.229863763e-01F, 6.230238676e-01F,
	6.230613589e-01F, 6.230988503e-01F, 6.231363416e-01F, 6.231738329e-01F, 6.232113242e-01F, 6.232488155e-01F, 6.232863069e-01F, 6.233237982e-01F,
	6.233612895e-01F, 6.233987808e-01F, 6.234362721e-01F, 6.234737635e-01F, 6.235111952e-01F, 6.235486865e-01F, 6.235861778e-01F, 6.236236691e-01F,
	6.236611009e-01F, 6.236985922e-01F, 6.237360835e-01F, 6.237735152e-01F, 6.238110065e-01F, 6.238484383e-01F, 6.238859296e-01F, 6.239233613e-01F,
	6.239608526e-01F, 6.239982843e-01F, 6.240357757e-01F, 6.240732074e-01F, 6.241106987e-01F, 6.241481304e-01F, 6.241855621e-01F, 6.242230535e-01F,
	6.242604852e-01F, 6.242979169e-01F, 6.243354082e-01F, 6.243728399e-01F, 6.244102716e-01F, 6.244477034e-01F, 6.244851351e-01F, 6.245225668e-01F,
	6.245600581e-01F, 6.245974898e-01F, 6.246349216e-01F, 6.246723533e-01F, 6.247097850e-01F, 6.247472167e-01F, 6.247846484e-01F, 6.248220801e-01F,
	6.248595119e-01F, 6.248968840e-01F, 6.249343157e-01F, 6.249717474e-01F, 6.250091791e-01F, 6.250466108e-01F, 6.250840425e-01F, 6.251214147e-01F,
	6.251588464e-01F, 6.251962781e-01F, 6.252336502e-01F, 6.252710819e-01F, 6.253085136e-01F, 6.253458858e-01F, 6.253833175e-01F, 6.254206896e-01F,
	6.254581213e-01F, 6.254955530e-01F, 6.255329251e-01F, 6.255702972e-01F, 6.256077290e-01F, 6.256451011e-01F, 6.256825328e-01F, 6.257199049e-01F,
	6.257572770e-01F, 6.257947087e-01F, 6.258320808e-01F, 6.258694530e-01F, 6.259068847e-01F, 6.259442568e-01F, 6.259816289e-01F, 6.260190010e-01F,
	6.260563731e-01F, 6.260937452e-01F, 6.261311173e-01F, 6.261685491e-01F, 6.262059212e-01F, 6.262432933e-01F, 6.262806654e-01F, 6.263180375e-01F,
	6.263554096e-01F, 6.263927221e-01F, 6.264300942e-01F, 6.264674664e-01F, 6.265048385e-01F, 6.265422106e-01F, 6.265795827e-01F, 6.266169548e-01F,
	6.266542673e-01F, 6.266916394e-01F, 6.267290115e-01F, 6.267663240e-01F, 6.268036962e-01F, 6.268410683e-01F, 6.268783808e-01F, 6.269157529e-01F,
	6.269531250e-01F, 6.269904375e-01F, 6.270278096e-01F, 6.270651221e-01F, 6.271024942e-01F, 6.271398067e-01F, 6.271771193e-01F, 6.272144914e-01F,
	6.272518039e-01F, 6.272891760e-01F, 6.273264885e-01F, 6.273638010e-01F, 6.274011135e-01F, 6.274384856e-01F, 6.274757981e-01F, 6.275131106e-01F,
	6.275504231e-01F, 6.275877357e-01F, 6.276251078e-01F, 6.276624203e-01F, 6.276997328e-01F, 6.277370453e-01F, 6.277743578e-01F, 6.278116703e-01F,
	6.278489828e-01F, 6.278862953e-01F, 6.279236078e-01F, 6.279609203e-01F, 6.279982328e-01F, 6.280354857e-01F, 6.280727983e-01F, 6.281101108e-01F,
	6.281474233e-01F, 6.281847358e-01F, 6.282219887e-01F, 6.282593012e-01F, 6.282966137e-01F, 6.283339262e-01F, 6.283711791e-01F, 6.284084916e-01F,
	6.284457445e-01F, 6.284830570e-01F, 6.285203099e-01F, 6.285576224e-01F, 6.285949349e-01F, 6.286321878e-01F, 6.286694407e-01F, 6.287067533e-01F,
	6.287440062e-01F, 6.287813187e-01F, 6.288185716e-01F, 6.288558245e-01F, 6.288931370e-01F, 6.289303899e-01F, 6.289676428e-01F, 6.290048957e-01F,
	6.290422082e-01F, 6.290794611e-01F, 6.291167140e-01F, 6.291539669e-01F, 6.291912198e-01F, 6.292284727e-01F, 6.292657256e-01F, 6.293029785e-01F,
	6.293402314e-01F, 6.293774843e-01F, 6.294147372e-01F, 6.294519901e-01F, 6.294892430e-01F, 6.295264959e-01F, 6.295637488e-01F, 6.296010017e-01F,
	6.296382546e-01F, 6.296755075e-01F, 6.297127008e-01F, 6.297499537e-01F, 6.297872066e-01F, 6.298243999e-01F, 6.298616529e-01F, 6.298989058e-01F,
	6.299360991e-01F, 6.299733520e-01F, 6.300106049e-01F, 6.300477982e-01F, 6.300850511e-01F, 6.301222444e-01F, 6.301594973e-01F, 6.301966906e-01F,
	6.302339435e-01F, 6.302711368e-01F, 6.303083301e-01F, 6.303455830e-01F, 6.303827763e-01F, 6.304199696e-01F, 6.304572225e-01F, 6.304944158e-01F,
	6.305316091e-01F, 6.305688024e-01F, 6.306060553e-01F, 6.306432486e-01F, 6.306804419e-01F, 6.307176352e-01F, 6.307548285e-01F, 6.307920218e-01F,
	6.308292150e-01F, 6.308664083e-01F, 6.309036016e-01F, 6.309407949e-01F, 6.309779882e-01F, 6.310151815e-01F, 6.310523748e-01F, 6.310895681e-01F,
	6.311267614e-01F, 6.311639547e-01F, 6.312010884e-01F, 6.312382817e-01F, 6.312754750e-01F, 6.313126683e-01F, 6.313498020e-01F, 6.313869953e-01F,
	6.314241886e-01F, 6.314613223e-01F, 6.314985156e-01F, 6.315356493e-01F, 6.315728426e-01F, 6.316100359e-01F, 6.316471696e-01F, 6.316843629e-01F,
	6.317214966e-01F, 6.317586303e-01F, 6.317958236e-01F, 6.318329573e-01F, 6.318701506e-01F, 6.319072843e-01F, 6.319444180e-01F, 6.319816113e-01F,
	6.320187449e-01F, 6.320558786e-01F, 6.320930123e-01F, 6.321302056e-01F, 6.321673393e-01F, 6.322044730e-01F, 6.322416067e-01F, 6.322787404e-01F,
	6.323158741e-01F, 6.323530078e-01F, 6.323901415e-01F, 6.324272752e-01F, 6.324644089e-01F, 6.325015426e-01F, 6.325386763e-01F, 6.325758100e-01F,
	6.326129436e-01F, 6.326500773e-01F, 6.326871514e-01F, 6.327242851e-01F, 6.327614188e-01F, 6.327985525e-01F, 6.328356862e-01F, 6.328727603e-01F,
	6.329098940e-01F, 6.329470277e-01F, 6.329841018e-01F, 6.330212355e-01F, 6.330583096e-01F, 6.330954432e-01F, 6.331325769e-01F, 6.331696510e-01F,
	6.332067847e-01F, 6.332438588e-01F, 6.332809329e-01F, 6.333180666e-01F, 6.333551407e-01F, 6.333922744e-01F, 6.334293485e-01F, 6.334664226e-01F,
	6.335035563e-01F, 6.335406303e-01F, 6.335777044e-01F, 6.336147785e-01F, 6.336518526e-01F, 6.336889863e-01F, 6.337260604e-01F, 6.337631345e-01F,
	6.338002086e-01F, 6.338372827e-01F, 6.338743567e-01F, 6.339114308e-01F, 6.339485049e-01F, 6.339855790e-01F, 6.340226531e-01F, 6.340597272e-01F,
	6.340968013e-01F, 6.341338754e-01F, 6.341709495e-01F, 6.342079639e-01F, 6.342450380e-01F, 6.342821121e-01F, 6.343191862e-01F, 6.343562007e-01F,
	6.343932748e-01F, 6.344303489e-01F, 6.344673634e-01F, 6.345044374e-01F, 6.345415115e-01F, 6.345785260e-01F, 6.346156001e-01F, 6.346526146e-01F,
	6.346896887e-01F, 6.347267032e-01F, 6.347637773e-01F, 6.348007917e-01F, 6.348378658e-01F, 6.348748803e-01F, 6.349118948e-01F, 6.349489689e-01F,
	6.349859834e-01F, 6.350229979e-01F, 6.350600719e-01F, 6.350970864e-01F, 6.351341009e-01F, 6.351711154e-01F, 6.352081299e-01F, 6.352452040e-01F,
	6.352822185e-01F, 6.353192329e-01F, 6.353562474e-01F, 6.353932619e-01F, 6.354302764e-01F, 6.354672909e-01F, 6.355043054e-01F, 6.355413198e-01F,
	6.355783343e-01F, 6.356153488e-01F, 6.356523633e-01F, 6.356893182e-01F, 6.357263327e-01F, 6.357633471e-01F, 6.358003616e-01F, 6.358373761e-01F,
	6.358743310e-01F, 6.359113455e-01F, 6.359483600e-01F, 6.359853148e-01F, 6.360223293e-01F, 6.360593438e-01F, 6.360962987e-01F, 6.361333132e-01F,
	6.361702681e-01F, 6.362072825e-01F, 6.362442374e-01F, 6.362812519e-01F, 6.363182068e-01F, 6.363551617e-01F, 6.363921762e-01F, 6.364291310e-01F,
	6.364661455e-01F, 6.365031004e-01F, 6.365400553e-01F, 6.365770102e-01F, 6.366140246e-01F, 6.366509795e-01F, 6.366879344e-01F, 6.367248893e-01F,
	6.367618442e-01F, 6.367987990e-01F, 6.368357539e-01F, 6.368727684e-01F, 6.369097233e-01F, 6.369466782e-01F, 6.369836330e-01F, 6.370205879e-01F,
	6.370574832e-01F, 6.370944381e-01F, 6.371313930e-01F, 6.371683478e-01F, 6.372053027e-01F, 6.372422576e-01F, 6.372792125e-01F, 6.373161077e-01F,
	6.373530626e-01F, 6.373900175e-01F, 6.374269724e-01F, 6.374638677e-01F, 6.375008225e-01F, 6.375377178e-01F, 6.375746727e-01F, 6.376116276e-01F,
	6.376485229e-01F, 6.376854777e-01F, 6.377223730e-01F, 6.377593279e-01F, 6.377962232e-01F, 6.378331780e-01F, 6.378700733e-01F, 6.379069686e-01F,
	6.379439235e-01F, 6.379808187e-01F, 6.380177140e-01F, 6.380546689e-01F, 6.380915642e-01F, 6.381284595e-01F, 6.381653547e-01F, 6.382022500e-01F,
	6.382392049e-01F, 6.382761002e-01F, 6.383129954e-01F, 6.383498907e-01F, 6.383867860e-01F, 6.384236813e-01F, 6.384605765e-01F, 6.384974718e-01F,
	6.385343671e-01F, 6.385712624e-01F, 6.386081576e-01F, 6.386450529e-01F, 6.386818886e-01F, 6.387187839e-01F, 6.387556791e-01F, 6.387925744e-01F,
	6.388294697e-01F, 6.388663054e-01F, 6.389032006e-01F, 6.389400959e-01F, 6.389769316e-01F, 6.390138268e-01F, 6.390507221e-01F, 6.390875578e-01F,
	6.391244531e-01F, 6.391612887e-01F, 6.391981840e-01F, 6.392350197e-01F, 6.392719150e-01F, 6.393087506e-01F, 6.393456459e-01F, 6.393824816e-01F,
	6.394193172e-01F, 6.394562125e-01F, 6.394930482e-01F, 6.395298839e-01F, 6.395667791e-01F, 6.396036148e-01F, 6.396404505e-01F, 6.396772861e-01F,
	6.397141814e-01F, 6.397510171e-01F, 6.397878528e-01F, 6.398246884e-01F, 6.398615241e-01F, 6.398983598e-01F, 6.399351954e-01F, 6.399720311e-01F,
	6.400088668e-01F, 6.400457025e-01F, 6.400825381e-01F, 6.401193738e-01F, 6.401562095e-01F, 6.401929855e-01F, 6.402298212e-01F, 6.402666569e-01F,
	6.403034925e-01F, 6.403403282e-01F, 6.403771043e-01F, 6.404139400e-01F, 6.404507756e-01F, 6.404875517e-01F, 6.405243874e-01F, 6.405612230e-01F,
	6.405979991e-01F, 6.406348348e-01F, 6.406716108e-01F, 6.407084465e-01F, 6.407452226e-01F, 6.407820582e-01F, 6.408188343e-01F, 6.408556104e-01F,
	6.408924460e-01F, 6.409292221e-01F, 6.409660578e-01F, 6.410028338e-01F, 6.410396099e-01F, 6.410763860e-01F, 6.411132216e-01F, 6.411499977e-01F,
	6.411867738e-01F, 6.412235498e-01F, 6.412603259e-01F, 6.412971020e-01F, 6.413338780e-01F, 6.413706541e-01F, 6.414074898e-01F, 6.414442658e-01F,
	6.414810419e-01F, 6.415177584e-01F, 6.415545344e-01F, 6.415913105e-01F, 6.416280866e-01F, 6.416648626e-01F, 6.417016387e-01F, 6.417384148e-01F,
	6.417751312e-01F, 6.418119073e-01F, 6.418486834e-01F, 6.418854594e-01F, 6.419221759e-01F, 6.419589520e-01F, 6.419957280e-01F, 6.420324445e-01F,
	6.420692205e-01F, 6.421059370e-01F, 6.421427131e-01F, 6.421794295e-01F, 6.422162056e-01F, 6.422529221e-01F, 6.422896981e-01F, 6.423264146e-01F,
	6.423631907e-01F, 6.423999071e-01F, 6.424366236e-01F, 6.424733996e-01F, 6.425101161e-01F, 6.425468326e-01F, 6.425835490e-01F, 6.426203251e-01F,
	6.426570415e-01F, 6.426937580e-01F, 6.427304745e-01F, 6.427671909e-01F, 6.428039074e-01F, 6.428406239e-01F, 6.428773403e-01F, 6.429141164e-01F,
	6.429508328e-01F, 6.429874897e-01F, 6.430242062e-01F, 6.430609226e-01F, 6.430976391e-01F, 6.431343555e-01F, 6.431710720e-01F, 6.432077885e-01F,
	6.432445049e-01F, 6.432811618e-01F, 6.433178782e-01F, 6.433545947e-01F, 6.433912516e-01F, 6.434279680e-01F, 6.434646845e-01F, 6.435013413e-01F,
	6.435380578e-01F, 6.435747743e-01F, 6.436114311e-01F, 6.436481476e-01F, 6.436848044e-01F, 6.437215209e-01F, 6.437581778e-01F, 6.437948346e-01F,
	6.438315511e-01F, 6.438682079e-01F, 6.439049244e-01F, 6.439415812e-01F, 6.439782381e-01F, 6.440148950e-01F, 6.440516114e-01F, 6.440882683e-01F,
	6.441249251e-01F, 6.441615820e-01F, 6.441982388e-01F, 6.442349553e-01F, 6.442716122e-01F, 6.443082690e-01F, 6.443449259e-01F, 6.443815827e-01F,
	6.444182396e-01F, 6.444548965e-01F, 6.444915533e-01F, 6.445282102e-01F, 6.445648670e-01F, 6.446014643e-01F, 6.446381211e-01F, 6.446747780e-01F,
	6.447114348e-01F, 6.447480917e-01F, 6.447846889e-01F, 6.448213458e-01F, 6.448580027e-01F, 6.448946595e-01F, 6.449312568e-01F, 6.449679136e-01F,
	6.450045109e-01F, 6.450411677e-01F, 6.450778246e-01F, 6.451144218e-01F, 6.451510787e-01F, 6.451876760e-01F, 6.452243328e-01F, 6.452609301e-01F,
	6.452975273e-01F, 6.453341842e-01F, 6.453707814e-01F, 6.454073787e-01F, 6.454440355e-01F, 6.454806328e-01F, 6.455172300e-01F, 6.455538273e-01F,
	6.455904841e-01F, 6.456270814e-01F, 6.456636786e-01F, 6.457002759e-01F, 6.457368731e-01F, 6.457734704e-01F, 6.458100677e-01F, 6.458466649e-01F,
	6.458832622e-01F, 6.459198594e-01F, 6.459564567e-01F, 6.459930539e-01F, 6.460296512e-01F, 6.460662484e-01F, 6.461028457e-01F, 6.461394429e-01F,
	6.461760402e-01F, 6.462125778e-01F, 6.462491751e-01F, 6.462857723e-01F, 6.463223696e-01F, 6.463589072e-01F, 6.463955045e-01F, 6.464320421e-01F,
	6.464686394e-01F, 6.465052366e-01F, 6.465417743e-01F, 6.465783715e-01F, 6.466149092e-01F, 6.466515064e-01F, 6.466880441e-01F, 6.467246413e-01F,
	6.467611790e-01F, 6.467977166e-01F, 6.468343139e-01F, 6.468708515e-01F, 6.469073892e-01F, 6.469439864e-01F, 6.469805241e-01F, 6.470170617e-01F,
	6.470535994e-01F, 6.470901966e-01F, 6.471267343e-01F, 6.471632719e-01F, 6.471998096e-01F, 6.472363472e-01F, 6.472728848e-01F, 6.473094225e-01F,
	6.473459601e-01F, 6.473824978e-01F, 6.474190354e-01F, 6.474555731e-01F, 6.474921107e-01F, 6.475286484e-01F, 6.475651860e-01F, 6.476016641e-01F,
	6.476382017e-01F, 6.476747394e-01F, 6.477112770e-01F, 6.477478147e-01F, 6.477842927e-01F, 6.478208303e-01F, 6.478573680e-01F, 6.478938460e-01F,
	6.479303837e-01F, 6.479668617e-01F, 6.480033994e-01F, 6.480399370e-01F, 6.480764151e-01F, 6.481129527e-01F, 6.481494308e-01F, 6.481859088e-01F,
	6.482224464e-01F, 6.482589245e-01F, 6.482954621e-01F, 6.483319402e-01F, 6.483684182e-01F, 6.484048963e-01F, 6.484414339e-01F, 6.484779119e-01F,
	6.485143900e-01F, 6.485508680e-01F, 6.485874057e-01F, 6.486238837e-01F, 6.486603618e-01F, 6.486968398e-01F, 6.487333179e-01F, 6.487697959e-01F,
	6.488062739e-01F, 6.488427520e-01F, 6.488792300e-01F, 6.489157081e-01F, 6.489521861e-01F, 6.489886642e-01F, 6.490250826e-01F, 6.490615606e-01F,
	6.490980387e-01F, 6.491345167e-01F, 6.491709948e-01F, 6.492074132e-01F, 6.492438912e-01F, 6.492803693e-01F, 6.493167877e-01F, 6.493532658e-01F,
	6.493897438e-01F, 6.494261622e-01F, 6.494626403e-01F, 6.494990587e-01F, 6.495355368e-01F, 6.495719552e-01F, 6.496084332e-01F, 6.496448517e-01F,
	6.496813297e-01F, 6.497177482e-01F, 6.497541666e-01F, 6.497906446e-01F, 6.498270631e-01F, 6.498634815e-01F, 6.498999596e-01F, 6.499363780e-01F,
	6.499727964e-01F, 6.500092149e-01F, 6.500456333e-01F, 6.500820518e-01F, 6.501185298e-01F, 6.501549482e-01F, 6.501913667e-01F, 6.502277851e-01F,
	6.502642035e-01F, 6.503006220e-01F, 6.503370404e-01F, 6.503734589e-01F, 6.504098773e-01F, 6.504462361e-01F, 6.504826546e-01F, 6.505190730e-01F,
	6.505554914e-01F, 6.505919099e-01F, 6.506282687e-01F, 6.506646872e-01F, 6.507011056e-01F, 6.507375240e-01F, 6.507738829e-01F, 6.508103013e-01F,
	6.508466601e-01F, 6.508830786e-01F, 6.509194970e-01F, 6.509558558e-01F, 6.509922743e-01F, 6.510286331e-01F, 6.510650516e-01F, 6.511014104e-01F,
	6.511377692e-01F, 6.511741877e-01F, 6.512105465e-01F, 6.512469053e-01F, 6.512833238e-01F, 6.513196826e-01F, 6.513560414e-01F, 6.513924003e-01F,
	6.514288187e-01F, 6.514651775e-01F, 6.515015364e-01F, 6.515378952e-01F, 6.515742540e-01F, 6.516106129e-01F, 6.516469717e-01F, 6.516833305e-01F,
	6.517196894e-01F, 6.517560482e-01F, 6.517924070e-01F, 6.518287659e-01F, 6.518651247e-01F, 6.519014835e-01F, 6.519378424e-01F, 6.519742012e-01F,
	6.520105600e-01F, 6.520468593e-01F, 6.520832181e-01F, 6.521195769e-01F, 6.521558762e-01F, 6.521922350e-01F, 6.522285938e-01F, 6.522648931e-01F,
	6.523012519e-01F, 6.523376107e-01F, 6.523739100e-01F, 6.524102688e-01F, 6.524465680e-01F, 6.524829268e-01F, 6.525192261e-01F, 6.525555849e-01F,
	6.525918841e-01F, 6.526281834e-01F, 6.526645422e-01F, 6.527008414e-01F, 6.527371407e-01F, 6.527734995e-01F, 6.528097987e-01F, 6.528460979e-01F,
	6.528823972e-01F, 6.529186964e-01F, 6.529550552e-01F, 6.529913545e-01F, 6.530276537e-01F, 6.530639529e-01F, 6.531002522e-01F, 6.531365514e-01F,
	6.531728506e-01F, 6.532091498e-01F, 6.532454491e-01F, 6.532817483e-01F, 6.533180475e-01F, 6.533542871e-01F, 6.533905864e-01F, 6.534268856e-01F,
	6.534631848e-01F, 6.534994841e-01F, 6.535357237e-01F, 6.535720229e-01F, 6.536083221e-01F, 6.536446214e-01F, 6.536808610e-01F, 6.537171602e-01F,
	6.537533998e-01F, 6.537896991e-01F, 6.538259387e-01F, 6.538622379e-01F, 6.538985372e-01F, 6.539347768e-01F, 6.539710164e-01F, 6.540073156e-01F,
	6.540435553e-01F, 6.540798545e-01F, 6.541160941e-01F, 6.541523337e-01F, 6.541886330e-01F, 6.542248726e-01F, 6.542611122e-01F, 6.542973518e-01F,
	6.543335915e-01F, 6.543698907e-01F, 6.544061303e-01F, 6.544423699e-01F, 6.544786096e-01F, 6.545148492e-01F, 6.545510888e-01F, 6.545873284e-01F,
	6.546235681e-01F, 6.546598077e-01F, 6.546960473e-01F, 6.547322869e-01F, 6.547685266e-01F, 6.548047662e-01F, 6.548409462e-01F, 6.548771858e-01F,
	6.549134254e-01F, 6.549496651e-01F, 6.549859047e-01F, 6.550220847e-01F, 6.550583243e-01F, 6.550945640e-01F, 6.551307440e-01F, 6.551669836e-01F,
	6.552031636e-01F, 6.552394032e-01F, 6.552756429e-01F, 6.553118229e-01F, 6.553480625e-01F, 6.553842425e-01F, 6.554204226e-01F, 6.554566622e-01F,
	6.554928422e-01F, 6.555290818e-01F, 6.555652618e-01F, 6.556014419e-01F, 6.556376219e-01F, 6.556738615e-01F, 6.557100415e-01F, 6.557462215e-01F,
	6.557824016e-01F, 6.558185816e-01F, 6.558548212e-01F, 6.558910012e-01F, 6.559271812e-01F, 6.559633613e-01F, 6.559995413e-01F, 6.560357213e-01F,
	6.560719013e-01F, 6.561080813e-01F, 6.561442614e-01F, 6.561804414e-01F, 6.562166214e-01F, 6.562527418e-01F, 6.562889218e-01F, 6.563251019e-01F,
	6.563612819e-01F, 6.563974619e-01F, 6.564335823e-01F, 6.564697623e-01F, 6.565059423e-01F, 6.565420628e-01F, 6.565782428e-01F, 6.566143632e-01F,
	6.566505432e-01F, 6.566867232e-01F, 6.567228436e-01F, 6.567590237e-01F, 6.567951441e-01F, 6.568313241e-01F, 6.568674445e-01F, 6.569035649e-01F,
	6.569397449e-01F, 6.569758654e-01F, 6.570119858e-01F, 6.570481658e-01F, 6.570842862e-01F, 6.571204066e-01F, 6.571565270e-01F, 6.571927071e-01F,
	6.572288275e-01F, 6.572649479e-01F, 6.573010683e-01F, 6.573371887e-01F, 6.573733091e-01F, 6.574094296e-01F, 6.574455500e-01F, 6.574816704e-01F,
	6.575177908e-01F, 6.575539112e-01F, 6.575900316e-01F, 6.576261520e-01F, 6.576622725e-01F, 6.576983929e-01F, 6.577344537e-01F, 6.577705741e-01F,
	6.578066945e-01F, 6.578428149e-01F, 6.578788757e-01F, 6.579149961e-01F, 6.579511166e-01F, 6.579871774e-01F, 6.580232978e-01F, 6.580594182e-01F,
	6.580954790e-01F, 6.581315994e-01F, 6.581676602e-01F, 6.582037807e-01F, 6.582398415e-01F, 6.582759619e-01F, 6.583120227e-01F, 6.583480835e-01F,
	6.583842039e-01F, 6.584202647e-01F, 6.584563255e-01F, 6.584924459e-01F, 6.585285068e-01F, 6.585645676e-01F, 6.586006284e-01F, 6.586366892e-01F,
	6.586728096e-01F, 6.587088704e-01F, 6.587449312e-01F, 6.587809920e-01F, 6.588170528e-01F, 6.588531137e-01F, 6.588891745e-01F, 6.589252353e-01F,
	6.589612961e-01F, 6.589973569e-01F, 6.590334177e-01F, 6.590694785e-01F, 6.591054797e-01F, 6.591415405e-01F, 6.591776013e-01F, 6.592136621e-01F,
	6.592497230e-01F, 6.592857242e-01F, 6.593217850e-01F, 6.593578458e-01F, 6.593938470e-01F, 6.594299078e-01F, 6.594659686e-01F, 6.595019698e-01F,
	6.595380306e-01F, 6.595740318e-01F, 6.596100926e-01F, 6.596460938e-01F, 6.596821547e-01F, 6.597181559e-01F, 6.597541571e-01F, 6.597902179e-01F,
	6.598262191e-01F, 6.598622203e-01F, 6.598982811e-01F, 6.599342823e-01F, 6.599702835e-01F, 6.600062847e-01F, 6.600423455e-01F, 6.600783467e-01F,
	6.601143479e-01F, 6.601503491e-01F, 6.601863503e-01F, 6.602223516e-01F, 6.602583528e-01F, 6.602943540e-01F, 6.603303552e-01F, 6.603663564e-01F,
	6.604023576e-01F, 6.604383588e-01F, 6.604743600e-01F, 6.605103612e-01F, 6.605463624e-01F, 6.605823040e-01F, 6.606183052e-01F, 6.606543064e-01F,
	6.606903076e-01F, 6.607262492e-01F, 6.607622504e-01F, 6.607982516e-01F, 6.608341932e-01F, 6.608701944e-01F, 6.609061360e-01F, 6.609421372e-01F,
	6.609781384e-01F, 6.610140800e-01F, 6.610500216e-01F, 6.610860229e-01F, 6.611219645e-01F, 6.611579657e-01F, 6.611939073e-01F, 6.612298489e-01F,
	6.612658501e-01F, 6.613017917e-01F, 6.613377333e-01F, 6.613737345e-01F, 6.614096761e-01F, 6.614456177e-01F, 6.614815593e-01F, 6.615175009e-01F,
	6.615534425e-01F, 6.615894437e-01F, 6.616253853e-01F, 6.616613269e-01F, 6.616972685e-01F, 6.617332101e-01F, 6.617691517e-01F, 6.618050933e-01F,
	6.618409753e-01F, 6.618769169e-01F, 6.619128585e-01F, 6.619488001e-01F, 6.619847417e-01F, 6.620206833e-01F, 6.620565653e-01F, 6.620925069e-01F,
	6.621284485e-01F, 6.621643901e-01F, 6.622002721e-01F, 6.622362137e-01F, 6.622720957e-01F, 6.623080373e-01F, 6.623439789e-01F, 6.623798609e-01F,
	6.624158025e-01F, 6.624516845e-01F, 6.624876261e-01F, 6.625235081e-01F, 6.625593901e-01F, 6.625953317e-01F, 6.626312137e-01F, 6.626670957e-01F,
	6.627030373e-01F, 6.627389193e-01F, 6.627748013e-01F, 6.628106833e-01F, 6.628466249e-01F, 6.628825068e-01F, 6.629183888e-01F, 6.629542708e-01F,
	6.629901528e-01F, 6.630260348e-01F, 6.630619168e-01F, 6.630977988e-01F, 6.631336808e-01F, 6.631695628e-01F, 6.632054448e-01F, 6.632413268e-01F,
	6.632772088e-01F, 6.633130908e-01F, 6.633489728e-01F, 6.633848548e-01F, 6.634206772e-01F, 6.634565592e-01F, 6.634924412e-01F, 6.635283232e-01F,
	6.635641456e-01F, 6.636000276e-01F, 6.636359096e-01F, 6.636717319e-01F, 6.637076139e-01F, 6.637434363e-01F, 6.637793183e-01F, 6.638151407e-01F,
	6.638510227e-01F, 6.638868451e-01F, 6.639227271e-01F, 6.639585495e-01F, 6.639943719e-01F, 6.640302539e-01F, 6.640660763e-01F, 6.641018987e-01F,
	6.641377807e-01F, 6.641736031e-01F, 6.642094254e-01F, 6.642452478e-01F, 6.642811298e-01F, 6.643169522e-01F, 6.643527746e-01F, 6.643885970e-01F,
	6.644244194e-01F, 6.644602418e-01F, 6.644960642e-01F, 6.645318866e-01F, 6.645677090e-01F, 6.646035314e-01F, 6.646393538e-01F, 6.646751761e-01F,
	6.647109985e-01F, 6.647468209e-01F, 6.647825837e-01F, 6.648184061e-01F, 6.648542285e-01F, 6.648900509e-01F, 6.649258137e-01F, 6.649616361e-01F,
	6.649974585e-01F, 6.650332212e-01F, 6.650690436e-01F, 6.651048660e-01F, 6.651406288e-01F, 6.651764512e-01F, 6.652122140e-01F, 6.652480364e-01F,
	6.652837992e-01F, 6.653195620e-01F, 6.653553843e-01F, 6.653911471e-01F, 6.654269695e-01F, 6.654627323e-01F, 6.654984951e-01F, 6.655343175e-01F,
	6.655700803e-01F, 6.656058431e-01F, 6.656416059e-01F, 6.656773686e-01F, 6.657131910e-01F, 6.657489538e-01F, 6.657847166e-01F, 6.658204794e-01F,
	6.658562422e-01F, 6.658920050e-01F, 6.659277678e-01F, 6.659635305e-01F, 6.659992933e-01F, 6.660350561e-01F, 6.660708189e-01F, 6.661065221e-01F,
	6.661422849e-01F, 6.661780477e-01F, 6.662138104e-01F, 6.662495732e-01F, 6.662852764e-01F, 6.663210392e-01F, 6.663568020e-01F, 6.663925052e-01F,
	6.664282680e-01F, 6.664640307e-01F, 6.664997339e-01F, 6.665354967e-01F, 6.665711999e-01F, 6.666069627e-01F, 6.666426659e-01F, 6.666784286e-01F,
	6.667141318e-01F, 6.667498946e-01F, 6.667855978e-01F, 6.668213010e-01F, 6.668570638e-01F, 6.668927670e-01F, 6.669284701e-01F, 6.669642329e-01F,
	6.669999361e-01F, 6.670356393e-01F, 6.670713425e-01F, 6.671070457e-01F, 6.671427488e-01F, 6.671785116e-01F, 6.672142148e-01F, 6.672499180e-01F,
	6.672856212e-01F, 6.673213243e-01F, 6.673570275e-01F, 6.673927307e-01F, 6.674283743e-01F, 6.674640775e-01F, 6.674997807e-01F, 6.675354838e-01F,
	6.675711870e-01F, 6.676068902e-01F, 6.676425338e-01F, 6.676782370e-01F, 6.677139401e-01F, 6.677496433e-01F, 6.677852869e-01F, 6.678209901e-01F,
	6.678566337e-01F, 6.678923368e-01F, 6.679280400e-01F, 6.679636836e-01F, 6.679993868e-01F, 6.680350304e-01F, 6.680707335e-01F, 6.681063771e-01F,
	6.681420207e-01F, 6.681777239e-01F, 6.682133675e-01F, 6.682490110e-01F, 6.682847142e-01F, 6.683203578e-01F, 6.683560014e-01F, 6.683916450e-01F,
	6.684273481e-01F, 6.684629917e-01F, 6.684986353e-01F, 6.685342789e-01F, 6.685699224e-01F, 6.686055660e-01F, 6.686412096e-01F, 6.686768532e-01F,
	6.687124968e-01F, 6.687481403e-01F, 6.687837839e-01F, 6.688194275e-01F, 6.688550711e-01F, 6.688907146e-01F, 6.689263582e-01F, 6.689619422e-01F,
	6.689975858e-01F, 6.690332294e-01F, 6.690688729e-01F, 6.691044569e-01F, 6.691401005e-01F, 6.691757441e-01F, 6.692113280e-01F, 6.692469716e-01F,
	6.692826152e-01F, 6.693181992e-01F, 6.693538427e-01F, 6.693894267e-01F, 6.694250703e-01F, 6.694606543e-01F, 6.694962382e-01F, 6.695318818e-01F,
	6.695674658e-01F, 6.696031094e-01F, 6.696386933e-01F, 6.696742773e-01F, 6.697098613e-01F, 6.697455049e-01F, 6.697810888e-01F, 6.698166728e-01F,
	6.698522568e-01F, 6.698878407e-01F, 6.699234247e-01F, 6.699590683e-01F, 6.699946523e-01F, 6.700302362e-01F, 6.700658202e-01F, 6.701014042e-01F,
	6.701369882e-01F, 6.701725721e-01F, 6.702080965e-01F, 6.702436805e-01F, 6.702792645e-01F, 6.703148484e-01F, 6.703504324e-01F, 6.703860164e-01F,
	6.704215407e-01F, 6.704571247e-01F, 6.704927087e-01F, 6.705282331e-01F, 6.705638170e-01F, 6.705994010e-01F, 6.706349254e-01F, 6.706705093e-01F,
	6.707060337e-01F, 6.707416177e-01F, 6.707771420e-01F, 6.708127260e-01F, 6.708482504e-01F, 6.708838344e-01F, 6.709193587e-01F, 6.709548831e-01F,
	6.709904671e-01F, 6.710259914e-01F, 6.710615158e-01F, 6.710970998e-01F, 6.711326241e-01F, 6.711681485e-01F, 6.712036729e-01F, 6.712391973e-01F,
	6.712747812e-01F, 6.713103056e-01F, 6.713458300e-01F, 6.713813543e-01F, 6.714168787e-01F, 6.714524031e-01F, 6.714879274e-01F, 6.715234518e-01F,
	6.715589762e-01F, 6.715945005e-01F, 6.716299653e-01F, 6.716654897e-01F, 6.717010140e-01F, 6.717365384e-01F, 6.717720628e-01F, 6.718075275e-01F,
	6.718430519e-01F, 6.718785763e-01F, 6.719140410e-01F, 6.719495654e-01F, 6.719850898e-01F, 6.720205545e-01F, 6.720560789e-01F, 6.720915437e-01F,
	6.721270680e-01F, 6.721625328e-01F, 6.721980572e-01F, 6.722335219e-01F, 6.722690463e-01F, 6.723045111e-01F, 6.723399758e-01F, 6.723755002e-01F,
	6.724109650e-01F, 6.724464297e-01F, 6.724819541e-01F, 6.725174189e-01F, 6.725528836e-01F, 6.725883484e-01F, 6.726238132e-01F, 6.726592779e-01F,
	6.726947427e-01F, 6.727302670e-01F, 6.727657318e-01F, 6.728011966e-01F, 6.728366613e-01F, 6.728721261e-01F, 6.729075313e-01F, 6.729429960e-01F,
	6.729784608e-01F, 6.730139256e-01F, 6.730493903e-01F, 6.730848551e-01F, 6.731203198e-01F, 6.731557250e-01F, 6.731911898e-01F, 6.732266545e-01F,
	6.732620597e-01F, 6.732975245e-01F, 6.733329892e-01F, 6.733683944e-01F, 6.734038591e-01F, 6.734392643e-01F, 6.734747291e-01F, 6.735101342e-01F,
	6.735455990e-01F, 6.735810041e-01F, 6.736164689e-01F, 6.736518741e-01F, 6.736872792e-01F, 6.737227440e-01F, 6.737581491e-01F, 6.737935543e-01F,
	6.738290191e-01F, 6.738644242e-01F, 6.738998294e-01F, 6.739352345e-01F, 6.739706397e-01F, 6.740061045e-01F, 6.740415096e-01F, 6.740769148e-01F,
	6.741123199e-01F, 6.741477251e-01F, 6.741831303e-01F, 6.742185354e-01F, 6.742539406e-01F, 6.742893457e-01F, 6.743247509e-01F, 6.743600965e-01F,
	6.743955016e-01F, 6.744309068e-01F, 6.744663119e-01F, 6.745017171e-01F, 6.745370626e-01F, 6.745724678e-01F, 6.746078730e-01F, 6.746432781e-01F,
	6.746786237e-01F, 6.747140288e-01F, 6.747493744e-01F, 6.747847795e-01F, 6.748201251e-01F, 6.748555303e-01F, 6.748908758e-01F, 6.749262810e-01F,
	6.749616265e-01F, 6.749970317e-01F, 6.750323772e-01F, 6.750677228e-01F, 6.751031280e-01F, 6.751384735e-01F, 6.751738191e-01F, 6.752092242e-01F,
	6.752445698e-01F, 6.752799153e-01F, 6.753152609e-01F, 6.753506064e-01F, 6.753859520e-01F, 6.754213572e-01F, 6.754567027e-01F, 6.754920483e-01F,
	6.755273938e-01F, 6.755627394e-01F, 6.755980849e-01F, 6.756334305e-01F, 6.756687164e-01F, 6.757040620e-01F, 6.757394075e-01F, 6.757747531e-01F,
	6.758100986e-01F, 6.758454442e-01F, 6.758807302e-01F, 6.759160757e-01F, 6.759514213e-01F, 6.759867072e-01F, 6.760220528e-01F, 6.760573983e-01F,
	6.760926843e-01F, 6.761280298e-01F, 6.761633158e-01F, 6.761986613e-01F, 6.762339473e-01F, 6.762692928e-01F, 6.763045788e-01F, 6.763399243e-01F,
	6.763752103e-01F, 6.764105558e-01F, 6.764458418e-01F, 6.764811277e-01F, 6.765164137e-01F, 6.765517592e-01F, 6.765870452e-01F, 6.766223311e-01F,
	6.766576171e-01F, 6.766929030e-01F, 6.767282486e-01F, 6.767635345e-01F, 6.767988205e-01F, 6.768341064e-01F, 6.768693924e-01F, 6.769046783e-01F,
	6.769399643e-01F, 6.769752502e-01F, 6.770105362e-01F, 6.770458221e-01F, 6.770810485e-01F, 6.771163344e-01F, 6.771516204e-01F, 6.771869063e-01F,
	6.772221923e-01F, 6.772574186e-01F, 6.772927046e-01F, 6.773279905e-01F, 6.773632169e-01F, 6.773985028e-01F, 6.774337888e-01F, 6.774690151e-01F,
	6.775043011e-01F, 6.775395274e-01F, 6.775748134e-01F, 6.776100397e-01F, 6.776453257e-01F, 6.776805520e-01F, 6.777158380e-01F, 6.777510643e-01F,
	6.777862906e-01F, 6.778215766e-01F, 6.778568029e-01F, 6.778920293e-01F, 6.779272556e-01F, 6.779625416e-01F, 6.779977679e-01F, 6.780329943e-01F,
	6.780682206e-01F, 6.781034470e-01F, 6.781386733e-01F, 6.781738997e-01F, 6.782091260e-01F, 6.782443523e-01F, 6.782795787e-01F, 6.783148050e-01F,
	6.783500314e-01F, 6.783852577e-01F, 6.784204841e-01F, 6.784557104e-01F, 6.784909368e-01F, 6.785261035e-01F, 6.785613298e-01F, 6.785965562e-01F,
	6.786317825e-01F, 6.786669493e-01F, 6.787021756e-01F, 6.787374020e-01F, 6.787725687e-01F, 6.788077950e-01F, 6.788429618e-01F, 6.788781881e-01F,
	6.789133549e-01F, 6.789485812e-01F, 6.789837480e-01F, 6.790189743e-01F, 6.790541410e-01F, 6.790893674e-01F, 6.791245341e-01F, 6.791597009e-01F,
	6.791949272e-01F, 6.792300940e-01F, 6.792652607e-01F, 6.793004274e-01F, 6.793355942e-01F, 6.793708205e-01F, 6.794059873e-01F, 6.794411540e-01F,
	6.794763207e-01F, 6.795114875e-01F, 6.795466542e-01F, 6.795818210e-01F, 6.796169877e-01F, 6.796521544e-01F, 6.796873212e-01F, 6.797224879e-01F,
	6.797576547e-01F, 6.797928214e-01F, 6.798279285e-01F, 6.798630953e-01F, 6.798982620e-01F, 6.799334288e-01F, 6.799685359e-01F, 6.800037026e-01F,
	6.800388694e-01F, 6.800739765e-01F, 6.801091433e-01F, 6.801443100e-01F, 6.801794171e-01F, 6.802145839e-01F, 6.802496910e-01F, 6.802848577e-01F,
	6.803199649e-01F, 6.803551316e-01F, 6.803902388e-01F, 6.804253459e-01F, 6.804605126e-01F, 6.804956198e-01F, 6.805307269e-01F, 6.805658937e-01F,
	6.806010008e-01F, 6.806361079e-01F, 6.806712151e-01F, 6.807063818e-01F, 6.807414889e-01F, 6.807765961e-01F, 6.808117032e-01F, 6.808468103e-01F,
	6.808819175e-01F, 6.809170246e-01F, 6.809521317e-01F, 6.809872389e-01F, 6.810223460e-01F, 6.810574532e-01F, 6.810925603e-01F, 6.811276674e-01F,
	6.811627150e-01F, 6.811978221e-01F, 6.812329292e-01F, 6.812680364e-01F, 6.813030839e-01F, 6.813381910e-01F, 6.813732982e-01F, 6.814083457e-01F,
	6.814434528e-01F, 6.814785600e-01F, 6.815136075e-01F, 6.815487146e-01F, 6.815837622e-01F, 6.816188693e-01F, 6.816539168e-01F, 6.816890240e-01F,
	6.817240715e-01F, 6.817591190e-01F, 6.817942262e-01F, 6.818292737e-01F, 6.818643212e-01F, 6.818994284e-01F, 6.819344759e-01F, 6.819695234e-01F,
	6.820045710e-01F, 6.820396781e-01F, 6.820747256e-01F, 6.821097732e-01F, 6.821448207e-01F, 6.821798682e-01F, 6.822149158e-01F, 6.822499633e-01F,
	6.822850108e-01F, 6.823200583e-01F, 6.823551059e-01F, 6.823901534e-01F, 6.824252009e-01F, 6.824602485e-01F, 6.824952364e-01F, 6.825302839e-01F,
	6.825653315e-01F, 6.826003790e-01F, 6.826353669e-01F, 6.826704144e-01F, 6.827054620e-01F, 6.827404499e-01F, 6.827754974e-01F, 6.828105450e-01F,
	6.828455329e-01F, 6.828805804e-01F, 6.829155684e-01F, 6.829506159e-01F, 6.829856038e-01F, 6.830206513e-01F, 6.830556393e-01F, 6.830906272e-01F,
	6.831256747e-01F, 6.831606627e-01F, 6.831956506e-01F, 6.832306981e-01F, 6.832656860e-01F, 6.833006740e-01F, 6.833356619e-01F, 6.833707094e-01F,
	6.834056973e-01F, 6.834406853e-01F, 6.834756732e-01F, 6.835106611e-01F, 6.835456491e-01F, 6.835806370e-01F, 6.836156249e-01F, 6.836506128e-01F,
	6.836856008e-01F, 6.837205887e-01F, 6.837555766e-01F, 6.837905645e-01F, 6.838254929e-01F, 6.838604808e-01F, 6.838954687e-01F, 6.839304566e-01F,
	6.839653850e-01F, 6.840003729e-01F, 6.840353608e-01F, 6.840702891e-01F, 6.841052771e-01F, 6.841402650e-01F, 6.841751933e-01F, 6.842101812e-01F,
	6.842451096e-01F, 6.842800975e-01F, 6.843150258e-01F, 6.843500137e-01F, 6.843849421e-01F, 6.844198704e-01F, 6.844548583e-01F, 6.844897866e-01F,
	6.845247149e-01F, 6.845597029e-01F, 6.845946312e-01F, 6.846295595e-01F, 6.846644878e-01F, 6.846994758e-01F, 6.847344041e-01F, 6.847693324e-01F,
	6.848042607e-01F, 6.848391891e-01F, 6.848741174e-01F, 6.849090457e-01F, 6.849439740e-01F, 6.849789023e-01F, 6.850138307e-01F, 6.850487590e-01F,
	6.850836873e-01F, 6.851186156e-01F, 6.851534843e-01F, 6.851884127e-01F, 6.852233410e-01F, 6.852582693e-01F, 6.852931380e-01F, 6.853280663e-01F,
	6.853629947e-01F, 6.853978634e-01F, 6.854327917e-01F, 6.854677200e-01F, 6.855025887e-01F, 6.855375171e-01F, 6.855723858e-01F, 6.856073141e-01F,
	6.856421828e-01F, 6.856771111e-01F, 6.857119799e-01F, 6.857468486e-01F, 6.857817769e-01F, 6.858166456e-01F, 6.858515143e-01F, 6.858864427e-01F,
	6.859213114e-01F, 6.859561801e-01F, 6.859910488e-01F, 6.860259175e-01F, 6.860608459e-01F, 6.860957146e-01F, 6.861305833e-01F, 6.861654520e-01F,
	6.862003207e-01F, 6.862351894e-01F, 6.862700582e-01F, 6.863049269e-01F, 6.863397956e-01F, 6.863746643e-01F, 6.864094734e-01F, 6.864443421e-01F,
	6.864792109e-01F, 6.865140796e-01F, 6.865489483e-01F, 6.865837574e-01F, 6.866186261e-01F, 6.866534948e-01F, 6.866883636e-01F, 6.867231727e-01F,
	6.867580414e-01F, 6.867928505e-01F, 6.868277192e-01F, 6.868625283e-01F, 6.868973970e-01F, 6.869322062e-01F, 6.869670749e-01F, 6.870018840e-01F,
	6.870367527e-01F, 6.870715618e-01F, 6.871063709e-01F, 6.871412396e-01F, 6.871760488e-01F, 6.872108579e-01F, 6.872457266e-01F, 6.872805357e-01F,
	6.873153448e-01F, 6.873501539e-01F, 6.873849630e-01F, 6.874197721e-01F, 6.874545813e-01F, 6.874893904e-01F, 6.875241995e-01F, 6.875590086e-01F,
	6.875938177e-01F, 6.876286268e-01F, 6.876634359e-01F, 6.876982450e-01F, 6.877330542e-01F, 6.877678633e-01F, 6.878026724e-01F, 6.878374815e-01F,
	6.878722310e-01F, 6.879070401e-01F, 6.879418492e-01F, 6.879765987e-01F, 6.880114079e-01F, 6.880462170e-01F, 6.880809665e-01F, 6.881157756e-01F,
	6.881505251e-01F, 6.881853342e-01F, 6.882200837e-01F, 6.882548928e-01F, 6.882896423e-01F, 6.883244514e-01F, 6.883592010e-01F, 6.883940101e-01F,
	6.884287596e-01F, 6.884635091e-01F, 6.884982586e-01F, 6.885330677e-01F, 6.885678172e-01F, 6.886025667e-01F, 6.886373162e-01F, 6.886721253e-01F,
	6.887068748e-01F, 6.887416244e-01F, 6.887763739e-01F, 6.888111234e-01F, 6.888458729e-01F, 6.888806224e-01F, 6.889153719e-01F, 6.889501214e-01F,
	6.889848709e-01F, 6.890196204e-01F, 6.890543103e-01F, 6.890890598e-01F, 6.891238093e-01F, 6.891585588e-01F, 6.891933084e-01F, 6.892279983e-01F,
	6.892627478e-01F, 6.892974973e-01F, 6.893321872e-01F, 6.893669367e-01F, 6.894016862e-01F, 6.894363761e-01F, 6.894711256e-01F, 6.895058155e-01F,
	6.895405650e-01F, 6.895752549e-01F, 6.896100044e-01F, 6.896446943e-01F, 6.896793842e-01F, 6.897141337e-01F, 6.897488236e-01F, 6.897835135e-01F,
	6.898182631e-01F, 6.898529530e-01F, 6.898876429e-01F, 6.899223328e-01F, 6.899570227e-01F, 6.899917722e-01F, 6.900264621e-01F, 6.900611520e-01F,
	6.900958419e-01F, 6.901305318e-01F, 6.901652217e-01F, 6.901999116e-01F, 6.902346015e-01F, 6.902692914e-01F, 6.903039813e-01F, 6.903386712e-01F,
	6.903733015e-01F, 6.904079914e-01F, 6.904426813e-01F, 6.904773712e-01F, 6.905120611e-01F, 6.905466914e-01F, 6.905813813e-01F, 6.906160712e-01F,
	6.906507015e-01F, 6.906853914e-01F, 6.907200217e-01F, 6.907547116e-01F, 6.907893419e-01F, 6.908240318e-01F, 6.908586621e-01F, 6.908933520e-01F,
	6.909279823e-01F, 6.909626722e-01F, 6.909973025e-01F, 6.910319328e-01F, 6.910666227e-01F, 6.911012530e-01F, 6.911358833e-01F, 6.911705732e-01F,
	6.912052035e-01F, 6.912398338e-01F, 6.912744641e-01F, 6.913090944e-01F, 6.913437247e-01F, 6.913783550e-01F, 6.914129853e-01F, 6.914476156e-01F,
	6.914822459e-01F, 6.915168762e-01F, 6.915515065e-01F, 6.915861368e-01F, 6.916207671e-01F, 6.916553974e-01F, 6.916900277e-01F, 6.917246580e-01F,
	6.917592287e-01F, 6.917938590e-01F, 6.918284893e-01F, 6.918631196e-01F, 6.918976903e-01F, 6.919323206e-01F, 6.919669509e-01F, 6.920015216e-01F,
	6.920361519e-01F, 6.920707226e-01F, 6.921053529e-01F, 6.921399236e-01F, 6.921745539e-01F, 6.922091246e-01F, 6.922437549e-01F, 6.922783256e-01F,
	6.923128963e-01F, 6.923475266e-01F, 6.923820972e-01F, 6.924166679e-01F, 6.924512982e-01F, 6.924858689e-01F, 6.925204396e-01F, 6.925550103e-01F,
	6.925895810e-01F, 6.926241517e-01F, 6.926587224e-01F, 6.926933527e-01F, 6.927279234e-01F, 6.927624941e-01F, 6.927970648e-01F, 6.928316355e-01F,
	6.928661466e-01F, 6.929007173e-01F, 6.929352880e-01F, 6.929698586e-01F, 6.930044293e-01F, 6.930390000e-01F, 6.930735111e-01F, 6.931080818e-01F,
	6.931426525e-01F, 6.931772232e-01F, 6.932117343e-01F, 6.932463050e-01F, 6.932808757e-01F, 6.933153868e-01F, 6.933499575e-01F, 6.933844686e-01F,
	6.934190392e-01F, 6.934535503e-01F, 6.934881210e-01F, 6.935226321e-01F, 6.935571432e-01F, 6.935917139e-01F, 6.936262250e-01F, 6.936607361e-01F,
	6.936953068e-01F, 6.937298179e-01F, 6.937643290e-01F, 6.937988400e-01F, 6.938334107e-01F, 6.938679218e-01F, 6.939024329e-01F, 6.939369440e-01F,
	6.939714551e-01F, 6.940059662e-01F, 6.940404773e-01F, 6.940749884e-01F, 6.941094995e-01F, 6.941440105e-01F, 6.941785216e-01F, 6.942130327e-01F,
	6.942475438e-01F, 6.942820549e-01F, 6.943165064e-01F, 6.943510175e-01F, 6.943855286e-01F, 6.944200397e-01F, 6.944544911e-01F, 6.944890022e-01F,
	6.945235133e-01F, 6.945579648e-01F, 6.945924759e-01F, 6.946269274e-01F, 6.946614385e-01F, 6.946958899e-01F, 6.947304010e-01F, 6.947648525e-01F,
	6.947993636e-01F, 6.948338151e-01F, 6.948683262e-01F, 6.949027777e-01F, 6.949372292e-01F, 6.949717402e-01F, 6.950061917e-01F, 6.950406432e-01F,
	6.950750947e-01F, 6.951096058e-01F, 6.951440573e-01F, 6.951785088e-01F, 6.952129602e-01F, 6.952474117e-01F, 6.952818632e-01F, 6.953163147e-01F,
	6.953507662e-01F, 6.953852177e-01F, 6.954196692e-01F, 6.954541206e-01F, 6.954885721e-01F, 6.955230236e-01F, 6.955574751e-01F, 6.955918670e-01F,
	6.956263185e-01F, 6.956607699e-01F, 6.956952214e-01F, 6.957296133e-01F, 6.957640648e-01F, 6.957985163e-01F, 6.958329082e-01F, 6.958673596e-01F,
	6.959017515e-01F, 6.959362030e-01F, 6.959706545e-01F, 6.960050464e-01F, 6.960394979e-01F, 6.960738897e-01F, 6.961082816e-01F, 6.961427331e-01F,
	6.961771250e-01F, 6.962115169e-01F, 6.962459683e-01F, 6.962803602e-01F, 6.963147521e-01F, 6.963492036e-01F, 6.963835955e-01F, 6.964179873e-01F,
	6.964523792e-01F, 6.964867711e-01F, 6.965211630e-01F, 6.965555549e-01F, 6.965899467e-01F, 6.966243386e-01F, 6.966587305e-01F, 6.966931224e-01F,
	6.967275143e-01F, 6.967619061e-01F, 6.967962980e-01F, 6.968306899e-01F, 6.968650818e-01F, 6.968994141e-01F, 6.969338059e-01F, 6.969681978e-01F,
	6.970025897e-01F, 6.970369220e-01F, 6.970713139e-01F, 6.971057057e-01F, 6.971400380e-01F, 6.971744299e-01F, 6.972087622e-01F, 6.972431540e-01F,
	6.972774863e-01F, 6.973118782e-01F, 6.973462105e-01F, 6.973806024e-01F, 6.974149346e-01F, 6.974493265e-01F, 6.974836588e-01F, 6.975179911e-01F,
	6.975523233e-01F, 6.975867152e-01F, 6.976210475e-01F, 6.976553798e-01F, 6.976897120e-01F, 6.977240443e-01F, 6.977584362e-01F, 6.977927685e-01F,
	6.978271008e-01F, 6.978614330e-01F, 6.978957653e-01F, 6.979300976e-01F, 6.979644299e-01F, 6.979987621e-01F, 6.980330944e-01F, 6.980673671e-01F,
	6.981016994e-01F, 6.981360316e-01F, 6.981703639e-01F, 6.982046962e-01F, 6.982389688e-01F, 6.982733011e-01F, 6.983076334e-01F, 6.983419657e-01F,
	6.983762383e-01F, 6.984105706e-01F, 6.984448433e-01F, 6.984791756e-01F, 6.985134482e-01F, 6.985477805e-01F, 6.985820532e-01F, 6.986163855e-01F,
	6.986506581e-01F, 6.986849904e-01F, 6.987192631e-01F, 6.987535357e-01F, 6.987878680e-01F, 6.988221407e-01F, 6.988564134e-01F, 6.988907456e-01F,
	6.989250183e-01F, 6.989592910e-01F, 6.989935637e-01F, 6.990278363e-01F, 6.990621090e-01F, 6.990963817e-01F, 6.991306543e-01F, 6.991649270e-01F,
	6.991991997e-01F, 6.992334723e-01F, 6.992677450e-01F, 6.993020177e-01F, 6.993362904e-01F, 6.993705630e-01F, 6.994048357e-01F, 6.994391084e-01F,
	6.994733214e-01F, 6.995075941e-01F, 6.995418668e-01F, 6.995761395e-01F, 6.996103525e-01F, 6.996446252e-01F, 6.996788383e-01F, 6.997131109e-01F,
	6.997473836e-01F, 6.997815967e-01F, 6.998158693e-01F, 6.998500824e-01F, 6.998843551e-01F, 6.999185681e-01F, 6.999527812e-01F, 6.999870539e-01F,
	7.000212669e-01F, 7.000554800e-01F, 7.000897527e-01F, 7.001239657e-01F, 7.001581788e-01F, 7.001923919e-01F, 7.002266645e-01F, 7.002608776e-01F,
	7.002950907e-01F, 7.003293037e-01F, 7.003635168e-01F, 7.003977299e-01F, 7.004319429e-01F, 7.004661560e-01F, 7.005003691e-01F, 7.005345821e-01F,
	7.005687952e-01F, 7.006030083e-01F, 7.006372213e-01F, 7.006714344e-01F, 7.007055879e-01F, 7.007398009e-01F, 7.007740140e-01F, 7.008082271e-01F,
	7.008423805e-01F, 7.008765936e-01F, 7.009108067e-01F, 7.009449601e-01F, 7.009791732e-01F, 7.010133266e-01F, 7.010475397e-01F, 7.010816932e-01F,
	7.011159062e-01F, 7.011500597e-01F, 7.011842728e-01F, 7.012184262e-01F, 7.012526393e-01F, 7.012867928e-01F, 7.013209462e-01F, 7.013551593e-01F,
	7.013893127e-01F, 7.014234662e-01F, 7.014576197e-01F, 7.014917731e-01F, 7.015259862e-01F, 7.015601397e-01F, 7.015942931e-01F, 7.016284466e-01F,
	7.016626000e-01F, 7.016967535e-01F, 7.017309070e-01F, 7.017650604e-01F, 7.017992139e-01F, 7.018333673e-01F, 7.018675208e-01F, 7.019016147e-01F,
	7.019357681e-01F, 7.019699216e-01F, 7.020040751e-01F, 7.020382285e-01F, 7.020723224e-01F, 7.021064758e-01F, 7.021406293e-01F, 7.021747231e-01F,
	7.022088766e-01F, 7.022430301e-01F, 7.022771239e-01F, 7.023112774e-01F, 7.023453712e-01F, 7.023795247e-01F, 7.024136186e-01F, 7.024477720e-01F,
	7.024818659e-01F, 7.025159597e-01F, 7.025501132e-01F, 7.025842071e-01F, 7.026183009e-01F, 7.026524544e-01F, 7.026865482e-01F, 7.027206421e-01F,
	7.027547359e-01F, 7.027888298e-01F, 7.028229237e-01F, 7.028570771e-01F, 7.028911710e-01F, 7.029252648e-01F, 7.029593587e-01F, 7.029934525e-01F,
	7.030275464e-01F, 7.030616403e-01F, 7.030956745e-01F, 7.031297684e-01F, 7.031638622e-01F, 7.031979561e-01F, 7.032320499e-01F, 7.032661438e-01F,
	7.033001781e-01F, 7.033342719e-01F, 7.033683658e-01F, 7.034024000e-01F, 7.034364939e-01F, 7.034705877e-01F, 7.035046220e-01F, 7.035387158e-01F,
	7.035727501e-01F, 7.036068439e-01F, 7.036408782e-01F, 7.036749721e-01F, 7.037090063e-01F, 7.037431002e-01F, 7.037771344e-01F, 7.038111687e-01F,
	7.038452625e-01F, 7.038792968e-01F, 7.039133310e-01F, 7.039473653e-01F, 7.039814591e-01F, 7.040154934e-01F, 7.040495276e-01F, 7.040835619e-01F,
	7.041175961e-01F, 7.041516304e-01F, 7.041856647e-01F, 7.042196989e-01F, 7.042537332e-01F, 7.042877674e-01F, 7.043218017e-01F, 7.043558359e-01F,
	7.043898702e-01F, 7.044239044e-01F, 7.044579387e-01F, 7.044919133e-01F, 7.045259476e-01F, 7.045599818e-01F, 7.045940161e-01F, 7.046279907e-01F,
	7.046620250e-01F, 7.046960592e-01F, 7.047300339e-01F, 7.047640681e-01F, 7.047980428e-01F, 7.048320770e-01F, 7.048660517e-01F, 7.049000859e-01F,
	7.049340606e-01F, 7.049680948e-01F, 7.050020695e-01F, 7.050361037e-01F, 7.050700784e-01F, 7.051040530e-01F, 7.051380277e-01F, 7.051720619e-01F,
	7.052060366e-01F, 7.052400112e-01F, 7.052739859e-01F, 7.053079605e-01F, 7.053419948e-01F, 7.053759694e-01F, 7.054099441e-01F, 7.054439187e-01F,
	7.054778934e-01F, 7.055118680e-01F, 7.055458426e-01F, 7.055798173e-01F, 7.056137919e-01F, 7.056477070e-01F, 7.056816816e-01F, 7.057156563e-01F,
	7.057496309e-01F, 7.057836056e-01F, 7.058175206e-01F, 7.058514953e-01F, 7.058854699e-01F, 7.059193850e-01F, 7.059533596e-01F, 7.059873343e-01F,
	7.060212493e-01F, 7.060552239e-01F, 7.060891390e-01F, 7.061231136e-01F, 7.061570287e-01F, 7.061910033e-01F, 7.062249184e-01F, 7.062588334e-01F,
	7.062928081e-01F, 7.063267231e-01F, 7.063606381e-01F, 7.063946128e-01F, 7.064285278e-01F, 7.064624429e-01F, 7.064963579e-01F, 7.065303326e-01F,
	7.065642476e-01F, 7.065981627e-01F, 7.066320777e-01F, 7.066659927e-01F, 7.066999078e-01F, 7.067338228e-01F, 7.067677379e-01F, 7.068016529e-01F,
	7.068355680e-01F, 7.068694830e-01F, 7.069033980e-01F, 7.069372535e-01F, 7.069711685e-01F, 7.070050836e-01F, 7.070389986e-01F, 7.070729136e-01F,
	7.071067691e-01F, 7.071406841e-01F, 7.071745992e-01F, 7.072084546e-01F, 7.072423697e-01F, 7.072762251e-01F, 7.073101401e-01F, 7.073439956e-01F,
	7.073779106e-01F, 7.074117661e-01F, 7.074456811e-01F, 7.074795365e-01F, 7.075134516e-01F, 7.075473070e-01F, 7.075811625e-01F, 7.076150179e-01F,
	7.076489329e-01F, 7.076827884e-01F, 7.077166438e-01F, 7.077504992e-01F, 7.077844143e-01F, 7.078182697e-01F, 7.078521252e-01F, 7.078859806e-01F,
	7.079198360e-01F, 7.079536915e-01F, 7.079875469e-01F, 7.080214024e-01F, 7.080552578e-01F, 7.080891132e-01F, 7.081229687e-01F, 7.081567645e-01F,
	7.081906199e-01F, 7.082244754e-01F, 7.082583308e-01F, 7.082921863e-01F, 7.083259821e-01F, 7.083598375e-01F, 7.083936930e-01F, 7.084274888e-01F,
	7.084613442e-01F, 7.084951997e-01F, 7.085289955e-01F, 7.085628510e-01F, 7.085966468e-01F, 7.086305022e-01F, 7.086642981e-01F, 7.086980939e-01F,
	7.087319493e-01F, 7.087657452e-01F, 7.087996006e-01F, 7.088333964e-01F, 7.088671923e-01F, 7.089009881e-01F, 7.089348435e-01F, 7.089686394e-01F,
	7.090024352e-01F, 7.090362310e-01F, 7.090700269e-01F, 7.091038227e-01F, 7.091376185e-01F, 7.091714144e-01F, 7.092052102e-01F, 7.092390060e-01F,
	7.092728019e-01F, 7.093065977e-01F, 7.093403935e-01F, 7.093741894e-01F, 7.094079852e-01F, 7.094417810e-01F, 7.094755769e-01F, 7.095093131e-01F,
	7.095431089e-01F, 7.095769048e-01F, 7.096106410e-01F, 7.096444368e-01F, 7.096782327e-01F, 7.097119689e-01F, 7.097457647e-01F, 7.097795010e-01F,
	7.098132968e-01F, 7.098470330e-01F, 7.098808289e-01F, 7.099145651e-01F, 7.099483609e-01F, 7.099820971e-01F, 7.100158930e-01F, 7.100496292e-01F,
	7.100833654e-01F, 7.101171017e-01F, 7.101508975e-01F, 7.101846337e-01F, 7.102183700e-01F, 7.102521062e-01F, 7.102858424e-01F, 7.103195786e-01F,
	7.103533745e-01F, 7.103871107e-01F, 7.104208469e-01F, 7.104545832e-01F, 7.104883194e-01F, 7.105220556e-01F, 7.105557323e-01F, 7.105894685e-01F,
	7.106232047e-01F, 7.106569409e-01F, 7.106906772e-01F, 7.107244134e-01F, 7.107580900e-01F, 7.107918262e-01F, 7.108255625e-01F, 7.108592391e-01F,
	7.108929753e-01F, 7.109267116e-01F, 7.109603882e-01F, 7.109941244e-01F, 7.110278010e-01F, 7.110615373e-01F, 7.110952139e-01F, 7.111289501e-01F,
	7.111626267e-01F, 7.111963630e-01F, 7.112300396e-01F, 7.112637162e-01F, 7.112974524e-01F, 7.113311291e-01F, 7.113648057e-01F, 7.113984823e-01F,
	7.114322186e-01F, 7.114658952e-01F, 7.114995718e-01F, 7.115332484e-01F, 7.115669250e-01F, 7.116006017e-01F, 7.116342783e-01F, 7.116679549e-01F,
	7.117016315e-01F, 7.117353082e-01F, 7.117689848e-01F, 7.118026614e-01F, 7.118363380e-01F, 7.118700147e-01F, 7.119036913e-01F, 7.119373083e-01F,
	7.119709849e-01F, 7.120046616e-01F, 7.120383382e-01F, 7.120719552e-01F, 7.121056318e-01F, 7.121393085e-01F, 7.121729255e-01F, 7.122066021e-01F,
	7.122402191e-01F, 7.122738957e-01F, 7.123075128e-01F, 7.123411894e-01F, 7.123748064e-01F, 7.124084830e-01F, 7.124421000e-01F, 7.124757171e-01F,
	7.125093937e-01F, 7.125430107e-01F, 7.125766277e-01F, 7.126102448e-01F, 7.126439214e-01F, 7.126775384e-01F, 7.127111554e-01F, 7.127447724e-01F,
	7.127783895e-01F, 7.128120065e-01F, 7.128456235e-01F, 7.128792405e-01F, 7.129128575e-01F, 7.129464746e-01F, 7.129800916e-01F, 7.130137086e-01F,
	7.130473256e-01F, 7.130809426e-01F, 7.131145597e-01F, 7.131481767e-01F, 7.131817341e-01F, 7.132153511e-01F, 7.132489681e-01F, 7.132825255e-01F,
	7.133161426e-01F, 7.133497596e-01F, 7.133833170e-01F, 7.134169340e-01F, 7.134505510e-01F, 7.134841084e-01F, 7.135177255e-01F, 7.135512829e-01F,
	7.135848403e-01F, 7.136184573e-01F, 7.136520147e-01F, 7.136856318e-01F, 7.137191892e-01F, 7.137527466e-01F, 7.137863636e-01F, 7.138199210e-01F,
	7.138534784e-01F, 7.138870358e-01F, 7.139205933e-01F, 7.139542103e-01F, 7.139877677e-01F, 7.140213251e-01F, 7.140548825e-01F, 7.140884399e-01F,
	7.141219974e-01F, 7.141555548e-01F, 7.141891122e-01F, 7.142226696e-01F, 7.142562270e-01F, 7.142897248e-01F, 7.143232822e-01F, 7.143568397e-01F,
	7.143903971e-01F, 7.144239545e-01F, 7.144574523e-01F, 7.144910097e-01F, 7.145245671e-01F, 7.145580649e-01F, 7.145916224e-01F, 7.146251798e-01F,
	7.146586776e-01F, 7.146922350e-01F, 7.147257328e-01F, 7.147592902e-01F, 7.147927880e-01F, 7.148263454e-01F, 7.148598433e-01F, 7.148933411e-01F,
	7.149268985e-01F, 7.149603963e-01F, 7.149938941e-01F, 7.150274515e-01F, 7.150609493e-01F, 7.150944471e-01F, 7.151279449e-01F, 7.151614428e-01F,
	7.151949406e-01F, 7.152284980e-01F, 7.152619958e-01F, 7.152954936e-01F, 7.153289914e-01F, 7.153624892e-01F, 7.153959870e-01F, 7.154294848e-01F,
	7.154629230e-01F, 7.154964209e-01F, 7.155299187e-01F, 7.155634165e-01F, 7.155969143e-01F, 7.156304121e-01F, 7.156638503e-01F, 7.156973481e-01F,
	7.157308459e-01F, 7.157642841e-01F, 7.157977819e-01F, 7.158312798e-01F, 7.158647180e-01F, 7.158982158e-01F, 7.159316540e-01F, 7.159651518e-01F,
	7.159985900e-01F, 7.160320878e-01F, 7.160655260e-01F, 7.160989642e-01F, 7.161324620e-01F, 7.161659002e-01F, 7.161993384e-01F, 7.162328362e-01F,
	7.162662745e-01F, 7.162997127e-01F, 7.163331509e-01F, 7.163665891e-01F, 7.164000273e-01F, 7.164335251e-01F, 7.164669633e-01F, 7.165004015e-01F,
	7.165338397e-01F, 7.165672779e-01F, 7.166007161e-01F, 7.166341543e-01F, 7.166675925e-01F, 7.167009711e-01F, 7.167344093e-01F, 7.167678475e-01F,
	7.168012857e-01F, 7.168347239e-01F, 7.168681026e-01F, 7.169015408e-01F, 7.169349790e-01F, 7.169683576e-01F, 7.170017958e-01F, 7.170352340e-01F,
	7.170686126e-01F, 7.171020508e-01F, 7.171354294e-01F, 7.171688676e-01F, 7.172022462e-01F, 7.172356844e-01F, 7.172690630e-01F, 7.173025012e-01F,
	7.173358798e-01F, 7.173692584e-01F, 7.174026966e-01F, 7.174360752e-01F, 7.174694538e-01F, 7.175028324e-01F, 7.175362110e-01F, 7.175696492e-01F,
	7.176030278e-01F, 7.176364064e-01F, 7.176697850e-01F, 7.177031636e-01F, 7.177365422e-01F, 7.177699208e-01F, 7.178032994e-01F, 7.178366780e-01F,
	7.178700566e-01F, 7.179034352e-01F, 7.179368138e-01F, 7.179701328e-01F, 7.180035114e-01F, 7.180368900e-01F, 7.180702686e-01F, 7.181035876e-01F,
	7.181369662e-01F, 7.181703448e-01F, 7.182036638e-01F, 7.182370424e-01F, 7.182704210e-01F, 7.183037400e-01F, 7.183371186e-01F, 7.183704376e-01F,
	7.184038162e-01F, 7.184371352e-01F, 7.184705138e-01F, 7.185038328e-01F, 7.185371518e-01F, 7.185705304e-01F, 7.186038494e-01F, 7.186371684e-01F,
	7.186704874e-01F, 7.187038660e-01F, 7.187371850e-01F, 7.187705040e-01F, 7.188038230e-01F, 7.188371420e-01F, 7.188704610e-01F, 7.189037800e-01F,
	7.189370990e-01F, 7.189704180e-01F, 7.190037370e-01F, 7.190370560e-01F, 7.190703750e-01F, 7.191036940e-01F, 7.191370130e-01F, 7.191703320e-01F,
	7.192036510e-01F, 7.192369103e-01F, 7.192702293e-01F, 7.193035483e-01F, 7.193368673e-01F, 7.193701267e-01F, 7.194034457e-01F, 7.194367051e-01F,
	7.194700241e-01F, 7.195033431e-01F, 7.195366025e-01F, 7.195699215e-01F, 7.196031809e-01F, 7.196364999e-01F, 7.196697593e-01F, 7.197030187e-01F,
	7.197363377e-01F, 7.197695971e-01F, 7.198028564e-01F, 7.198361754e-01F, 7.198694348e-01F, 7.199026942e-01F, 7.199359536e-01F, 7.199692130e-01F,
	7.200025320e-01F, 7.200357914e-01F, 7.200690508e-01F, 7.201023102e-01F, 7.201355696e-01F, 7.201688290e-01F, 7.202020884e-01F, 7.202353477e-01F,
	7.202686071e-01F, 7.203018665e-01F, 7.203350663e-01F, 7.203683257e-01F, 7.204015851e-01F, 7.204348445e-01F, 7.204681039e-01F, 7.205013037e-01F,
	7.205345631e-01F, 7.205678225e-01F, 7.206010222e-01F, 7.206342816e-01F, 7.206675410e-01F, 7.207007408e-01F, 7.207340002e-01F, 7.207672000e-01F,
	7.208004594e-01F, 7.208336592e-01F, 7.208668590e-01F, 7.209001184e-01F, 7.209333181e-01F, 7.209665775e-01F, 7.209997773e-01F, 7.210329771e-01F,
	7.210661769e-01F, 7.210994363e-01F, 7.211326361e-01F, 7.211658359e-01F, 7.211990356e-01F, 7.212322354e-01F, 7.212654352e-01F, 7.212986350e-01F,
	7.213318348e-01F, 7.213650346e-01F, 7.213982344e-01F, 7.214314342e-01F, 7.214646339e-01F, 7.214978337e-01F, 7.215310335e-01F, 7.215642333e-01F,
	7.215974331e-01F, 7.216305733e-01F, 7.216637731e-01F, 7.216969728e-01F, 7.217301726e-01F, 7.217633128e-01F, 7.217965126e-01F, 7.218296528e-01F,
	7.218628526e-01F, 7.218960524e-01F, 7.219291925e-01F, 7.219623923e-01F, 7.219955325e-01F, 7.220287323e-01F, 7.220618725e-01F, 7.220950127e-01F,
	7.221282125e-01F, 7.221613526e-01F, 7.221944928e-01F, 7.222276926e-01F, 7.222608328e-01F, 7.222939730e-01F, 7.223271132e-01F, 7.223602533e-01F,
	7.223934531e-01F, 7.224265933e-01F, 7.224597335e-01F, 7.224928737e-01F, 7.225260139e-01F, 7.225591540e-01F, 7.225922942e-01F, 7.226254344e-01F,
	7.226585746e-01F, 7.226917148e-01F, 7.227247953e-01F, 7.227579355e-01F, 7.227910757e-01F, 7.228242159e-01F, 7.228573561e-01F, 7.228904366e-01F,
	7.229235768e-01F, 7.229567170e-01F, 7.229897976e-01F, 7.230229378e-01F, 7.230560184e-01F, 7.230891585e-01F, 7.231222987e-01F, 7.231553793e-01F,
	7.231884599e-01F, 7.232216001e-01F, 7.232546806e-01F, 7.232878208e-01F, 7.233209014e-01F, 7.233539820e-01F, 7.233871222e-01F, 7.234202027e-01F,
	7.234532833e-01F, 7.234863639e-01F, 7.235195041e-01F, 7.235525846e-01F, 7.235856652e-01F, 7.236187458e-01F, 7.236518264e-01F, 7.236849070e-01F,
	7.237179875e-01F, 7.237510681e-01F, 7.237841487e-01F, 7.238172293e-01F, 7.238503098e-01F, 7.238833904e-01F, 7.239164710e-01F, 7.239495516e-01F,
	7.239825726e-01F, 7.240156531e-01F, 7.240487337e-01F, 7.240818143e-01F, 7.241148353e-01F, 7.241479158e-01F, 7.241809964e-01F, 7.242140174e-01F,
	7.242470980e-01F, 7.242801189e-01F, 7.243131995e-01F, 7.243462205e-01F, 7.243793011e-01F, 7.244123220e-01F, 7.244454026e-01F, 7.244784236e-01F,
	7.245114446e-01F, 7.245445251e-01F, 7.245775461e-01F, 7.246105671e-01F, 7.246435881e-01F, 7.246766686e-01F, 7.247096896e-01F, 7.247427106e-01F,
	7.247757316e-01F, 7.248087525e-01F, 7.248417735e-01F, 7.248747945e-01F, 7.249078155e-01F, 7.249408364e-01F, 7.249738574e-01F, 7.250068784e-01F,
	7.250398993e-01F, 7.250729203e-01F, 7.251059413e-01F, 7.251389623e-01F, 7.251719832e-01F, 7.252049446e-01F, 7.252379656e-01F, 7.252709866e-01F,
	7.253039479e-01F, 7.253369689e-01F, 7.253699899e-01F, 7.254029512e-01F, 7.254359722e-01F, 7.254689336e-01F, 7.255019546e-01F, 7.255349159e-01F,
	7.255679369e-01F, 7.256008983e-01F, 7.256339192e-01F, 7.256668806e-01F, 7.256998420e-01F, 7.257328629e-01F, 7.257658243e-01F, 7.257987857e-01F,
	7.258318067e-01F, 7.258647680e-01F, 7.258977294e-01F, 7.259306908e-01F, 7.259636521e-01F, 7.259966135e-01F, 7.260295749e-01F, 7.260625362e-01F,
	7.260954976e-01F, 7.261284590e-01F, 7.261614203e-01F, 7.261943817e-01F, 7.262273431e-01F, 7.262603045e-01F, 7.262932658e-01F, 7.263262272e-01F,
	7.263591290e-01F, 7.263920903e-01F, 7.264250517e-01F, 7.264580131e-01F, 7.264909148e-01F, 7.265238762e-01F, 7.265568376e-01F, 7.265897393e-01F,
	7.266227007e-01F, 7.266556025e-01F, 7.266885638e-01F, 7.267214656e-01F, 7.267544270e-01F, 7.267873287e-01F, 7.268202305e-01F, 7.268531919e-01F,
	7.268860936e-01F, 7.269190550e-01F, 7.269519567e-01F, 7.269848585e-01F, 7.270177603e-01F, 7.270506620e-01F, 7.270836234e-01F, 7.271165252e-01F,
	7.271494269e-01F, 7.271823287e-01F, 7.272152305e-01F, 7.272481322e-01F, 7.272810340e-01F, 7.273139358e-01F, 7.273468375e-01F, 7.273797393e-01F,
	7.274126410e-01F, 7.274455428e-01F, 7.274783850e-01F, 7.275112867e-01F, 7.275441885e-01F, 7.275770903e-01F, 7.276099920e-01F, 7.276428342e-01F,
	7.276757360e-01F, 7.277086377e-01F, 7.277414799e-01F, 7.277743816e-01F, 7.278072238e-01F, 7.278401256e-01F, 7.278729677e-01F, 7.279058695e-01F,
	7.279387116e-01F, 7.279716134e-01F, 7.280044556e-01F, 7.280372977e-01F, 7.280701995e-01F, 7.281030416e-01F, 7.281358838e-01F, 7.281687260e-01F,
	7.282016277e-01F, 7.282344699e-01F, 7.282673120e-01F, 7.283001542e-01F, 7.283329964e-01F, 7.283658385e-01F, 7.283986807e-01F, 7.284315228e-01F,
	7.284643650e-01F, 7.284972072e-01F, 7.285300493e-01F, 7.285628915e-01F, 7.285957336e-01F, 7.286285758e-01F, 7.286614180e-01F, 7.286942601e-01F,
	7.287270427e-01F, 7.287598848e-01F, 7.287927270e-01F, 7.288255095e-01F, 7.288583517e-01F, 7.288911939e-01F, 7.289239764e-01F, 7.289568186e-01F,
	7.289896011e-01F, 7.290224433e-01F, 7.290552258e-01F, 7.290880680e-01F, 7.291208506e-01F, 7.291536927e-01F, 7.291864753e-01F, 7.292192578e-01F,
	7.292521000e-01F, 7.292848825e-01F, 7.293176651e-01F, 7.293505073e-01F, 7.293832898e-01F, 7.294160724e-01F, 7.294488549e-01F, 7.294816375e-01F,
	7.295144200e-01F, 7.295472026e-01F, 7.295799851e-01F, 7.296127677e-01F, 7.296455503e-01F, 7.296783328e-01F, 7.297111154e-01F, 7.297438979e-01F,
	7.297766805e-01F, 7.298094630e-01F, 7.298422456e-01F, 7.298749685e-01F, 7.299077511e-01F, 7.299405336e-01F, 7.299733162e-01F, 7.300060391e-01F,
	7.300388217e-01F, 7.300716043e-01F, 7.301043272e-01F, 7.301371098e-01F, 7.301698327e-01F, 7.302026153e-01F, 7.302353382e-01F, 7.302681208e-01F,
	7.303008437e-01F, 7.303335667e-01F, 7.303663492e-01F, 7.303990722e-01F, 7.304317951e-01F, 7.304645777e-01F, 7.304973006e-01F, 7.305300236e-01F,
	7.305627465e-01F, 7.305955291e-01F, 7.306282520e-01F, 7.306609750e-01F, 7.306936979e-01F, 7.307264209e-01F, 7.307591438e-01F, 7.307918668e-01F,
	7.308245897e-01F, 7.308573127e-01F, 7.308900356e-01F, 7.309227586e-01F, 7.309554219e-01F, 7.309881449e-01F, 7.310208678e-01F, 7.310535908e-01F,
	7.310863137e-01F, 7.311189771e-01F, 7.311517000e-01F, 7.311844230e-01F, 7.312170863e-01F, 7.312498093e-01F, 7.312824726e-01F, 7.313151956e-01F,
	7.313479185e-01F, 7.313805819e-01F, 7.314132452e-01F, 7.314459682e-01F, 7.314786315e-01F, 7.315113544e-01F, 7.315440178e-01F, 7.315766811e-01F,
	7.316094041e-01F, 7.316420674e-01F, 7.316747308e-01F, 7.317073941e-01F, 7.317400575e-01F, 7.317727804e-01F, 7.318054438e-01F, 7.318381071e-01F,
	7.318707705e-01F, 7.319034338e-01F, 7.319360971e-01F, 7.319687605e-01F, 7.320014238e-01F, 7.320340872e-01F, 7.320667505e-01F, 7.320994139e-01F,
	7.321320176e-01F, 7.321646810e-01F, 7.321973443e-01F, 7.322300076e-01F, 7.322626114e-01F, 7.322952747e-01F, 7.323279381e-01F, 7.323605418e-01F,
	7.323932052e-01F, 7.324258685e-01F, 7.324584723e-01F, 7.324911356e-01F, 7.325237393e-01F, 7.325564027e-01F, 7.325890064e-01F, 7.326216698e-01F,
	7.326542735e-01F, 7.326868773e-01F, 7.327195406e-01F, 7.327521443e-01F, 7.327847481e-01F, 7.328173518e-01F, 7.328500152e-01F, 7.328826189e-01F,
	7.329152226e-01F, 7.329478264e-01F, 7.329804301e-01F, 7.330130339e-01F, 7.330456376e-01F, 7.330782413e-01F, 7.331108451e-01F, 7.331434488e-01F,
	7.331760526e-01F, 7.332086563e-01F, 7.332412601e-01F, 7.332738638e-01F, 7.333064675e-01F, 7.333390713e-01F, 7.333716154e-01F, 7.334042192e-01F,
	7.334368229e-01F, 7.334693670e-01F, 7.335019708e-01F, 7.335345745e-01F, 7.335671186e-01F, 7.335997224e-01F, 7.336322665e-01F, 7.336648703e-01F,
	7.336974144e-01F, 7.337300181e-01F, 7.337625623e-01F, 7.337951660e-01F, 7.338277102e-01F, 7.338602543e-01F, 7.338928580e-01F, 7.339254022e-01F,
	7.339579463e-01F, 7.339904904e-01F, 7.340230942e-01F, 7.340556383e-01F, 7.340881824e-01F, 7.341207266e-01F, 7.341532707e-01F, 7.341858149e-01F,
	7.342183590e-01F, 7.342509031e-01F, 7.342834473e-01F, 7.343159914e-01F, 7.343485355e-01F, 7.343810797e-01F, 7.344136238e-01F, 7.344461679e-01F,
	7.344786525e-01F, 7.345111966e-01F, 7.345437407e-01F, 7.345762849e-01F, 7.346087694e-01F, 7.346413136e-01F, 7.346738577e-01F, 7.347063422e-01F,
	7.347388864e-01F, 7.347713709e-01F, 7.348039150e-01F, 7.348363996e-01F, 7.348689437e-01F, 7.349014282e-01F, 7.349339724e-01F, 7.349664569e-01F,
	7.349989414e-01F, 7.350314856e-01F, 7.350639701e-01F, 7.350964546e-01F, 7.351289988e-01F, 7.351614833e-01F, 7.351939678e-01F, 7.352264524e-01F,
	7.352589369e-01F, 7.352914214e-01F, 7.353239059e-01F, 7.353563905e-01F, 7.353888750e-01F, 7.354213595e-01F, 7.354538441e-01F, 7.354863286e-01F,
	7.355188131e-01F, 7.355512977e-01F, 7.355837822e-01F, 7.356162667e-01F, 7.356486917e-01F, 7.356811762e-01F, 7.357136607e-01F, 7.357461452e-01F,
	7.357785702e-01F, 7.358110547e-01F, 7.358435392e-01F, 7.358759642e-01F, 7.359084487e-01F, 7.359408736e-01F, 7.359733582e-01F, 7.360057831e-01F,
	7.360382676e-01F, 7.360706925e-01F, 7.361031175e-01F, 7.361356020e-01F, 7.361680269e-01F, 7.362004519e-01F, 7.362329364e-01F, 7.362653613e-01F,
	7.362977862e-01F, 7.363302112e-01F, 7.363626957e-01F, 7.363951206e-01F, 7.364275455e-01F, 7.364599705e-01F, 7.364923954e-01F, 7.365248203e-01F,
	7.365572453e-01F, 7.365896702e-01F, 7.366220951e-01F, 7.366545200e-01F, 7.366869450e-01F, 7.367193103e-01F, 7.367517352e-01F, 7.367841601e-01F,
	7.368165851e-01F, 7.368489504e-01F, 7.368813753e-01F, 7.369138002e-01F, 7.369461656e-01F, 7.369785905e-01F, 7.370110154e-01F, 7.370433807e-01F,
	7.370758057e-01F, 7.371081710e-01F, 7.371405959e-01F, 7.371729612e-01F, 7.372053862e-01F, 7.372377515e-01F, 7.372701168e-01F, 7.373025417e-01F,
	7.373349071e-01F, 7.373672724e-01F, 7.373996973e-01F, 7.374320626e-01F, 7.374644279e-01F, 7.374967933e-01F, 7.375291586e-01F, 7.375615239e-01F,
	7.375938892e-01F, 7.376262546e-01F, 7.376586795e-01F, 7.376910448e-01F, 7.377233505e-01F, 7.377557158e-01F, 7.377880812e-01F, 7.378204465e-01F,
	7.378528118e-01F, 7.378851771e-01F, 7.379175425e-01F, 7.379498482e-01F, 7.379822135e-01F, 7.380145788e-01F, 7.380469441e-01F, 7.380792499e-01F,
	7.381116152e-01F, 7.381439209e-01F, 7.381762862e-01F, 7.382086515e-01F, 7.382409573e-01F, 7.382733226e-01F, 7.383056283e-01F, 7.383379340e-01F,
	7.383702993e-01F, 7.384026051e-01F, 7.384349108e-01F, 7.384672761e-01F, 7.384995818e-01F, 7.385318875e-01F, 7.385642529e-01F, 7.385965586e-01F,
	7.386288643e-01F, 7.386611700e-01F, 7.386934757e-01F, 7.387257814e-01F, 7.387580872e-01F, 7.387903929e-01F, 7.388226986e-01F, 7.388550043e-01F,
	7.388873100e-01F, 7.389196157e-01F, 7.389519215e-01F, 7.389842272e-01F, 7.390165329e-01F, 7.390488386e-01F, 7.390810847e-01F, 7.391133904e-01F,
	7.391456962e-01F, 7.391779423e-01F, 7.392102480e-01F, 7.392425537e-01F, 7.392747998e-01F, 7.393071055e-01F, 7.393393517e-01F, 7.393716574e-01F,
	7.394039035e-01F, 7.394362092e-01F, 7.394684553e-01F, 7.395007610e-01F, 7.395330071e-01F, 7.395652533e-01F, 7.395975590e-01F, 7.396298051e-01F,
	7.396620512e-01F, 7.396942973e-01F, 7.397266030e-01F, 7.397588491e-01F, 7.397910953e-01F, 7.398233414e-01F, 7.398555875e-01F, 7.398878336e-01F,
	7.399200797e-01F, 7.399523258e-01F, 7.399845719e-01F, 7.400168180e-01F, 7.400490642e-01F, 7.400813103e-01F, 7.401135564e-01F, 7.401458025e-01F,
	7.401779890e-01F, 7.402102351e-01F, 7.402424812e-01F, 7.402747273e-01F, 7.403069139e-01F, 7.403391600e-01F, 7.403714061e-01F, 7.404035926e-01F,
	7.404358387e-01F, 7.404680252e-01F, 7.405002713e-01F, 7.405324578e-01F, 7.405647039e-01F, 7.405968904e-01F, 7.406291366e-01F, 7.406613231e-01F,
	7.406935096e-01F, 7.407257557e-01F, 7.407579422e-01F, 7.407901287e-01F, 7.408223152e-01F, 7.408545613e-01F, 7.408867478e-01F, 7.409189343e-01F,
	7.409511209e-01F, 7.409833074e-01F, 7.410154939e-01F, 7.410476804e-01F, 7.410798669e-01F, 7.411120534e-01F, 7.411442399e-01F, 7.411764264e-01F,
	7.412086129e-01F, 7.412407994e-01F, 7.412729859e-01F, 7.413051128e-01F, 7.413372993e-01F, 7.413694859e-01F, 7.414016724e-01F, 7.414337993e-01F,
	7.414659858e-01F, 7.414981723e-01F, 7.415302992e-01F, 7.415624857e-01F, 7.415946126e-01F, 7.416267991e-01F, 7.416589260e-01F, 7.416911125e-01F,
	7.417232394e-01F, 7.417554259e-01F, 7.417875528e-01F, 7.418196797e-01F, 7.418518662e-01F, 7.418839931e-01F, 7.419161201e-01F, 7.419482470e-01F,
	7.419804335e-01F, 7.420125604e-01F, 7.420446873e-01F, 7.420768142e-01F, 7.421089411e-01F, 7.421410680e-01F, 7.421731949e-01F, 7.422053218e-01F,
	7.422374487e-01F, 7.422695756e-01F, 7.423017025e-01F, 7.423338294e-01F, 7.423659563e-01F, 7.423980832e-01F, 7.424301505e-01F, 7.424622774e-01F,
	7.424944043e-01F, 7.425265312e-01F, 7.425585985e-01F, 7.425907254e-01F, 7.426228523e-01F, 7.426549196e-01F, 7.426870465e-01F, 7.427191138e-01F,
	7.427512407e-01F, 7.427833080e-01F, 7.428154349e-01F, 7.428475022e-01F, 7.428796291e-01F, 7.429116964e-01F, 7.429437637e-01F, 7.429758906e-01F,
	7.430079579e-01F, 7.430400252e-01F, 7.430720925e-01F, 7.431042194e-01F, 7.431362867e-01F, 7.431683540e-01F, 7.432004213e-01F, 7.432324886e-01F,
	7.432645559e-01F, 7.432966232e-01F, 7.433286905e-01F, 7.433607578e-01F, 7.433928251e-01F, 7.434248924e-01F, 7.434569597e-01F, 7.434890270e-01F,
	7.435210943e-01F, 7.435531020e-01F, 7.435851693e-01F, 7.436172366e-01F, 7.436493039e-01F, 7.436813116e-01F, 7.437133789e-01F, 7.437454462e-01F,
	7.437774539e-01F, 7.438095212e-01F, 7.438415289e-01F, 7.438735962e-01F, 7.439056039e-01F, 7.439376712e-01F, 7.439696789e-01F, 7.440016866e-01F,
	7.440337539e-01F, 7.440657616e-01F, 7.440977693e-01F, 7.441298366e-01F, 7.441618443e-01F, 7.441938519e-01F, 7.442258596e-01F, 7.442579269e-01F,
	7.442899346e-01F, 7.443219423e-01F, 7.443539500e-01F, 7.443859577e-01F, 7.444179654e-01F, 7.444499731e-01F, 7.444819808e-01F, 7.445139885e-01F,
	7.445459962e-01F, 7.445780039e-01F, 7.446100116e-01F, 7.446419597e-01F, 7.446739674e-01F, 7.447059751e-01F, 7.447379827e-01F, 7.447699308e-01F,
	7.448019385e-01F, 7.448339462e-01F, 7.448658943e-01F, 7.448979020e-01F, 7.449298501e-01F, 7.449618578e-01F, 7.449938059e-01F, 7.450258136e-01F,
	7.450577617e-01F, 7.450897694e-01F, 7.451217175e-01F, 7.451537251e-01F, 7.451856732e-01F, 7.452176213e-01F, 7.452495694e-01F, 7.452815771e-01F,
	7.453135252e-01F, 7.453454733e-01F, 7.453774214e-01F, 7.454093695e-01F, 7.454413772e-01F, 7.454733253e-01F, 7.455052733e-01F, 7.455372214e-01F,
	7.455691695e-01F, 7.456011176e-01F, 7.456330657e-01F, 7.456649542e-01F, 7.456969023e-01F, 7.457288504e-01F, 7.457607985e-01F, 7.457927465e-01F,
	7.458246946e-01F, 7.458565831e-01F, 7.458885312e-01F, 7.459204793e-01F, 7.459523678e-01F, 7.459843159e-01F, 7.460162044e-01F, 7.460481524e-01F,
	7.460801005e-01F, 7.461119890e-01F, 7.461439371e-01F, 7.461758256e-01F, 7.462077141e-01F, 7.462396622e-01F, 7.462715507e-01F, 7.463034391e-01F,
	7.463353872e-01F, 7.463672757e-01F, 7.463991642e-01F, 7.464310527e-01F, 7.464630008e-01F, 7.464948893e-01F, 7.465267777e-01F, 7.465586662e-01F,
	7.465905547e-01F, 7.466224432e-01F, 7.466543317e-01F, 7.466862202e-01F, 7.467181087e-01F, 7.467499971e-01F, 7.467818856e-01F, 7.468137741e-01F,
	7.468456626e-01F, 7.468774915e-01F, 7.469093800e-01F, 7.469412684e-01F, 7.469731569e-01F, 7.470049858e-01F, 7.470368743e-01F, 7.470687628e-01F,
	7.471005917e-01F, 7.471324801e-01F, 7.471643090e-01F, 7.471961975e-01F, 7.472280264e-01F, 7.472599149e-01F, 7.472917438e-01F, 7.473236322e-01F,
	7.473554611e-01F, 7.473872900e-01F, 7.474191785e-01F, 7.474510074e-01F, 7.474828362e-01F, 7.475147247e-01F, 7.475465536e-01F, 7.475783825e-01F,
	7.476102114e-01F, 7.476420403e-01F, 7.476738691e-01F, 7.477056980e-01F, 7.477375269e-01F, 7.477693558e-01F, 7.478011847e-01F, 7.478330135e-01F,
	7.478648424e-01F, 7.478966713e-01F, 7.479285002e-01F, 7.479603291e-01F, 7.479921579e-01F, 7.480239272e-01F, 7.480557561e-01F, 7.480875850e-01F,
	7.481193542e-01F, 7.481511831e-01F, 7.481830120e-01F, 7.482147813e-01F, 7.482466102e-01F, 7.482783794e-01F, 7.483102083e-01F, 7.483419776e-01F,
	7.483738065e-01F, 7.484055758e-01F, 7.484374046e-01F, 7.484691739e-01F, 7.485009432e-01F, 7.485327721e-01F, 7.485645413e-01F, 7.485963106e-01F,
	7.486280799e-01F, 7.486599088e-01F, 7.486916780e-01F, 7.487234473e-01F, 7.487552166e-01F, 7.487869859e-01F, 7.488187551e-01F, 7.488505244e-01F,
	7.488822937e-01F, 7.489140630e-01F, 7.489458323e-01F, 7.489776015e-01F, 7.490093708e-01F, 7.490411401e-01F, 7.490729094e-01F, 7.491046190e-01F,
	7.491363883e-01F, 7.491681576e-01F, 7.491999269e-01F, 7.492316365e-01F, 7.492634058e-01F, 7.492951155e-01F, 7.493268847e-01F, 7.493586540e-01F,
	7.493903637e-01F, 7.494221330e-01F, 7.494538426e-01F, 7.494856119e-01F, 7.495173216e-01F, 7.495490313e-01F, 7.495808005e-01F, 7.496125102e-01F,
	7.496442199e-01F, 7.496759892e-01F, 7.497076988e-01F, 7.497394085e-01F, 7.497711182e-01F, 7.498028278e-01F, 7.498345971e-01F, 7.498663068e-01F,
	7.498980165e-01F, 7.499297261e-01F, 7.499614358e-01F, 7.499931455e-01F, 7.500248551e-01F, 7.500565648e-01F, 7.500882149e-01F, 7.501199245e-01F,
	7.501516342e-01F, 7.501833439e-01F, 7.502150536e-01F, 7.502467632e-01F, 7.502784133e-01F, 7.503101230e-01F, 7.503418326e-01F, 7.503734827e-01F,
	7.504051924e-01F, 7.504368424e-01F, 7.504685521e-01F, 7.505002022e-01F, 7.505319118e-01F, 7.505635619e-01F, 7.505952716e-01F, 7.506269217e-01F,
	7.506586313e-01F, 7.506902814e-01F, 7.507219315e-01F, 7.507536411e-01F, 7.507852912e-01F, 7.508169413e-01F, 7.508485913e-01F, 7.508802414e-01F,
	7.509119511e-01F, 7.509436011e-01F, 7.509752512e-01F, 7.510069013e-01F, 7.510385513e-01F, 7.510702014e-01F, 7.511018515e-01F, 7.511335015e-01F,
	7.511651516e-01F, 7.511968017e-01F, 7.512283921e-01F, 7.512600422e-01F, 7.512916923e-01F, 7.513233423e-01F, 7.513549924e-01F, 7.513865829e-01F,
	7.514182329e-01F, 7.514498830e-01F, 7.514814734e-01F, 7.515131235e-01F, 7.515447140e-01F, 7.515763640e-01F, 7.516079545e-01F, 7.516396046e-01F,
	7.516711950e-01F, 7.517028451e-01F, 7.517344356e-01F, 7.517660260e-01F, 7.517976761e-01F, 7.518292665e-01F, 7.518608570e-01F, 7.518925071e-01F,
	7.519240975e-01F, 7.519556880e-01F, 7.519872785e-01F, 7.520188689e-01F, 7.520504594e-01F, 7.520820498e-01F, 7.521136403e-01F, 7.521452904e-01F,
	7.521768212e-01F, 7.522084117e-01F, 7.522400022e-01F, 7.522715926e-01F, 7.523031831e-01F, 7.523347735e-01F, 7.523663640e-01F, 7.523979545e-01F,
	7.524294853e-01F, 7.524610758e-01F, 7.524926662e-01F, 7.525241971e-01F, 7.525557876e-01F, 7.525873780e-01F, 7.526189089e-01F, 7.526504993e-01F,
	7.526820302e-01F, 7.527136207e-01F, 7.527451515e-01F, 7.527767420e-01F, 7.528082728e-01F, 7.528398037e-01F, 7.528713942e-01F, 7.529029250e-01F,
	7.529344559e-01F, 7.529660463e-01F, 7.529975772e-01F, 7.530291080e-01F, 7.530606389e-01F, 7.530921698e-01F, 7.531237006e-01F, 7.531552911e-01F,
	7.531868219e-01F, 7.532183528e-01F, 7.532498837e-01F, 7.532814145e-01F, 7.533129454e-01F, 7.533444166e-01F, 7.533759475e-01F, 7.534074783e-01F,
	7.534390092e-01F, 7.534705400e-01F, 7.535020709e-01F, 7.535335422e-01F, 7.535650730e-01F, 7.535966039e-01F, 7.536280751e-01F, 7.536596060e-01F,
	7.536911368e-01F, 7.537226081e-01F, 7.537541389e-01F, 7.537856102e-01F, 7.538171411e-01F, 7.538486123e-01F, 7.538800836e-01F, 7.539116144e-01F,
	7.539430857e-01F, 7.539746165e-01F, 7.540060878e-01F, 7.540375590e-01F, 7.540690303e-01F, 7.541005611e-01F, 7.541320324e-01F, 7.541635036e-01F,
	7.541949749e-01F, 7.542264462e-01F, 7.542579174e-01F, 7.542893887e-01F, 7.543208599e-01F, 7.543523312e-01F, 7.543838024e-01F, 7.544152737e-01F,
	7.544467449e-01F, 7.544782162e-01F, 7.545096874e-01F, 7.545410991e-01F, 7.545725703e-01F, 7.546040416e-01F, 7.546355128e-01F, 7.546669245e-01F,
	7.546983957e-01F, 7.547298670e-01F, 7.547612786e-01F, 7.547927499e-01F, 7.548241615e-01F, 7.548556328e-01F, 7.548870444e-01F, 7.549185157e-01F,
	7.549499273e-01F, 7.549813986e-01F, 7.550128102e-01F, 7.550442219e-01F, 7.550756931e-01F, 7.551071048e-01F, 7.551385164e-01F, 7.551699281e-01F,
	7.552013993e-01F, 7.552328110e-01F, 7.552642226e-01F, 7.552956343e-01F, 7.553270459e-01F, 7.553584576e-01F, 7.553898692e-01F, 7.554212809e-01F,
	7.554526925e-01F, 7.554841042e-01F, 7.555155158e-01F, 7.555469275e-01F, 7.555783391e-01F, 7.556096911e-01F, 7.556411028e-01F, 7.556725144e-01F,
	7.557039261e-01F, 7.557352781e-01F, 7.557666898e-01F, 7.557981014e-01F, 7.558294535e-01F, 7.558608651e-01F, 7.558922768e-01F, 7.559236288e-01F,
	7.559550405e-01F, 7.559863925e-01F, 7.560177445e-01F, 7.560491562e-01F, 7.560805082e-01F, 7.561119199e-01F, 7.561432719e-01F, 7.561746240e-01F,
	7.562059760e-01F, 7.562373877e-01F, 7.562687397e-01F, 7.563000917e-01F, 7.563314438e-01F, 7.563627958e-01F, 7.563941479e-01F, 7.564254999e-01F,
	7.564568520e-01F, 7.564882040e-01F, 7.565195560e-01F, 7.565509081e-01F, 7.565822601e-01F, 7.566136122e-01F, 7.566449642e-01F, 7.566763163e-01F,
	7.567076683e-01F, 7.567389607e-01F, 7.567703128e-01F, 7.568016648e-01F, 7.568330169e-01F, 7.568643093e-01F, 7.568956614e-01F, 7.569269538e-01F,
	7.569583058e-01F, 7.569895983e-01F, 7.570209503e-01F, 7.570522428e-01F, 7.570835948e-01F, 7.571148872e-01F, 7.571462393e-01F, 7.571775317e-01F,
	7.572088242e-01F, 7.572401762e-01F, 7.572714686e-01F, 7.573027611e-01F, 7.573340535e-01F, 7.573654056e-01F, 7.573966980e-01F, 7.574279904e-01F,
	7.574592829e-01F, 7.574905753e-01F, 7.575218678e-01F, 7.575531602e-01F, 7.575844526e-01F, 7.576157451e-01F, 7.576470375e-01F, 7.576783299e-01F,
	7.577096224e-01F, 7.577408552e-01F, 7.577721477e-01F, 7.578034401e-01F, 7.578347325e-01F, 7.578660250e-01F, 7.578972578e-01F, 7.579285502e-01F,
	7.579597831e-01F, 7.579910755e-01F, 7.580223680e-01F, 7.580536008e-01F, 7.580848932e-01F, 7.581161261e-01F, 7.581474185e-01F, 7.581786513e-01F,
	7.582098842e-01F, 7.582411766e-01F, 7.582724094e-01F, 7.583036423e-01F, 7.583349347e-01F, 7.583661675e-01F, 7.583974004e-01F, 7.584286332e-01F,
	7.584599257e-01F, 7.584911585e-01F, 7.585223913e-01F, 7.585536242e-01F, 7.585848570e-01F, 7.586160898e-01F, 7.586473227e-01F, 7.586785555e-01F,
	7.587097883e-01F, 7.587410212e-01F, 7.587721944e-01F, 7.588034272e-01F, 7.588346601e-01F, 7.588658929e-01F, 7.588971257e-01F, 7.589282990e-01F,
	7.589595318e-01F, 7.589907646e-01F, 7.590219378e-01F, 7.590531707e-01F, 7.590844035e-01F, 7.591155767e-01F, 7.591468096e-01F, 7.591779828e-01F,
	7.592092156e-01F, 7.592403889e-01F, 7.592715621e-01F, 7.593027949e-01F, 7.593339682e-01F, 7.593651414e-01F, 7.593963742e-01F, 7.594275475e-01F,
	7.594587207e-01F, 7.594898939e-01F, 7.595211267e-01F, 7.595523000e-01F, 7.595834732e-01F, 7.596146464e-01F, 7.596458197e-01F, 7.596769929e-01F,
	7.597081661e-01F, 7.597393394e-01F, 7.597705126e-01F, 7.598016858e-01F, 7.598328590e-01F, 7.598639727e-01F, 7.598951459e-01F, 7.599263191e-01F,
	7.599574924e-01F, 7.599886060e-01F, 7.600197792e-01F, 7.600509524e-01F, 7.600820661e-01F, 7.601132393e-01F, 7.601444125e-01F, 7.601755261e-01F,
	7.602066994e-01F, 7.602378130e-01F, 7.602689862e-01F, 7.603000998e-01F, 7.603312135e-01F, 7.603623867e-01F, 7.603935003e-01F, 7.604246736e-01F,
	7.604557872e-01F, 7.604869008e-01F, 7.605180144e-01F, 7.605491281e-01F, 7.605803013e-01F, 7.606114149e-01F, 7.606425285e-01F, 7.606736422e-01F,
	7.607047558e-01F, 7.607358694e-01F, 7.607669830e-01F, 7.607980967e-01F, 7.608292103e-01F, 7.608603239e-01F, 7.608914375e-01F, 7.609225512e-01F,
	7.609536052e-01F, 7.609847188e-01F, 7.610158324e-01F, 7.610469460e-01F, 7.610780001e-01F, 7.611091137e-01F, 7.611402273e-01F, 7.611712813e-01F,
	7.612023950e-01F, 7.612334490e-01F, 7.612645626e-01F, 7.612956166e-01F, 7.613267303e-01F, 7.613577843e-01F, 7.613888979e-01F, 7.614199519e-01F,
	7.614510059e-01F, 7.614821196e-01F, 7.615131736e-01F, 7.615442276e-01F, 7.615753412e-01F, 7.616063952e-01F, 7.616374493e-01F, 7.616685033e-01F,
	7.616995573e-01F, 7.617306113e-01F, 7.617616653e-01F, 7.617927194e-01F, 7.618237734e-01F, 7.618548274e-01F, 7.618858814e-01F, 7.619169354e-01F,
	7.619479895e-01F, 7.619790435e-01F, 7.620100975e-01F, 7.620410919e-01F, 7.620721459e-01F, 7.621032000e-01F, 7.621342540e-01F, 7.621652484e-01F,
	7.621963024e-01F, 7.622273564e-01F, 7.622583508e-01F, 7.622894049e-01F, 7.623203993e-01F, 7.623514533e-01F, 7.623824477e-01F, 7.624135017e-01F,
	7.624444962e-01F, 7.624754906e-01F, 7.625065446e-01F, 7.625375390e-01F, 7.625685334e-01F, 7.625995874e-01F, 7.626305819e-01F, 7.626615763e-01F,
	7.626925707e-01F, 7.627235651e-01F, 7.627545595e-01F, 7.627856135e-01F, 7.628166080e-01F, 7.628476024e-01F, 7.628785968e-01F, 7.629095912e-01F,
	7.629405260e-01F, 7.629715204e-01F, 7.630025148e-01F, 7.630335093e-01F, 7.630645037e-01F, 7.630954981e-01F, 7.631264329e-01F, 7.631574273e-01F,
	7.631884217e-01F, 7.632194161e-01F, 7.632503510e-01F, 7.632813454e-01F, 7.633122802e-01F, 7.633432746e-01F, 7.633742690e-01F, 7.634052038e-01F,
	7.634361386e-01F, 7.634671330e-01F, 7.634980679e-01F, 7.635290623e-01F, 7.635599971e-01F, 7.635909319e-01F, 7.636219263e-01F, 7.636528611e-01F,
	7.636837959e-01F, 7.637147307e-01F, 7.637456656e-01F, 7.637766600e-01F, 7.638075948e-01F, 7.638385296e-01F, 7.638694644e-01F, 7.639003992e-01F,
	7.639313340e-01F, 7.639622688e-01F, 7.639932036e-01F, 7.640241385e-01F, 7.640550733e-01F, 7.640859485e-01F, 7.641168833e-01F, 7.641478181e-01F,
	7.641787529e-01F, 7.642096877e-01F, 7.642405629e-01F, 7.642714977e-01F, 7.643024325e-01F, 7.643333077e-01F, 7.643642426e-01F, 7.643951178e-01F,
	7.644260526e-01F, 7.644569278e-01F, 7.644878626e-01F, 7.645187378e-01F, 7.645496726e-01F, 7.645805478e-01F, 7.646114230e-01F, 7.646423578e-01F,
	7.646732330e-01F, 7.647041082e-01F, 7.647349834e-01F, 7.647659183e-01F, 7.647967935e-01F, 7.648276687e-01F, 7.648585439e-01F, 7.648894191e-01F,
	7.649202943e-01F, 7.649511695e-01F, 7.649820447e-01F, 7.650129199e-01F, 7.650437951e-01F, 7.650746703e-01F, 7.651055455e-01F, 7.651364207e-01F,
	7.651672363e-01F, 7.651981115e-01F, 7.652289867e-01F, 7.652598619e-01F, 7.652906775e-01F, 7.653215528e-01F, 7.653524280e-01F, 7.653832436e-01F,
	7.654141188e-01F, 7.654449344e-01F, 7.654758096e-01F, 7.655066848e-01F, 7.655375004e-01F, 7.655683160e-01F, 7.655991912e-01F, 7.656300068e-01F,
	7.656608820e-01F, 7.656916976e-01F, 7.657225132e-01F, 7.657533288e-01F, 7.657842040e-01F, 7.658150196e-01F, 7.658458352e-01F, 7.658766508e-01F,
	7.659074664e-01F, 7.659382820e-01F, 7.659690976e-01F, 7.659999132e-01F, 7.660307288e-01F, 7.660615444e-01F, 7.660923600e-01F, 7.661231756e-01F,
	7.661539912e-01F, 7.661848068e-01F, 7.662156224e-01F, 7.662463784e-01F, 7.662771940e-01F, 7.663080096e-01F, 7.663388252e-01F, 7.663695812e-01F,
	7.664003968e-01F, 7.664311528e-01F, 7.664619684e-01F, 7.664927840e-01F, 7.665235400e-01F, 7.665543556e-01F, 7.665851116e-01F, 7.666158676e-01F,
	7.666466832e-01F, 7.666774392e-01F, 7.667082548e-01F, 7.667390108e-01F, 7.667697668e-01F, 7.668005228e-01F, 7.668313384e-01F, 7.668620944e-01F,
	7.668928504e-01F, 7.669236064e-01F, 7.669543624e-01F, 7.669851184e-01F, 7.670158744e-01F, 7.670466304e-01F, 7.670773864e-01F, 7.671081424e-01F,
	7.671388984e-01F, 7.671696544e-01F, 7.672004104e-01F, 7.672311664e-01F, 7.672619224e-01F, 7.672926188e-01F, 7.673233747e-01F, 7.673541307e-01F,
	7.673848867e-01F, 7.674155831e-01F, 7.674463391e-01F, 7.674770355e-01F, 7.675077915e-01F, 7.675385475e-01F, 7.675692439e-01F, 7.675999999e-01F,
	7.676306963e-01F, 7.676613927e-01F, 7.676921487e-01F, 7.677228451e-01F, 7.677536011e-01F, 7.677842975e-01F, 7.678149939e-01F, 7.678456903e-01F,
	7.678764462e-01F, 7.679071426e-01F, 7.679378390e-01F, 7.679685354e-01F, 7.679992318e-01F, 7.680299282e-01F, 7.680606246e-01F, 7.680913210e-01F,
	7.681220174e-01F, 7.681527138e-01F, 7.681834102e-01F, 7.682141066e-01F, 7.682448030e-01F, 7.682754993e-01F, 7.683061361e-01F, 7.683368325e-01F,
	7.683675289e-01F, 7.683982253e-01F, 7.684288621e-01F, 7.684595585e-01F, 7.684902549e-01F, 7.685208917e-01F, 7.685515881e-01F, 7.685822248e-01F,
	7.686129212e-01F, 7.686435580e-01F, 7.686742544e-01F, 7.687048912e-01F, 7.687355876e-01F, 7.687662244e-01F, 7.687968612e-01F, 7.688274980e-01F,
	7.688581944e-01F, 7.688888311e-01F, 7.689194679e-01F, 7.689501047e-01F, 7.689808011e-01F, 7.690114379e-01F, 7.690420747e-01F, 7.690727115e-01F,
	7.691033483e-01F, 7.691339850e-01F, 7.691646218e-01F, 7.691952586e-01F, 7.692258954e-01F, 7.692565322e-01F, 7.692871094e-01F, 7.693177462e-01F,
	7.693483829e-01F, 7.693790197e-01F, 7.694095969e-01F, 7.694402337e-01F, 7.694708705e-01F, 7.695015073e-01F, 7.695320845e-01F, 7.695627213e-01F,
	7.695932984e-01F, 7.696239352e-01F, 7.696545124e-01F, 7.696851492e-01F, 7.697157264e-01F, 7.697463632e-01F, 7.697769403e-01F, 7.698075175e-01F,
	7.698381543e-01F, 7.698687315e-01F, 7.698993087e-01F, 7.699298859e-01F, 7.699605227e-01F, 7.699910998e-01F, 7.700216770e-01F, 7.700522542e-01F,
	7.700828314e-01F, 7.701134086e-01F, 7.701439857e-01F, 7.701745629e-01F, 7.702051401e-01F, 7.702357173e-01F, 7.702662945e-01F, 7.702968717e-01F,
	7.703274488e-01F, 7.703579664e-01F, 7.703885436e-01F, 7.704191208e-01F, 7.704496980e-01F, 7.704802155e-01F, 7.705107927e-01F, 7.705413699e-01F,
	7.705718875e-01F, 7.706024647e-01F, 7.706329823e-01F, 7.706635594e-01F, 7.706940770e-01F, 7.707246542e-01F, 7.707551718e-01F, 7.707857490e-01F,
	7.708162665e-01F, 7.708467841e-01F, 7.708773613e-01F, 7.709078789e-01F, 7.709383965e-01F, 7.709689140e-01F, 7.709994912e-01F, 7.710300088e-01F,
	7.710605264e-01F, 7.710910439e-01F, 7.711215615e-01F, 7.711520791e-01F, 7.711825967e-01F, 7.712131143e-01F, 7.712436318e-01F, 7.712741494e-01F,
	7.713046670e-01F, 7.713351846e-01F, 7.713657022e-01F, 7.713961601e-01F, 7.714266777e-01F, 7.714571953e-01F, 7.714877129e-01F, 7.715181708e-01F,
	7.715486884e-01F, 7.715792060e-01F, 7.716096640e-01F, 7.716401815e-01F, 7.716706395e-01F, 7.717011571e-01F, 7.717316151e-01F, 7.717621326e-01F,
	7.717925906e-01F, 7.718231082e-01F, 7.718535662e-01F, 7.718840241e-01F, 7.719145417e-01F, 7.719449997e-01F, 7.719754577e-01F, 7.720059156e-01F,
	7.720363736e-01F, 7.720668912e-01F, 7.720973492e-01F, 7.721278071e-01F, 7.721582651e-01F, 7.721887231e-01F, 7.722191811e-01F, 7.722496390e-01F,
	7.722800970e-01F, 7.723105550e-01F, 7.723410130e-01F, 7.723714113e-01F, 7.724018693e-01F, 7.724323273e-01F, 7.724627852e-01F, 7.724931836e-01F,
	7.725236416e-01F, 7.725540996e-01F, 7.725844979e-01F, 7.726149559e-01F, 7.726454139e-01F, 7.726758122e-01F, 7.727062702e-01F, 7.727366686e-01F,
	7.727671266e-01F, 7.727975249e-01F, 7.728279829e-01F, 7.728583813e-01F, 7.728887796e-01F, 7.729192376e-01F, 7.729496360e-01F, 7.729800344e-01F,
	7.730104327e-01F, 7.730408907e-01F, 7.730712891e-01F, 7.731016874e-01F, 7.731320858e-01F, 7.731624842e-01F, 7.731928825e-01F, 7.732232809e-01F,
	7.732536793e-01F, 7.732840776e-01F, 7.733144760e-01F, 7.733448744e-01F, 7.733752728e-01F, 7.734056711e-01F, 7.734360099e-01F, 7.734664083e-01F,
	7.734968066e-01F, 7.735272050e-01F, 7.735575438e-01F, 7.735879421e-01F, 7.736183405e-01F, 7.736486793e-01F, 7.736790776e-01F, 7.737094164e-01F,
	7.737398148e-01F, 7.737701535e-01F, 7.738005519e-01F, 7.738308907e-01F, 7.738612890e-01F, 7.738916278e-01F, 7.739219666e-01F, 7.739523649e-01F,
	7.739827037e-01F, 7.740130424e-01F, 7.740433812e-01F, 7.740737200e-01F, 7.741041183e-01F, 7.741344571e-01F, 7.741647959e-01F, 7.741951346e-01F,
	7.742254734e-01F, 7.742558122e-01F, 7.742861509e-01F, 7.743164897e-01F, 7.743468285e-01F, 7.743771672e-01F, 7.744074464e-01F, 7.744377851e-01F,
	7.744681239e-01F, 7.744984627e-01F, 7.745288014e-01F, 7.745590806e-01F, 7.745894194e-01F, 7.746197581e-01F, 7.746500373e-01F, 7.746803761e-01F,
	7.747106552e-01F, 7.747409940e-01F, 7.747712731e-01F, 7.748016119e-01F, 7.748318911e-01F, 7.748622298e-01F, 7.748925090e-01F, 7.749227881e-01F,
	7.749531269e-01F, 7.749834061e-01F, 7.750136852e-01F, 7.750439644e-01F, 7.750743032e-01F, 7.751045823e-01F, 7.751348615e-01F, 7.751651406e-01F,
	7.751954198e-01F, 7.752256989e-01F, 7.752559781e-01F, 7.752862573e-01F, 7.753165364e-01F, 7.753468156e-01F, 7.753770947e-01F, 7.754073739e-01F,
	7.754376531e-01F, 7.754678726e-01F, 7.754981518e-01F, 7.755284309e-01F, 7.755587101e-01F, 7.755889297e-01F, 7.756192088e-01F, 7.756494880e-01F,
	7.756797075e-01F, 7.757099867e-01F, 7.757402062e-01F, 7.757704854e-01F, 7.758007050e-01F, 7.758309841e-01F, 7.758612037e-01F, 7.758914828e-01F,
	7.759217024e-01F, 7.759519219e-01F, 7.759822011e-01F, 7.760124207e-01F, 7.760426402e-01F, 7.760728598e-01F, 7.761030793e-01F, 7.761333585e-01F,
	7.761635780e-01F, 7.761937976e-01F, 7.762240171e-01F, 7.762542367e-01F, 7.762844563e-01F, 7.763146758e-01F, 7.763448954e-01F, 7.763751149e-01F,
	7.764053345e-01F, 7.764354944e-01F, 7.764657140e-01F, 7.764959335e-01F, 7.765261531e-01F, 7.765563726e-01F, 7.765865326e-01F, 7.766167521e-01F,
	7.766469717e-01F, 7.766771317e-01F, 7.767073512e-01F, 7.767375112e-01F, 7.767677307e-01F, 7.767978907e-01F, 7.768281102e-01F, 7.768582702e-01F,
	7.768884897e-01F, 7.769186497e-01F, 7.769488096e-01F, 7.769790292e-01F, 7.770091891e-01F, 7.770393491e-01F, 7.770695090e-01F, 7.770997286e-01F,
	7.771298885e-01F, 7.771600485e-01F, 7.771902084e-01F, 7.772203684e-01F, 7.772505283e-01F, 7.772806883e-01F, 7.773108482e-01F, 7.773410082e-01F,
	7.773711681e-01F, 7.774013281e-01F, 7.774314880e-01F, 7.774616480e-01F, 7.774917483e-01F, 7.775219083e-01F, 7.775520682e-01F, 7.775822282e-01F,
	7.776123285e-01F, 7.776424885e-01F, 7.776725888e-01F, 7.777027488e-01F, 7.777329087e-01F, 7.777630091e-01F, 7.777931690e-01F, 7.778232694e-01F,
	7.778534293e-01F, 7.778835297e-01F, 7.779136300e-01F, 7.779437900e-01F, 7.779738903e-01F, 7.780039907e-01F, 7.780341506e-01F, 7.780642509e-01F,
	7.780943513e-01F, 7.781244516e-01F, 7.781545520e-01F, 7.781846523e-01F, 7.782148123e-01F, 7.782449126e-01F, 7.782750130e-01F, 7.783051133e-01F,
	7.783352137e-01F, 7.783652544e-01F, 7.783953547e-01F, 7.784254551e-01F, 7.784555554e-01F, 7.784856558e-01F, 7.785157561e-01F, 7.785457969e-01F,
	7.785758972e-01F, 7.786059976e-01F, 7.786360979e-01F, 7.786661386e-01F, 7.786962390e-01F, 7.787262797e-01F, 7.787563801e-01F, 7.787864208e-01F,
	7.788165212e-01F, 7.788465619e-01F, 7.788766623e-01F, 7.789067030e-01F, 7.789367437e-01F, 7.789668441e-01F, 7.789968848e-01F, 7.790269256e-01F,
	7.790570259e-01F, 7.790870667e-01F, 7.791171074e-01F, 7.791471481e-01F, 7.791771889e-01F, 7.792072296e-01F, 7.792372704e-01F, 7.792673111e-01F,
	7.792973518e-01F, 7.793273926e-01F, 7.793574333e-01F, 7.793874741e-01F, 7.794175148e-01F, 7.794475555e-01F, 7.794775963e-01F, 7.795076370e-01F,
	7.795376182e-01F, 7.795676589e-01F, 7.795976996e-01F, 7.796276808e-01F, 7.796577215e-01F, 7.796877623e-01F, 7.797177434e-01F, 7.797477841e-01F,
	7.797777653e-01F, 7.798078060e-01F, 7.798377872e-01F, 7.798678279e-01F, 7.798978090e-01F, 7.799278498e-01F, 7.799578309e-01F, 7.799878120e-01F,
	7.800177932e-01F, 7.800478339e-01F, 7.800778151e-01F, 7.801077962e-01F, 7.801377773e-01F, 7.801677585e-01F, 7.801977396e-01F, 7.802277803e-01F,
	7.802577615e-01F, 7.802877426e-01F, 7.803177238e-01F, 7.803477049e-01F, 7.803776264e-01F, 7.804076076e-01F, 7.804375887e-01F, 7.804675698e-01F,
	7.804975510e-01F, 7.805275321e-01F, 7.805574536e-01F, 7.805874348e-01F, 7.806174159e-01F, 7.806473374e-01F, 7.806773186e-01F, 7.807072997e-01F,
	7.807372212e-01F, 7.807672024e-01F, 7.807971239e-01F, 7.808271050e-01F, 7.808570266e-01F, 7.808869481e-01F, 7.809169292e-01F, 7.809468508e-01F,
	7.809767723e-01F, 7.810067534e-01F, 7.810366750e-01F, 7.810665965e-01F, 7.810965180e-01F, 7.811264992e-01F, 7.811564207e-01F, 7.811863422e-01F,
	7.812162638e-01F, 7.812461853e-01F, 7.812761068e-01F, 7.813060284e-01F, 7.813359499e-01F, 7.813658714e-01F, 7.813957930e-01F, 7.814257145e-01F,
	7.814555764e-01F, 7.814854980e-01F, 7.815154195e-01F, 7.815453410e-01F, 7.815752029e-01F, 7.816051245e-01F, 7.816350460e-01F, 7.816649079e-01F,
	7.816948295e-01F, 7.817247510e-01F, 7.817546129e-01F, 7.817845345e-01F, 7.818143964e-01F, 7.818443179e-01F, 7.818741798e-01F, 7.819040418e-01F,
	7.819339633e-01F, 7.819638252e-01F, 7.819936872e-01F, 7.820236087e-01F, 7.820534706e-01F, 7.820833325e-01F, 7.821131945e-01F, 7.821430564e-01F,
	7.821729183e-01F, 7.822028399e-01F, 7.822327018e-01F, 7.822625637e-01F, 7.822924256e-01F, 7.823222876e-01F, 7.823520899e-01F, 7.823819518e-01F,
	7.824118137e-01F, 7.824416757e-01F, 7.824715376e-01F, 7.825013995e-01F, 7.825312018e-01F, 7.825610638e-01F, 7.825909257e-01F, 7.826207280e-01F,
	7.826505899e-01F, 7.826804519e-01F, 7.827102542e-01F, 7.827401161e-01F, 7.827699184e-01F, 7.827997804e-01F, 7.828295827e-01F, 7.828594446e-01F,
	7.828892469e-01F, 7.829190493e-01F, 7.829489112e-01F, 7.829787135e-01F, 7.830085158e-01F, 7.830383778e-01F, 7.830681801e-01F, 7.830979824e-01F,
	7.831277847e-01F, 7.831575871e-01F, 7.831873894e-01F, 7.832171917e-01F, 7.832469940e-01F, 7.832767963e-01F, 7.833065987e-01F, 7.833364010e-01F,
	7.833662033e-01F, 7.833960056e-01F, 7.834258080e-01F, 7.834556103e-01F, 7.834853530e-01F, 7.835151553e-01F, 7.835449576e-01F, 7.835747600e-01F,
	7.836045027e-01F, 7.836343050e-01F, 7.836641073e-01F, 7.836938500e-01F, 7.837236524e-01F, 7.837533951e-01F, 7.837831974e-01F, 7.838129401e-01F,
	7.838426828e-01F, 7.838724852e-01F, 7.839022279e-01F, 7.839320302e-01F, 7.839617729e-01F, 7.839915156e-01F, 7.840212584e-01F, 7.840510607e-01F,
	7.840808034e-01F, 7.841105461e-01F, 7.841402888e-01F, 7.841700315e-01F, 7.841997743e-01F, 7.842295170e-01F, 7.842592597e-01F, 7.842890024e-01F,
	7.843187451e-01F, 7.843484879e-01F, 7.843782306e-01F, 7.844079733e-01F, 7.844377160e-01F, 7.844673991e-01F, 7.844971418e-01F, 7.845268846e-01F,
	7.845565677e-01F, 7.845863104e-01F, 7.846160531e-01F, 7.846457362e-01F, 7.846754789e-01F, 7.847052217e-01F, 7.847349048e-01F, 7.847646475e-01F,
	7.847943306e-01F, 7.848240137e-01F, 7.848537564e-01F, 7.848834395e-01F, 7.849131227e-01F, 7.849428654e-01F, 7.849725485e-01F, 7.850022316e-01F,
	7.850319147e-01F, 7.850616574e-01F, 7.850913405e-01F, 7.851210237e-01F, 7.851507068e-01F, 7.851803899e-01F, 7.852100730e-01F, 7.852397561e-01F,
	7.852694392e-01F, 7.852991223e-01F, 7.853288054e-01F, 7.853584886e-01F, 7.853881717e-01F, 7.854177952e-01F, 7.854474783e-01F, 7.854771614e-01F,
	7.855068445e-01F, 7.855364680e-01F, 7.855661511e-01F, 7.855958343e-01F, 7.856254578e-01F, 7.856551409e-01F, 7.856847644e-01F, 7.857144475e-01F,
	7.857440710e-01F, 7.857737541e-01F, 7.858033776e-01F, 7.858330607e-01F, 7.858626842e-01F, 7.858923078e-01F, 7.859219909e-01F, 7.859516144e-01F,
	7.859812379e-01F, 7.860108614e-01F, 7.860405445e-01F, 7.860701680e-01F, 7.860997915e-01F, 7.861294150e-01F, 7.861590385e-01F, 7.861886621e-01F,
	7.862182856e-01F, 7.862479091e-01F, 7.862775326e-01F, 7.863071561e-01F, 7.863367796e-01F, 7.863664031e-01F, 7.863959670e-01F, 7.864255905e-01F,
	7.864552140e-01F, 7.864848375e-01F, 7.865144014e-01F, 7.865440249e-01F, 7.865736485e-01F, 7.866032124e-01F, 7.866328359e-01F, 7.866623998e-01F,
	7.866920233e-01F, 7.867215872e-01F, 7.867512107e-01F, 7.867807746e-01F, 7.868103981e-01F, 7.868399620e-01F, 7.868695259e-01F, 7.868991494e-01F,
	7.869287133e-01F, 7.869582772e-01F, 7.869878411e-01F, 7.870174646e-01F, 7.870470285e-01F, 7.870765924e-01F, 7.871061563e-01F, 7.871357203e-01F,
	7.871652842e-01F, 7.871948481e-01F, 7.872244120e-01F, 7.872539759e-01F, 7.872835398e-01F, 7.873131037e-01F, 7.873426676e-01F, 7.873721719e-01F,
	7.874017358e-01F, 7.874312997e-01F, 7.874608636e-01F, 7.874903679e-01F, 7.875199318e-01F, 7.875494957e-01F, 7.875790000e-01F, 7.876085639e-01F,
	7.876380682e-01F, 7.876676321e-01F, 7.876971364e-01F, 7.877267003e-01F, 7.877562046e-01F, 7.877857685e-01F, 7.878152728e-01F, 7.878447771e-01F,
	7.878743410e-01F, 7.879038453e-01F, 7.879333496e-01F, 7.879628539e-01F, 7.879924178e-01F, 7.880219221e-01F, 7.880514264e-01F, 7.880809307e-01F,
	7.881104350e-01F, 7.881399393e-01F, 7.881694436e-01F, 7.881989479e-01F, 7.882284522e-01F, 7.882579565e-01F, 7.882874608e-01F, 7.883169055e-01F,
	7.883464098e-01F, 7.883759141e-01F, 7.884054184e-01F, 7.884349227e-01F, 7.884643674e-01F, 7.884938717e-01F, 7.885233760e-01F, 7.885528207e-01F,
	7.885823250e-01F, 7.886117697e-01F, 7.886412740e-01F, 7.886707187e-01F, 7.887002230e-01F, 7.887296677e-01F, 7.887591720e-01F, 7.887886167e-01F,
	7.888180614e-01F, 7.888475060e-01F, 7.888770103e-01F, 7.889064550e-01F, 7.889358997e-01F, 7.889653444e-01F, 7.889948487e-01F, 7.890242934e-01F,
	7.890537381e-01F, 7.890831828e-01F, 7.891126275e-01F, 7.891420722e-01F, 7.891715169e-01F, 7.892009616e-01F, 7.892304063e-01F, 7.892597914e-01F,
	7.892892361e-01F, 7.893186808e-01F, 7.893481255e-01F, 7.893775702e-01F, 7.894069552e-01F, 7.894363999e-01F, 7.894658446e-01F, 7.894952297e-01F,
	7.895246744e-01F, 7.895540595e-01F, 7.895835042e-01F, 7.896129489e-01F, 7.896423340e-01F, 7.896717191e-01F, 7.897011638e-01F, 7.897305489e-01F,
	7.897599936e-01F, 7.897893786e-01F, 7.898187637e-01F, 7.898481488e-01F, 7.898775935e-01F, 7.899069786e-01F, 7.899363637e-01F, 7.899657488e-01F,
	7.899951339e-01F, 7.900245190e-01F, 7.900539041e-01F, 7.900832891e-01F, 7.901126742e-01F, 7.901420593e-01F, 7.901714444e-01F, 7.902008295e-01F,
	7.902302146e-01F, 7.902595997e-01F, 7.902889848e-01F, 7.903183699e-01F, 7.903476954e-01F, 7.903770804e-01F, 7.904064655e-01F, 7.904357910e-01F,
	7.904651761e-01F, 7.904945612e-01F, 7.905238867e-01F, 7.905532718e-01F, 7.905825973e-01F, 7.906119823e-01F, 7.906413078e-01F, 7.906706333e-01F,
	7.907000184e-01F, 7.907293439e-01F, 7.907586694e-01F, 7.907880545e-01F, 7.908173800e-01F, 7.908467054e-01F, 7.908760309e-01F, 7.909054160e-01F,
	7.909347415e-01F, 7.909640670e-01F, 7.909933925e-01F, 7.910227180e-01F, 7.910520434e-01F, 7.910813689e-01F, 7.911106944e-01F, 7.911400199e-01F,
	7.911693454e-01F, 7.911986709e-01F, 7.912279367e-01F, 7.912572622e-01F, 7.912865877e-01F, 7.913159132e-01F, 7.913451791e-01F, 7.913745046e-01F,
	7.914038301e-01F, 7.914330959e-01F, 7.914624214e-01F, 7.914917469e-01F, 7.915210128e-01F, 7.915503383e-01F, 7.915796041e-01F, 7.916088700e-01F,
	7.916381955e-01F, 7.916674614e-01F, 7.916967869e-01F, 7.917260528e-01F, 7.917553186e-01F, 7.917845845e-01F, 7.918139100e-01F, 7.918431759e-01F,
	7.918724418e-01F, 7.919017076e-01F, 7.919309735e-01F, 7.919602394e-01F, 7.919895053e-01F, 7.920187712e-01F, 7.920480371e-01F, 7.920773029e-01F,
	7.921065688e-01F, 7.921358347e-01F, 7.921651006e-01F, 7.921943665e-01F, 7.922235727e-01F, 7.922528386e-01F, 7.922821045e-01F, 7.923113704e-01F,
	7.923405766e-01F, 7.923698425e-01F, 7.923991084e-01F, 7.924283147e-01F, 7.924575806e-01F, 7.924867868e-01F, 7.925160527e-01F, 7.925452590e-01F,
	7.925745249e-01F, 7.926037312e-01F, 7.926329374e-01F, 7.926622033e-01F, 7.926914096e-01F, 7.927206159e-01F, 7.927498817e-01F, 7.927790880e-01F,
	7.928082943e-01F, 7.928375006e-01F, 7.928667068e-01F, 7.928959131e-01F, 7.929251194e-01F, 7.929543257e-01F, 7.929835320e-01F, 7.930127382e-01F,
	7.930419445e-01F, 7.930711508e-01F, 7.931003571e-01F, 7.931295633e-01F, 7.931587696e-01F, 7.931879163e-01F, 7.932171226e-01F, 7.932463288e-01F,
	7.932755351e-01F, 7.933046818e-01F, 7.933338881e-01F, 7.933630943e-01F, 7.933922410e-01F, 7.934214473e-01F, 7.934505939e-01F, 7.934798002e-01F,
	7.935089469e-01F, 7.935381532e-01F, 7.935672998e-01F, 7.935964465e-01F, 7.936256528e-01F, 7.936547995e-01F, 7.936839461e-01F, 7.937130928e-01F,
	7.937422991e-01F, 7.937714458e-01F, 7.938005924e-01F, 7.938297391e-01F, 7.938588858e-01F, 7.938880324e-01F, 7.939171791e-01F, 7.939463258e-01F,
	7.939754725e-01F, 7.940046191e-01F, 7.940337658e-01F, 7.940629125e-01F, 7.940920591e-01F, 7.941211462e-01F, 7.941502929e-01F, 7.941794395e-01F,
	7.942085862e-01F, 7.942376733e-01F, 7.942668200e-01F, 7.942959666e-01F, 7.943250537e-01F, 7.943542004e-01F, 7.943832874e-01F, 7.944124341e-01F,
	7.944415212e-01F, 7.944706678e-01F, 7.944997549e-01F, 7.945288420e-01F, 7.945579886e-01F, 7.945870757e-01F, 7.946161628e-01F, 7.946453094e-01F,
	7.946743965e-01F, 7.947034836e-01F, 7.947325706e-01F, 7.947616577e-01F, 7.947907448e-01F, 7.948198915e-01F, 7.948489785e-01F, 7.948780656e-01F,
	7.949071527e-01F, 7.949362397e-01F, 7.949652672e-01F, 7.949943542e-01F, 7.950234413e-01F, 7.950525284e-01F, 7.950816154e-01F, 7.951107025e-01F,
	7.951397300e-01F, 7.951688170e-01F, 7.951979041e-01F, 7.952269316e-01F, 7.952560186e-01F, 7.952850461e-01F, 7.953141332e-01F, 7.953432202e-01F,
	7.953722477e-01F, 7.954012752e-01F, 7.954303622e-01F, 7.954593897e-01F, 7.954884768e-01F, 7.955175042e-01F, 7.955465317e-01F, 7.955756187e-01F,
	7.956046462e-01F, 7.956336737e-01F, 7.956627011e-01F, 7.956917286e-01F, 7.957207561e-01F, 7.957498431e-01F, 7.957788706e-01F, 7.958078980e-01F,
	7.958369255e-01F, 7.958659530e-01F, 7.958949804e-01F, 7.959239483e-01F, 7.959529757e-01F, 7.959820032e-01F, 7.960110307e-01F, 7.960400581e-01F,
	7.960690856e-01F, 7.960980535e-01F, 7.961270809e-01F, 7.961561084e-01F, 7.961850762e-01F, 7.962141037e-01F, 7.962430716e-01F, 7.962720990e-01F,
	7.963010669e-01F, 7.963300943e-01F, 7.963590622e-01F, 7.963880897e-01F, 7.964170575e-01F, 7.964460254e-01F, 7.964750528e-01F, 7.965040207e-01F,
	7.965329885e-01F, 7.965620160e-01F, 7.965909839e-01F, 7.966199517e-01F, 7.966489196e-01F, 7.966778874e-01F, 7.967068553e-01F, 7.967358232e-01F,
	7.967647910e-01F, 7.967937589e-01F, 7.968227267e-01F, 7.968516946e-01F, 7.968806624e-01F, 7.969096303e-01F, 7.969385982e-01F, 7.969675660e-01F,
	7.969964743e-01F, 7.970254421e-01F, 7.970544100e-01F, 7.970833182e-01F, 7.971122861e-01F, 7.971412539e-01F, 7.971701622e-01F, 7.971991301e-01F,
	7.972280383e-01F, 7.972570062e-01F, 7.972859144e-01F, 7.973148823e-01F, 7.973437905e-01F, 7.973727584e-01F, 7.974016666e-01F, 7.974305749e-01F,
	7.974594831e-01F, 7.974884510e-01F, 7.975173593e-01F, 7.975462675e-01F, 7.975751758e-01F, 7.976040840e-01F, 7.976329923e-01F, 7.976619601e-01F,
	7.976908684e-01F, 7.977197766e-01F, 7.977486849e-01F, 7.977775335e-01F, 7.978064418e-01F, 7.978353500e-01F, 7.978642583e-01F, 7.978931665e-01F,
	7.979220748e-01F, 7.979509234e-01F, 7.979798317e-01F, 7.980087399e-01F, 7.980376482e-01F, 7.980664968e-01F, 7.980954051e-01F, 7.981242537e-01F,
	7.981531620e-01F, 7.981820107e-01F, 7.982109189e-01F, 7.982397676e-01F, 7.982686758e-01F, 7.982975245e-01F, 7.983263731e-01F, 7.983552814e-01F,
	7.983841300e-01F, 7.984129786e-01F, 7.984418869e-01F, 7.984707355e-01F, 7.984995842e-01F, 7.985284328e-01F, 7.985572815e-01F, 7.985861301e-01F,
	7.986149788e-01F, 7.986438274e-01F, 7.986726761e-01F, 7.987015247e-01F, 7.987303734e-01F, 7.987592220e-01F, 7.987880707e-01F, 7.988169193e-01F,
	7.988457680e-01F, 7.988745570e-01F, 7.989034057e-01F, 7.989322543e-01F, 7.989610434e-01F, 7.989898920e-01F, 7.990187407e-01F, 7.990475297e-01F,
	7.990763783e-01F, 7.991051674e-01F, 7.991340160e-01F, 7.991628051e-01F, 7.991916537e-01F, 7.992204428e-01F, 7.992492318e-01F, 7.992780805e-01F,
	7.993068695e-01F, 7.993356586e-01F, 7.993645072e-01F, 7.993932962e-01F, 7.994220853e-01F, 7.994508743e-01F, 7.994796634e-01F, 7.995084524e-01F,
	7.995372415e-01F, 7.995660305e-01F, 7.995948195e-01F, 7.996236086e-01F, 7.996523976e-01F, 7.996811867e-01F, 7.997099757e-01F, 7.997387648e-01F,
	7.997675538e-01F, 7.997963428e-01F, 7.998250723e-01F, 7.998538613e-01F, 7.998826504e-01F, 7.999113798e-01F, 7.999401689e-01F, 7.999689579e-01F,
	7.999976873e-01F, 8.000264764e-01F, 8.000552058e-01F, 8.000839949e-01F, 8.001127243e-01F, 8.001415133e-01F, 8.001702428e-01F, 8.001989722e-01F,
	8.002277613e-01F, 8.002564907e-01F, 8.002852201e-01F, 8.003139496e-01F, 8.003427386e-01F, 8.003714681e-01F, 8.004001975e-01F, 8.004289269e-01F,
	8.004576564e-01F, 8.004863858e-01F, 8.005151153e-01F, 8.005438447e-01F, 8.005725741e-01F, 8.006013036e-01F, 8.006300330e-01F, 8.006587625e-01F,
	8.006874919e-01F, 8.007161617e-01F, 8.007448912e-01F, 8.007736206e-01F, 8.008023500e-01F, 8.008310199e-01F, 8.008597493e-01F, 8.008884192e-01F,
	8.009171486e-01F, 8.009458780e-01F, 8.009745479e-01F, 8.010032773e-01F, 8.010319471e-01F, 8.010606170e-01F, 8.010893464e-01F, 8.011180162e-01F,
	8.011467457e-01F, 8.011754155e-01F, 8.012040854e-01F, 8.012327552e-01F, 8.012614846e-01F, 8.012901545e-01F, 8.013188243e-01F, 8.013474941e-01F,
	8.013761640e-01F, 8.014048338e-01F, 8.014335036e-01F, 8.014621735e-01F, 8.014908433e-01F, 8.015195131e-01F, 8.015481830e-01F, 8.015768528e-01F,
	8.016055226e-01F, 8.016341925e-01F, 8.016628027e-01F, 8.016914725e-01F, 8.017201424e-01F, 8.017487526e-01F, 8.017774224e-01F, 8.018060923e-01F,
	8.018347025e-01F, 8.018633723e-01F, 8.018919826e-01F, 8.019206524e-01F, 8.019492626e-01F, 8.019779325e-01F, 8.020065427e-01F, 8.020352125e-01F,
	8.020638227e-01F, 8.020924330e-01F, 8.021210432e-01F, 8.021497130e-01F, 8.021783233e-01F, 8.022069335e-01F, 8.022355437e-01F, 8.022641540e-01F,
	8.022928238e-01F, 8.023214340e-01F, 8.023500443e-01F, 8.023786545e-01F, 8.024072647e-01F, 8.024358749e-01F, 8.024644256e-01F, 8.024930358e-01F,
	8.025216460e-01F, 8.025502563e-01F, 8.025788665e-01F, 8.026074767e-01F, 8.026360273e-01F, 8.026646376e-01F, 8.026932478e-01F, 8.027217984e-01F,
	8.027504086e-01F, 8.027789593e-01F, 8.028075695e-01F, 8.028361201e-01F, 8.028647304e-01F, 8.028932810e-01F, 8.029218912e-01F, 8.029504418e-01F,
	8.029790521e-01F, 8.030076027e-01F, 8.030361533e-01F, 8.030647039e-01F, 8.030933142e-01F, 8.031218648e-01F, 8.031504154e-01F, 8.031789660e-01F,
	8.032075167e-01F, 8.032360673e-01F, 8.032646179e-01F, 8.032931685e-01F, 8.033217192e-01F, 8.033502698e-01F, 8.033788204e-01F, 8.034073710e-01F,
	8.034359217e-01F, 8.034644723e-01F, 8.034930229e-01F, 8.035215139e-01F, 8.035500646e-01F, 8.035786152e-01F, 8.036071062e-01F, 8.036356568e-01F,
	8.036642075e-01F, 8.036926985e-01F, 8.037212491e-01F, 8.037497401e-01F, 8.037782907e-01F, 8.038067818e-01F, 8.038353324e-01F, 8.038638234e-01F,
	8.038923144e-01F, 8.039208651e-01F, 8.039493561e-01F, 8.039778471e-01F, 8.040063977e-01F, 8.040348887e-01F, 8.040633798e-01F, 8.040918708e-01F,
	8.041203618e-01F, 8.041488528e-01F, 8.041773438e-01F, 8.042058349e-01F, 8.042343259e-01F, 8.042628169e-01F, 8.042913079e-01F, 8.043197989e-01F,
	8.043482900e-01F, 8.043767810e-01F, 8.044052720e-01F, 8.044337034e-01F, 8.044621944e-01F, 8.044906855e-01F, 8.045191765e-01F, 8.045476079e-01F,
	8.045760989e-01F, 8.046045303e-01F, 8.046330214e-01F, 8.046615124e-01F, 8.046899438e-01F, 8.047183752e-01F, 8.047468662e-01F, 8.047752976e-01F,
	8.048037887e-01F, 8.048322201e-01F, 8.048606515e-01F, 8.048891425e-01F, 8.049175739e-01F, 8.049460053e-01F, 8.049744368e-01F, 8.050028682e-01F,
	8.050313592e-01F, 8.050597906e-01F, 8.050882220e-01F, 8.051166534e-01F, 8.051450849e-01F, 8.051735163e-01F, 8.052019477e-01F, 8.052303791e-01F,
	8.052587509e-01F, 8.052871823e-01F, 8.053156137e-01F, 8.053440452e-01F, 8.053724766e-01F, 8.054008484e-01F, 8.054292798e-01F, 8.054577112e-01F,
	8.054860830e-01F, 8.055145144e-01F, 8.055428863e-01F, 8.055713177e-01F, 8.055996895e-01F, 8.056281209e-01F, 8.056564927e-01F, 8.056849241e-01F,
	8.057132959e-01F, 8.057416677e-01F, 8.057700992e-01F, 8.057984710e-01F, 8.058268428e-01F, 8.058552742e-01F, 8.058836460e-01F, 8.059120178e-01F,
	8.059403896e-01F, 8.059687614e-01F, 8.059971333e-01F, 8.060255051e-01F, 8.060538769e-01F, 8.060822487e-01F, 8.061106205e-01F, 8.061389923e-01F,
	8.061673641e-01F, 8.061957359e-01F, 8.062241077e-01F, 8.062524199e-01F, 8.062807918e-01F, 8.063091636e-01F, 8.063375354e-01F, 8.063658476e-01F,
	8.063942194e-01F, 8.064225316e-01F, 8.064509034e-01F, 8.064792752e-01F, 8.065075874e-01F, 8.065359592e-01F, 8.065642715e-01F, 8.065925837e-01F,
	8.066209555e-01F, 8.066492677e-01F, 8.066775799e-01F, 8.067059517e-01F, 8.067342639e-01F, 8.067625761e-01F, 8.067908883e-01F, 8.068192601e-01F,
	8.068475723e-01F, 8.068758845e-01F, 8.069041967e-01F, 8.069325089e-01F, 8.069608212e-01F, 8.069891334e-01F, 8.070174456e-01F, 8.070457578e-01F,
	8.070740700e-01F, 8.071023226e-01F, 8.071306348e-01F, 8.071589470e-01F, 8.071872592e-01F, 8.072155714e-01F, 8.072438240e-01F, 8.072721362e-01F,
	8.073004484e-01F, 8.073287010e-01F, 8.073570132e-01F, 8.073852658e-01F, 8.074135780e-01F, 8.074418306e-01F, 8.074701428e-01F, 8.074983954e-01F,
	8.075267076e-01F, 8.075549603e-01F, 8.075832129e-01F, 8.076115251e-01F, 8.076397777e-01F, 8.076680303e-01F, 8.076962829e-01F, 8.077245355e-01F,
	8.077528477e-01F, 8.077811003e-01F, 8.078093529e-01F, 8.078376055e-01F, 8.078658581e-01F, 8.078941107e-01F, 8.079223633e-01F, 8.079506159e-01F,
	8.079788089e-01F, 8.080070615e-01F, 8.080353141e-01F, 8.080635667e-01F, 8.080918193e-01F, 8.081200123e-01F, 8.081482649e-01F, 8.081765175e-01F,
	8.082047105e-01F, 8.082329631e-01F, 8.082612157e-01F, 8.082894087e-01F, 8.083176613e-01F, 8.083458543e-01F, 8.083741069e-01F, 8.084022999e-01F,
	8.084304929e-01F, 8.084587455e-01F, 8.084869385e-01F, 8.085151315e-01F, 8.085433841e-01F, 8.085715771e-01F, 8.085997701e-01F, 8.086279631e-01F,
	8.086561561e-01F, 8.086844087e-01F, 8.087126017e-01F, 8.087407947e-01F, 8.087689877e-01F, 8.087971807e-01F, 8.088253736e-01F, 8.088535666e-01F,
	8.088817000e-01F, 8.089098930e-01F, 8.089380860e-01F, 8.089662790e-01F, 8.089944720e-01F, 8.090226054e-01F, 8.090507984e-01F, 8.090789914e-01F,
	8.091071248e-01F, 8.091353178e-01F, 8.091635108e-01F, 8.091916442e-01F, 8.092198372e-01F, 8.092479706e-01F, 8.092761636e-01F, 8.093042970e-01F,
	8.093324304e-01F, 8.093606234e-01F, 8.093887568e-01F, 8.094168901e-01F, 8.094450831e-01F, 8.094732165e-01F, 8.095013499e-01F, 8.095294833e-01F,
	8.095576167e-01F, 8.095858097e-01F, 8.096139431e-01F, 8.096420765e-01F, 8.096702099e-01F, 8.096983433e-01F, 8.097264767e-01F, 8.097546101e-01F,
	8.097826838e-01F, 8.098108172e-01F, 8.098389506e-01F, 8.098670840e-01F, 8.098952174e-01F, 8.099232912e-01F, 8.099514246e-01F, 8.099795580e-01F,
	8.100076318e-01F, 8.100357652e-01F, 8.100638986e-01F, 8.100919724e-01F, 8.101201057e-01F, 8.101481795e-01F, 8.101763129e-01F, 8.102043867e-01F,
	8.102324605e-01F, 8.102605939e-01F, 8.102886677e-01F, 8.103167415e-01F, 8.103448749e-01F, 8.103729486e-01F, 8.104010224e-01F, 8.104290962e-01F,
	8.104571700e-01F, 8.104853034e-01F, 8.105133772e-01F, 8.105414510e-01F, 8.105695248e-01F, 8.105975986e-01F, 8.106256723e-01F, 8.106537461e-01F,
	8.106817603e-01F, 8.107098341e-01F, 8.107379079e-01F, 8.107659817e-01F, 8.107940555e-01F, 8.108220696e-01F, 8.108501434e-01F, 8.108782172e-01F,
	8.109062314e-01F, 8.109343052e-01F, 8.109623790e-01F, 8.109903932e-01F, 8.110184669e-01F, 8.110464811e-01F, 8.110745549e-01F, 8.111025691e-01F,
	8.111306429e-01F, 8.111586571e-01F, 8.111866713e-01F, 8.112146854e-01F, 8.112427592e-01F, 8.112707734e-01F, 8.112987876e-01F, 8.113268018e-01F,
	8.113548756e-01F, 8.113828897e-01F, 8.114109039e-01F, 8.114389181e-01F, 8.114669323e-01F, 8.114949465e-01F, 8.115229607e-01F, 8.115509748e-01F,
	8.115789890e-01F, 8.116069436e-01F, 8.116349578e-01F, 8.116629720e-01F, 8.116909862e-01F, 8.117190003e-01F, 8.117469549e-01F, 8.117749691e-01F,
	8.118029833e-01F, 8.118309379e-01F, 8.118589520e-01F, 8.118869066e-01F, 8.119149208e-01F, 8.119428754e-01F, 8.119708896e-01F, 8.119988441e-01F,
	8.120268583e-01F, 8.120548129e-01F, 8.120827675e-01F, 8.121107817e-01F, 8.121387362e-01F, 8.121666908e-01F, 8.121946454e-01F, 8.122226000e-01F,
	8.122506142e-01F, 8.122785687e-01F, 8.123065233e-01F, 8.123344779e-01F, 8.123624325e-01F, 8.123903871e-01F, 8.124183416e-01F, 8.124462962e-01F,
	8.124742508e-01F, 8.125021458e-01F, 8.125301003e-01F, 8.125580549e-01F, 8.125860095e-01F, 8.126139641e-01F, 8.126418591e-01F, 8.126698136e-01F,
	8.126977682e-01F, 8.127256632e-01F, 8.127536178e-01F, 8.127815127e-01F, 8.128094673e-01F, 8.128373623e-01F, 8.128653169e-01F, 8.128932118e-01F,
	8.129211664e-01F, 8.129490614e-01F, 8.129769564e-01F, 8.130048513e-01F, 8.130328059e-01F, 8.130607009e-01F, 8.130885959e-01F, 8.131164908e-01F,
	8.131443858e-01F, 8.131723404e-01F, 8.132002354e-01F, 8.132281303e-01F, 8.132560253e-01F, 8.132839203e-01F, 8.133118153e-01F, 8.133397102e-01F,
	8.133675456e-01F, 8.133954406e-01F, 8.134233356e-01F, 8.134512305e-01F, 8.134791255e-01F, 8.135069609e-01F, 8.135348558e-01F, 8.135627508e-01F,
	8.135905862e-01F, 8.136184812e-01F, 8.136463761e-01F, 8.136742115e-01F, 8.137021065e-01F, 8.137299418e-01F, 8.137578368e-01F, 8.137856722e-01F,
	8.138135076e-01F, 8.138414025e-01F, 8.138692379e-01F, 8.138970733e-01F, 8.139249682e-01F, 8.139528036e-01F, 8.139806390e-01F, 8.140084743e-01F,
	8.140363097e-01F, 8.140641451e-01F, 8.140920401e-01F, 8.141198754e-01F, 8.141477108e-01F, 8.141755462e-01F, 8.142033219e-01F, 8.142311573e-01F,
	8.142589927e-01F, 8.142868280e-01F, 8.143146634e-01F, 8.143424988e-01F, 8.143702745e-01F, 8.143981099e-01F, 8.144259453e-01F, 8.144537807e-01F,
	8.144815564e-01F, 8.145093918e-01F, 8.145371675e-01F, 8.145650029e-01F, 8.145927787e-01F, 8.146206141e-01F, 8.146483898e-01F, 8.146762252e-01F,
	8.147040009e-01F, 8.147317767e-01F, 8.147596121e-01F, 8.147873878e-01F, 8.148151636e-01F, 8.148429990e-01F, 8.148707747e-01F, 8.148985505e-01F,
	8.149263263e-01F, 8.149541020e-01F, 8.149818778e-01F, 8.150096536e-01F, 8.150374293e-01F, 8.150652051e-01F, 8.150929809e-01F, 8.151207566e-01F,
	8.151485324e-01F, 8.151763082e-01F, 8.152040839e-01F, 8.152318001e-01F, 8.152595758e-01F, 8.152873516e-01F, 8.153151274e-01F, 8.153428435e-01F,
	8.153706193e-01F, 8.153983355e-01F, 8.154261112e-01F, 8.154538870e-01F, 8.154816031e-01F, 8.155093789e-01F, 8.155370951e-01F, 8.155648112e-01F,
	8.155925870e-01F, 8.156203032e-01F, 8.156480193e-01F, 8.156757951e-01F, 8.157035112e-01F, 8.157312274e-01F, 8.157589436e-01F, 8.157866597e-01F,
	8.158144355e-01F, 8.158421516e-01F, 8.158698678e-01F, 8.158975840e-01F, 8.159253001e-01F, 8.159530163e-01F, 8.159807324e-01F, 8.160084486e-01F,
	8.160361052e-01F, 8.160638213e-01F, 8.160915375e-01F, 8.161192536e-01F, 8.161469698e-01F, 8.161746264e-01F, 8.162023425e-01F, 8.162300587e-01F,
	8.162577152e-01F, 8.162854314e-01F, 8.163130879e-01F, 8.163408041e-01F, 8.163684607e-01F, 8.163961768e-01F, 8.164238334e-01F, 8.164515495e-01F,
	8.164792061e-01F, 8.165068626e-01F, 8.165345788e-01F, 8.165622354e-01F, 8.165898919e-01F, 8.166175485e-01F, 8.166452646e-01F, 8.166729212e-01F,
	8.167005777e-01F, 8.167282343e-01F, 8.167558908e-01F, 8.167835474e-01F, 8.168112040e-01F, 8.168388605e-01F, 8.168665171e-01F, 8.168941736e-01F,
	8.169218302e-01F, 8.169494867e-01F, 8.169770837e-01F, 8.170047402e-01F, 8.170323968e-01F, 8.170600533e-01F, 8.170876503e-01F, 8.171153069e-01F,
	8.171429038e-01F, 8.171705604e-01F, 8.171982169e-01F, 8.172258139e-01F, 8.172534704e-01F, 8.172810674e-01F, 8.173087239e-01F, 8.173363209e-01F,
	8.173639178e-01F, 8.173915744e-01F, 8.174191713e-01F, 8.174467683e-01F, 8.174743652e-01F, 8.175020218e-01F, 8.175296187e-01F, 8.175572157e-01F,
	8.175848126e-01F, 8.176124096e-01F, 8.176400065e-01F, 8.176676035e-01F, 8.176952004e-01F, 8.177227974e-01F, 8.177503943e-01F, 8.177779913e-01F,
	8.178055882e-01F, 8.178331852e-01F, 8.178607225e-01F, 8.178883195e-01F, 8.179159164e-01F, 8.179435134e-01F, 8.179710507e-01F, 8.179986477e-01F,
	8.180261850e-01F, 8.180537820e-01F, 8.180813789e-01F, 8.181089163e-01F, 8.181365132e-01F, 8.181640506e-01F, 8.181915879e-01F, 8.182191849e-01F,
	8.182467222e-01F, 8.182742596e-01F, 8.183018565e-01F, 8.183293939e-01F, 8.183569312e-01F, 8.183844686e-01F, 8.184120655e-01F, 8.184396029e-01F,
	8.184671402e-01F, 8.184946775e-01F, 8.185222149e-01F, 8.185497522e-01F, 8.185772896e-01F, 8.186048269e-01F, 8.186323643e-01F, 8.186599016e-01F,
	8.186873794e-01F, 8.187149167e-01F, 8.187424541e-01F, 8.187699914e-01F, 8.187975287e-01F, 8.188250065e-01F, 8.188525438e-01F, 8.188800812e-01F,
	8.189075589e-01F, 8.189350963e-01F, 8.189625740e-01F, 8.189901114e-01F, 8.190175891e-01F, 8.190451264e-01F, 8.190726042e-01F, 8.191000819e-01F,
	8.191276193e-01F, 8.191550970e-01F, 8.191825747e-01F, 8.192101121e-01F, 8.192375898e-01F, 8.192650676e-01F, 8.192925453e-01F, 8.193200231e-01F,
	8.193475008e-01F, 8.193749785e-01F, 8.194024563e-01F, 8.194299340e-01F, 8.194574118e-01F, 8.194848895e-01F, 8.195123672e-01F, 8.195398450e-01F,
	8.195673227e-01F, 8.195948005e-01F, 8.196222186e-01F, 8.196496964e-01F, 8.196771741e-01F, 8.197046518e-01F, 8.197320700e-01F, 8.197595477e-01F,
	8.197869658e-01F, 8.198144436e-01F, 8.198419213e-01F, 8.198693395e-01F, 8.198967576e-01F, 8.199242353e-01F, 8.199516535e-01F, 8.199791312e-01F,
	8.200065494e-01F, 8.200339675e-01F, 8.200614452e-01F, 8.200888634e-01F, 8.201162815e-01F, 8.201436996e-01F, 8.201711178e-01F, 8.201985359e-01F,
	8.202259541e-01F, 8.202534318e-01F, 8.202808499e-01F, 8.203082681e-01F, 8.203356266e-01F, 8.203630447e-01F, 8.203904629e-01F, 8.204178810e-01F,
	8.204452991e-01F, 8.204727173e-01F, 8.205001354e-01F, 8.205274940e-01F, 8.205549121e-01F, 8.205823302e-01F, 8.206096888e-01F, 8.206371069e-01F,
	8.206644654e-01F, 8.206918836e-01F, 8.207192421e-01F, 8.207466602e-01F, 8.207740188e-01F, 8.208014369e-01F, 8.208287954e-01F, 8.208562136e-01F,
	8.208835721e-01F, 8.209109306e-01F, 8.209382892e-01F, 8.209657073e-01F, 8.209930658e-01F, 8.210204244e-01F, 8.210477829e-01F, 8.210751414e-01F,
	8.211025000e-01F, 8.211298585e-01F, 8.211572170e-01F, 8.211845756e-01F, 8.212119341e-01F, 8.212392926e-01F, 8.212666512e-01F, 8.212940097e-01F,
	8.213213682e-01F, 8.213486671e-01F, 8.213760257e-01F, 8.214033842e-01F, 8.214307427e-01F, 8.214580417e-01F, 8.214854002e-01F, 8.215126991e-01F,
	8.215400577e-01F, 8.215674162e-01F, 8.215947151e-01F, 8.216220140e-01F, 8.216493726e-01F, 8.216766715e-01F, 8.217040300e-01F, 8.217313290e-01F,
	8.217586279e-01F, 8.217859864e-01F, 8.218132854e-01F, 8.218405843e-01F, 8.218678832e-01F, 8.218951821e-01F, 8.219224811e-01F, 8.219498396e-01F,
	8.219771385e-01F, 8.220044374e-01F, 8.220317364e-01F, 8.220590353e-01F, 8.220862746e-01F, 8.221135736e-01F, 8.221408725e-01F, 8.221681714e-01F,
	8.221954703e-01F, 8.222227693e-01F, 8.222500086e-01F, 8.222773075e-01F, 8.223046064e-01F, 8.223318458e-01F, 8.223591447e-01F, 8.223864436e-01F,
	8.224136829e-01F, 8.224409819e-01F, 8.224682212e-01F, 8.224955201e-01F, 8.225227594e-01F, 8.225499988e-01F, 8.225772977e-01F, 8.226045370e-01F,
	8.226317763e-01F, 8.226590753e-01F, 8.226863146e-01F, 8.227135539e-01F, 8.227407932e-01F, 8.227680326e-01F, 8.227952719e-01F, 8.228225112e-01F,
	8.228498101e-01F, 8.228770494e-01F, 8.229042292e-01F, 8.229314685e-01F, 8.229587078e-01F, 8.229859471e-01F, 8.230131865e-01F, 8.230404258e-01F,
	8.230676651e-01F, 8.230948448e-01F, 8.231220841e-01F, 8.231493235e-01F, 8.231765032e-01F, 8.232037425e-01F, 8.232309818e-01F, 8.232581615e-01F,
	8.232854009e-01F, 8.233125806e-01F, 8.233398199e-01F, 8.233669996e-01F, 8.233942389e-01F, 8.234214187e-01F, 8.234485984e-01F, 8.234758377e-01F,
	8.235030174e-01F, 8.235301971e-01F, 8.235573769e-01F, 8.235846162e-01F, 8.236117959e-01F, 8.236389756e-01F, 8.236661553e-01F, 8.236933351e-01F,
	8.237205148e-01F, 8.237476945e-01F, 8.237748742e-01F, 8.238020539e-01F, 8.238292336e-01F, 8.238564134e-01F, 8.238835335e-01F, 8.239107132e-01F,
	8.239378929e-01F, 8.239650726e-01F, 8.239921927e-01F, 8.240193725e-01F, 8.240465522e-01F, 8.240736723e-01F, 8.241008520e-01F, 8.241279721e-01F,
	8.241551518e-01F, 8.241822720e-01F, 8.242094517e-01F, 8.242365718e-01F, 8.242637515e-01F, 8.242908716e-01F, 8.243179917e-01F, 8.243451715e-01F,
	8.243722916e-01F, 8.243994117e-01F, 8.244265318e-01F, 8.244537115e-01F, 8.244808316e-01F, 8.245079517e-01F, 8.245350718e-01F, 8.245621920e-01F,
	8.245893121e-01F, 8.246164322e-01F, 8.246435523e-01F, 8.246706724e-01F, 8.246977925e-01F, 8.247248530e-01F, 8.247519732e-01F, 8.247790933e-01F,
	8.248062134e-01F, 8.248332739e-01F, 8.248603940e-01F, 8.248875141e-01F, 8.249145746e-01F, 8.249416947e-01F, 8.249688148e-01F, 8.249958754e-01F,
	8.250229955e-01F, 8.250500560e-01F, 8.250771165e-01F, 8.251042366e-01F, 8.251312971e-01F, 8.251584172e-01F, 8.251854777e-01F, 8.252125382e-01F,
	8.252395988e-01F, 8.252667189e-01F, 8.252937794e-01F, 8.253208399e-01F, 8.253479004e-01F, 8.253749609e-01F, 8.254020214e-01F, 8.254290819e-01F,
	8.254561424e-01F, 8.254832029e-01F, 8.255102634e-01F, 8.255373240e-01F, 8.255643845e-01F, 8.255914450e-01F, 8.256184459e-01F, 8.256455064e-01F,
	8.256725669e-01F, 8.256996274e-01F, 8.257266283e-01F, 8.257536888e-01F, 8.257807493e-01F, 8.258077502e-01F, 8.258348107e-01F, 8.258618116e-01F,
	8.258888721e-01F, 8.259158731e-01F, 8.259429336e-01F, 8.259699345e-01F, 8.259969354e-01F, 8.260239959e-01F, 8.260509968e-01F, 8.260779977e-01F,
	8.261049986e-01F, 8.261320591e-01F, 8.261590600e-01F, 8.261860609e-01F, 8.262130618e-01F, 8.262400627e-01F, 8.262670636e-01F, 8.262940645e-01F,
	8.263210654e-01F, 8.263480663e-01F, 8.263750672e-01F, 8.264020681e-01F, 8.264290690e-01F, 8.264560103e-01F, 8.264830112e-01F, 8.265100121e-01F,
	8.265370131e-01F, 8.265639544e-01F, 8.265909553e-01F, 8.266178966e-01F, 8.266448975e-01F, 8.266718984e-01F, 8.266988397e-01F, 8.267258406e-01F,
	8.267527819e-01F, 8.267797828e-01F, 8.268067241e-01F, 8.268336654e-01F, 8.268606663e-01F, 8.268876076e-01F, 8.269145489e-01F, 8.269414902e-01F,
	8.269684911e-01F, 8.269954324e-01F, 8.270223737e-01F, 8.270493150e-01F, 8.270762563e-01F, 8.271031976e-01F, 8.271301389e-01F, 8.271570802e-01F,
	8.271840215e-01F, 8.272109628e-01F, 8.272379041e-01F, 8.272648454e-01F, 8.272917867e-01F, 8.273186684e-01F, 8.273456097e-01F, 8.273725510e-01F,
	8.273994923e-01F, 8.274263740e-01F, 8.274533153e-01F, 8.274801970e-01F, 8.275071383e-01F, 8.275340796e-01F, 8.275609612e-01F, 8.275878429e-01F,
	8.276147842e-01F, 8.276416659e-01F, 8.276686072e-01F, 8.276954889e-01F, 8.277223706e-01F, 8.277493119e-01F, 8.277761936e-01F, 8.278030753e-01F,
	8.278299570e-01F, 8.278568387e-01F, 8.278837800e-01F, 8.279106617e-01F, 8.279375434e-01F, 8.279644251e-01F, 8.279913068e-01F, 8.280181885e-01F,
	8.280450702e-01F, 8.280718923e-01F, 8.280987740e-01F, 8.281256557e-01F, 8.281525373e-01F, 8.281794190e-01F, 8.282062411e-01F, 8.282331228e-01F,
	8.282600045e-01F, 8.282868266e-01F, 8.283137083e-01F, 8.283405900e-01F, 8.283674121e-01F, 8.283942938e-01F, 8.284211159e-01F, 8.284479976e-01F,
	8.284748197e-01F, 8.285016418e-01F, 8.285285234e-01F, 8.285553455e-01F, 8.285821676e-01F, 8.286090493e-01F, 8.286358714e-01F, 8.286626935e-01F,
	8.286895156e-01F, 8.287163377e-01F, 8.287431598e-01F, 8.287700415e-01F, 8.287968636e-01F, 8.288236856e-01F, 8.288505077e-01F, 8.288772702e-01F,
	8.289040923e-01F, 8.289309144e-01F, 8.289577365e-01F, 8.289845586e-01F, 8.290113807e-01F, 8.290381432e-01F, 8.290649652e-01F, 8.290917873e-01F,
	8.291185498e-01F, 8.291453719e-01F, 8.291721940e-01F, 8.291989565e-01F, 8.292257786e-01F, 8.292525411e-01F, 8.292793632e-01F, 8.293061256e-01F,
	8.293329477e-01F, 8.293597102e-01F, 8.293864727e-01F, 8.294132352e-01F, 8.294400573e-01F, 8.294668198e-01F, 8.294935822e-01F, 8.295203447e-01F,
	8.295471072e-01F, 8.295739293e-01F, 8.296006918e-01F, 8.296274543e-01F, 8.296542168e-01F, 8.296809793e-01F, 8.297077417e-01F, 8.297345042e-01F,
	8.297612071e-01F, 8.297879696e-01F, 8.298147321e-01F, 8.298414946e-01F, 8.298682570e-01F, 8.298949599e-01F, 8.299217224e-01F, 8.299484849e-01F,
	8.299751878e-01F, 8.300019503e-01F, 8.300287127e-01F, 8.300554156e-01F, 8.300821781e-01F, 8.301088810e-01F, 8.301355839e-01F, 8.301623464e-01F,
	8.301890492e-01F, 8.302158117e-01F, 8.302425146e-01F, 8.302692175e-01F, 8.302959204e-01F, 8.303226829e-01F, 8.303493857e-01F, 8.303760886e-01F,
	8.304027915e-01F, 8.304294944e-01F, 8.304561973e-01F, 8.304829001e-01F, 8.305096030e-01F, 8.305363059e-01F, 8.305630088e-01F, 8.305897117e-01F,
	8.306164145e-01F, 8.306431174e-01F, 8.306697607e-01F, 8.306964636e-01F, 8.307231665e-01F, 8.307498693e-01F, 8.307765126e-01F, 8.308032155e-01F,
	8.308298588e-01F, 8.308565617e-01F, 8.308832645e-01F, 8.309099078e-01F, 8.309366107e-01F, 8.309632540e-01F, 8.309898973e-01F, 8.310166001e-01F,
	8.310432434e-01F, 8.310698867e-01F, 8.310965896e-01F, 8.311232328e-01F, 8.311498761e-01F, 8.311765194e-01F, 8.312032223e-01F, 8.312298656e-01F,
	8.312565088e-01F, 8.312831521e-01F, 8.313097954e-01F, 8.313364387e-01F, 8.313630819e-01F, 8.313897252e-01F, 8.314163685e-01F, 8.314429522e-01F,
	8.314695954e-01F, 8.314962387e-01F, 8.315228820e-01F, 8.315495253e-01F, 8.315761089e-01F, 8.316027522e-01F, 8.316293955e-01F, 8.316559792e-01F,
	8.316826224e-01F, 8.317092061e-01F, 8.317358494e-01F, 8.317624331e-01F, 8.317890763e-01F, 8.318156600e-01F, 8.318423033e-01F, 8.318688869e-01F,
	8.318954706e-01F, 8.319221139e-01F, 8.319486976e-01F, 8.319752812e-01F, 8.320018649e-01F, 8.320284486e-01F, 8.320550323e-01F, 8.320816755e-01F,
	8.321082592e-01F, 8.321348429e-01F, 8.321614265e-01F, 8.321880102e-01F, 8.322145939e-01F, 8.322411180e-01F, 8.322677016e-01F, 8.322942853e-01F,
	8.323208690e-01F, 8.323474526e-01F, 8.323739767e-01F, 8.324005604e-01F, 8.324271441e-01F, 8.324537277e-01F, 8.324802518e-01F, 8.325068355e-01F,
	8.325333595e-01F, 8.325599432e-01F, 8.325864673e-01F, 8.326130509e-01F, 8.326395750e-01F, 8.326661587e-01F, 8.326926827e-01F, 8.327192068e-01F,
	8.327457905e-01F, 8.327723145e-01F, 8.327988386e-01F, 8.328253627e-01F, 8.328518867e-01F, 8.328784108e-01F, 8.329049945e-01F, 8.329315186e-01F,
	8.329580426e-01F, 8.329845667e-01F, 8.330110908e-01F, 8.330376148e-01F, 8.330641389e-01F, 8.330906034e-01F, 8.331171274e-01F, 8.331436515e-01F,
	8.331701756e-01F, 8.331966996e-01F, 8.332231641e-01F, 8.332496881e-01F, 8.332762122e-01F, 8.333026767e-01F, 8.333292007e-01F, 8.333556652e-01F,
	8.333821893e-01F, 8.334086537e-01F, 8.334351778e-01F, 8.334616423e-01F, 8.334881663e-01F, 8.335146308e-01F, 8.335410953e-01F, 8.335676193e-01F,
	8.335940838e-01F, 8.336205482e-01F, 8.336470127e-01F, 8.336735368e-01F, 8.337000012e-01F, 8.337264657e-01F, 8.337529302e-01F, 8.337793946e-01F,
	8.338058591e-01F, 8.338323236e-01F, 8.338587880e-01F, 8.338852525e-01F, 8.339117169e-01F, 8.339381218e-01F, 8.339645863e-01F, 8.339910507e-01F,
	8.340175152e-01F, 8.340439200e-01F, 8.340703845e-01F, 8.340968490e-01F, 8.341232538e-01F, 8.341497183e-01F, 8.341761827e-01F, 8.342025876e-01F,
	8.342290521e-01F, 8.342554569e-01F, 8.342818618e-01F, 8.343083262e-01F, 8.343347311e-01F, 8.343611956e-01F, 8.343876004e-01F, 8.344140053e-01F,
	8.344404101e-01F, 8.344668746e-01F, 8.344932795e-01F, 8.345196843e-01F, 8.345460892e-01F, 8.345724940e-01F, 8.345988989e-01F, 8.346253037e-01F,
	8.346517086e-01F, 8.346781135e-01F, 8.347045183e-01F, 8.347309232e-01F, 8.347573280e-01F, 8.347837329e-01F, 8.348100781e-01F, 8.348364830e-01F,
	8.348628879e-01F, 8.348892331e-01F, 8.349156380e-01F, 8.349420428e-01F, 8.349683881e-01F, 8.349947929e-01F, 8.350211382e-01F, 8.350475430e-01F,
	8.350738883e-01F, 8.351002932e-01F, 8.351266384e-01F, 8.351530433e-01F, 8.351793885e-01F, 8.352057338e-01F, 8.352320790e-01F, 8.352584839e-01F,
	8.352848291e-01F, 8.353111744e-01F, 8.353375196e-01F, 8.353638649e-01F, 8.353902102e-01F, 8.354165554e-01F, 8.354429007e-01F, 8.354692459e-01F,
	8.354955912e-01F, 8.355219364e-01F, 8.355482817e-01F, 8.355746269e-01F, 8.356009722e-01F, 8.356273174e-01F, 8.356536031e-01F, 8.356799483e-01F,
	8.357062936e-01F, 8.357326388e-01F, 8.357589245e-01F, 8.357852697e-01F, 8.358115554e-01F, 8.358379006e-01F, 8.358641863e-01F, 8.358905315e-01F,
	8.359168172e-01F, 8.359431624e-01F, 8.359694481e-01F, 8.359957337e-01F, 8.360220790e-01F, 8.360483646e-01F, 8.360746503e-01F, 8.361009359e-01F,
	8.361272812e-01F, 8.361535668e-01F, 8.361798525e-01F, 8.362061381e-01F, 8.362324238e-01F, 8.362587094e-01F, 8.362849951e-01F, 8.363112807e-01F,
	8.363375664e-01F, 8.363638520e-01F, 8.363900781e-01F, 8.364163637e-01F, 8.364426494e-01F, 8.364689350e-01F, 8.364952207e-01F, 8.365214467e-01F,
	8.365477324e-01F, 8.365740180e-01F, 8.366002440e-01F, 8.366265297e-01F, 8.366527557e-01F, 8.366790414e-01F, 8.367052674e-01F, 8.367315531e-01F,
	8.367577791e-01F, 8.367840052e-01F, 8.368102908e-01F, 8.368365169e-01F, 8.368627429e-01F, 8.368890285e-01F, 8.369152546e-01F, 8.369414806e-01F,
	8.369677067e-01F, 8.369939327e-01F, 8.370201588e-01F, 8.370463848e-01F, 8.370726109e-01F, 8.370988369e-01F, 8.371250629e-01F, 8.371512890e-01F,
	8.371775150e-01F, 8.372037411e-01F, 8.372299671e-01F, 8.372561932e-01F, 8.372823596e-01F, 8.373085856e-01F, 8.373348117e-01F, 8.373609781e-01F,
	8.373872042e-01F, 8.374134302e-01F, 8.374395967e-01F, 8.374658227e-01F, 8.374919891e-01F, 8.375182152e-01F, 8.375443816e-01F, 8.375705481e-01F,
	8.375967741e-01F, 8.376229405e-01F, 8.376491070e-01F, 8.376753330e-01F, 8.377014995e-01F, 8.377276659e-01F, 8.377538323e-01F, 8.377799988e-01F,
	8.378062248e-01F, 8.378323913e-01F, 8.378585577e-01F, 8.378847241e-01F, 8.379108906e-01F, 8.379370570e-01F, 8.379632235e-01F, 8.379893303e-01F,
	8.380154967e-01F, 8.380416632e-01F, 8.380678296e-01F, 8.380939960e-01F, 8.381201029e-01F, 8.381462693e-01F, 8.381724358e-01F, 8.381985426e-01F,
	8.382247090e-01F, 8.382508755e-01F, 8.382769823e-01F, 8.383031487e-01F, 8.383292556e-01F, 8.383553624e-01F, 8.383815289e-01F, 8.384076357e-01F,
	8.384338021e-01F, 8.384599090e-01F, 8.384860158e-01F, 8.385121226e-01F, 8.385382891e-01F, 8.385643959e-01F, 8.385905027e-01F, 8.386166096e-01F,
	8.386427164e-01F, 8.386688232e-01F, 8.386949301e-01F, 8.387210369e-01F, 8.387471437e-01F, 8.387732506e-01F, 8.387993574e-01F, 8.388254642e-01F,
	8.388515115e-01F, 8.388776183e-01F, 8.389037251e-01F, 8.389298320e-01F, 8.389558792e-01F, 8.389819860e-01F, 8.390080929e-01F, 8.390341401e-01F,
	8.390602469e-01F, 8.390862942e-01F, 8.391124010e-01F, 8.391384482e-01F, 8.391645551e-01F, 8.391906023e-01F, 8.392167091e-01F, 8.392427564e-01F,
	8.392688036e-01F, 8.392948508e-01F, 8.393209577e-01F, 8.393470049e-01F, 8.393730521e-01F, 8.393990993e-01F, 8.394251466e-01F, 8.394511938e-01F,
	8.394772410e-01F, 8.395032883e-01F, 8.395293355e-01F, 8.395553827e-01F, 8.395814300e-01F, 8.396074772e-01F, 8.396335244e-01F, 8.396595716e-01F,
	8.396856189e-01F, 8.397116065e-01F, 8.397376537e-01F, 8.397637010e-01F, 8.397896886e-01F, 8.398157358e-01F, 8.398417830e-01F, 8.398677707e-01F,
	8.398938179e-01F, 8.399198055e-01F, 8.399458528e-01F, 8.399718404e-01F, 8.399978280e-01F, 8.400238752e-01F, 8.400498629e-01F, 8.400758505e-01F,
	8.401018977e-01F, 8.401278853e-01F, 8.401538730e-01F, 8.401798606e-01F, 8.402058482e-01F, 8.402318358e-01F, 8.402578831e-01F, 8.402838707e-01F,
	8.403098583e-01F, 8.403358459e-01F, 8.403617740e-01F, 8.403877616e-01F, 8.404137492e-01F, 8.404397368e-01F, 8.404657245e-01F, 8.404917121e-01F,
	8.405176401e-01F, 8.405436277e-01F, 8.405696154e-01F, 8.405955434e-01F, 8.406215310e-01F, 8.406475186e-01F, 8.406734467e-01F, 8.406994343e-01F,
	8.407253623e-01F, 8.407513499e-01F, 8.407772779e-01F, 8.408032060e-01F, 8.408291936e-01F, 8.408551216e-01F, 8.408810496e-01F, 8.409070373e-01F,
	8.409329653e-01F, 8.409588933e-01F, 8.409848213e-01F, 8.410107493e-01F, 8.410367370e-01F, 8.410626650e-01F, 8.410885930e-01F, 8.411145210e-01F,
	8.411404490e-01F, 8.411663771e-01F, 8.411922455e-01F, 8.412181735e-01F, 8.412441015e-01F, 8.412700295e-01F, 8.412959576e-01F, 8.413218260e-01F,
	8.413477540e-01F, 8.413736820e-01F, 8.413995504e-01F, 8.414254785e-01F, 8.414514065e-01F, 8.414772749e-01F, 8.415032029e-01F, 8.415290713e-01F,
	8.415549994e-01F, 8.415808678e-01F, 8.416067362e-01F, 8.416326642e-01F, 8.416585326e-01F, 8.416844010e-01F, 8.417103291e-01F, 8.417361975e-01F,
	8.417620659e-01F, 8.417879343e-01F, 8.418138027e-01F, 8.418396711e-01F, 8.418655396e-01F, 8.418914676e-01F, 8.419172764e-01F, 8.419431448e-01F,
	8.419690132e-01F, 8.419948816e-01F, 8.420207500e-01F, 8.420466185e-01F, 8.420724869e-01F, 8.420983553e-01F, 8.421241641e-01F, 8.421500325e-01F,
	8.421759009e-01F, 8.422017097e-01F, 8.422275782e-01F, 8.422533870e-01F, 8.422792554e-01F, 8.423051238e-01F, 8.423309326e-01F, 8.423567414e-01F,
	8.423826098e-01F, 8.424084187e-01F, 8.424342871e-01F, 8.424600959e-01F, 8.424859047e-01F, 8.425117135e-01F, 8.425375819e-01F, 8.425633907e-01F,
	8.425891995e-01F, 8.426150084e-01F, 8.426408172e-01F, 8.426666260e-01F, 8.426924348e-01F, 8.427182436e-01F, 8.427440524e-01F, 8.427698612e-01F,
	8.427956700e-01F, 8.428214788e-01F, 8.428472877e-01F, 8.428730369e-01F, 8.428988457e-01F, 8.429246545e-01F, 8.429504633e-01F, 8.429762125e-01F,
	8.430020213e-01F, 8.430278301e-01F, 8.430535793e-01F, 8.430793881e-01F, 8.431051373e-01F, 8.431309462e-01F, 8.431566954e-01F, 8.431824446e-01F,
	8.432082534e-01F, 8.432340026e-01F, 8.432597518e-01F, 8.432855606e-01F, 8.433113098e-01F, 8.433370590e-01F, 8.433628082e-01F, 8.433885574e-01F,
	8.434143662e-01F, 8.434401155e-01F, 8.434658647e-01F, 8.434916139e-01F, 8.435173631e-01F, 8.435431123e-01F, 8.435688615e-01F, 8.435945511e-01F,
	8.436203003e-01F, 8.436460495e-01F, 8.436717987e-01F, 8.436975479e-01F, 8.437232375e-01F, 8.437489867e-01F, 8.437747359e-01F, 8.438004255e-01F,
	8.438261747e-01F, 8.438518643e-01F, 8.438776135e-01F, 8.439033031e-01F, 8.439290524e-01F, 8.439547420e-01F, 8.439804912e-01F, 8.440061808e-01F,
	8.440318704e-01F, 8.440576196e-01F, 8.440833092e-01F, 8.441089988e-01F, 8.441346884e-01F, 8.441604376e-01F, 8.441861272e-01F, 8.442118168e-01F,
	8.442375064e-01F, 8.442631960e-01F, 8.442888856e-01F, 8.443145752e-01F, 8.443402648e-01F, 8.443659544e-01F, 8.443916440e-01F, 8.444172740e-01F,
	8.444429636e-01F, 8.444686532e-01F, 8.444943428e-01F, 8.445199728e-01F, 8.445456624e-01F, 8.445713520e-01F, 8.445969820e-01F, 8.446226716e-01F,
	8.446483612e-01F, 8.446739912e-01F, 8.446996808e-01F, 8.447253108e-01F, 8.447509408e-01F, 8.447766304e-01F, 8.448022604e-01F, 8.448278904e-01F,
	8.448535800e-01F, 8.448792100e-01F, 8.449048400e-01F, 8.449304700e-01F, 8.449561596e-01F, 8.449817896e-01F, 8.450074196e-01F, 8.450330496e-01F,
	8.450586796e-01F, 8.450843096e-01F, 8.451099396e-01F, 8.451355696e-01F, 8.451611996e-01F, 8.451868296e-01F, 8.452124000e-01F, 8.452380300e-01F,
	8.452636600e-01F, 8.452892900e-01F, 8.453148603e-01F, 8.453404903e-01F, 8.453661203e-01F, 8.453916907e-01F, 8.454173207e-01F, 8.454428911e-01F,
	8.454685211e-01F, 8.454940915e-01F, 8.455197215e-01F, 8.455452919e-01F, 8.455709219e-01F, 8.455964923e-01F, 8.456220627e-01F, 8.456476331e-01F,
	8.456732631e-01F, 8.456988335e-01F, 8.457244039e-01F, 8.457499743e-01F, 8.457755446e-01F, 8.458011150e-01F, 8.458267450e-01F, 8.458523154e-01F,
	8.458778858e-01F, 8.459033966e-01F, 8.459289670e-01F, 8.459545374e-01F, 8.459801078e-01F, 8.460056782e-01F, 8.460312486e-01F, 8.460567594e-01F,
	8.460823298e-01F, 8.461079001e-01F, 8.461334705e-01F, 8.461589813e-01F, 8.461845517e-01F, 8.462100625e-01F, 8.462356329e-01F, 8.462611437e-01F,
	8.462867141e-01F, 8.463122249e-01F, 8.463377953e-01F, 8.463633060e-01F, 8.463888168e-01F, 8.464143872e-01F, 8.464398980e-01F, 8.464654088e-01F,
	8.464909196e-01F, 8.465164304e-01F, 8.465420008e-01F, 8.465675116e-01F, 8.465930223e-01F, 8.466185331e-01F, 8.466440439e-01F, 8.466695547e-01F,
	8.466950655e-01F, 8.467205763e-01F, 8.467460871e-01F, 8.467715383e-01F, 8.467970490e-01F, 8.468225598e-01F, 8.468480706e-01F, 8.468735218e-01F,
	8.468990326e-01F, 8.469245434e-01F, 8.469499946e-01F, 8.469755054e-01F, 8.470009565e-01F, 8.470264673e-01F, 8.470519185e-01F, 8.470774293e-01F,
	8.471028805e-01F, 8.471283913e-01F, 8.471538424e-01F, 8.471792936e-01F, 8.472048044e-01F, 8.472302556e-01F, 8.472557068e-01F, 8.472811580e-01F,
	8.473066092e-01F, 8.473321199e-01F, 8.473575711e-01F, 8.473830223e-01F, 8.474084735e-01F, 8.474339247e-01F, 8.474593759e-01F, 8.474848270e-01F,
	8.475102782e-01F, 8.475356698e-01F, 8.475611210e-01F, 8.475865722e-01F, 8.476120234e-01F, 8.476374745e-01F, 8.476628661e-01F, 8.476883173e-01F,
	8.477137685e-01F, 8.477391601e-01F, 8.477646112e-01F, 8.477900028e-01F, 8.478154540e-01F, 8.478408456e-01F, 8.478662968e-01F, 8.478916883e-01F,
	8.479170799e-01F, 8.479425311e-01F, 8.479679227e-01F, 8.479933143e-01F, 8.480187654e-01F, 8.480441570e-01F, 8.480695486e-01F, 8.480949402e-01F,
	8.481203318e-01F, 8.481457233e-01F, 8.481711149e-01F, 8.481965065e-01F, 8.482218981e-01F, 8.482472897e-01F, 8.482726812e-01F, 8.482980728e-01F,
	8.483234644e-01F, 8.483488560e-01F, 8.483742476e-01F, 8.483995795e-01F, 8.484249711e-01F, 8.484503627e-01F, 8.484756947e-01F, 8.485010862e-01F,
	8.485264778e-01F, 8.485518098e-01F, 8.485772014e-01F, 8.486025333e-01F, 8.486279249e-01F, 8.486532569e-01F, 8.486785889e-01F, 8.487039804e-01F,
	8.487293124e-01F, 8.487546444e-01F, 8.487800360e-01F, 8.488053679e-01F, 8.488306999e-01F, 8.488560319e-01F, 8.488813639e-01F, 8.489066958e-01F,
	8.489320278e-01F, 8.489573598e-01F, 8.489826918e-01F, 8.490080237e-01F, 8.490333557e-01F, 8.490586877e-01F, 8.490840197e-01F, 8.491093516e-01F,
	8.491346836e-01F, 8.491600156e-01F, 8.491852880e-01F, 8.492106199e-01F, 8.492359519e-01F, 8.492612243e-01F, 8.492865562e-01F, 8.493118286e-01F,
	8.493371606e-01F, 8.493624926e-01F, 8.493877649e-01F, 8.494130373e-01F, 8.494383693e-01F, 8.494636416e-01F, 8.494889736e-01F, 8.495142460e-01F,
	8.495395184e-01F, 8.495647907e-01F, 8.495901227e-01F, 8.496153951e-01F, 8.496406674e-01F, 8.496659398e-01F, 8.496912122e-01F, 8.497164845e-01F,
	8.497417569e-01F, 8.497670293e-01F, 8.497923017e-01F, 8.498175740e-01F, 8.498428464e-01F, 8.498681188e-01F, 8.498933911e-01F, 8.499186039e-01F,
	8.499438763e-01F, 8.499691486e-01F, 8.499944210e-01F, 8.500196338e-01F, 8.500449061e-01F, 8.500701189e-01F, 8.500953913e-01F, 8.501206040e-01F,
	8.501458764e-01F, 8.501710892e-01F, 8.501963615e-01F, 8.502215743e-01F, 8.502468467e-01F, 8.502720594e-01F, 8.502972722e-01F, 8.503224850e-01F,
	8.503477573e-01F, 8.503729701e-01F, 8.503981829e-01F, 8.504233956e-01F, 8.504486084e-01F, 8.504738212e-01F, 8.504990339e-01F, 8.505242467e-01F,
	8.505494595e-01F, 8.505746722e-01F, 8.505998850e-01F, 8.506250978e-01F, 8.506503105e-01F, 8.506755233e-01F, 8.507006764e-01F, 8.507258892e-01F,
	8.507511020e-01F, 8.507763147e-01F, 8.508014679e-01F, 8.508266807e-01F, 8.508518338e-01F, 8.508770466e-01F, 8.509021997e-01F, 8.509274125e-01F,
	8.509525657e-01F, 8.509777784e-01F, 8.510029316e-01F, 8.510280848e-01F, 8.510532975e-01F, 8.510784507e-01F, 8.511036038e-01F, 8.511288166e-01F,
	8.511539698e-01F, 8.511791229e-01F, 8.512042761e-01F, 8.512294292e-01F, 8.512545824e-01F, 8.512797356e-01F, 8.513048887e-01F, 8.513300419e-01F,
	8.513551950e-01F, 8.513803482e-01F, 8.514055014e-01F, 8.514306545e-01F, 8.514557481e-01F, 8.514809012e-01F, 8.515060544e-01F, 8.515311480e-01F,
	8.515563011e-01F, 8.515814543e-01F, 8.516065478e-01F, 8.516317010e-01F, 8.516567945e-01F, 8.516819477e-01F, 8.517070413e-01F, 8.517321944e-01F,
	8.517572880e-01F, 8.517824411e-01F, 8.518075347e-01F, 8.518326283e-01F, 8.518577218e-01F, 8.518828750e-01F, 8.519079685e-01F, 8.519330621e-01F,
	8.519581556e-01F, 8.519832492e-01F, 8.520083427e-01F, 8.520334363e-01F, 8.520585299e-01F, 8.520836234e-01F, 8.521087170e-01F, 8.521338105e-01F,
	8.521589041e-01F, 8.521839976e-01F, 8.522090912e-01F, 8.522341251e-01F, 8.522592187e-01F, 8.522843122e-01F, 8.523093462e-01F, 8.523344398e-01F,
	8.523595333e-01F, 8.523845673e-01F, 8.524096608e-01F, 8.524346948e-01F, 8.524597883e-01F, 8.524848223e-01F, 8.525099158e-01F, 8.525349498e-01F,
	8.525599837e-01F, 8.525850773e-01F, 8.526101112e-01F, 8.526351452e-01F, 8.526601791e-01F, 8.526852727e-01F, 8.527103066e-01F, 8.527353406e-01F,
	8.527603745e-01F, 8.527854085e-01F, 8.528104424e-01F, 8.528354764e-01F, 8.528605103e-01F, 8.528855443e-01F, 8.529105783e-01F, 8.529355526e-01F,
	8.529605865e-01F, 8.529856205e-01F, 8.530106544e-01F, 8.530356884e-01F, 8.530606627e-01F, 8.530856967e-01F, 8.531107306e-01F, 8.531357050e-01F,
	8.531607389e-01F, 8.531857133e-01F, 8.532107472e-01F, 8.532357216e-01F, 8.532607555e-01F, 8.532857299e-01F, 8.533107042e-01F, 8.533357382e-01F,
	8.533607125e-01F, 8.533856869e-01F, 8.534106612e-01F, 8.534356952e-01F, 8.534606695e-01F, 8.534856439e-01F, 8.535106182e-01F, 8.535355926e-01F,
	8.535605669e-01F, 8.535855412e-01F, 8.536105156e-01F, 8.536354899e-01F, 8.536604643e-01F, 8.536854386e-01F, 8.537103534e-01F, 8.537353277e-01F,
	8.537603021e-01F, 8.537852764e-01F, 8.538101912e-01F, 8.538351655e-01F, 8.538601398e-01F, 8.538850546e-01F, 8.539100289e-01F, 8.539349437e-01F,
	8.539599180e-01F, 8.539848328e-01F, 8.540098071e-01F, 8.540347219e-01F, 8.540596962e-01F, 8.540846109e-01F, 8.541095257e-01F, 8.541344404e-01F,
	8.541594148e-01F, 8.541843295e-01F, 8.542092443e-01F, 8.542341590e-01F, 8.542590737e-01F, 8.542839885e-01F, 8.543089032e-01F, 8.543338180e-01F,
	8.543587327e-01F, 8.543836474e-01F, 8.544085622e-01F, 8.544334769e-01F, 8.544583917e-01F, 8.544833064e-01F, 8.545082211e-01F, 8.545330763e-01F,
	8.545579910e-01F, 8.545829058e-01F, 8.546077609e-01F, 8.546326756e-01F, 8.546575308e-01F, 8.546824455e-01F, 8.547073603e-01F, 8.547322154e-01F,
	8.547570705e-01F, 8.547819853e-01F, 8.548068404e-01F, 8.548317552e-01F, 8.548566103e-01F, 8.548814654e-01F, 8.549063206e-01F, 8.549312353e-01F,
	8.549560905e-01F, 8.549809456e-01F, 8.550058007e-01F, 8.550306559e-01F, 8.550555110e-01F, 8.550803661e-01F, 8.551052213e-01F, 8.551300764e-01F,
	8.551549315e-01F, 8.551797867e-01F, 8.552046418e-01F, 8.552294970e-01F, 8.552542925e-01F, 8.552791476e-01F, 8.553040028e-01F, 8.553288579e-01F,
	8.553536534e-01F, 8.553785086e-01F, 8.554033041e-01F, 8.554281592e-01F, 8.554529548e-01F, 8.554778099e-01F, 8.555026054e-01F, 8.555274606e-01F,
	8.555522561e-01F, 8.555771112e-01F, 8.556019068e-01F, 8.556267023e-01F, 8.556514978e-01F, 8.556763530e-01F, 8.557011485e-01F, 8.557259440e-01F,
	8.557507396e-01F, 8.557755351e-01F, 8.558003306e-01F, 8.558251262e-01F, 8.558499217e-01F, 8.558747172e-01F, 8.558995128e-01F, 8.559243083e-01F,
	8.559491038e-01F, 8.559738994e-01F, 8.559986949e-01F, 8.560234308e-01F, 8.560482264e-01F, 8.560730219e-01F, 8.560977578e-01F, 8.561225533e-01F,
	8.561473489e-01F, 8.561720848e-01F, 8.561968803e-01F, 8.562216163e-01F, 8.562464118e-01F, 8.562711477e-01F, 8.562959433e-01F, 8.563206792e-01F,
	8.563454151e-01F, 8.563702106e-01F, 8.563949466e-01F, 8.564196825e-01F, 8.564444184e-01F, 8.564691544e-01F, 8.564939499e-01F, 8.565186858e-01F,
	8.565434217e-01F, 8.565681577e-01F, 8.565928936e-01F, 8.566176295e-01F, 8.566423655e-01F, 8.566671014e-01F, 8.566917777e-01F, 8.567165136e-01F,
	8.567412496e-01F, 8.567659855e-01F, 8.567907214e-01F, 8.568153977e-01F, 8.568401337e-01F, 8.568648696e-01F, 8.568895459e-01F, 8.569142818e-01F,
	8.569389582e-01F, 8.569636941e-01F, 8.569883704e-01F, 8.570131063e-01F, 8.570377827e-01F, 8.570625186e-01F, 8.570871949e-01F, 8.571118712e-01F,
	8.571365476e-01F, 8.571612835e-01F, 8.571859598e-01F, 8.572106361e-01F, 8.572353125e-01F, 8.572599888e-01F, 8.572846651e-01F, 8.573093414e-01F,
	8.573340178e-01F, 8.573586941e-01F, 8.573833704e-01F, 8.574080467e-01F, 8.574327230e-01F, 8.574573994e-01F, 8.574820757e-01F, 8.575067520e-01F,
	8.575313687e-01F, 8.575560451e-01F, 8.575807214e-01F, 8.576053381e-01F, 8.576300144e-01F, 8.576546907e-01F, 8.576793075e-01F, 8.577039838e-01F,
	8.577286005e-01F, 8.577532768e-01F, 8.577778935e-01F, 8.578025103e-01F, 8.578271866e-01F, 8.578518033e-01F, 8.578764200e-01F, 8.579010963e-01F,
	8.579257131e-01F, 8.579503298e-01F, 8.579749465e-01F, 8.579995632e-01F, 8.580241799e-01F, 8.580487967e-01F, 8.580734134e-01F, 8.580980301e-01F,
	8.581226468e-01F, 8.581472635e-01F, 8.581718802e-01F, 8.581964970e-01F, 8.582211137e-01F, 8.582457304e-01F, 8.582702875e-01F, 8.582949042e-01F,
	8.583195210e-01F, 8.583440781e-01F, 8.583686948e-01F, 8.583933115e-01F, 8.584178686e-01F, 8.584424853e-01F, 8.584670424e-01F, 8.584916592e-01F,
	8.585162163e-01F, 8.585408330e-01F, 8.585653901e-01F, 8.585899472e-01F, 8.586145043e-01F, 8.586391211e-01F, 8.586636782e-01F, 8.586882353e-01F,
	8.587127924e-01F, 8.587373495e-01F, 8.587619662e-01F, 8.587865233e-01F, 8.588110805e-01F, 8.588356376e-01F, 8.588601947e-01F, 8.588847518e-01F,
	8.589092493e-01F, 8.589338064e-01F, 8.589583635e-01F, 8.589829206e-01F, 8.590074778e-01F, 8.590319753e-01F, 8.590565324e-01F, 8.590810895e-01F,
	8.591055870e-01F, 8.591301441e-01F, 8.591547012e-01F, 8.591791987e-01F, 8.592037559e-01F, 8.592282534e-01F, 8.592527509e-01F, 8.592773080e-01F,
	8.593018055e-01F, 8.593263626e-01F, 8.593508601e-01F, 8.593753576e-01F, 8.593998551e-01F, 8.594244123e-01F, 8.594489098e-01F, 8.594734073e-01F,
	8.594979048e-01F, 8.595224023e-01F, 8.595468998e-01F, 8.595713973e-01F, 8.595958948e-01F, 8.596203923e-01F, 8.596448898e-01F, 8.596693873e-01F,
	8.596938848e-01F, 8.597183228e-01F, 8.597428203e-01F, 8.597673178e-01F, 8.597918153e-01F, 8.598162532e-01F, 8.598407507e-01F, 8.598651886e-01F,
	8.598896861e-01F, 8.599141836e-01F, 8.599386215e-01F, 8.599631190e-01F, 8.599875569e-01F, 8.600119948e-01F, 8.600364923e-01F, 8.600609303e-01F,
	8.600853682e-01F, 8.601098657e-01F, 8.601343036e-01F, 8.601587415e-01F, 8.601831794e-01F, 8.602076173e-01F, 8.602320552e-01F, 8.602565527e-01F,
	8.602809906e-01F, 8.603054285e-01F, 8.603298664e-01F, 8.603543043e-01F, 8.603786826e-01F, 8.604031205e-01F, 8.604275584e-01F, 8.604519963e-01F,
	8.604764342e-01F, 8.605008125e-01F, 8.605252504e-01F, 8.605496883e-01F, 8.605740666e-01F, 8.605985045e-01F, 8.606229424e-01F, 8.606473207e-01F,
	8.606717587e-01F, 8.606961370e-01F, 8.607205749e-01F, 8.607449532e-01F, 8.607693315e-01F, 8.607937694e-01F, 8.608181477e-01F, 8.608425260e-01F,
	8.608669639e-01F, 8.608913422e-01F, 8.609157205e-01F, 8.609400988e-01F, 8.609644771e-01F, 8.609888554e-01F, 8.610132337e-01F, 8.610376120e-01F,
	8.610619903e-01F, 8.610863686e-01F, 8.611107469e-01F, 8.611351252e-01F, 8.611595035e-01F, 8.611838818e-01F, 8.612082005e-01F, 8.612325788e-01F,
	8.612569571e-01F, 8.612813354e-01F, 8.613056540e-01F, 8.613300323e-01F, 8.613543510e-01F, 8.613787293e-01F, 8.614031076e-01F, 8.614274263e-01F,
	8.614517450e-01F, 8.614761233e-01F, 8.615004420e-01F, 8.615248203e-01F, 8.615491390e-01F, 8.615734577e-01F, 8.615977764e-01F, 8.616221547e-01F,
	8.616464734e-01F, 8.616707921e-01F, 8.616951108e-01F, 8.617194295e-01F, 8.617437482e-01F, 8.617680669e-01F, 8.617923856e-01F, 8.618167043e-01F,
	8.618410230e-01F, 8.618653417e-01F, 8.618896604e-01F, 8.619139791e-01F, 8.619382381e-01F, 8.619625568e-01F, 8.619868755e-01F, 8.620111942e-01F,
	8.620354533e-01F, 8.620597720e-01F, 8.620840311e-01F, 8.621083498e-01F, 8.621326089e-01F, 8.621569276e-01F, 8.621811867e-01F, 8.622055054e-01F,
	8.622297645e-01F, 8.622540236e-01F, 8.622783422e-01F, 8.623026013e-01F, 8.623268604e-01F, 8.623511791e-01F, 8.623754382e-01F, 8.623996973e-01F,
	8.624239564e-01F, 8.624482155e-01F, 8.624724746e-01F, 8.624967337e-01F, 8.625209928e-01F, 8.625452518e-01F, 8.625695109e-01F, 8.625937700e-01F,
	8.626180291e-01F, 8.626422882e-01F, 8.626664877e-01F, 8.626907468e-01F, 8.627150059e-01F, 8.627392054e-01F, 8.627634645e-01F, 8.627877235e-01F,
	8.628119230e-01F, 8.628361821e-01F, 8.628603816e-01F, 8.628846407e-01F, 8.629088402e-01F, 8.629330993e-01F, 8.629572988e-01F, 8.629814982e-01F,
	8.630057573e-01F, 8.630299568e-01F, 8.630541563e-01F, 8.630784154e-01F, 8.631026149e-01F, 8.631268144e-01F, 8.631510139e-01F, 8.631752133e-01F,
	8.631994128e-01F, 8.632236123e-01F, 8.632478118e-01F, 8.632720113e-01F, 8.632962108e-01F, 8.633204103e-01F, 8.633446097e-01F, 8.633688092e-01F,
	8.633929491e-01F, 8.634171486e-01F, 8.634413481e-01F, 8.634655476e-01F, 8.634896874e-01F, 8.635138869e-01F, 8.635380268e-01F, 8.635622263e-01F,
	8.635863662e-01F, 8.636105657e-01F, 8.636347055e-01F, 8.636589050e-01F, 8.636830449e-01F, 8.637072444e-01F, 8.637313843e-01F, 8.637555242e-01F,
	8.637796640e-01F, 8.638038635e-01F, 8.638280034e-01F, 8.638521433e-01F, 8.638762832e-01F, 8.639004230e-01F, 8.639245629e-01F, 8.639487028e-01F,
	8.639728427e-01F, 8.639969826e-01F, 8.640211225e-01F, 8.640452623e-01F, 8.640694022e-01F, 8.640935421e-01F, 8.641176224e-01F, 8.641417623e-01F,
	8.641659021e-01F, 8.641900420e-01F, 8.642141223e-01F, 8.642382622e-01F, 8.642623425e-01F, 8.642864823e-01F, 8.643106222e-01F, 8.643347025e-01F,
	8.643587828e-01F, 8.643829226e-01F, 8.644070029e-01F, 8.644311428e-01F, 8.644552231e-01F, 8.644793034e-01F, 8.645033836e-01F, 8.645275235e-01F,
	8.645516038e-01F, 8.645756841e-01F, 8.645997643e-01F, 8.646238446e-01F, 8.646479249e-01F, 8.646720052e-01F, 8.646960855e-01F, 8.647201657e-01F,
	8.647442460e-01F, 8.647683263e-01F, 8.647924066e-01F, 8.648164868e-01F, 8.648405671e-01F, 8.648645878e-01F, 8.648886681e-01F, 8.649127483e-01F,
	8.649367690e-01F, 8.649608493e-01F, 8.649849296e-01F, 8.650089502e-01F, 8.650330305e-01F, 8.650570512e-01F, 8.650811315e-01F, 8.651051521e-01F,
	8.651291728e-01F, 8.651532531e-01F, 8.651772738e-01F, 8.652012944e-01F, 8.652253747e-01F, 8.652493954e-01F, 8.652734160e-01F, 8.652974367e-01F,
	8.653214574e-01F, 8.653454781e-01F, 8.653694987e-01F, 8.653935194e-01F, 8.654175401e-01F, 8.654415607e-01F, 8.654655814e-01F, 8.654896021e-01F,
	8.655136228e-01F, 8.655376434e-01F, 8.655616641e-01F, 8.655856252e-01F, 8.656096458e-01F, 8.656336665e-01F, 8.656576276e-01F, 8.656816483e-01F,
	8.657056689e-01F, 8.657296300e-01F, 8.657536507e-01F, 8.657776117e-01F, 8.658016324e-01F, 8.658255935e-01F, 8.658495545e-01F, 8.658735752e-01F,
	8.658975363e-01F, 8.659214973e-01F, 8.659455180e-01F, 8.659694791e-01F, 8.659934402e-01F, 8.660174012e-01F, 8.660413623e-01F, 8.660653234e-01F,
	8.660892844e-01F, 8.661132455e-01F, 8.661372066e-01F, 8.661611676e-01F, 8.661851287e-01F, 8.662090898e-01F, 8.662330508e-01F, 8.662570119e-01F,
	8.662809730e-01F, 8.663048744e-01F, 8.663288355e-01F, 8.663527966e-01F, 8.663766980e-01F, 8.664006591e-01F, 8.664246202e-01F, 8.664485216e-01F,
	8.664724827e-01F, 8.664963841e-01F, 8.665203452e-01F, 8.665442467e-01F, 8.665681481e-01F, 8.665921092e-01F, 8.666160107e-01F, 8.666399121e-01F,
	8.666638732e-01F, 8.666877747e-01F, 8.667116761e-01F, 8.667355776e-01F, 8.667594790e-01F, 8.667833805e-01F, 8.668072820e-01F, 8.668312430e-01F,
	8.668550849e-01F, 8.668789864e-01F, 8.669028878e-01F, 8.669267893e-01F, 8.669506907e-01F, 8.669745922e-01F, 8.669984937e-01F, 8.670223355e-01F,
	8.670462370e-01F, 8.670701385e-01F, 8.670939803e-01F, 8.671178818e-01F, 8.671417832e-01F, 8.671656251e-01F, 8.671895266e-01F, 8.672133684e-01F,
	8.672372699e-01F, 8.672611117e-01F, 8.672849536e-01F, 8.673088551e-01F, 8.673326969e-01F, 8.673565388e-01F, 8.673804402e-01F, 8.674042821e-01F,
	8.674281240e-01F, 8.674519658e-01F, 8.674758077e-01F, 8.674996495e-01F, 8.675234914e-01F, 8.675473332e-01F, 8.675711751e-01F, 8.675950170e-01F,
	8.676188588e-01F, 8.676427007e-01F, 8.676665425e-01F, 8.676903844e-01F, 8.677142262e-01F, 8.677380085e-01F, 8.677618504e-01F, 8.677856922e-01F,
	8.678094745e-01F, 8.678333163e-01F, 8.678571582e-01F, 8.678809404e-01F, 8.679047823e-01F, 8.679285645e-01F, 8.679524064e-01F, 8.679761887e-01F,
	8.679999709e-01F, 8.680238128e-01F, 8.680475950e-01F, 8.680713773e-01F, 8.680952191e-01F, 8.681190014e-01F, 8.681427836e-01F, 8.681665659e-01F,
	8.681903481e-01F, 8.682141304e-01F, 8.682379127e-01F, 8.682616949e-01F, 8.682854772e-01F, 8.683092594e-01F, 8.683330417e-01F, 8.683568239e-01F,
	8.683806062e-01F, 8.684043884e-01F, 8.684281111e-01F, 8.684518933e-01F, 8.684756756e-01F, 8.684994578e-01F, 8.685231805e-01F, 8.685469627e-01F,
	8.685706854e-01F, 8.685944676e-01F, 8.686181903e-01F, 8.686419725e-01F, 8.686656952e-01F, 8.686894774e-01F, 8.687132001e-01F, 8.687369227e-01F,
	8.687607050e-01F, 8.687844276e-01F, 8.688081503e-01F, 8.688318729e-01F, 8.688556552e-01F, 8.688793778e-01F, 8.689031005e-01F, 8.689268231e-01F,
	8.689505458e-01F, 8.689742684e-01F, 8.689979911e-01F, 8.690217137e-01F, 8.690454364e-01F, 8.690691590e-01F, 8.690928221e-01F, 8.691165447e-01F,
	8.691402674e-01F, 8.691639900e-01F, 8.691877127e-01F, 8.692113757e-01F, 8.692350984e-01F, 8.692587614e-01F, 8.692824841e-01F, 8.693062067e-01F,
	8.693298697e-01F, 8.693535328e-01F, 8.693772554e-01F, 8.694009185e-01F, 8.694246411e-01F, 8.694483042e-01F, 8.694719672e-01F, 8.694956899e-01F,
	8.695193529e-01F, 8.695430160e-01F, 8.695666790e-01F, 8.695903420e-01F, 8.696140051e-01F, 8.696377277e-01F, 8.696613908e-01F, 8.696850538e-01F,
	8.697086573e-01F, 8.697323203e-01F, 8.697559834e-01F, 8.697796464e-01F, 8.698033094e-01F, 8.698269725e-01F, 8.698506355e-01F, 8.698742390e-01F,
	8.698979020e-01F, 8.699215651e-01F, 8.699451685e-01F, 8.699688315e-01F, 8.699924350e-01F, 8.700160980e-01F, 8.700397015e-01F, 8.700633645e-01F,
	8.700869679e-01F, 8.701106310e-01F, 8.701342344e-01F, 8.701578379e-01F, 8.701815009e-01F, 8.702051044e-01F, 8.702287078e-01F, 8.702523112e-01F,
	8.702759743e-01F, 8.702995777e-01F, 8.703231812e-01F, 8.703467846e-01F, 8.703703880e-01F, 8.703939915e-01F, 8.704175949e-01F, 8.704411983e-01F,
	8.704648018e-01F, 8.704884052e-01F, 8.705119491e-01F, 8.705355525e-01F, 8.705591559e-01F, 8.705827594e-01F, 8.706063032e-01F, 8.706299067e-01F,
	8.706535101e-01F, 8.706770539e-01F, 8.707006574e-01F, 8.707242012e-01F, 8.707478046e-01F, 8.707713485e-01F, 8.707949519e-01F, 8.708184958e-01F,
	8.708420396e-01F, 8.708656430e-01F, 8.708891869e-01F, 8.709127307e-01F, 8.709362745e-01F, 8.709598780e-01F, 8.709834218e-01F, 8.710069656e-01F,
	8.710305095e-01F, 8.710540533e-01F, 8.710775971e-01F, 8.711011410e-01F, 8.711246848e-01F, 8.711482286e-01F, 8.711717725e-01F, 8.711953163e-01F,
	8.712188601e-01F, 8.712423444e-01F, 8.712658882e-01F, 8.712894320e-01F, 8.713129163e-01F, 8.713364601e-01F, 8.713600039e-01F, 8.713834882e-01F,
	8.714070320e-01F, 8.714305162e-01F, 8.714540601e-01F, 8.714775443e-01F, 8.715010881e-01F, 8.715245724e-01F, 8.715480566e-01F, 8.715716004e-01F,
	8.715950847e-01F, 8.716185689e-01F, 8.716420531e-01F, 8.716655970e-01F, 8.716890812e-01F, 8.717125654e-01F, 8.717360497e-01F, 8.717595339e-01F,
	8.717830181e-01F, 8.718065023e-01F, 8.718299866e-01F, 8.718534708e-01F, 8.718769550e-01F, 8.719004393e-01F, 8.719238639e-01F, 8.719473481e-01F,
	8.719708323e-01F, 8.719943166e-01F, 8.720177412e-01F, 8.720412254e-01F, 8.720647097e-01F, 8.720881343e-01F, 8.721116185e-01F, 8.721350431e-01F,
	8.721585274e-01F, 8.721819520e-01F, 8.722054362e-01F, 8.722288609e-01F, 8.722522855e-01F, 8.722757697e-01F, 8.722991943e-01F, 8.723226190e-01F,
	8.723460436e-01F, 8.723694682e-01F, 8.723929524e-01F, 8.724163771e-01F, 8.724398017e-01F, 8.724632263e-01F, 8.724866509e-01F, 8.725100756e-01F,
	8.725335002e-01F, 8.725569248e-01F, 8.725802898e-01F, 8.726037145e-01F, 8.726271391e-01F, 8.726505637e-01F, 8.726739883e-01F, 8.726973534e-01F,
	8.727207780e-01F, 8.727442026e-01F, 8.727675676e-01F, 8.727909923e-01F, 8.728143573e-01F, 8.728377819e-01F, 8.728611469e-01F, 8.728845716e-01F,
	8.729079366e-01F, 8.729313016e-01F, 8.729547262e-01F, 8.729780912e-01F, 8.730014563e-01F, 8.730248809e-01F, 8.730482459e-01F, 8.730716109e-01F,
	8.730949759e-01F, 8.731183410e-01F, 8.731417060e-01F, 8.731650710e-01F, 8.731884360e-01F, 8.732118011e-01F, 8.732351661e-01F, 8.732585311e-01F,
	8.732818961e-01F, 8.733052611e-01F, 8.733285666e-01F, 8.733519316e-01F, 8.733752966e-01F, 8.733986616e-01F, 8.734219670e-01F, 8.734453321e-01F,
	8.734686971e-01F, 8.734920025e-01F, 8.735153675e-01F, 8.735386729e-01F, 8.735620379e-01F, 8.735853434e-01F, 8.736086488e-01F, 8.736320138e-01F,
	8.736553192e-01F, 8.736786246e-01F, 8.737019897e-01F, 8.737252951e-01F, 8.737486005e-01F, 8.737719059e-01F, 8.737952113e-01F, 8.738185167e-01F,
	8.738418221e-01F, 8.738651276e-01F, 8.738884330e-01F, 8.739117384e-01F, 8.739350438e-01F, 8.739583492e-01F, 8.739816546e-01F, 8.740049601e-01F,
	8.740282655e-01F, 8.740515113e-01F, 8.740748167e-01F, 8.740981221e-01F, 8.741213679e-01F, 8.741446733e-01F, 8.741679788e-01F, 8.741912246e-01F,
	8.742145300e-01F, 8.742377758e-01F, 8.742610812e-01F, 8.742843270e-01F, 8.743075728e-01F, 8.743308783e-01F, 8.743541241e-01F, 8.743773699e-01F,
	8.744006157e-01F, 8.744239211e-01F, 8.744471669e-01F, 8.744704127e-01F, 8.744936585e-01F, 8.745169044e-01F, 8.745401502e-01F, 8.745633960e-01F,
	8.745866418e-01F, 8.746098876e-01F, 8.746331334e-01F, 8.746563792e-01F, 8.746796250e-01F, 8.747028708e-01F, 8.747260571e-01F, 8.747493029e-01F,
	8.747725487e-01F, 8.747957349e-01F, 8.748189807e-01F, 8.748422265e-01F, 8.748654127e-01F, 8.748886585e-01F, 8.749118447e-01F, 8.749350905e-01F,
	8.749582767e-01F, 8.749815226e-01F, 8.750047088e-01F, 8.750278950e-01F, 8.750511408e-01F, 8.750743270e-01F, 8.750975132e-01F, 8.751206994e-01F,
	8.751438856e-01F, 8.751671314e-01F, 8.751903176e-01F, 8.752135038e-01F, 8.752366900e-01F, 8.752598763e-01F, 8.752830625e-01F, 8.753062487e-01F,
	8.753293753e-01F, 8.753525615e-01F, 8.753757477e-01F, 8.753989339e-01F, 8.754221201e-01F, 8.754452467e-01F, 8.754684329e-01F, 8.754916191e-01F,
	8.755147457e-01F, 8.755379319e-01F, 8.755611181e-01F, 8.755842447e-01F, 8.756074309e-01F, 8.756305575e-01F, 8.756536841e-01F, 8.756768703e-01F,
	8.756999969e-01F, 8.757231236e-01F, 8.757463098e-01F, 8.757694364e-01F, 8.757925630e-01F, 8.758156896e-01F, 8.758388758e-01F, 8.758620024e-01F,
	8.758851290e-01F, 8.759082556e-01F, 8.759313822e-01F, 8.759545088e-01F, 8.759776354e-01F, 8.760007620e-01F, 8.760238886e-01F, 8.760469556e-01F,
	8.760700822e-01F, 8.760932088e-01F, 8.761163354e-01F, 8.761394024e-01F, 8.761625290e-01F, 8.761856556e-01F, 8.762087226e-01F, 8.762318492e-01F,
	8.762549162e-01F, 8.762780428e-01F, 8.763011098e-01F, 8.763242364e-01F, 8.763473034e-01F, 8.763704300e-01F, 8.763934970e-01F, 8.764165640e-01F,
	8.764396906e-01F, 8.764627576e-01F, 8.764858246e-01F, 8.765088916e-01F, 8.765319586e-01F, 8.765550256e-01F, 8.765781522e-01F, 8.766012192e-01F,
	8.766242862e-01F, 8.766473532e-01F, 8.766703606e-01F, 8.766934276e-01F, 8.767164946e-01F, 8.767395616e-01F, 8.767626286e-01F, 8.767856956e-01F,
	8.768087029e-01F, 8.768317699e-01F, 8.768548369e-01F, 8.768778443e-01F, 8.769009113e-01F, 8.769239187e-01F, 8.769469857e-01F, 8.769700527e-01F,
	8.769930601e-01F, 8.770160675e-01F, 8.770391345e-01F, 8.770621419e-01F, 8.770851493e-01F, 8.771082163e-01F, 8.771312237e-01F, 8.771542311e-01F,
	8.771772385e-01F, 8.772003055e-01F, 8.772233129e-01F, 8.772463202e-01F, 8.772693276e-01F, 8.772923350e-01F, 8.773153424e-01F, 8.773383498e-01F,
	8.773613572e-01F, 8.773843646e-01F, 8.774073124e-01F, 8.774303198e-01F, 8.774533272e-01F, 8.774763346e-01F, 8.774993420e-01F, 8.775222898e-01F,
	8.775452971e-01F, 8.775682449e-01F, 8.775912523e-01F, 8.776142597e-01F, 8.776372075e-01F, 8.776602149e-01F, 8.776831627e-01F, 8.777061105e-01F,
	8.777291179e-01F, 8.777520657e-01F, 8.777750731e-01F, 8.777980208e-01F, 8.778209686e-01F, 8.778439164e-01F, 8.778668642e-01F, 8.778898716e-01F,
	8.779128194e-01F, 8.779357672e-01F, 8.779587150e-01F, 8.779816628e-01F, 8.780046105e-01F, 8.780275583e-01F, 8.780505061e-01F, 8.780733943e-01F,
	8.780963421e-01F, 8.781192899e-01F, 8.781422377e-01F, 8.781651855e-01F, 8.781880736e-01F, 8.782110214e-01F, 8.782339692e-01F, 8.782568574e-01F,
	8.782798052e-01F, 8.783026934e-01F, 8.783256412e-01F, 8.783485293e-01F, 8.783714771e-01F, 8.783943653e-01F, 8.784172535e-01F, 8.784402013e-01F,
	8.784630895e-01F, 8.784859776e-01F, 8.785089254e-01F, 8.785318136e-01F, 8.785547018e-01F, 8.785775900e-01F, 8.786004782e-01F, 8.786233664e-01F,
	8.786462545e-01F, 8.786691427e-01F, 8.786920309e-01F, 8.787149191e-01F, 8.787378073e-01F, 8.787606955e-01F, 8.787835836e-01F, 8.788064122e-01F,
	8.788293004e-01F, 8.788521886e-01F, 8.788750768e-01F, 8.788979053e-01F, 8.789207935e-01F, 8.789436221e-01F, 8.789665103e-01F, 8.789893985e-01F,
	8.790122271e-01F, 8.790350556e-01F, 8.790579438e-01F, 8.790807724e-01F, 8.791036606e-01F, 8.791264892e-01F, 8.791493177e-01F, 8.791721463e-01F,
	8.791950345e-01F, 8.792178631e-01F, 8.792406917e-01F, 8.792635202e-01F, 8.792863488e-01F, 8.793091774e-01F, 8.793320060e-01F, 8.793548346e-01F,
	8.793776631e-01F, 8.794004917e-01F, 8.794233203e-01F, 8.794461489e-01F, 8.794689775e-01F, 8.794917464e-01F, 8.795145750e-01F, 8.795374036e-01F,
	8.795601726e-01F, 8.795830011e-01F, 8.796058297e-01F, 8.796285987e-01F, 8.796514273e-01F, 8.796741962e-01F, 8.796970248e-01F, 8.797197938e-01F,
	8.797426224e-01F, 8.797653913e-01F, 8.797881603e-01F, 8.798109293e-01F, 8.798337579e-01F, 8.798565269e-01F, 8.798792958e-01F, 8.799020648e-01F,
	8.799248338e-01F, 8.799476624e-01F, 8.799704313e-01F, 8.799932003e-01F, 8.800159693e-01F, 8.800387383e-01F, 8.800614476e-01F, 8.800842166e-01F,
	8.801069856e-01F, 8.801297545e-01F, 8.801525235e-01F, 8.801752925e-01F, 8.801980019e-01F, 8.802207708e-01F, 8.802435398e-01F, 8.802662492e-01F,
	8.802890182e-01F, 8.803117275e-01F, 8.803344965e-01F, 8.803572059e-01F, 8.803799748e-01F, 8.804026842e-01F, 8.804254532e-01F, 8.804481626e-01F,
	8.804708719e-01F, 8.804936409e-01F, 8.805163503e-01F, 8.805390596e-01F, 8.805617690e-01F, 8.805844784e-01F, 8.806071877e-01F, 8.806299567e-01F,
	8.806526661e-01F, 8.806753755e-01F, 8.806980848e-01F, 8.807207346e-01F, 8.807434440e-01F, 8.807661533e-01F, 8.807888627e-01F, 8.808115721e-01F,
	8.808342814e-01F, 8.808569312e-01F, 8.808796406e-01F, 8.809023499e-01F, 8.809249997e-01F, 8.809477091e-01F, 8.809704185e-01F, 8.809930682e-01F,
	8.810157776e-01F, 8.810384274e-01F, 8.810610771e-01F, 8.810837865e-01F, 8.811064363e-01F, 8.811291456e-01F, 8.811517954e-01F, 8.811744452e-01F,
	8.811970949e-01F, 8.812198043e-01F, 8.812424541e-01F, 8.812651038e-01F, 8.812877536e-01F, 8.813104033e-01F, 8.813330531e-01F, 8.813557029e-01F,
	8.813783526e-01F, 8.814010024e-01F, 8.814236522e-01F, 8.814463019e-01F, 8.814688921e-01F, 8.814915419e-01F, 8.815141916e-01F, 8.815368414e-01F,
	8.815594316e-01F, 8.815820813e-01F, 8.816047311e-01F, 8.816273212e-01F, 8.816499710e-01F, 8.816725612e-01F, 8.816952109e-01F, 8.817178011e-01F,
	8.817404509e-01F, 8.817630410e-01F, 8.817856312e-01F, 8.818082809e-01F, 8.818308711e-01F, 8.818534613e-01F, 8.818760514e-01F, 8.818986416e-01F,
	8.819212914e-01F, 8.819438815e-01F, 8.819664717e-01F, 8.819890618e-01F, 8.820116520e-01F, 8.820342422e-01F, 8.820568323e-01F, 8.820794225e-01F,
	8.821019530e-01F, 8.821245432e-01F, 8.821471334e-01F, 8.821697235e-01F, 8.821923137e-01F, 8.822148442e-01F, 8.822374344e-01F, 8.822600245e-01F,
	8.822825551e-01F, 8.823051453e-01F, 8.823276758e-01F, 8.823502660e-01F, 8.823727965e-01F, 8.823953867e-01F, 8.824179173e-01F, 8.824404478e-01F,
	8.824630380e-01F, 8.824855685e-01F, 8.825080991e-01F, 8.825306296e-01F, 8.825532198e-01F, 8.825757504e-01F, 8.825982809e-01F, 8.826208115e-01F,
	8.826433420e-01F, 8.826658726e-01F, 8.826884031e-01F, 8.827109337e-01F, 8.827334642e-01F, 8.827559948e-01F, 8.827785254e-01F, 8.828009963e-01F,
	8.828235269e-01F, 8.828460574e-01F, 8.828685880e-01F, 8.828910589e-01F, 8.829135895e-01F, 8.829360604e-01F, 8.829585910e-01F, 8.829811215e-01F,
	8.830035925e-01F, 8.830261230e-01F, 8.830485940e-01F, 8.830710649e-01F, 8.830935955e-01F, 8.831160665e-01F, 8.831385374e-01F, 8.831610680e-01F,
	8.831835389e-01F, 8.832060099e-01F, 8.832284808e-01F, 8.832509518e-01F, 8.832734227e-01F, 8.832959533e-01F, 8.833184242e-01F, 8.833408952e-01F,
	8.833633661e-01F, 8.833857775e-01F, 8.834082484e-01F, 8.834307194e-01F, 8.834531903e-01F, 8.834756613e-01F, 8.834981322e-01F, 8.835205436e-01F,
	8.835430145e-01F, 8.835654855e-01F, 8.835878968e-01F, 8.836103678e-01F, 8.836327791e-01F, 8.836552501e-01F, 8.836776614e-01F, 8.837001324e-01F,
	8.837225437e-01F, 8.837450147e-01F, 8.837674260e-01F, 8.837898374e-01F, 8.838123083e-01F, 8.838347197e-01F, 8.838571310e-01F, 8.838795424e-01F,
	8.839019537e-01F, 8.839243650e-01F, 8.839468360e-01F, 8.839692473e-01F, 8.839916587e-01F, 8.840140700e-01F, 8.840364218e-01F, 8.840588331e-01F,
	8.840812445e-01F, 8.841036558e-01F, 8.841260672e-01F, 8.841484785e-01F, 8.841708302e-01F, 8.841932416e-01F, 8.842156529e-01F, 8.842380047e-01F,
	8.842604160e-01F, 8.842828274e-01F, 8.843051791e-01F, 8.843275905e-01F, 8.843499422e-01F, 8.843722939e-01F, 8.843947053e-01F, 8.844170570e-01F,
	8.844394684e-01F, 8.844618201e-01F, 8.844841719e-01F, 8.845065236e-01F, 8.845288754e-01F, 8.845512867e-01F, 8.845736384e-01F, 8.845959902e-01F,
	8.846183419e-01F, 8.846406937e-01F, 8.846630454e-01F, 8.846853971e-01F, 8.847077489e-01F, 8.847301006e-01F, 8.847523928e-01F, 8.847747445e-01F,
	8.847970963e-01F, 8.848194480e-01F, 8.848417401e-01F, 8.848640919e-01F, 8.848864436e-01F, 8.849087358e-01F, 8.849310875e-01F, 8.849534392e-01F,
	8.849757314e-01F, 8.849980235e-01F, 8.850203753e-01F, 8.850426674e-01F, 8.850650191e-01F, 8.850873113e-01F, 8.851096034e-01F, 8.851319551e-01F,
	8.851542473e-01F, 8.851765394e-01F, 8.851988316e-01F, 8.852211237e-01F, 8.852434158e-01F, 8.852657080e-01F, 8.852880597e-01F, 8.853103518e-01F,
	8.853325844e-01F, 8.853548765e-01F, 8.853771687e-01F, 8.853994608e-01F, 8.854217529e-01F, 8.854440451e-01F, 8.854662776e-01F, 8.854885697e-01F,
	8.855108619e-01F, 8.855331540e-01F, 8.855553865e-01F, 8.855776787e-01F, 8.855999112e-01F, 8.856222034e-01F, 8.856444359e-01F, 8.856667280e-01F,
	8.856889606e-01F, 8.857112527e-01F, 8.857334852e-01F, 8.857557178e-01F, 8.857779503e-01F, 8.858002424e-01F, 8.858224750e-01F, 8.858447075e-01F,
	8.858669400e-01F, 8.858891726e-01F, 8.859114051e-01F, 8.859336376e-01F, 8.859558702e-01F, 8.859781027e-01F, 8.860003352e-01F, 8.860225677e-01F,
	8.860448003e-01F, 8.860670328e-01F, 8.860892653e-01F, 8.861114979e-01F, 8.861336708e-01F, 8.861559033e-01F, 8.861781359e-01F, 8.862003088e-01F,
	8.862225413e-01F, 8.862447143e-01F, 8.862669468e-01F, 8.862891197e-01F, 8.863113523e-01F, 8.863335252e-01F, 8.863557577e-01F, 8.863779306e-01F,
	8.864001036e-01F, 8.864223361e-01F, 8.864445090e-01F, 8.864666820e-01F, 8.864888549e-01F, 8.865110278e-01F, 8.865332603e-01F, 8.865554333e-01F,
	8.865776062e-01F, 8.865997791e-01F, 8.866219521e-01F, 8.866441250e-01F, 8.866662383e-01F, 8.866884112e-01F, 8.867105842e-01F, 8.867327571e-01F,
	8.867549300e-01F, 8.867771029e-01F, 8.867992163e-01F, 8.868213892e-01F, 8.868435621e-01F, 8.868656754e-01F, 8.868878484e-01F, 8.869099617e-01F,
	8.869321346e-01F, 8.869542480e-01F, 8.869764209e-01F, 8.869985342e-01F, 8.870206475e-01F, 8.870428205e-01F, 8.870649338e-01F, 8.870870471e-01F,
	8.871091604e-01F, 8.871313334e-01F, 8.871534467e-01F, 8.871755600e-01F, 8.871976733e-01F, 8.872197866e-01F, 8.872419000e-01F, 8.872640133e-01F,
	8.872861266e-01F, 8.873082399e-01F, 8.873303533e-01F, 8.873524666e-01F, 8.873745799e-01F, 8.873966336e-01F, 8.874187469e-01F, 8.874408603e-01F,
	8.874629140e-01F, 8.874850273e-01F, 8.875071406e-01F, 8.875291944e-01F, 8.875513077e-01F, 8.875733614e-01F, 8.875954747e-01F, 8.876175284e-01F,
	8.876396418e-01F, 8.876616955e-01F, 8.876837492e-01F, 8.877058625e-01F, 8.877279162e-01F, 8.877499700e-01F, 8.877720237e-01F, 8.877941370e-01F,
	8.878161907e-01F, 8.878382444e-01F, 8.878602982e-01F, 8.878823519e-01F, 8.879044056e-01F, 8.879264593e-01F, 8.879485130e-01F, 8.879705667e-01F,
	8.879925609e-01F, 8.880146146e-01F, 8.880366683e-01F, 8.880587220e-01F, 8.880807757e-01F, 8.881027699e-01F, 8.881248236e-01F, 8.881468177e-01F,
	8.881688714e-01F, 8.881909251e-01F, 8.882129192e-01F, 8.882349730e-01F, 8.882569671e-01F, 8.882789612e-01F, 8.883010149e-01F, 8.883230090e-01F,
	8.883450627e-01F, 8.883670568e-01F, 8.883890510e-01F, 8.884110451e-01F, 8.884330392e-01F, 8.884550929e-01F, 8.884770870e-01F, 8.884990811e-01F,
	8.885210752e-01F, 8.885430694e-01F, 8.885650635e-01F, 8.885870576e-01F, 8.886090517e-01F, 8.886309862e-01F, 8.886529803e-01F, 8.886749744e-01F,
	8.886969686e-01F, 8.887189627e-01F, 8.887408972e-01F, 8.887628913e-01F, 8.887848258e-01F, 8.888068199e-01F, 8.888288140e-01F, 8.888507485e-01F,
	8.888727427e-01F, 8.888946772e-01F, 8.889166713e-01F, 8.889386058e-01F, 8.889605403e-01F, 8.889825344e-01F, 8.890044689e-01F, 8.890264034e-01F,
	8.890483379e-01F, 8.890702724e-01F, 8.890922666e-01F, 8.891142011e-01F, 8.891361356e-01F, 8.891580701e-01F, 8.891800046e-01F, 8.892019391e-01F,
	8.892238736e-01F, 8.892458081e-01F, 8.892677426e-01F, 8.892896175e-01F, 8.893115520e-01F, 8.893334866e-01F, 8.893554211e-01F, 8.893772960e-01F,
	8.893992305e-01F, 8.894211650e-01F, 8.894430399e-01F, 8.894649744e-01F, 8.894868493e-01F, 8.895087838e-01F, 8.895306587e-01F, 8.895525932e-01F,
	8.895744681e-01F, 8.895963430e-01F, 8.896182775e-01F, 8.896401525e-01F, 8.896620274e-01F, 8.896839619e-01F, 8.897058368e-01F, 8.897277117e-01F,
	8.897495866e-01F, 8.897714615e-01F, 8.897933364e-01F, 8.898152113e-01F, 8.898370862e-01F, 8.898589611e-01F, 8.898808360e-01F, 8.899027109e-01F,
	8.899245858e-01F, 8.899464011e-01F, 8.899682760e-01F, 8.899901509e-01F, 8.900120258e-01F, 8.900338411e-01F, 8.900557160e-01F, 8.900775909e-01F,
	8.900994062e-01F, 8.901212811e-01F, 8.901430964e-01F, 8.901649714e-01F, 8.901867867e-01F, 8.902086020e-01F, 8.902304769e-01F, 8.902522922e-01F,
	8.902741075e-01F, 8.902959824e-01F, 8.903177977e-01F, 8.903396130e-01F, 8.903614283e-01F, 8.903832436e-01F, 8.904050589e-01F, 8.904269338e-01F,
	8.904487491e-01F, 8.904705644e-01F, 8.904923201e-01F, 8.905141354e-01F, 8.905359507e-01F, 8.905577660e-01F, 8.905795813e-01F, 8.906013966e-01F,
	8.906231523e-01F, 8.906449676e-01F, 8.906667829e-01F, 8.906885386e-01F, 8.907103539e-01F, 8.907321692e-01F, 8.907539248e-01F, 8.907757401e-01F,
	8.907974958e-01F, 8.908193111e-01F, 8.908410668e-01F, 8.908628225e-01F, 8.908846378e-01F, 8.909063935e-01F, 8.909281492e-01F, 8.909499049e-01F,
	8.909717202e-01F, 8.909934759e-01F, 8.910152316e-01F, 8.910369873e-01F, 8.910587430e-01F, 8.910804987e-01F, 8.911022544e-01F, 8.911240101e-01F,
	8.911457658e-01F, 8.911675215e-01F, 8.911892772e-01F, 8.912110329e-01F, 8.912327290e-01F, 8.912544847e-01F, 8.912762403e-01F, 8.912979364e-01F,
	8.913196921e-01F, 8.913414478e-01F, 8.913631439e-01F, 8.913848996e-01F, 8.914065957e-01F, 8.914283514e-01F, 8.914500475e-01F, 8.914718032e-01F,
	8.914934993e-01F, 8.915151954e-01F, 8.915369511e-01F, 8.915586472e-01F, 8.915803432e-01F, 8.916020393e-01F, 8.916237354e-01F, 8.916454911e-01F,
	8.916671872e-01F, 8.916888833e-01F, 8.917105794e-01F, 8.917322755e-01F, 8.917539716e-01F, 8.917756677e-01F, 8.917973638e-01F, 8.918190002e-01F,
	8.918406963e-01F, 8.918623924e-01F, 8.918840885e-01F, 8.919057250e-01F, 8.919274211e-01F, 8.919491172e-01F, 8.919707537e-01F, 8.919924498e-01F,
	8.920141459e-01F, 8.920357823e-01F, 8.920574784e-01F, 8.920791149e-01F, 8.921007514e-01F, 8.921224475e-01F, 8.921440840e-01F, 8.921657205e-01F,
	8.921874166e-01F, 8.922090530e-01F, 8.922306895e-01F, 8.922523260e-01F, 8.922739625e-01F, 8.922955990e-01F, 8.923172951e-01F, 8.923389316e-01F,
	8.923605680e-01F, 8.923822045e-01F, 8.924037814e-01F, 8.924254179e-01F, 8.924470544e-01F, 8.924686909e-01F, 8.924903274e-01F, 8.925119638e-01F,
	8.925335407e-01F, 8.925551772e-01F, 8.925768137e-01F, 8.925983906e-01F, 8.926200271e-01F, 8.926416039e-01F, 8.926632404e-01F, 8.926848173e-01F,
	8.927064538e-01F, 8.927280307e-01F, 8.927496672e-01F, 8.927712440e-01F, 8.927928209e-01F, 8.928143978e-01F, 8.928360343e-01F, 8.928576112e-01F,
	8.928791881e-01F, 8.929007649e-01F, 8.929223418e-01F, 8.929439187e-01F, 8.929654956e-01F, 8.929870725e-01F, 8.930086493e-01F, 8.930302262e-01F,
	8.930518031e-01F, 8.930733800e-01F, 8.930949569e-01F, 8.931165338e-01F, 8.931380510e-01F, 8.931596279e-01F, 8.931812048e-01F, 8.932027221e-01F,
	8.932242990e-01F, 8.932458758e-01F, 8.932673931e-01F, 8.932889700e-01F, 8.933104873e-01F, 8.933320642e-01F, 8.933535814e-01F, 8.933750987e-01F,
	8.933966756e-01F, 8.934181929e-01F, 8.934397101e-01F, 8.934612870e-01F, 8.934828043e-01F, 8.935043216e-01F, 8.935258389e-01F, 8.935473561e-01F,
	8.935688734e-01F, 8.935903907e-01F, 8.936119080e-01F, 8.936334252e-01F, 8.936549425e-01F, 8.936764598e-01F, 8.936979771e-01F, 8.937194943e-01F,
	8.937409520e-01F, 8.937624693e-01F, 8.937839866e-01F, 8.938055038e-01F, 8.938269615e-01F, 8.938484788e-01F, 8.938699961e-01F, 8.938914537e-01F,
	8.939129710e-01F, 8.939344287e-01F, 8.939558864e-01F, 8.939774036e-01F, 8.939988613e-01F, 8.940203786e-01F, 8.940418363e-01F, 8.940632939e-01F,
	8.940847516e-01F, 8.941062689e-01F, 8.941277266e-01F, 8.941491842e-01F, 8.941706419e-01F, 8.941920996e-01F, 8.942135572e-01F, 8.942350149e-01F,
	8.942564726e-01F, 8.942779303e-01F, 8.942993879e-01F, 8.943208456e-01F, 8.943423033e-01F, 8.943637013e-01F, 8.943851590e-01F, 8.944066167e-01F,
	8.944280744e-01F, 8.944494724e-01F, 8.944709301e-01F, 8.944923282e-01F, 8.945137858e-01F, 8.945351839e-01F, 8.945566416e-01F, 8.945780396e-01F,
	8.945994973e-01F, 8.946208954e-01F, 8.946423531e-01F, 8.946637511e-01F, 8.946851492e-01F, 8.947065473e-01F, 8.947280049e-01F, 8.947494030e-01F,
	8.947708011e-01F, 8.947921991e-01F, 8.948135972e-01F, 8.948349953e-01F, 8.948563933e-01F, 8.948777914e-01F, 8.948991895e-01F, 8.949205875e-01F,
	8.949419856e-01F, 8.949633837e-01F, 8.949847221e-01F, 8.950061202e-01F, 8.950275183e-01F, 8.950488567e-01F, 8.950702548e-01F, 8.950916529e-01F,
	8.951129913e-01F, 8.951343894e-01F, 8.951557279e-01F, 8.951771259e-01F, 8.951984644e-01F, 8.952198625e-01F, 8.952412009e-01F, 8.952625394e-01F,
	8.952839375e-01F, 8.953052759e-01F, 8.953266144e-01F, 8.953479528e-01F, 8.953693509e-01F, 8.953906894e-01F, 8.954120278e-01F, 8.954333663e-01F,
	8.954547048e-01F, 8.954760432e-01F, 8.954973817e-01F, 8.955187201e-01F, 8.955400586e-01F, 8.955613971e-01F, 8.955826759e-01F, 8.956040144e-01F,
	8.956253529e-01F, 8.956466913e-01F, 8.956679702e-01F, 8.956893086e-01F, 8.957106471e-01F, 8.957319260e-01F, 8.957532644e-01F, 8.957745433e-01F,
	8.957958817e-01F, 8.958171606e-01F, 8.958384991e-01F, 8.958597779e-01F, 8.958810568e-01F, 8.959023952e-01F, 8.959236741e-01F, 8.959449530e-01F,
	8.959662318e-01F, 8.959875107e-01F, 8.960088491e-01F, 8.960301280e-01F, 8.960514069e-01F, 8.960726857e-01F, 8.960939646e-01F, 8.961152434e-01F,
	8.961365223e-01F, 8.961578012e-01F, 8.961790204e-01F, 8.962002993e-01F, 8.962215781e-01F, 8.962428570e-01F, 8.962640762e-01F, 8.962853551e-01F,
	8.963066339e-01F, 8.963278532e-01F, 8.963491321e-01F, 8.963704109e-01F, 8.963916302e-01F, 8.964129090e-01F, 8.964341283e-01F, 8.964553475e-01F,
	8.964766264e-01F, 8.964978456e-01F, 8.965190649e-01F, 8.965403438e-01F, 8.965615630e-01F, 8.965827823e-01F, 8.966040015e-01F, 8.966252208e-01F,
	8.966464996e-01F, 8.966677189e-01F, 8.966889381e-01F, 8.967101574e-01F, 8.967313766e-01F, 8.967525363e-01F, 8.967737556e-01F, 8.967949748e-01F,
	8.968161941e-01F, 8.968374133e-01F, 8.968586326e-01F, 8.968797922e-01F, 8.969010115e-01F, 8.969222307e-01F, 8.969433904e-01F, 8.969646096e-01F,
	8.969857693e-01F, 8.970069885e-01F, 8.970281482e-01F, 8.970493674e-01F, 8.970705271e-01F, 8.970917463e-01F, 8.971129060e-01F, 8.971340656e-01F,
	8.971552253e-01F, 8.971764445e-01F, 8.971976042e-01F, 8.972187638e-01F, 8.972399235e-01F, 8.972610831e-01F, 8.972822428e-01F, 8.973034024e-01F,
	8.973245621e-01F, 8.973457217e-01F, 8.973668814e-01F, 8.973880410e-01F, 8.974092007e-01F, 8.974303603e-01F, 8.974515200e-01F, 8.974726200e-01F,
	8.974937797e-01F, 8.975149393e-01F, 8.975360394e-01F, 8.975571990e-01F, 8.975782990e-01F, 8.975994587e-01F, 8.976206183e-01F, 8.976417184e-01F,
	8.976628184e-01F, 8.976839781e-01F, 8.977050781e-01F, 8.977262378e-01F, 8.977473378e-01F, 8.977684379e-01F, 8.977895379e-01F, 8.978106976e-01F,
	8.978317976e-01F, 8.978528976e-01F, 8.978739977e-01F, 8.978950977e-01F, 8.979161978e-01F, 8.979372978e-01F, 8.979583979e-01F, 8.979794979e-01F,
	8.980005980e-01F, 8.980216980e-01F, 8.980427384e-01F, 8.980638385e-01F, 8.980849385e-01F, 8.981060386e-01F, 8.981270790e-01F, 8.981481791e-01F,
	8.981692791e-01F, 8.981903195e-01F, 8.982114196e-01F, 8.982324600e-01F, 8.982535601e-01F, 8.982746005e-01F, 8.982956409e-01F, 8.983167410e-01F,
	8.983377814e-01F, 8.983588219e-01F, 8.983799219e-01F, 8.984009624e-01F, 8.984220028e-01F, 8.984430432e-01F, 8.984640837e-01F, 8.984851241e-01F,
	8.985061646e-01F, 8.985272050e-01F, 8.985482454e-01F, 8.985692859e-01F, 8.985903263e-01F, 8.986113667e-01F, 8.986324072e-01F, 8.986534476e-01F,
	8.986744881e-01F, 8.986954689e-01F, 8.987165093e-01F, 8.987375498e-01F, 8.987585306e-01F, 8.987795711e-01F, 8.988006115e-01F, 8.988215923e-01F,
	8.988426328e-01F, 8.988636136e-01F, 8.988845944e-01F, 8.989056349e-01F, 8.989266157e-01F, 8.989476562e-01F, 8.989686370e-01F, 8.989896178e-01F,
	8.990105987e-01F, 8.990315795e-01F, 8.990526199e-01F, 8.990736008e-01F, 8.990945816e-01F, 8.991155624e-01F, 8.991365433e-01F, 8.991575241e-01F,
	8.991785049e-01F, 8.991994858e-01F, 8.992204666e-01F, 8.992413878e-01F, 8.992623687e-01F, 8.992833495e-01F, 8.993043303e-01F, 8.993252516e-01F,
	8.993462324e-01F, 8.993672132e-01F, 8.993881345e-01F, 8.994091153e-01F, 8.994300365e-01F, 8.994510174e-01F, 8.994719386e-01F, 8.994929194e-01F,
	8.995138407e-01F, 8.995347619e-01F, 8.995557427e-01F, 8.995766640e-01F, 8.995975852e-01F, 8.996185660e-01F, 8.996394873e-01F, 8.996604085e-01F,
	8.996813297e-01F, 8.997022510e-01F, 8.997231722e-01F, 8.997440934e-01F, 8.997650146e-01F, 8.997859359e-01F, 8.998068571e-01F, 8.998277783e-01F,
	8.998486996e-01F, 8.998695612e-01F, 8.998904824e-01F, 8.999114037e-01F, 8.999323249e-01F, 8.999531865e-01F, 8.999741077e-01F, 8.999949694e-01F,
	9.000158906e-01F, 9.000368118e-01F, 9.000576735e-01F, 9.000785351e-01F, 9.000994563e-01F, 9.001203179e-01F, 9.001412392e-01F, 9.001621008e-01F,
	9.001829624e-01F, 9.002038240e-01F, 9.002247453e-01F, 9.002456069e-01F, 9.002664685e-01F, 9.002873302e-01F, 9.003081918e-01F, 9.003290534e-01F,
	9.003499150e-01F, 9.003707767e-01F, 9.003916383e-01F, 9.004124999e-01F, 9.004333615e-01F, 9.004542232e-01F, 9.004750252e-01F, 9.004958868e-01F,
	9.005167484e-01F, 9.005376101e-01F, 9.005584121e-01F, 9.005792737e-01F, 9.006000757e-01F, 9.006209373e-01F, 9.006417990e-01F, 9.006626010e-01F,
	9.006834030e-01F, 9.007042646e-01F, 9.007250667e-01F, 9.007459283e-01F, 9.007667303e-01F, 9.007875323e-01F, 9.008083344e-01F, 9.008291960e-01F,
	9.008499980e-01F, 9.008708000e-01F, 9.008916020e-01F, 9.009124041e-01F, 9.009332061e-01F, 9.009540081e-01F, 9.009748101e-01F, 9.009956121e-01F,
	9.010164142e-01F, 9.010372162e-01F, 9.010579586e-01F, 9.010787606e-01F, 9.010995626e-01F, 9.011203647e-01F, 9.011411071e-01F, 9.011619091e-01F,
	9.011827111e-01F, 9.012034535e-01F, 9.012242556e-01F, 9.012449980e-01F, 9.012658000e-01F, 9.012865424e-01F, 9.013073444e-01F, 9.013280869e-01F,
	9.013488293e-01F, 9.013696313e-01F, 9.013903737e-01F, 9.014111161e-01F, 9.014318585e-01F, 9.014526010e-01F, 9.014734030e-01F, 9.014941454e-01F,
	9.015148878e-01F, 9.015356302e-01F, 9.015563726e-01F, 9.015771151e-01F, 9.015978575e-01F, 9.016185403e-01F, 9.016392827e-01F, 9.016600251e-01F,
	9.016807675e-01F, 9.017015100e-01F, 9.017221928e-01F, 9.017429352e-01F, 9.017636776e-01F, 9.017843604e-01F, 9.018051028e-01F, 9.018257856e-01F,
	9.018465281e-01F, 9.018672109e-01F, 9.018879533e-01F, 9.019086361e-01F, 9.019293189e-01F, 9.019500613e-01F, 9.019707441e-01F, 9.019914269e-01F,
	9.020121694e-01F, 9.020328522e-01F, 9.020535350e-01F, 9.020742178e-01F, 9.020949006e-01F, 9.021155834e-01F, 9.021362662e-01F, 9.021569490e-01F,
	9.021776319e-01F, 9.021983147e-01F, 9.022189975e-01F, 9.022396803e-01F, 9.022603035e-01F, 9.022809863e-01F, 9.023016691e-01F, 9.023223519e-01F,
	9.023429751e-01F, 9.023636580e-01F, 9.023843408e-01F, 9.024049640e-01F, 9.024256468e-01F, 9.024462700e-01F, 9.024669528e-01F, 9.024875760e-01F,
	9.025081992e-01F, 9.025288820e-01F, 9.025495052e-01F, 9.025701284e-01F, 9.025908113e-01F, 9.026114345e-01F, 9.026320577e-01F, 9.026526809e-01F,
	9.026733041e-01F, 9.026939273e-01F, 9.027145505e-01F, 9.027351737e-01F, 9.027557969e-01F, 9.027764201e-01F, 9.027970433e-01F, 9.028176665e-01F,
	9.028382897e-01F, 9.028589129e-01F, 9.028794765e-01F, 9.029000998e-01F, 9.029207230e-01F, 9.029412866e-01F, 9.029619098e-01F, 9.029825330e-01F,
	9.030030966e-01F, 9.030237198e-01F, 9.030442834e-01F, 9.030649066e-01F, 9.030854702e-01F, 9.031060338e-01F, 9.031266570e-01F, 9.031472206e-01F,
	9.031677842e-01F, 9.031884074e-01F, 9.032089710e-01F, 9.032295346e-01F, 9.032500982e-01F, 9.032706618e-01F, 9.032912254e-01F, 9.033117890e-01F,
	9.033323526e-01F, 9.033529162e-01F, 9.033734798e-01F, 9.033940434e-01F, 9.034146070e-01F, 9.034351707e-01F, 9.034556746e-01F, 9.034762383e-01F,
	9.034968019e-01F, 9.035173655e-01F, 9.035378695e-01F, 9.035584331e-01F, 9.035789371e-01F, 9.035995007e-01F, 9.036200643e-01F, 9.036405683e-01F,
	9.036610723e-01F, 9.036816359e-01F, 9.037021399e-01F, 9.037227035e-01F, 9.037432075e-01F, 9.037637115e-01F, 9.037842155e-01F, 9.038047194e-01F,
	9.038252831e-01F, 9.038457870e-01F, 9.038662910e-01F, 9.038867950e-01F, 9.039072990e-01F, 9.039278030e-01F, 9.039483070e-01F, 9.039688110e-01F,
	9.039893150e-01F, 9.040097594e-01F, 9.040302634e-01F, 9.040507674e-01F, 9.040712714e-01F, 9.040917158e-01F, 9.041122198e-01F, 9.041327238e-01F,
	9.041531682e-01F, 9.041736722e-01F, 9.041941166e-01F, 9.042146206e-01F, 9.042350650e-01F, 9.042555690e-01F, 9.042760134e-01F, 9.042965174e-01F,
	9.043169618e-01F, 9.043374062e-01F, 9.043578506e-01F, 9.043783545e-01F, 9.043987989e-01F, 9.044192433e-01F, 9.044396877e-01F, 9.044601321e-01F,
	9.044805765e-01F, 9.045010209e-01F, 9.045214653e-01F, 9.045419097e-01F, 9.045623541e-01F, 9.045827985e-01F, 9.046032429e-01F, 9.046236873e-01F,
	9.046440721e-01F, 9.046645164e-01F, 9.046849608e-01F, 9.047053456e-01F, 9.047257900e-01F, 9.047462344e-01F, 9.047666192e-01F, 9.047870636e-01F,
	9.048074484e-01F, 9.048278928e-01F, 9.048482776e-01F, 9.048686624e-01F, 9.048891068e-01F, 9.049094915e-01F, 9.049298763e-01F, 9.049503207e-01F,
	9.049707055e-01F, 9.049910903e-01F, 9.050114751e-01F, 9.050318599e-01F, 9.050522447e-01F, 9.050726295e-01F, 9.050930142e-01F, 9.051133990e-01F,
	9.051337838e-01F, 9.051541686e-01F, 9.051745534e-01F, 9.051949382e-01F, 9.052152634e-01F, 9.052356482e-01F, 9.052560329e-01F, 9.052764177e-01F,
	9.052967429e-01F, 9.053171277e-01F, 9.053374529e-01F, 9.053578377e-01F, 9.053782225e-01F, 9.053985476e-01F, 9.054188728e-01F, 9.054392576e-01F,
	9.054595828e-01F, 9.054799676e-01F, 9.055002928e-01F, 9.055206180e-01F, 9.055409431e-01F, 9.055612683e-01F, 9.055816531e-01F, 9.056019783e-01F,
	9.056223035e-01F, 9.056426287e-01F, 9.056629539e-01F, 9.056832790e-01F, 9.057036042e-01F, 9.057239294e-01F, 9.057442546e-01F, 9.057645202e-01F,
	9.057848454e-01F, 9.058051705e-01F, 9.058254957e-01F, 9.058458209e-01F, 9.058660865e-01F, 9.058864117e-01F, 9.059066772e-01F, 9.059270024e-01F,
	9.059472680e-01F, 9.059675932e-01F, 9.059878588e-01F, 9.060081840e-01F, 9.060284495e-01F, 9.060487747e-01F, 9.060690403e-01F, 9.060893059e-01F,
	9.061095715e-01F, 9.061298966e-01F, 9.061501622e-01F, 9.061704278e-01F, 9.061906934e-01F, 9.062109590e-01F, 9.062312245e-01F, 9.062514901e-01F,
	9.062717557e-01F, 9.062920213e-01F, 9.063122869e-01F, 9.063325524e-01F, 9.063528180e-01F, 9.063730836e-01F, 9.063932896e-01F, 9.064135551e-01F,
	9.064338207e-01F, 9.064540267e-01F, 9.064742923e-01F, 9.064945579e-01F, 9.065147638e-01F, 9.065350294e-01F, 9.065552354e-01F, 9.065755010e-01F,
	9.065957069e-01F, 9.066159129e-01F, 9.066361785e-01F, 9.066563845e-01F, 9.066765904e-01F, 9.066967964e-01F, 9.067170620e-01F, 9.067372680e-01F,
	9.067574739e-01F, 9.067776799e-01F, 9.067978859e-01F, 9.068180919e-01F, 9.068382978e-01F, 9.068585038e-01F, 9.068787098e-01F, 9.068989158e-01F,
	9.069191217e-01F, 9.069393277e-01F, 9.069594741e-01F, 9.069796801e-01F, 9.069998860e-01F, 9.070200324e-01F, 9.070402384e-01F, 9.070604444e-01F,
	9.070805907e-01F, 9.071007967e-01F, 9.071209431e-01F, 9.071411490e-01F, 9.071612954e-01F, 9.071815014e-01F, 9.072016478e-01F, 9.072217941e-01F,
	9.072420001e-01F, 9.072621465e-01F, 9.072822928e-01F, 9.073024392e-01F, 9.073225856e-01F, 9.073427916e-01F, 9.073629379e-01F, 9.073830843e-01F,
	9.074032307e-01F, 9.074233770e-01F, 9.074435234e-01F, 9.074636698e-01F, 9.074837565e-01F, 9.075039029e-01F, 9.075240493e-01F, 9.075441957e-01F,
	9.075643420e-01F, 9.075844288e-01F, 9.076045752e-01F, 9.076247215e-01F, 9.076448083e-01F, 9.076649547e-01F, 9.076850414e-01F, 9.077051878e-01F,
	9.077252746e-01F, 9.077454209e-01F, 9.077655077e-01F, 9.077855945e-01F, 9.078057408e-01F, 9.078258276e-01F, 9.078459144e-01F, 9.078660011e-01F,
	9.078860879e-01F, 9.079062343e-01F, 9.079263210e-01F, 9.079464078e-01F, 9.079664946e-01F, 9.079865813e-01F, 9.080066681e-01F, 9.080267549e-01F,
	9.080468416e-01F, 9.080668688e-01F, 9.080869555e-01F, 9.081070423e-01F, 9.081271291e-01F, 9.081472158e-01F, 9.081672430e-01F, 9.081873298e-01F,
	9.082073569e-01F, 9.082274437e-01F, 9.082475305e-01F, 9.082675576e-01F, 9.082876444e-01F, 9.083076715e-01F, 9.083276987e-01F, 9.083477855e-01F,
	9.083678126e-01F, 9.083878398e-01F, 9.084079266e-01F, 9.084279537e-01F, 9.084479809e-01F, 9.084680080e-01F, 9.084880352e-01F, 9.085080624e-01F,
	9.085280895e-01F, 9.085481763e-01F, 9.085681438e-01F, 9.085881710e-01F, 9.086081982e-01F, 9.086282253e-01F, 9.086482525e-01F, 9.086682796e-01F,
	9.086883068e-01F, 9.087082744e-01F, 9.087283015e-01F, 9.087483287e-01F, 9.087682962e-01F, 9.087883234e-01F, 9.088083506e-01F, 9.088283181e-01F,
	9.088483453e-01F, 9.088683128e-01F, 9.088882804e-01F, 9.089083076e-01F, 9.089282751e-01F, 9.089482427e-01F, 9.089682698e-01F, 9.089882374e-01F,
	9.090082049e-01F, 9.090281725e-01F, 9.090481997e-01F, 9.090681672e-01F, 9.090881348e-01F, 9.091081023e-01F, 9.091280699e-01F, 9.091480374e-01F,
	9.091680050e-01F, 9.091879725e-01F, 9.092078805e-01F, 9.092278481e-01F, 9.092478156e-01F, 9.092677832e-01F, 9.092876911e-01F, 9.093076587e-01F,
	9.093276262e-01F, 9.093475342e-01F, 9.093675017e-01F, 9.093874693e-01F, 9.094073772e-01F, 9.094273448e-01F, 9.094472528e-01F, 9.094671607e-01F,
	9.094871283e-01F, 9.095070362e-01F, 9.095269442e-01F, 9.095469117e-01F, 9.095668197e-01F, 9.095867276e-01F, 9.096066356e-01F, 9.096265435e-01F,
	9.096464515e-01F, 9.096663594e-01F, 9.096863270e-01F, 9.097061753e-01F, 9.097260833e-01F, 9.097459912e-01F, 9.097658992e-01F, 9.097858071e-01F,
	9.098057151e-01F, 9.098256230e-01F, 9.098454714e-01F, 9.098653793e-01F, 9.098852873e-01F, 9.099051356e-01F, 9.099250436e-01F, 9.099449515e-01F,
	9.099647999e-01F, 9.099847078e-01F, 9.100045562e-01F, 9.100244045e-01F, 9.100443125e-01F, 9.100641608e-01F, 9.100840688e-01F, 9.101039171e-01F,
	9.101237655e-01F, 9.101436138e-01F, 9.101634622e-01F, 9.101833701e-01F, 9.102032185e-01F, 9.102230668e-01F, 9.102429152e-01F, 9.102627635e-01F,
	9.102826118e-01F, 9.103024602e-01F, 9.103223085e-01F, 9.103420973e-01F, 9.103619456e-01F, 9.103817940e-01F, 9.104016423e-01F, 9.104214907e-01F,
	9.104412794e-01F, 9.104611278e-01F, 9.104809165e-01F, 9.105007648e-01F, 9.105206132e-01F, 9.105404019e-01F, 9.105602503e-01F, 9.105800390e-01F,
	9.105998278e-01F, 9.106196761e-01F, 9.106394649e-01F, 9.106592536e-01F, 9.106791019e-01F, 9.106988907e-01F, 9.107186794e-01F, 9.107384682e-01F,
	9.107582569e-01F, 9.107780457e-01F, 9.107978940e-01F, 9.108176827e-01F, 9.108374715e-01F, 9.108572006e-01F, 9.108769894e-01F, 9.108967781e-01F,
	9.109165668e-01F, 9.109363556e-01F, 9.109561443e-01F, 9.109758735e-01F, 9.109956622e-01F, 9.110154510e-01F, 9.110351801e-01F, 9.110549688e-01F,
	9.110747576e-01F, 9.110944867e-01F, 9.111142755e-01F, 9.111340046e-01F, 9.111537933e-01F, 9.111735225e-01F, 9.111932516e-01F, 9.112130404e-01F,
	9.112327695e-01F, 9.112524986e-01F, 9.112722278e-01F, 9.112919569e-01F, 9.113117456e-01F, 9.113314748e-01F, 9.113512039e-01F, 9.113709331e-01F,
	9.113906622e-01F, 9.114103913e-01F, 9.114301205e-01F, 9.114498496e-01F, 9.114695191e-01F, 9.114892483e-01F, 9.115089774e-01F, 9.115287066e-01F,
	9.115484357e-01F, 9.115681052e-01F, 9.115878344e-01F, 9.116075039e-01F, 9.116272330e-01F, 9.116469622e-01F, 9.116666317e-01F, 9.116863608e-01F,
	9.117060304e-01F, 9.117256999e-01F, 9.117454290e-01F, 9.117650986e-01F, 9.117847681e-01F, 9.118044972e-01F, 9.118241668e-01F, 9.118438363e-01F,
	9.118635058e-01F, 9.118831754e-01F, 9.119028449e-01F, 9.119225740e-01F, 9.119422436e-01F, 9.119619131e-01F, 9.119815230e-01F, 9.120011926e-01F,
	9.120208621e-01F, 9.120405316e-01F, 9.120602012e-01F, 9.120798707e-01F, 9.120994806e-01F, 9.121191502e-01F, 9.121388197e-01F, 9.121584296e-01F,
	9.121780992e-01F, 9.121977687e-01F, 9.122173786e-01F, 9.122370481e-01F, 9.122566581e-01F, 9.122762680e-01F, 9.122959375e-01F, 9.123155475e-01F,
	9.123351574e-01F, 9.123548269e-01F, 9.123744369e-01F, 9.123940468e-01F, 9.124136567e-01F, 9.124332666e-01F, 9.124529362e-01F, 9.124725461e-01F,
	9.124921560e-01F, 9.125117660e-01F, 9.125313759e-01F, 9.125509858e-01F, 9.125705361e-01F, 9.125901461e-01F, 9.126097560e-01F, 9.126293659e-01F,
	9.126489758e-01F, 9.126685262e-01F, 9.126881361e-01F, 9.127077460e-01F, 9.127272964e-01F, 9.127469063e-01F, 9.127664566e-01F, 9.127860665e-01F,
	9.128056169e-01F, 9.128252268e-01F, 9.128447771e-01F, 9.128643870e-01F, 9.128839374e-01F, 9.129034877e-01F, 9.129230380e-01F, 9.129426479e-01F,
	9.129621983e-01F, 9.129817486e-01F, 9.130012989e-01F, 9.130208492e-01F, 9.130403996e-01F, 9.130599499e-01F, 9.130795002e-01F, 9.130990505e-01F,
	9.131186008e-01F, 9.131381512e-01F, 9.131577015e-01F, 9.131772518e-01F, 9.131967425e-01F, 9.132162929e-01F, 9.132358432e-01F, 9.132553339e-01F,
	9.132748842e-01F, 9.132944345e-01F, 9.133139253e-01F, 9.133334756e-01F, 9.133529663e-01F, 9.133725166e-01F, 9.133920074e-01F, 9.134114981e-01F,
	9.134310484e-01F, 9.134505391e-01F, 9.134700298e-01F, 9.134895802e-01F, 9.135090709e-01F, 9.135285616e-01F, 9.135480523e-01F, 9.135675430e-01F,
	9.135870337e-01F, 9.136065245e-01F, 9.136260152e-01F, 9.136455059e-01F, 9.136649966e-01F, 9.136844873e-01F, 9.137039781e-01F, 9.137234688e-01F,
	9.137428999e-01F, 9.137623906e-01F, 9.137818813e-01F, 9.138013721e-01F, 9.138208032e-01F, 9.138402939e-01F, 9.138597250e-01F, 9.138792157e-01F,
	9.138986468e-01F, 9.139181376e-01F, 9.139375687e-01F, 9.139570594e-01F, 9.139764905e-01F, 9.139959216e-01F, 9.140154123e-01F, 9.140348434e-01F,
	9.140542746e-01F, 9.140737057e-01F, 9.140931368e-01F, 9.141126275e-01F, 9.141320586e-01F, 9.141514897e-01F, 9.141709208e-01F, 9.141903520e-01F,
	9.142097831e-01F, 9.142291546e-01F, 9.142485857e-01F, 9.142680168e-01F, 9.142874479e-01F, 9.143068790e-01F, 9.143262506e-01F, 9.143456817e-01F,
	9.143651128e-01F, 9.143844843e-01F, 9.144039154e-01F, 9.144232869e-01F, 9.144427180e-01F, 9.144620895e-01F, 9.144815207e-01F, 9.145008922e-01F,
	9.145203233e-01F, 9.145396948e-01F, 9.145590663e-01F, 9.145784974e-01F, 9.145978689e-01F, 9.146172404e-01F, 9.146366119e-01F, 9.146559834e-01F,
	9.146753550e-01F, 9.146947265e-01F, 9.147140980e-01F, 9.147334695e-01F, 9.147528410e-01F, 9.147722125e-01F, 9.147915840e-01F, 9.148109555e-01F,
	9.148303270e-01F, 9.148496985e-01F, 9.148690104e-01F, 9.148883820e-01F, 9.149077535e-01F, 9.149270654e-01F, 9.149464369e-01F, 9.149657488e-01F,
	9.149851203e-01F, 9.150044322e-01F, 9.150238037e-01F, 9.150431156e-01F, 9.150624871e-01F, 9.150817990e-01F, 9.151011109e-01F, 9.151204824e-01F,
	9.151397943e-01F, 9.151591063e-01F, 9.151784182e-01F, 9.151977301e-01F, 9.152170420e-01F, 9.152363539e-01F, 9.152557254e-01F, 9.152750373e-01F,
	9.152942896e-01F, 9.153136015e-01F, 9.153329134e-01F, 9.153522253e-01F, 9.153715372e-01F, 9.153908491e-01F, 9.154101014e-01F, 9.154294133e-01F,
	9.154487252e-01F, 9.154679775e-01F, 9.154872894e-01F, 9.155066013e-01F, 9.155258536e-01F, 9.155451655e-01F, 9.155644178e-01F, 9.155837297e-01F,
	9.156029820e-01F, 9.156222343e-01F, 9.156415462e-01F, 9.156607985e-01F, 9.156800508e-01F, 9.156993032e-01F, 9.157186151e-01F, 9.157378674e-01F,
	9.157571197e-01F, 9.157763720e-01F, 9.157956243e-01F, 9.158148766e-01F, 9.158341289e-01F, 9.158533812e-01F, 9.158726335e-01F, 9.158918858e-01F,
	9.159110785e-01F, 9.159303308e-01F, 9.159495831e-01F, 9.159688354e-01F, 9.159880280e-01F, 9.160072803e-01F, 9.160265326e-01F, 9.160457253e-01F,
	9.160649776e-01F, 9.160841703e-01F, 9.161034226e-01F, 9.161226153e-01F, 9.161418676e-01F, 9.161610603e-01F, 9.161802530e-01F, 9.161995053e-01F,
	9.162186980e-01F, 9.162378907e-01F, 9.162570834e-01F, 9.162762761e-01F, 9.162955284e-01F, 9.163147211e-01F, 9.163339138e-01F, 9.163531065e-01F,
	9.163722992e-01F, 9.163914919e-01F, 9.164106846e-01F, 9.164298177e-01F, 9.164490104e-01F, 9.164682031e-01F, 9.164873958e-01F, 9.165065885e-01F,
	9.165257215e-01F, 9.165449142e-01F, 9.165641069e-01F, 9.165832400e-01F, 9.166024327e-01F, 9.166215658e-01F, 9.166407585e-01F, 9.166598916e-01F,
	9.166790843e-01F, 9.166982174e-01F, 9.167173505e-01F, 9.167365432e-01F, 9.167556763e-01F, 9.167748094e-01F, 9.167939425e-01F, 9.168131351e-01F,
	9.168322682e-01F, 9.168514013e-01F, 9.168705344e-01F, 9.168896675e-01F, 9.169088006e-01F, 9.169279337e-01F, 9.169470668e-01F, 9.169661999e-01F,
	9.169852734e-01F, 9.170044065e-01F, 9.170235395e-01F, 9.170426726e-01F, 9.170617461e-01F, 9.170808792e-01F, 9.171000123e-01F, 9.171190858e-01F,
	9.171382189e-01F, 9.171572924e-01F, 9.171764255e-01F, 9.171954989e-01F, 9.172146320e-01F, 9.172337055e-01F, 9.172528386e-01F, 9.172719121e-01F,
	9.172909856e-01F, 9.173100591e-01F, 9.173291922e-01F, 9.173482656e-01F, 9.173673391e-01F, 9.173864126e-01F, 9.174054861e-01F, 9.174245596e-01F,
	9.174436331e-01F, 9.174627066e-01F, 9.174817801e-01F, 9.175008535e-01F, 9.175199270e-01F, 9.175390005e-01F, 9.175580144e-01F, 9.175770879e-01F,
	9.175961614e-01F, 9.176152349e-01F, 9.176342487e-01F, 9.176533222e-01F, 9.176723361e-01F, 9.176914096e-01F, 9.177104235e-01F, 9.177294970e-01F,
	9.177485108e-01F, 9.177675843e-01F, 9.177865982e-01F, 9.178056121e-01F, 9.178246856e-01F, 9.178436995e-01F, 9.178627133e-01F, 9.178817272e-01F,
	9.179008007e-01F, 9.179198146e-01F, 9.179388285e-01F, 9.179578424e-01F, 9.179768562e-01F, 9.179958701e-01F, 9.180148840e-01F, 9.180338979e-01F,
	9.180529118e-01F, 9.180718660e-01F, 9.180908799e-01F, 9.181098938e-01F, 9.181289077e-01F, 9.181478620e-01F, 9.181668758e-01F, 9.181858897e-01F,
	9.182048440e-01F, 9.182238579e-01F, 9.182428122e-01F, 9.182618260e-01F, 9.182807803e-01F, 9.182997942e-01F, 9.183187485e-01F, 9.183377028e-01F,
	9.183567166e-01F, 9.183756709e-01F, 9.183946252e-01F, 9.184135795e-01F, 9.184325337e-01F, 9.184515476e-01F, 9.184705019e-01F, 9.184894562e-01F,
	9.185084105e-01F, 9.185273647e-01F, 9.185463190e-01F, 9.185652733e-01F, 9.185841680e-01F, 9.186031222e-01F, 9.186220765e-01F, 9.186410308e-01F,
	9.186599851e-01F, 9.186788797e-01F, 9.186978340e-01F, 9.187167883e-01F, 9.187356830e-01F, 9.187546372e-01F, 9.187735319e-01F, 9.187924862e-01F,
	9.188113809e-01F, 9.188303351e-01F, 9.188492298e-01F, 9.188681245e-01F, 9.188870788e-01F, 9.189059734e-01F, 9.189248681e-01F, 9.189437628e-01F,
	9.189627171e-01F, 9.189816117e-01F, 9.190005064e-01F, 9.190194011e-01F, 9.190382957e-01F, 9.190571904e-01F, 9.190760851e-01F, 9.190949798e-01F,
	9.191138744e-01F, 9.191327095e-01F, 9.191516042e-01F, 9.191704988e-01F, 9.191893935e-01F, 9.192082882e-01F, 9.192271233e-01F, 9.192460179e-01F,
	9.192648530e-01F, 9.192837477e-01F, 9.193026423e-01F, 9.193214774e-01F, 9.193403125e-01F, 9.193592072e-01F, 9.193780422e-01F, 9.193969369e-01F,
	9.194157720e-01F, 9.194346070e-01F, 9.194534421e-01F, 9.194723368e-01F, 9.194911718e-01F, 9.195100069e-01F, 9.195288420e-01F, 9.195476770e-01F,
	9.195665121e-01F, 9.195853472e-01F, 9.196041822e-01F, 9.196230173e-01F, 9.196418524e-01F, 9.196606874e-01F, 9.196795225e-01F, 9.196982980e-01F,
	9.197171330e-01F, 9.197359681e-01F, 9.197548032e-01F, 9.197735786e-01F, 9.197924137e-01F, 9.198111892e-01F, 9.198300242e-01F, 9.198487997e-01F,
	9.198676348e-01F, 9.198864102e-01F, 9.199052453e-01F, 9.199240208e-01F, 9.199427962e-01F, 9.199616313e-01F, 9.199804068e-01F, 9.199991822e-01F,
	9.200179577e-01F, 9.200367928e-01F, 9.200555682e-01F, 9.200743437e-01F, 9.200931191e-01F, 9.201118946e-01F, 9.201306701e-01F, 9.201494455e-01F,
	9.201682210e-01F, 9.201869369e-01F, 9.202057123e-01F, 9.202244878e-01F, 9.202432632e-01F, 9.202620387e-01F, 9.202807546e-01F, 9.202995300e-01F,
	9.203183055e-01F, 9.203370214e-01F, 9.203557968e-01F, 9.203745127e-01F, 9.203932881e-01F, 9.204120040e-01F, 9.204307199e-01F, 9.204494953e-01F,
	9.204682112e-01F, 9.204869270e-01F, 9.205057025e-01F, 9.205244184e-01F, 9.205431342e-01F, 9.205618501e-01F, 9.205805659e-01F, 9.205992818e-01F,
	9.206180573e-01F, 9.206367731e-01F, 9.206554890e-01F, 9.206741452e-01F, 9.206928611e-01F, 9.207115769e-01F, 9.207302928e-01F, 9.207490087e-01F,
	9.207677245e-01F, 9.207863808e-01F, 9.208050966e-01F, 9.208238125e-01F, 9.208424687e-01F, 9.208611846e-01F, 9.208798409e-01F, 9.208985567e-01F,
	9.209172130e-01F, 9.209359288e-01F, 9.209545851e-01F, 9.209733009e-01F, 9.209919572e-01F, 9.210106134e-01F, 9.210293293e-01F, 9.210479856e-01F,
	9.210666418e-01F, 9.210852981e-01F, 9.211039543e-01F, 9.211226106e-01F, 9.211412668e-01F, 9.211599231e-01F, 9.211785793e-01F, 9.211972356e-01F,
	9.212158918e-01F, 9.212345481e-01F, 9.212532043e-01F, 9.212718606e-01F, 9.212905169e-01F, 9.213091135e-01F, 9.213277698e-01F, 9.213464260e-01F,
	9.213650227e-01F, 9.213836789e-01F, 9.214022756e-01F, 9.214209318e-01F, 9.214395285e-01F, 9.214581847e-01F, 9.214767814e-01F, 9.214954376e-01F,
	9.215140343e-01F, 9.215326309e-01F, 9.215512872e-01F, 9.215698838e-01F, 9.215884805e-01F, 9.216070771e-01F, 9.216256738e-01F, 9.216442704e-01F,
	9.216629267e-01F, 9.216815233e-01F, 9.217001200e-01F, 9.217187166e-01F, 9.217372537e-01F, 9.217558503e-01F, 9.217744470e-01F, 9.217930436e-01F,
	9.218116403e-01F, 9.218301773e-01F, 9.218487740e-01F, 9.218673706e-01F, 9.218859076e-01F, 9.219045043e-01F, 9.219231009e-01F, 9.219416380e-01F,
	9.219602346e-01F, 9.219787717e-01F, 9.219973683e-01F, 9.220159054e-01F, 9.220344424e-01F, 9.220530391e-01F, 9.220715761e-01F, 9.220901132e-01F,
	9.221086502e-01F, 9.221271873e-01F, 9.221457839e-01F, 9.221643209e-01F, 9.221828580e-01F, 9.222013950e-01F, 9.222199321e-01F, 9.222384691e-01F,
	9.222570062e-01F, 9.222755432e-01F, 9.222940207e-01F, 9.223125577e-01F, 9.223310947e-01F, 9.223496318e-01F, 9.223681092e-01F, 9.223866463e-01F,
	9.224051833e-01F, 9.224236608e-01F, 9.224421978e-01F, 9.224606752e-01F, 9.224792123e-01F, 9.224976897e-01F, 9.225162268e-01F, 9.225347042e-01F,
	9.225532413e-01F, 9.225717187e-01F, 9.225901961e-01F, 9.226086736e-01F, 9.226272106e-01F, 9.226456881e-01F, 9.226641655e-01F, 9.226826429e-01F,
	9.227011204e-01F, 9.227195978e-01F, 9.227380753e-01F, 9.227565527e-01F, 9.227750301e-01F, 9.227935076e-01F, 9.228119850e-01F, 9.228304625e-01F,
	9.228488803e-01F, 9.228673577e-01F, 9.228858352e-01F, 9.229043126e-01F, 9.229227304e-01F, 9.229412079e-01F, 9.229596257e-01F, 9.229781032e-01F,
	9.229965210e-01F, 9.230149984e-01F, 9.230334163e-01F, 9.230518937e-01F, 9.230703115e-01F, 9.230887294e-01F, 9.231072068e-01F, 9.231256247e-01F,
	9.231440425e-01F, 9.231624603e-01F, 9.231808782e-01F, 9.231993556e-01F, 9.232177734e-01F, 9.232361913e-01F, 9.232546091e-01F, 9.232730269e-01F,
	9.232914448e-01F, 9.233098030e-01F, 9.233282208e-01F, 9.233466387e-01F, 9.233650565e-01F, 9.233834743e-01F, 9.234018326e-01F, 9.234202504e-01F,
	9.234386683e-01F, 9.234570265e-01F, 9.234754443e-01F, 9.234938025e-01F, 9.235122204e-01F, 9.235305786e-01F, 9.235489964e-01F, 9.235673547e-01F,
	9.235857725e-01F, 9.236041307e-01F, 9.236224890e-01F, 9.236408472e-01F, 9.236592650e-01F, 9.236776233e-01F, 9.236959815e-01F, 9.237143397e-01F,
	9.237326980e-01F, 9.237510562e-01F, 9.237694144e-01F, 9.237877727e-01F, 9.238061309e-01F, 9.238244891e-01F, 9.238428473e-01F, 9.238612056e-01F,
	9.238795042e-01F, 9.238978624e-01F, 9.239162207e-01F, 9.239345789e-01F, 9.239528775e-01F, 9.239712358e-01F, 9.239895344e-01F, 9.240078926e-01F,
	9.240262508e-01F, 9.240445495e-01F, 9.240628481e-01F, 9.240812063e-01F, 9.240995049e-01F, 9.241178632e-01F, 9.241361618e-01F, 9.241544604e-01F,
	9.241727591e-01F, 9.241910577e-01F, 9.242094159e-01F, 9.242277145e-01F, 9.242460132e-01F, 9.242643118e-01F, 9.242826104e-01F, 9.243009090e-01F,
	9.243192077e-01F, 9.243375063e-01F, 9.243558049e-01F, 9.243740439e-01F, 9.243923426e-01F, 9.244106412e-01F, 9.244289398e-01F, 9.244471788e-01F,
	9.244654775e-01F, 9.244837761e-01F, 9.245020151e-01F, 9.245203137e-01F, 9.245385528e-01F, 9.245568514e-01F, 9.245750904e-01F, 9.245933294e-01F,
	9.246116281e-01F, 9.246298671e-01F, 9.246481061e-01F, 9.246664047e-01F, 9.246846437e-01F, 9.247028828e-01F, 9.247211218e-01F, 9.247393608e-01F,
	9.247575998e-01F, 9.247758985e-01F, 9.247941375e-01F, 9.248123765e-01F, 9.248305559e-01F, 9.248487949e-01F, 9.248670340e-01F, 9.248852730e-01F,
	9.249035120e-01F, 9.249217510e-01F, 9.249399304e-01F, 9.249581695e-01F, 9.249764085e-01F, 9.249945879e-01F, 9.250128269e-01F, 9.250310063e-01F,
	9.250492454e-01F, 9.250674248e-01F, 9.250856638e-01F, 9.251038432e-01F, 9.251220822e-01F, 9.251402617e-01F, 9.251584411e-01F, 9.251766205e-01F,
	9.251948595e-01F, 9.252130389e-01F, 9.252312183e-01F, 9.252493978e-01F, 9.252675772e-01F, 9.252857566e-01F, 9.253039360e-01F, 9.253221154e-01F,
	9.253402948e-01F, 9.253584743e-01F, 9.253766537e-01F, 9.253948331e-01F, 9.254130125e-01F, 9.254311323e-01F, 9.254493117e-01F, 9.254674911e-01F,
	9.254856110e-01F, 9.255037904e-01F, 9.255219698e-01F, 9.255400896e-01F, 9.255582690e-01F, 9.255763888e-01F, 9.255945683e-01F, 9.256126881e-01F,
	9.256308079e-01F, 9.256489873e-01F, 9.256671071e-01F, 9.256852269e-01F, 9.257033467e-01F, 9.257215261e-01F, 9.257396460e-01F, 9.257577658e-01F,
	9.257758856e-01F, 9.257940054e-01F, 9.258121252e-01F, 9.258302450e-01F, 9.258483648e-01F, 9.258664846e-01F, 9.258846045e-01F, 9.259027243e-01F,
	9.259207845e-01F, 9.259389043e-01F, 9.259570241e-01F, 9.259751439e-01F, 9.259932041e-01F, 9.260113239e-01F, 9.260293841e-01F, 9.260475039e-01F,
	9.260655642e-01F, 9.260836840e-01F, 9.261017442e-01F, 9.261198640e-01F, 9.261379242e-01F, 9.261560440e-01F, 9.261741042e-01F, 9.261921644e-01F,
	9.262102246e-01F, 9.262282848e-01F, 9.262464046e-01F, 9.262644649e-01F, 9.262825251e-01F, 9.263005853e-01F, 9.263186455e-01F, 9.263367057e-01F,
	9.263547659e-01F, 9.263728261e-01F, 9.263908863e-01F, 9.264088869e-01F, 9.264269471e-01F, 9.264450073e-01F, 9.264630675e-01F, 9.264810681e-01F,
	9.264991283e-01F, 9.265171885e-01F, 9.265351892e-01F, 9.265532494e-01F, 9.265712500e-01F, 9.265893102e-01F, 9.266073108e-01F, 9.266253710e-01F,
	9.266433716e-01F, 9.266613722e-01F, 9.266794324e-01F, 9.266974330e-01F, 9.267154336e-01F, 9.267334342e-01F, 9.267514348e-01F, 9.267694950e-01F,
	9.267874956e-01F, 9.268054962e-01F, 9.268234968e-01F, 9.268414974e-01F, 9.268594980e-01F, 9.268774986e-01F, 9.268954396e-01F, 9.269134402e-01F,
	9.269314408e-01F, 9.269494414e-01F, 9.269673824e-01F, 9.269853830e-01F, 9.270033836e-01F, 9.270213246e-01F, 9.270393252e-01F, 9.270573258e-01F,
	9.270752668e-01F, 9.270932674e-01F, 9.271112084e-01F, 9.271291494e-01F, 9.271471500e-01F, 9.271650910e-01F, 9.271830320e-01F, 9.272010326e-01F,
	9.272189736e-01F, 9.272369146e-01F, 9.272548556e-01F, 9.272727966e-01F, 9.272907376e-01F, 9.273086786e-01F, 9.273266196e-01F, 9.273445606e-01F,
	9.273625016e-01F, 9.273804426e-01F, 9.273983836e-01F, 9.274163246e-01F, 9.274342656e-01F, 9.274522066e-01F, 9.274700880e-01F, 9.274880290e-01F,
	9.275059700e-01F, 9.275238514e-01F, 9.275417924e-01F, 9.275596738e-01F, 9.275776148e-01F, 9.275954962e-01F, 9.276134372e-01F, 9.276313186e-01F,
	9.276492596e-01F, 9.276671410e-01F, 9.276850224e-01F, 9.277029037e-01F, 9.277208447e-01F, 9.277387261e-01F, 9.277566075e-01F, 9.277744889e-01F,
	9.277923703e-01F, 9.278102517e-01F, 9.278281331e-01F, 9.278460145e-01F, 9.278638959e-01F, 9.278817773e-01F, 9.278996587e-01F, 9.279175401e-01F,
	9.279354215e-01F, 9.279532433e-01F, 9.279711246e-01F, 9.279890060e-01F, 9.280068278e-01F, 9.280247092e-01F, 9.280425906e-01F, 9.280604124e-01F,
	9.280782938e-01F, 9.280961156e-01F, 9.281139970e-01F, 9.281318188e-01F, 9.281496406e-01F, 9.281675220e-01F, 9.281853437e-01F, 9.282031655e-01F,
	9.282209873e-01F, 9.282388687e-01F, 9.282566905e-01F, 9.282745123e-01F, 9.282923341e-01F, 9.283101559e-01F, 9.283279777e-01F, 9.283457994e-01F,
	9.283636212e-01F, 9.283814430e-01F, 9.283992648e-01F, 9.284170270e-01F, 9.284348488e-01F, 9.284526706e-01F, 9.284704924e-01F, 9.284882545e-01F,
	9.285060763e-01F, 9.285238981e-01F, 9.285416603e-01F, 9.285594821e-01F, 9.285772443e-01F, 9.285950661e-01F, 9.286128283e-01F, 9.286306500e-01F,
	9.286484122e-01F, 9.286661744e-01F, 9.286839962e-01F, 9.287017584e-01F, 9.287195206e-01F, 9.287372828e-01F, 9.287550449e-01F, 9.287728667e-01F,
	9.287906289e-01F, 9.288083911e-01F, 9.288261533e-01F, 9.288439155e-01F, 9.288616776e-01F, 9.288793802e-01F, 9.288971424e-01F, 9.289149046e-01F,
	9.289326668e-01F, 9.289504290e-01F, 9.289681315e-01F, 9.289858937e-01F, 9.290036559e-01F, 9.290213585e-01F, 9.290391207e-01F, 9.290568233e-01F,
	9.290745854e-01F, 9.290922880e-01F, 9.291100502e-01F, 9.291277528e-01F, 9.291455150e-01F, 9.291632175e-01F, 9.291809201e-01F, 9.291986227e-01F,
	9.292163849e-01F, 9.292340875e-01F, 9.292517900e-01F, 9.292694926e-01F, 9.292871952e-01F, 9.293048978e-01F, 9.293226004e-01F, 9.293403029e-01F,
	9.293580055e-01F, 9.293757081e-01F, 9.293934107e-01F, 9.294111133e-01F, 9.294287562e-01F, 9.294464588e-01F, 9.294641614e-01F, 9.294818640e-01F,
	9.294995070e-01F, 9.295172095e-01F, 9.295348525e-01F, 9.295525551e-01F, 9.295701981e-01F, 9.295879006e-01F, 9.296055436e-01F, 9.296232462e-01F,
	9.296408892e-01F, 9.296585321e-01F, 9.296762347e-01F, 9.296938777e-01F, 9.297115207e-01F, 9.297291636e-01F, 9.297468066e-01F, 9.297645092e-01F,
	9.297821522e-01F, 9.297997952e-01F, 9.298174381e-01F, 9.298350811e-01F, 9.298527241e-01F, 9.298703074e-01F, 9.298879504e-01F, 9.299055934e-01F,
	9.299232364e-01F, 9.299408793e-01F, 9.299584627e-01F, 9.299761057e-01F, 9.299937487e-01F, 9.300113320e-01F, 9.300289750e-01F, 9.300465584e-01F,
	9.300642014e-01F, 9.300817847e-01F, 9.300994277e-01F, 9.301170111e-01F, 9.301346540e-01F, 9.301522374e-01F, 9.301698208e-01F, 9.301874042e-01F,
	9.302050471e-01F, 9.302226305e-01F, 9.302402139e-01F, 9.302577972e-01F, 9.302753806e-01F, 9.302929640e-01F, 9.303105474e-01F, 9.303281307e-01F,
	9.303457141e-01F, 9.303632975e-01F, 9.303808808e-01F, 9.303984642e-01F, 9.304159880e-01F, 9.304335713e-01F, 9.304511547e-01F, 9.304686785e-01F,
	9.304862618e-01F, 9.305038452e-01F, 9.305213690e-01F, 9.305389524e-01F, 9.305564761e-01F, 9.305740595e-01F, 9.305915833e-01F, 9.306091666e-01F,
	9.306266904e-01F, 9.306442142e-01F, 9.306617379e-01F, 9.306793213e-01F, 9.306968451e-01F, 9.307143688e-01F, 9.307318926e-01F, 9.307494164e-01F,
	9.307669401e-01F, 9.307844639e-01F, 9.308019876e-01F, 9.308195114e-01F, 9.308370352e-01F, 9.308545589e-01F, 9.308720827e-01F, 9.308896065e-01F,
	9.309071302e-01F, 9.309245944e-01F, 9.309421182e-01F, 9.309596419e-01F, 9.309771061e-01F, 9.309946299e-01F, 9.310120940e-01F, 9.310296178e-01F,
	9.310470819e-01F, 9.310646057e-01F, 9.310820699e-01F, 9.310995936e-01F, 9.311170578e-01F, 9.311345220e-01F, 9.311520457e-01F, 9.311695099e-01F,
	9.311869740e-01F, 9.312044382e-01F, 9.312219024e-01F, 9.312393665e-01F, 9.312568307e-01F, 9.312743545e-01F, 9.312918186e-01F, 9.313092232e-01F,
	9.313266873e-01F, 9.313441515e-01F, 9.313616157e-01F, 9.313790798e-01F, 9.313965440e-01F, 9.314139485e-01F, 9.314314127e-01F, 9.314488769e-01F,
	9.314662814e-01F, 9.314837456e-01F, 9.315012097e-01F, 9.315186143e-01F, 9.315360785e-01F, 9.315534830e-01F, 9.315708876e-01F, 9.315883517e-01F,
	9.316057563e-01F, 9.316231608e-01F, 9.316406250e-01F, 9.316580296e-01F, 9.316754341e-01F, 9.316928387e-01F, 9.317102432e-01F, 9.317276478e-01F,
	9.317450523e-01F, 9.317625165e-01F, 9.317798615e-01F, 9.317972660e-01F, 9.318146706e-01F, 9.318320751e-01F, 9.318494797e-01F, 9.318668842e-01F,
	9.318842888e-01F, 9.319016337e-01F, 9.319190383e-01F, 9.319364429e-01F, 9.319537878e-01F, 9.319711924e-01F, 9.319885373e-01F, 9.320059419e-01F,
	9.320232868e-01F, 9.320406914e-01F, 9.320580363e-01F, 9.320754409e-01F, 9.320927858e-01F, 9.321101308e-01F, 9.321275353e-01F, 9.321448803e-01F,
	9.321622252e-01F, 9.321795702e-01F, 9.321969151e-01F, 9.322142601e-01F, 9.322316051e-01F, 9.322489500e-01F, 9.322662950e-01F, 9.322836399e-01F,
	9.323009849e-01F, 9.323183298e-01F, 9.323356748e-01F, 9.323530197e-01F, 9.323703051e-01F, 9.323876500e-01F, 9.324049950e-01F, 9.324222803e-01F,
	9.324396253e-01F, 9.324569702e-01F, 9.324742556e-01F, 9.324916005e-01F, 9.325088859e-01F, 9.325262308e-01F, 9.325435162e-01F, 9.325608015e-01F,
	9.325781465e-01F, 9.325954318e-01F, 9.326127172e-01F, 9.326300025e-01F, 9.326473475e-01F, 9.326646328e-01F, 9.326819181e-01F, 9.326992035e-01F,
	9.327164888e-01F, 9.327337742e-01F, 9.327510595e-01F, 9.327683449e-01F, 9.327856302e-01F, 9.328029156e-01F, 9.328201413e-01F, 9.328374267e-01F,
	9.328547120e-01F, 9.328719974e-01F, 9.328892231e-01F, 9.329065084e-01F, 9.329237938e-01F, 9.329410195e-01F, 9.329583049e-01F, 9.329755306e-01F,
	9.329928160e-01F, 9.330100417e-01F, 9.330273271e-01F, 9.330445528e-01F, 9.330617785e-01F, 9.330790043e-01F, 9.330962896e-01F, 9.331135154e-01F,
	9.331307411e-01F, 9.331479669e-01F, 9.331651926e-01F, 9.331824183e-01F, 9.331996441e-01F, 9.332168698e-01F, 9.332340956e-01F, 9.332513213e-01F,
	9.332685471e-01F, 9.332857728e-01F, 9.333029985e-01F, 9.333202243e-01F, 9.333373904e-01F, 9.333546162e-01F, 9.333718419e-01F, 9.333890080e-01F,
	9.334062338e-01F, 9.334234595e-01F, 9.334406257e-01F, 9.334578514e-01F, 9.334750175e-01F, 9.334921837e-01F, 9.335094094e-01F, 9.335265756e-01F,
	9.335438013e-01F, 9.335609674e-01F, 9.335781336e-01F, 9.335952997e-01F, 9.336124659e-01F, 9.336296916e-01F, 9.336468577e-01F, 9.336640239e-01F,
	9.336811900e-01F, 9.336983562e-01F, 9.337155223e-01F, 9.337326884e-01F, 9.337497950e-01F, 9.337669611e-01F, 9.337841272e-01F, 9.338012934e-01F,
	9.338184595e-01F, 9.338355660e-01F, 9.338527322e-01F, 9.338698983e-01F, 9.338870049e-01F, 9.339041710e-01F, 9.339212775e-01F, 9.339384437e-01F,
	9.339555502e-01F, 9.339727163e-01F, 9.339898229e-01F, 9.340069294e-01F, 9.340240955e-01F, 9.340412021e-01F, 9.340583086e-01F, 9.340754151e-01F,
	9.340925217e-01F, 9.341096878e-01F, 9.341267943e-01F, 9.341439009e-01F, 9.341610074e-01F, 9.341781139e-01F, 9.341952205e-01F, 9.342123270e-01F,
	9.342293739e-01F, 9.342464805e-01F, 9.342635870e-01F, 9.342806935e-01F, 9.342978001e-01F, 9.343148470e-01F, 9.343319535e-01F, 9.343490601e-01F,
	9.343661070e-01F, 9.343832135e-01F, 9.344002604e-01F, 9.344173670e-01F, 9.344344139e-01F, 9.344515204e-01F, 9.344685674e-01F, 9.344856143e-01F,
	9.345027208e-01F, 9.345197678e-01F, 9.345368147e-01F, 9.345538616e-01F, 9.345709085e-01F, 9.345879555e-01F, 9.346050620e-01F, 9.346221089e-01F,
	9.346391559e-01F, 9.346562028e-01F, 9.346731901e-01F, 9.346902370e-01F, 9.347072840e-01F, 9.347243309e-01F, 9.347413778e-01F, 9.347584248e-01F,
	9.347754121e-01F, 9.347924590e-01F, 9.348095059e-01F, 9.348264933e-01F, 9.348435402e-01F, 9.348605275e-01F, 9.348775744e-01F, 9.348945618e-01F,
	9.349116087e-01F, 9.349285960e-01F, 9.349456429e-01F, 9.349626303e-01F, 9.349796176e-01F, 9.349966049e-01F, 9.350136518e-01F, 9.350306392e-01F,
	9.350476265e-01F, 9.350646138e-01F, 9.350816011e-01F, 9.350985885e-01F, 9.351155758e-01F, 9.351325631e-01F, 9.351495504e-01F, 9.351665378e-01F,
	9.351835251e-01F, 9.352005124e-01F, 9.352174401e-01F, 9.352344275e-01F, 9.352514148e-01F, 9.352683425e-01F, 9.352853298e-01F, 9.353023171e-01F,
	9.353192449e-01F, 9.353362322e-01F, 9.353531599e-01F, 9.353701472e-01F, 9.353870749e-01F, 9.354040623e-01F, 9.354209900e-01F, 9.354379177e-01F,
	9.354548454e-01F, 9.354718328e-01F, 9.354887605e-01F, 9.355056882e-01F, 9.355226159e-01F, 9.355395436e-01F, 9.355564713e-01F, 9.355733991e-01F,
	9.355903268e-01F, 9.356072545e-01F, 9.356241822e-01F, 9.356411099e-01F, 9.356580377e-01F, 9.356749654e-01F, 9.356918931e-01F, 9.357087612e-01F,
	9.357256889e-01F, 9.357426167e-01F, 9.357594848e-01F, 9.357764125e-01F, 9.357932806e-01F, 9.358102083e-01F, 9.358270764e-01F, 9.358440042e-01F,
	9.358608723e-01F, 9.358778000e-01F, 9.358946681e-01F, 9.359115362e-01F, 9.359284639e-01F, 9.359453321e-01F, 9.359622002e-01F, 9.359790683e-01F,
	9.359959364e-01F, 9.360128045e-01F, 9.360296726e-01F, 9.360465407e-01F, 9.360634089e-01F, 9.360802770e-01F, 9.360971451e-01F, 9.361140132e-01F,
	9.361308813e-01F, 9.361477494e-01F, 9.361646175e-01F, 9.361814260e-01F, 9.361982942e-01F, 9.362151623e-01F, 9.362319708e-01F, 9.362488389e-01F,
	9.362656474e-01F, 9.362825155e-01F, 9.362993240e-01F, 9.363161922e-01F, 9.363330007e-01F, 9.363498688e-01F, 9.363666773e-01F, 9.363834858e-01F,
	9.364002943e-01F, 9.364171624e-01F, 9.364339709e-01F, 9.364507794e-01F, 9.364675879e-01F, 9.364843965e-01F, 9.365012050e-01F, 9.365180135e-01F,
	9.365348220e-01F, 9.365516305e-01F, 9.365684390e-01F, 9.365852475e-01F, 9.366020560e-01F, 9.366188049e-01F, 9.366356134e-01F, 9.366524220e-01F,
	9.366692305e-01F, 9.366859794e-01F, 9.367027879e-01F, 9.367195368e-01F, 9.367363453e-01F, 9.367530942e-01F, 9.367699027e-01F, 9.367866516e-01F,
	9.368034601e-01F, 9.368202090e-01F, 9.368369579e-01F, 9.368537664e-01F, 9.368705153e-01F, 9.368872643e-01F, 9.369040132e-01F, 9.369207621e-01F,
	9.369375706e-01F, 9.369543195e-01F, 9.369710684e-01F, 9.369878173e-01F, 9.370045662e-01F, 9.370212555e-01F, 9.370380044e-01F, 9.370547533e-01F,
	9.370715022e-01F, 9.370882511e-01F, 9.371050000e-01F, 9.371216893e-01F, 9.371384382e-01F, 9.371551871e-01F, 9.371718764e-01F, 9.371886253e-01F,
	9.372053146e-01F, 9.372220635e-01F, 9.372387528e-01F, 9.372555017e-01F, 9.372721910e-01F, 9.372888803e-01F, 9.373056293e-01F, 9.373223186e-01F,
	9.373390079e-01F, 9.373556972e-01F, 9.373723865e-01F, 9.373891354e-01F, 9.374058247e-01F, 9.374225140e-01F, 9.374392033e-01F, 9.374558926e-01F,
	9.374725819e-01F, 9.374892712e-01F, 9.375059009e-01F, 9.375225902e-01F, 9.375392795e-01F, 9.375559688e-01F, 9.375726581e-01F, 9.375892878e-01F,
	9.376059771e-01F, 9.376226068e-01F, 9.376392961e-01F, 9.376559854e-01F, 9.376726151e-01F, 9.376893044e-01F, 9.377059340e-01F, 9.377225637e-01F,
	9.377392530e-01F, 9.377558827e-01F, 9.377725124e-01F, 9.377892017e-01F, 9.378058314e-01F, 9.378224611e-01F, 9.378390908e-01F, 9.378557205e-01F,
	9.378723502e-01F, 9.378889799e-01F, 9.379056096e-01F, 9.379222393e-01F, 9.379388690e-01F, 9.379554987e-01F, 9.379721284e-01F, 9.379887581e-01F,
	9.380053878e-01F, 9.380219579e-01F, 9.380385876e-01F, 9.380552173e-01F, 9.380718470e-01F, 9.380884171e-01F, 9.381050467e-01F, 9.381216168e-01F,
	9.381382465e-01F, 9.381548166e-01F, 9.381714463e-01F, 9.381880164e-01F, 9.382045865e-01F, 9.382212162e-01F, 9.382377863e-01F, 9.382543564e-01F,
	9.382709265e-01F, 9.382875562e-01F, 9.383041263e-01F, 9.383206964e-01F, 9.383372664e-01F, 9.383538365e-01F, 9.383704066e-01F, 9.383869767e-01F,
	9.384035468e-01F, 9.384201169e-01F, 9.384366870e-01F, 9.384531975e-01F, 9.384697676e-01F, 9.384863377e-01F, 9.385029078e-01F, 9.385194182e-01F,
	9.385359883e-01F, 9.385524988e-01F, 9.385690689e-01F, 9.385856390e-01F, 9.386021495e-01F, 9.386186600e-01F, 9.386352301e-01F, 9.386517406e-01F,
	9.386683106e-01F, 9.386848211e-01F, 9.387013316e-01F, 9.387178421e-01F, 9.387344122e-01F, 9.387509227e-01F, 9.387674332e-01F, 9.387839437e-01F,
	9.388004541e-01F, 9.388169646e-01F, 9.388334751e-01F, 9.388499856e-01F, 9.388664961e-01F, 9.388830066e-01F, 9.388995171e-01F, 9.389159679e-01F,
	9.389324784e-01F, 9.389489889e-01F, 9.389654398e-01F, 9.389819503e-01F, 9.389984608e-01F, 9.390149117e-01F, 9.390314221e-01F, 9.390478730e-01F,
	9.390643835e-01F, 9.390808344e-01F, 9.390973449e-01F, 9.391137958e-01F, 9.391302466e-01F, 9.391467571e-01F, 9.391632080e-01F, 9.391796589e-01F,
	9.391961098e-01F, 9.392125607e-01F, 9.392290711e-01F, 9.392455220e-01F, 9.392619729e-01F, 9.392784238e-01F, 9.392948747e-01F, 9.393113256e-01F,
	9.393277168e-01F, 9.393441677e-01F, 9.393606186e-01F, 9.393770695e-01F, 9.393935204e-01F, 9.394099116e-01F, 9.394263625e-01F, 9.394428134e-01F,
	9.394592047e-01F, 9.394756556e-01F, 9.394920468e-01F, 9.395084977e-01F, 9.395248890e-01F, 9.395413399e-01F, 9.395577312e-01F, 9.395741820e-01F,
	9.395905733e-01F, 9.396069646e-01F, 9.396233559e-01F, 9.396398067e-01F, 9.396561980e-01F, 9.396725893e-01F, 9.396889806e-01F, 9.397053719e-01F,
	9.397217631e-01F, 9.397381544e-01F, 9.397545457e-01F, 9.397709370e-01F, 9.397873282e-01F, 9.398037195e-01F, 9.398200512e-01F, 9.398364425e-01F,
	9.398528337e-01F, 9.398692250e-01F, 9.398855567e-01F, 9.399019480e-01F, 9.399182796e-01F, 9.399346709e-01F, 9.399510622e-01F, 9.399673939e-01F,
	9.399837255e-01F, 9.400001168e-01F, 9.400164485e-01F, 9.400328398e-01F, 9.400491714e-01F, 9.400655031e-01F, 9.400818348e-01F, 9.400982261e-01F,
	9.401145577e-01F, 9.401308894e-01F, 9.401472211e-01F, 9.401635528e-01F, 9.401798844e-01F, 9.401962161e-01F, 9.402125478e-01F, 9.402288795e-01F,
	9.402452111e-01F, 9.402614832e-01F, 9.402778149e-01F, 9.402941465e-01F, 9.403104782e-01F, 9.403267503e-01F, 9.403430820e-01F, 9.403594136e-01F,
	9.403756857e-01F, 9.403920174e-01F, 9.404082894e-01F, 9.404246211e-01F, 9.404408932e-01F, 9.404572248e-01F, 9.404734969e-01F, 9.404897690e-01F,
	9.405060410e-01F, 9.405223727e-01F, 9.405386448e-01F, 9.405549169e-01F, 9.405711889e-01F, 9.405874610e-01F, 9.406037331e-01F, 9.406200051e-01F,
	9.406362772e-01F, 9.406525493e-01F, 9.406688213e-01F, 9.406850934e-01F, 9.407013655e-01F, 9.407176375e-01F, 9.407339096e-01F, 9.407501221e-01F,
	9.407663941e-01F, 9.407826662e-01F, 9.407988787e-01F, 9.408151507e-01F, 9.408314228e-01F, 9.408476353e-01F, 9.408639073e-01F, 9.408801198e-01F,
	9.408963323e-01F, 9.409126043e-01F, 9.409288168e-01F, 9.409450293e-01F, 9.409613013e-01F, 9.409775138e-01F, 9.409937263e-01F, 9.410099387e-01F,
	9.410261512e-01F, 9.410423636e-01F, 9.410586357e-01F, 9.410748482e-01F, 9.410910606e-01F, 9.411072135e-01F, 9.411234260e-01F, 9.411396384e-01F,
	9.411558509e-01F, 9.411720634e-01F, 9.411882758e-01F, 9.412044287e-01F, 9.412206411e-01F, 9.412368536e-01F, 9.412530065e-01F, 9.412692189e-01F,
	9.412853718e-01F, 9.413015842e-01F, 9.413177371e-01F, 9.413339496e-01F, 9.413501024e-01F, 9.413663149e-01F, 9.413824677e-01F, 9.413986206e-01F,
	9.414147735e-01F, 9.414309859e-01F, 9.414471388e-01F, 9.414632916e-01F, 9.414794445e-01F, 9.414955974e-01F, 9.415117502e-01F, 9.415279031e-01F,
	9.415440559e-01F, 9.415602088e-01F, 9.415763617e-01F, 9.415925145e-01F, 9.416086674e-01F, 9.416247606e-01F, 9.416409135e-01F, 9.416570663e-01F,
	9.416732192e-01F, 9.416893125e-01F, 9.417054653e-01F, 9.417215586e-01F, 9.417377114e-01F, 9.417538047e-01F, 9.417699575e-01F, 9.417860508e-01F,
	9.418022037e-01F, 9.418182969e-01F, 9.418343902e-01F, 9.418505430e-01F, 9.418666363e-01F, 9.418827295e-01F, 9.418988228e-01F, 9.419149160e-01F,
	9.419310093e-01F, 9.419471025e-01F, 9.419631958e-01F, 9.419792891e-01F, 9.419953823e-01F, 9.420114756e-01F, 9.420275688e-01F, 9.420436621e-01F,
	9.420597553e-01F, 9.420758486e-01F, 9.420918822e-01F, 9.421079755e-01F, 9.421240687e-01F, 9.421401024e-01F, 9.421561956e-01F, 9.421722293e-01F,
	9.421883225e-01F, 9.422043562e-01F, 9.422204494e-01F, 9.422364831e-01F, 9.422525167e-01F, 9.422686100e-01F, 9.422846437e-01F, 9.423006773e-01F,
	9.423167706e-01F, 9.423328042e-01F, 9.423488379e-01F, 9.423648715e-01F, 9.423809052e-01F, 9.423969388e-01F, 9.424129725e-01F, 9.424290061e-01F,
	9.424450397e-01F, 9.424610734e-01F, 9.424771070e-01F, 9.424931407e-01F, 9.425091147e-01F, 9.425251484e-01F, 9.425411820e-01F, 9.425571561e-01F,
	9.425731897e-01F, 9.425892234e-01F, 9.426051974e-01F, 9.426212311e-01F, 9.426372051e-01F, 9.426532388e-01F, 9.426692128e-01F, 9.426852465e-01F,
	9.427012205e-01F, 9.427171946e-01F, 9.427331686e-01F, 9.427492023e-01F, 9.427651763e-01F, 9.427811503e-01F, 9.427971244e-01F, 9.428130984e-01F,
	9.428290725e-01F, 9.428450465e-01F, 9.428610206e-01F, 9.428769946e-01F, 9.428929687e-01F, 9.429089427e-01F, 9.429249167e-01F, 9.429408908e-01F,
	9.429568648e-01F, 9.429727793e-01F, 9.429887533e-01F, 9.430047274e-01F, 9.430206418e-01F, 9.430366158e-01F, 9.430525303e-01F, 9.430685043e-01F,
	9.430844188e-01F, 9.431003928e-01F, 9.431163073e-01F, 9.431322813e-01F, 9.431481957e-01F, 9.431641102e-01F, 9.431800246e-01F, 9.431959987e-01F,
	9.432119131e-01F, 9.432278275e-01F, 9.432437420e-01F, 9.432596564e-01F, 9.432755709e-01F, 9.432914853e-01F, 9.433073997e-01F, 9.433233142e-01F,
	9.433392286e-01F, 9.433551431e-01F, 9.433710575e-01F, 9.433869123e-01F, 9.434028268e-01F, 9.434187412e-01F, 9.434346557e-01F, 9.434505105e-01F,
	9.434664249e-01F, 9.434822798e-01F, 9.434981942e-01F, 9.435140491e-01F, 9.435299635e-01F, 9.435458183e-01F, 9.435617328e-01F, 9.435775876e-01F,
	9.435934424e-01F, 9.436093569e-01F, 9.436252117e-01F, 9.436410666e-01F, 9.436569214e-01F, 9.436727762e-01F, 9.436886311e-01F, 9.437044859e-01F,
	9.437203407e-01F, 9.437361956e-01F, 9.437520504e-01F, 9.437679052e-01F, 9.437837601e-01F, 9.437996149e-01F, 9.438154697e-01F, 9.438313246e-01F,
	9.438471198e-01F, 9.438629746e-01F, 9.438788295e-01F, 9.438946247e-01F, 9.439104795e-01F, 9.439262748e-01F, 9.439421296e-01F, 9.439579248e-01F,
	9.439737797e-01F, 9.439895749e-01F, 9.440054297e-01F, 9.440212250e-01F, 9.440370202e-01F, 9.440528154e-01F, 9.440686703e-01F, 9.440844655e-01F,
	9.441002607e-01F, 9.441160560e-01F, 9.441318512e-01F, 9.441476464e-01F, 9.441634417e-01F, 9.441792369e-01F, 9.441950321e-01F, 9.442108274e-01F,
	9.442266226e-01F, 9.442424178e-01F, 9.442581534e-01F, 9.442739487e-01F, 9.442897439e-01F, 9.443055391e-01F, 9.443212748e-01F, 9.443370700e-01F,
	9.443528056e-01F, 9.443686008e-01F, 9.443843365e-01F, 9.444001317e-01F, 9.444158673e-01F, 9.444316626e-01F, 9.444473982e-01F, 9.444631338e-01F,
	9.444789290e-01F, 9.444946647e-01F, 9.445104003e-01F, 9.445261359e-01F, 9.445418715e-01F, 9.445576072e-01F, 9.445733428e-01F, 9.445890784e-01F,
	9.446048141e-01F, 9.446205497e-01F, 9.446362853e-01F, 9.446520209e-01F, 9.446677566e-01F, 9.446834922e-01F, 9.446992278e-01F, 9.447149038e-01F,
	9.447306395e-01F, 9.447463751e-01F, 9.447620511e-01F, 9.447777867e-01F, 9.447934628e-01F, 9.448091984e-01F, 9.448248744e-01F, 9.448406100e-01F,
	9.448562860e-01F, 9.448719621e-01F, 9.448876977e-01F, 9.449033737e-01F, 9.449190497e-01F, 9.449347854e-01F, 9.449504614e-01F, 9.449661374e-01F,
	9.449818134e-01F, 9.449974895e-01F, 9.450131655e-01F, 9.450288415e-01F, 9.450445175e-01F, 9.450601935e-01F, 9.450758696e-01F, 9.450915456e-01F,
	9.451072216e-01F, 9.451228380e-01F, 9.451385140e-01F, 9.451541901e-01F, 9.451698065e-01F, 9.451854825e-01F, 9.452011585e-01F, 9.452167749e-01F,
	9.452324510e-01F, 9.452480674e-01F, 9.452637434e-01F, 9.452793598e-01F, 9.452949762e-01F, 9.453106523e-01F, 9.453262687e-01F, 9.453418851e-01F,
	9.453575611e-01F, 9.453731775e-01F, 9.453887939e-01F, 9.454044104e-01F, 9.454200268e-01F, 9.454356432e-01F, 9.454512596e-01F, 9.454668760e-01F,
	9.454824924e-01F, 9.454981089e-01F, 9.455137253e-01F, 9.455293417e-01F, 9.455449581e-01F, 9.455605149e-01F, 9.455761313e-01F, 9.455917478e-01F,
	9.456073046e-01F, 9.456229210e-01F, 9.456385374e-01F, 9.456540942e-01F, 9.456697106e-01F, 9.456852674e-01F, 9.457008243e-01F, 9.457164407e-01F,
	9.457319975e-01F, 9.457476139e-01F, 9.457631707e-01F, 9.457787275e-01F, 9.457942843e-01F, 9.458098412e-01F, 9.458254576e-01F, 9.458410144e-01F,
	9.458565712e-01F, 9.458721280e-01F, 9.458876848e-01F, 9.459032416e-01F, 9.459187984e-01F, 9.459343553e-01F, 9.459498525e-01F, 9.459654093e-01F,
	9.459809661e-01F, 9.459965229e-01F, 9.460120201e-01F, 9.460275769e-01F, 9.460431337e-01F, 9.460586309e-01F, 9.460741878e-01F, 9.460896850e-01F,
	9.461052418e-01F, 9.461207390e-01F, 9.461362958e-01F, 9.461517930e-01F, 9.461672902e-01F, 9.461828470e-01F, 9.461983442e-01F, 9.462138414e-01F,
	9.462293386e-01F, 9.462448955e-01F, 9.462603927e-01F, 9.462758899e-01F, 9.462913871e-01F, 9.463068843e-01F, 9.463223815e-01F, 9.463378787e-01F,
	9.463533759e-01F, 9.463688135e-01F, 9.463843107e-01F, 9.463998079e-01F, 9.464153051e-01F, 9.464308023e-01F, 9.464462399e-01F, 9.464617372e-01F,
	9.464771748e-01F, 9.464926720e-01F, 9.465081692e-01F, 9.465236068e-01F, 9.465391040e-01F, 9.465545416e-01F, 9.465699792e-01F, 9.465854764e-01F,
	9.466009140e-01F, 9.466163516e-01F, 9.466318488e-01F, 9.466472864e-01F, 9.466627240e-01F, 9.466781616e-01F, 9.466935992e-01F, 9.467090368e-01F,
	9.467244744e-01F, 9.467399120e-01F, 9.467553496e-01F, 9.467707872e-01F, 9.467862248e-01F, 9.468016624e-01F, 9.468171000e-01F, 9.468324780e-01F,
	9.468479156e-01F, 9.468633533e-01F, 9.468787313e-01F, 9.468941689e-01F, 9.469096065e-01F, 9.469249845e-01F, 9.469404221e-01F, 9.469558001e-01F,
	9.469712377e-01F, 9.469866157e-01F, 9.470019937e-01F, 9.470174313e-01F, 9.470328093e-01F, 9.470481873e-01F, 9.470635653e-01F, 9.470790029e-01F,
	9.470943809e-01F, 9.471097589e-01F, 9.471251369e-01F, 9.471405149e-01F, 9.471558928e-01F, 9.471712708e-01F, 9.471866488e-01F, 9.472020268e-01F,
	9.472174048e-01F, 9.472327232e-01F, 9.472481012e-01F, 9.472634792e-01F, 9.472788572e-01F, 9.472941756e-01F, 9.473095536e-01F, 9.473249316e-01F,
	9.473402500e-01F, 9.473556280e-01F, 9.473709464e-01F, 9.473863244e-01F, 9.474016428e-01F, 9.474169612e-01F, 9.474323392e-01F, 9.474476576e-01F,
	9.474629760e-01F, 9.474783540e-01F, 9.474936724e-01F, 9.475089908e-01F, 9.475243092e-01F, 9.475396276e-01F, 9.475549459e-01F, 9.475702643e-01F,
	9.475855827e-01F, 9.476009011e-01F, 9.476162195e-01F, 9.476315379e-01F, 9.476468563e-01F, 9.476621151e-01F, 9.476774335e-01F, 9.476927519e-01F,
	9.477080703e-01F, 9.477233291e-01F, 9.477386475e-01F, 9.477539062e-01F, 9.477692246e-01F, 9.477845430e-01F, 9.477998018e-01F, 9.478150606e-01F,
	9.478303790e-01F, 9.478456378e-01F, 9.478608966e-01F, 9.478762150e-01F, 9.478914738e-01F, 9.479067326e-01F, 9.479219913e-01F, 9.479373097e-01F,
	9.479525685e-01F, 9.479678273e-01F, 9.479830861e-01F, 9.479983449e-01F, 9.480136037e-01F, 9.480288625e-01F, 9.480440617e-01F, 9.480593204e-01F,
	9.480745792e-01F, 9.480898380e-01F, 9.481050968e-01F, 9.481202960e-01F, 9.481355548e-01F, 9.481508136e-01F, 9.481660128e-01F, 9.481812716e-01F,
	9.481964707e-01F, 9.482117295e-01F, 9.482269287e-01F, 9.482421875e-01F, 9.482573867e-01F, 9.482725859e-01F, 9.482878447e-01F, 9.483030438e-01F,
	9.483182430e-01F, 9.483334422e-01F, 9.483486414e-01F, 9.483639002e-01F, 9.483790994e-01F, 9.483942986e-01F, 9.484094977e-01F, 9.484246969e-01F,
	9.484398961e-01F, 9.484550357e-01F, 9.484702349e-01F, 9.484854341e-01F, 9.485006332e-01F, 9.485158324e-01F, 9.485309720e-01F, 9.485461712e-01F,
	9.485613704e-01F, 9.485765100e-01F, 9.485917091e-01F, 9.486068487e-01F, 9.486220479e-01F, 9.486371875e-01F, 9.486523867e-01F, 9.486675262e-01F,
	9.486826658e-01F, 9.486978650e-01F, 9.487130046e-01F, 9.487281442e-01F, 9.487432837e-01F, 9.487584829e-01F, 9.487736225e-01F, 9.487887621e-01F,
	9.488039017e-01F, 9.488190413e-01F, 9.488341808e-01F, 9.488493204e-01F, 9.488644600e-01F, 9.488795996e-01F, 9.488946795e-01F, 9.489098191e-01F,
	9.489249587e-01F, 9.489400983e-01F, 9.489551783e-01F, 9.489703178e-01F, 9.489854574e-01F, 9.490005374e-01F, 9.490156770e-01F, 9.490307570e-01F,
	9.490458965e-01F, 9.490609765e-01F, 9.490761161e-01F, 9.490911961e-01F, 9.491062760e-01F, 9.491214156e-01F, 9.491364956e-01F, 9.491515756e-01F,
	9.491666555e-01F, 9.491817355e-01F, 9.491968155e-01F, 9.492118955e-01F, 9.492270350e-01F, 9.492420554e-01F, 9.492571354e-01F, 9.492722154e-01F,
	9.492872953e-01F, 9.493023753e-01F, 9.493174553e-01F, 9.493325353e-01F, 9.493475556e-01F, 9.493626356e-01F, 9.493777156e-01F, 9.493927360e-01F,
	9.494078159e-01F, 9.494228959e-01F, 9.494379163e-01F, 9.494529963e-01F, 9.494680166e-01F, 9.494830370e-01F, 9.494981170e-01F, 9.495131373e-01F,
	9.495281577e-01F, 9.495432377e-01F, 9.495582581e-01F, 9.495732784e-01F, 9.495882988e-01F, 9.496033192e-01F, 9.496183395e-01F, 9.496333599e-01F,
	9.496483803e-01F, 9.496634007e-01F, 9.496784210e-01F, 9.496934414e-01F, 9.497084618e-01F, 9.497234821e-01F, 9.497385025e-01F, 9.497534633e-01F,
	9.497684836e-01F, 9.497835040e-01F, 9.497984648e-01F, 9.498134851e-01F, 9.498285055e-01F, 9.498434663e-01F, 9.498584867e-01F, 9.498734474e-01F,
	9.498884678e-01F, 9.499034286e-01F, 9.499183893e-01F, 9.499334097e-01F, 9.499483705e-01F, 9.499633312e-01F, 9.499782920e-01F, 9.499932528e-01F,
	9.500082731e-01F, 9.500232339e-01F, 9.500381947e-01F, 9.500531554e-01F, 9.500681162e-01F, 9.500830770e-01F, 9.500980377e-01F, 9.501129389e-01F,
	9.501278996e-01F, 9.501428604e-01F, 9.501578212e-01F, 9.501727223e-01F, 9.501876831e-01F, 9.502026439e-01F, 9.502175450e-01F, 9.502325058e-01F,
	9.502474666e-01F, 9.502623677e-01F, 9.502773285e-01F, 9.502922297e-01F, 9.503071308e-01F, 9.503220916e-01F, 9.503369927e-01F, 9.503518939e-01F,
	9.503668547e-01F, 9.503817558e-01F, 9.503966570e-01F, 9.504115582e-01F, 9.504264593e-01F, 9.504413605e-01F, 9.504562616e-01F, 9.504711628e-01F,
	9.504860640e-01F, 9.505009651e-01F, 9.505158663e-01F, 9.505307674e-01F, 9.505456686e-01F, 9.505605102e-01F, 9.505754113e-01F, 9.505903125e-01F,
	9.506051540e-01F, 9.506200552e-01F, 9.506349564e-01F, 9.506497979e-01F, 9.506646991e-01F, 9.506795406e-01F, 9.506944418e-01F, 9.507092834e-01F,
	9.507241249e-01F, 9.507390261e-01F, 9.507538676e-01F, 9.507687092e-01F, 9.507836103e-01F, 9.507984519e-01F, 9.508132935e-01F, 9.508281350e-01F,
	9.508429766e-01F, 9.508578181e-01F, 9.508726597e-01F, 9.508875012e-01F, 9.509023428e-01F, 9.509171844e-01F, 9.509320259e-01F, 9.509468675e-01F,
	9.509616494e-01F, 9.509764910e-01F, 9.509913325e-01F, 9.510061145e-01F, 9.510209560e-01F, 9.510357976e-01F, 9.510505795e-01F, 9.510654211e-01F,
	9.510802031e-01F, 9.510950446e-01F, 9.511098266e-01F, 9.511246085e-01F, 9.511394501e-01F, 9.511542320e-01F, 9.511690140e-01F, 9.511838555e-01F,
	9.511986375e-01F, 9.512134194e-01F, 9.512282014e-01F, 9.512429833e-01F, 9.512577653e-01F, 9.512725472e-01F, 9.512873292e-01F, 9.513021111e-01F,
	9.513168931e-01F, 9.513316751e-01F, 9.513464570e-01F, 9.513611794e-01F, 9.513759613e-01F, 9.513907433e-01F, 9.514055252e-01F, 9.514202476e-01F,
	9.514350295e-01F, 9.514497519e-01F, 9.514645338e-01F, 9.514792562e-01F, 9.514940381e-01F, 9.515087605e-01F, 9.515235424e-01F, 9.515382648e-01F,
	9.515529871e-01F, 9.515677691e-01F, 9.515824914e-01F, 9.515972137e-01F, 9.516119361e-01F, 9.516266584e-01F, 9.516413808e-01F, 9.516561627e-01F,
	9.516708851e-01F, 9.516856074e-01F, 9.517002702e-01F, 9.517149925e-01F, 9.517297149e-01F, 9.517444372e-01F, 9.517591596e-01F, 9.517738819e-01F,
	9.517885447e-01F, 9.518032670e-01F, 9.518179893e-01F, 9.518326521e-01F, 9.518473744e-01F, 9.518620372e-01F, 9.518767595e-01F, 9.518914223e-01F,
	9.519061446e-01F, 9.519208074e-01F, 9.519355297e-01F, 9.519501925e-01F, 9.519648552e-01F, 9.519795179e-01F, 9.519942403e-01F, 9.520089030e-01F,
	9.520235658e-01F, 9.520382285e-01F, 9.520528913e-01F, 9.520675540e-01F, 9.520822167e-01F, 9.520968795e-01F, 9.521115422e-01F, 9.521262050e-01F,
	9.521408677e-01F, 9.521555305e-01F, 9.521701336e-01F, 9.521847963e-01F, 9.521994591e-01F, 9.522140622e-01F, 9.522287250e-01F, 9.522433877e-01F,
	9.522579908e-01F, 9.522726536e-01F, 9.522872567e-01F, 9.523019195e-01F, 9.523165226e-01F, 9.523311257e-01F, 9.523457885e-01F, 9.523603916e-01F,
	9.523749948e-01F, 9.523896575e-01F, 9.524042606e-01F, 9.524188638e-01F, 9.524334669e-01F, 9.524480700e-01F, 9.524626732e-01F, 9.524772763e-01F,
	9.524918795e-01F, 9.525064826e-01F, 9.525210857e-01F, 9.525356889e-01F, 9.525502920e-01F, 9.525648355e-01F, 9.525794387e-01F, 9.525940418e-01F,
	9.526085854e-01F, 9.526231885e-01F, 9.526377916e-01F, 9.526523352e-01F, 9.526669383e-01F, 9.526814818e-01F, 9.526960850e-01F, 9.527106285e-01F,
	9.527251720e-01F, 9.527397752e-01F, 9.527543187e-01F, 9.527688622e-01F, 9.527834654e-01F, 9.527980089e-01F, 9.528125525e-01F, 9.528270960e-01F,
	9.528416395e-01F, 9.528561831e-01F, 9.528707266e-01F, 9.528852701e-01F, 9.528998137e-01F, 9.529143572e-01F, 9.529289007e-01F, 9.529434443e-01F,
	9.529579282e-01F, 9.529724717e-01F, 9.529870152e-01F, 9.530015588e-01F, 9.530160427e-01F, 9.530305862e-01F, 9.530450702e-01F, 9.530596137e-01F,
	9.530740976e-01F, 9.530886412e-01F, 9.531031251e-01F, 9.531176686e-01F, 9.531321526e-01F, 9.531466365e-01F, 9.531611800e-01F, 9.531756639e-01F,
	9.531901479e-01F, 9.532046318e-01F, 9.532191157e-01F, 9.532335997e-01F, 9.532481432e-01F, 9.532626271e-01F, 9.532771111e-01F, 9.532915354e-01F,
	9.533060193e-01F, 9.533205032e-01F, 9.533349872e-01F, 9.533494711e-01F, 9.533639550e-01F, 9.533783793e-01F, 9.533928633e-01F, 9.534073472e-01F,
	9.534217715e-01F, 9.534362555e-01F, 9.534506798e-01F, 9.534651637e-01F, 9.534795880e-01F, 9.534940720e-01F, 9.535084963e-01F, 9.535229802e-01F,
	9.535374045e-01F, 9.535518289e-01F, 9.535662532e-01F, 9.535807371e-01F, 9.535951614e-01F, 9.536095858e-01F, 9.536240101e-01F, 9.536384344e-01F,
	9.536528587e-01F, 9.536672831e-01F, 9.536817074e-01F, 9.536961317e-01F, 9.537105560e-01F, 9.537249804e-01F, 9.537393451e-01F, 9.537537694e-01F,
	9.537681937e-01F, 9.537826180e-01F, 9.537969828e-01F, 9.538114071e-01F, 9.538257718e-01F, 9.538401961e-01F, 9.538546205e-01F, 9.538689852e-01F,
	9.538833499e-01F, 9.538977742e-01F, 9.539121389e-01F, 9.539265633e-01F, 9.539409280e-01F, 9.539552927e-01F, 9.539696574e-01F, 9.539840221e-01F,
	9.539984465e-01F, 9.540128112e-01F, 9.540271759e-01F, 9.540415406e-01F, 9.540559053e-01F, 9.540702701e-01F, 9.540846348e-01F, 9.540989995e-01F,
	9.541133046e-01F, 9.541276693e-01F, 9.541420341e-01F, 9.541563988e-01F, 9.541707039e-01F, 9.541850686e-01F, 9.541994333e-01F, 9.542137384e-01F,
	9.542281032e-01F, 9.542424083e-01F, 9.542567730e-01F, 9.542710781e-01F, 9.542854428e-01F, 9.542997479e-01F, 9.543140531e-01F, 9.543284178e-01F,
	9.543427229e-01F, 9.543570280e-01F, 9.543713331e-01F, 9.543856978e-01F, 9.544000030e-01F, 9.544143081e-01F, 9.544286132e-01F, 9.544429183e-01F,
	9.544572234e-01F, 9.544715285e-01F, 9.544858336e-01F, 9.545000792e-01F, 9.545143843e-01F, 9.545286894e-01F, 9.545429945e-01F, 9.545572400e-01F,
	9.545715451e-01F, 9.545858502e-01F, 9.546000957e-01F, 9.546144009e-01F, 9.546286464e-01F, 9.546429515e-01F, 9.546571970e-01F, 9.546715021e-01F,
	9.546857476e-01F, 9.546999931e-01F, 9.547142982e-01F, 9.547285438e-01F, 9.547427893e-01F, 9.547570348e-01F, 9.547713399e-01F, 9.547855854e-01F,
	9.547998309e-01F, 9.548140764e-01F, 9.548283219e-01F, 9.548425674e-01F, 9.548568130e-01F, 9.548710585e-01F, 9.548853040e-01F, 9.548994899e-01F,
	9.549137354e-01F, 9.549279809e-01F, 9.549422264e-01F, 9.549564123e-01F, 9.549706578e-01F, 9.549848437e-01F, 9.549990892e-01F, 9.550133348e-01F,
	9.550275207e-01F, 9.550417662e-01F, 9.550559521e-01F, 9.550701380e-01F, 9.550843835e-01F, 9.550985694e-01F, 9.551127553e-01F, 9.551269412e-01F,
	9.551411867e-01F, 9.551553726e-01F, 9.551695585e-01F, 9.551837444e-01F, 9.551979303e-01F, 9.552121162e-01F, 9.552263021e-01F, 9.552404881e-01F,
	9.552546740e-01F, 9.552688599e-01F, 9.552830458e-01F, 9.552971721e-01F, 9.553113580e-01F, 9.553255439e-01F, 9.553397298e-01F, 9.553538561e-01F,
	9.553680420e-01F, 9.553821683e-01F, 9.553963542e-01F, 9.554104805e-01F, 9.554246664e-01F, 9.554387927e-01F, 9.554529786e-01F, 9.554671049e-01F,
	9.554812312e-01F, 9.554954171e-01F, 9.555095434e-01F, 9.555236697e-01F, 9.555377960e-01F, 9.555519223e-01F, 9.555660486e-01F, 9.555802345e-01F,
	9.555943608e-01F, 9.556084871e-01F, 9.556225538e-01F, 9.556366801e-01F, 9.556508064e-01F, 9.556649327e-01F, 9.556790590e-01F, 9.556931853e-01F,
	9.557072520e-01F, 9.557213783e-01F, 9.557355046e-01F, 9.557495713e-01F, 9.557636976e-01F, 9.557777643e-01F, 9.557918906e-01F, 9.558059573e-01F,
	9.558200836e-01F, 9.558341503e-01F, 9.558482766e-01F, 9.558623433e-01F, 9.558764100e-01F, 9.558904767e-01F, 9.559046030e-01F, 9.559186697e-01F,
	9.559327364e-01F, 9.559468031e-01F, 9.559608698e-01F, 9.559749365e-01F, 9.559890032e-01F, 9.560030699e-01F, 9.560171366e-01F, 9.560312033e-01F,
	9.560452700e-01F, 9.560592771e-01F, 9.560733438e-01F, 9.560874104e-01F, 9.561014771e-01F, 9.561154842e-01F, 9.561295509e-01F, 9.561436176e-01F,
	9.561576247e-01F, 9.561716914e-01F, 9.561856985e-01F, 9.561997056e-01F, 9.562137723e-01F, 9.562277794e-01F, 9.562418461e-01F, 9.562558532e-01F,
	9.562698603e-01F, 9.562838674e-01F, 9.562978745e-01F, 9.563119411e-01F, 9.563259482e-01F, 9.563399553e-01F, 9.563539624e-01F, 9.563679695e-01F,
	9.563819766e-01F, 9.563959837e-01F, 9.564099908e-01F, 9.564239383e-01F, 9.564379454e-01F, 9.564519525e-01F, 9.564659595e-01F, 9.564799070e-01F,
	9.564939141e-01F, 9.565079212e-01F, 9.565218687e-01F, 9.565358758e-01F, 9.565498233e-01F, 9.565638304e-01F, 9.565777779e-01F, 9.565917850e-01F,
	9.566057324e-01F, 9.566196799e-01F, 9.566336870e-01F, 9.566476345e-01F, 9.566615820e-01F, 9.566755295e-01F, 9.566894770e-01F, 9.567034841e-01F,
	9.567174315e-01F, 9.567313790e-01F, 9.567453265e-01F, 9.567592740e-01F, 9.567732215e-01F, 9.567871094e-01F, 9.568010569e-01F, 9.568150043e-01F,
	9.568289518e-01F, 9.568428993e-01F, 9.568567872e-01F, 9.568707347e-01F, 9.568846822e-01F, 9.568985701e-01F, 9.569125175e-01F, 9.569264054e-01F,
	9.569403529e-01F, 9.569542408e-01F, 9.569681883e-01F, 9.569820762e-01F, 9.569959641e-01F, 9.570099115e-01F, 9.570237994e-01F, 9.570376873e-01F,
	9.570515752e-01F, 9.570654631e-01F, 9.570793509e-01F, 9.570932984e-01F, 9.571071863e-01F, 9.571210742e-01F, 9.571349621e-01F, 9.571487904e-01F,
	9.571626782e-01F, 9.571765661e-01F, 9.571904540e-01F, 9.572043419e-01F, 9.572182298e-01F, 9.572320580e-01F, 9.572459459e-01F, 9.572598338e-01F,
	9.572736621e-01F, 9.572875500e-01F, 9.573013783e-01F, 9.573152661e-01F, 9.573290944e-01F, 9.573429823e-01F, 9.573568106e-01F, 9.573706388e-01F,
	9.573845267e-01F, 9.573983550e-01F, 9.574121833e-01F, 9.574260116e-01F, 9.574398398e-01F, 9.574537277e-01F, 9.574675560e-01F, 9.574813843e-01F,
	9.574952126e-01F, 9.575090408e-01F, 9.575228691e-01F, 9.575366378e-01F, 9.575504661e-01F, 9.575642943e-01F, 9.575781226e-01F, 9.575919509e-01F,
	9.576057196e-01F, 9.576195478e-01F, 9.576333761e-01F, 9.576471448e-01F, 9.576609731e-01F, 9.576747417e-01F, 9.576885700e-01F, 9.577023387e-01F,
	9.577161670e-01F, 9.577299356e-01F, 9.577437043e-01F, 9.577575326e-01F, 9.577713013e-01F, 9.577850699e-01F, 9.577988386e-01F, 9.578126669e-01F,
	9.578264356e-01F, 9.578402042e-01F, 9.578539729e-01F, 9.578677416e-01F, 9.578815103e-01F, 9.578952789e-01F, 9.579090476e-01F, 9.579227567e-01F,
	9.579365253e-01F, 9.579502940e-01F, 9.579640627e-01F, 9.579777718e-01F, 9.579915404e-01F, 9.580053091e-01F, 9.580190182e-01F, 9.580327868e-01F,
	9.580464959e-01F, 9.580602646e-01F, 9.580739737e-01F, 9.580877423e-01F, 9.581014514e-01F, 9.581152201e-01F, 9.581289291e-01F, 9.581426382e-01F,
	9.581563473e-01F, 9.581701159e-01F, 9.581838250e-01F, 9.581975341e-01F, 9.582112432e-01F, 9.582249522e-01F, 9.582386613e-01F, 9.582523704e-01F,
	9.582660794e-01F, 9.582797885e-01F, 9.582934976e-01F, 9.583071470e-01F, 9.583208561e-01F, 9.583345652e-01F, 9.583482742e-01F, 9.583619237e-01F,
	9.583756328e-01F, 9.583893418e-01F, 9.584029913e-01F, 9.584167004e-01F, 9.584303498e-01F, 9.584440589e-01F, 9.584577084e-01F, 9.584713578e-01F,
	9.584850669e-01F, 9.584987164e-01F, 9.585123658e-01F, 9.585260749e-01F, 9.585397243e-01F, 9.585533738e-01F, 9.585670233e-01F, 9.585806727e-01F,
	9.585943222e-01F, 9.586079717e-01F, 9.586216211e-01F, 9.586352706e-01F, 9.586489201e-01F, 9.586625695e-01F, 9.586762190e-01F, 9.586898685e-01F,
	9.587034583e-01F, 9.587171078e-01F, 9.587307572e-01F, 9.587443471e-01F, 9.587579966e-01F, 9.587715864e-01F, 9.587852359e-01F, 9.587988853e-01F,
	9.588124752e-01F, 9.588260651e-01F, 9.588397145e-01F, 9.588533044e-01F, 9.588668942e-01F, 9.588805437e-01F, 9.588941336e-01F, 9.589077234e-01F,
	9.589213133e-01F, 9.589349031e-01F, 9.589485526e-01F, 9.589621425e-01F, 9.589757323e-01F, 9.589893222e-01F, 9.590028524e-01F, 9.590164423e-01F,
	9.590300322e-01F, 9.590436220e-01F, 9.590572119e-01F, 9.590708017e-01F, 9.590843320e-01F, 9.590979218e-01F, 9.591115117e-01F, 9.591250420e-01F,
	9.591386318e-01F, 9.591521621e-01F, 9.591657519e-01F, 9.591792822e-01F, 9.591928720e-01F, 9.592064023e-01F, 9.592199326e-01F, 9.592335224e-01F,
	9.592470527e-01F, 9.592605829e-01F, 9.592741728e-01F, 9.592877030e-01F, 9.593012333e-01F, 9.593147635e-01F, 9.593282938e-01F, 9.593418241e-01F,
	9.593553543e-01F, 9.593688846e-01F, 9.593824148e-01F, 9.593959451e-01F, 9.594094157e-01F, 9.594229460e-01F, 9.594364762e-01F, 9.594500065e-01F,
	9.594634771e-01F, 9.594770074e-01F, 9.594905376e-01F, 9.595040083e-01F, 9.595175385e-01F, 9.595310092e-01F, 9.595445395e-01F, 9.595580101e-01F,
	9.595715404e-01F, 9.595850110e-01F, 9.595984817e-01F, 9.596119523e-01F, 9.596254826e-01F, 9.596389532e-01F, 9.596524239e-01F, 9.596658945e-01F,
	9.596793652e-01F, 9.596928358e-01F, 9.597063065e-01F, 9.597197771e-01F, 9.597332478e-01F, 9.597467184e-01F, 9.597601891e-01F, 9.597736597e-01F,
	9.597871304e-01F, 9.598005414e-01F, 9.598140121e-01F, 9.598274827e-01F, 9.598408937e-01F, 9.598543644e-01F, 9.598678350e-01F, 9.598812461e-01F,
	9.598947167e-01F, 9.599081278e-01F, 9.599215984e-01F, 9.599350095e-01F, 9.599484205e-01F, 9.599618912e-01F, 9.599753022e-01F, 9.599887133e-01F,
	9.600021243e-01F, 9.600155950e-01F, 9.600290060e-01F, 9.600424170e-01F, 9.600558281e-01F, 9.600692391e-01F, 9.600826502e-01F, 9.600960612e-01F,
	9.601094723e-01F, 9.601228833e-01F, 9.601362348e-01F, 9.601496458e-01F, 9.601630569e-01F, 9.601764679e-01F, 9.601898193e-01F, 9.602032304e-01F,
	9.602166414e-01F, 9.602299929e-01F, 9.602434039e-01F, 9.602567554e-01F, 9.602701664e-01F, 9.602835178e-01F, 9.602968693e-01F, 9.603102803e-01F,
	9.603236318e-01F, 9.603369832e-01F, 9.603503942e-01F, 9.603637457e-01F, 9.603770971e-01F, 9.603904486e-01F, 9.604038000e-01F, 9.604171515e-01F,
	9.604305029e-01F, 9.604438543e-01F, 9.604572058e-01F, 9.604705572e-01F, 9.604839087e-01F, 9.604972601e-01F, 9.605106115e-01F, 9.605239034e-01F,
	9.605372548e-01F, 9.605506063e-01F, 9.605638981e-01F, 9.605772495e-01F, 9.605906010e-01F, 9.606038928e-01F, 9.606172442e-01F, 9.606305361e-01F,
	9.606438875e-01F, 9.606571794e-01F, 9.606704712e-01F, 9.606838226e-01F, 9.606971145e-01F, 9.607104063e-01F, 9.607236981e-01F, 9.607369900e-01F,
	9.607503414e-01F, 9.607636333e-01F, 9.607769251e-01F, 9.607902169e-01F, 9.608035088e-01F, 9.608168006e-01F, 9.608300924e-01F, 9.608433247e-01F,
	9.608566165e-01F, 9.608699083e-01F, 9.608832002e-01F, 9.608964920e-01F, 9.609097242e-01F, 9.609230161e-01F, 9.609362483e-01F, 9.609495401e-01F,
	9.609628320e-01F, 9.609760642e-01F, 9.609893560e-01F, 9.610025883e-01F, 9.610158205e-01F, 9.610291123e-01F, 9.610423446e-01F, 9.610555768e-01F,
	9.610688686e-01F, 9.610821009e-01F, 9.610953331e-01F, 9.611085653e-01F, 9.611217976e-01F, 9.611350298e-01F, 9.611482620e-01F, 9.611614943e-01F,
	9.611747265e-01F, 9.611879587e-01F, 9.612011909e-01F, 9.612144232e-01F, 9.612276554e-01F, 9.612408280e-01F, 9.612540603e-01F, 9.612672925e-01F,
	9.612804651e-01F, 9.612936974e-01F, 9.613069296e-01F, 9.613201022e-01F, 9.613333344e-01F, 9.613465071e-01F, 9.613596797e-01F, 9.613729119e-01F,
	9.613860846e-01F, 9.613992572e-01F, 9.614124894e-01F, 9.614256620e-01F, 9.614388347e-01F, 9.614520073e-01F, 9.614652395e-01F, 9.614784122e-01F,
	9.614915848e-01F, 9.615047574e-01F, 9.615179300e-01F, 9.615311027e-01F, 9.615442157e-01F, 9.615573883e-01F, 9.615705609e-01F, 9.615837336e-01F,
	9.615969062e-01F, 9.616100192e-01F, 9.616231918e-01F, 9.616363645e-01F, 9.616494775e-01F, 9.616626501e-01F, 9.616758227e-01F, 9.616889358e-01F,
	9.617020488e-01F, 9.617152214e-01F, 9.617283344e-01F, 9.617415071e-01F, 9.617546201e-01F, 9.617677331e-01F, 9.617808461e-01F, 9.617940187e-01F,
	9.618071318e-01F, 9.618202448e-01F, 9.618333578e-01F, 9.618464708e-01F, 9.618595839e-01F, 9.618726969e-01F, 9.618858099e-01F, 9.618989229e-01F,
	9.619120359e-01F, 9.619251490e-01F, 9.619382024e-01F, 9.619513154e-01F, 9.619644284e-01F, 9.619775414e-01F, 9.619905949e-01F, 9.620037079e-01F,
	9.620167613e-01F, 9.620298743e-01F, 9.620429277e-01F, 9.620560408e-01F, 9.620690942e-01F, 9.620822072e-01F, 9.620952606e-01F, 9.621083140e-01F,
	9.621214271e-01F, 9.621344805e-01F, 9.621475339e-01F, 9.621605873e-01F, 9.621736407e-01F, 9.621866941e-01F, 9.621997476e-01F, 9.622128010e-01F,
	9.622258544e-01F, 9.622389078e-01F, 9.622519612e-01F, 9.622650146e-01F, 9.622780681e-01F, 9.622911215e-01F, 9.623041749e-01F, 9.623171687e-01F,
	9.623302221e-01F, 9.623432755e-01F, 9.623562694e-01F, 9.623693228e-01F, 9.623823166e-01F, 9.623953700e-01F, 9.624083638e-01F, 9.624214172e-01F,
	9.624344110e-01F, 9.624474049e-01F, 9.624604583e-01F, 9.624734521e-01F, 9.624864459e-01F, 9.624994397e-01F, 9.625124931e-01F, 9.625254869e-01F,
	9.625384808e-01F, 9.625514746e-01F, 9.625644684e-01F, 9.625774622e-01F, 9.625904560e-01F, 9.626034498e-01F, 9.626164436e-01F, 9.626293778e-01F,
	9.626423717e-01F, 9.626553655e-01F, 9.626683593e-01F, 9.626812935e-01F, 9.626942873e-01F, 9.627072811e-01F, 9.627202153e-01F, 9.627332091e-01F,
	9.627461433e-01F, 9.627591372e-01F, 9.627720714e-01F, 9.627850056e-01F, 9.627979994e-01F, 9.628109336e-01F, 9.628238678e-01F, 9.628368616e-01F,
	9.628497958e-01F, 9.628627300e-01F, 9.628756642e-01F, 9.628885984e-01F, 9.629015326e-01F, 9.629144669e-01F, 9.629274011e-01F, 9.629403353e-01F,
	9.629532695e-01F, 9.629662037e-01F, 9.629791379e-01F, 9.629920125e-01F, 9.630049467e-01F, 9.630178809e-01F, 9.630308151e-01F, 9.630436897e-01F,
	9.630566239e-01F, 9.630694985e-01F, 9.630824327e-01F, 9.630953074e-01F, 9.631082416e-01F, 9.631211162e-01F, 9.631340504e-01F, 9.631469250e-01F,
	9.631597996e-01F, 9.631727338e-01F, 9.631856084e-01F, 9.631984830e-01F, 9.632113576e-01F, 9.632242322e-01F, 9.632371068e-01F, 9.632499814e-01F,
	9.632628560e-01F, 9.632757306e-01F, 9.632886052e-01F, 9.633014798e-01F, 9.633143544e-01F, 9.633272290e-01F, 9.633401036e-01F, 9.633529186e-01F,
	9.633657932e-01F, 9.633786678e-01F, 9.633914828e-01F, 9.634043574e-01F, 9.634172320e-01F, 9.634300470e-01F, 9.634429216e-01F, 9.634557366e-01F,
	9.634685516e-01F, 9.634814262e-01F, 9.634942412e-01F, 9.635070562e-01F, 9.635199308e-01F, 9.635327458e-01F, 9.635455608e-01F, 9.635583758e-01F,
	9.635711908e-01F, 9.635840654e-01F, 9.635968804e-01F, 9.636096954e-01F, 9.636225104e-01F, 9.636352658e-01F, 9.636480808e-01F, 9.636608958e-01F,
	9.636737108e-01F, 9.636865258e-01F, 9.636993408e-01F, 9.637120962e-01F, 9.637249112e-01F, 9.637377262e-01F, 9.637504816e-01F, 9.637632966e-01F,
	9.637760520e-01F, 9.637888670e-01F, 9.638016224e-01F, 9.638144374e-01F, 9.638271928e-01F, 9.638399482e-01F, 9.638527632e-01F, 9.638655186e-01F,
	9.638782740e-01F, 9.638910294e-01F, 9.639037848e-01F, 9.639165998e-01F, 9.639293551e-01F, 9.639421105e-01F, 9.639548659e-01F, 9.639676213e-01F,
	9.639803767e-01F, 9.639930725e-01F, 9.640058279e-01F, 9.640185833e-01F, 9.640313387e-01F, 9.640440941e-01F, 9.640567899e-01F, 9.640695453e-01F,
	9.640823007e-01F, 9.640949965e-01F, 9.641077518e-01F, 9.641204476e-01F, 9.641332030e-01F, 9.641458988e-01F, 9.641586542e-01F, 9.641713500e-01F,
	9.641840458e-01F, 9.641968012e-01F, 9.642094970e-01F, 9.642221928e-01F, 9.642348886e-01F, 9.642475843e-01F, 9.642603397e-01F, 9.642730355e-01F,
	9.642857313e-01F, 9.642984271e-01F, 9.643111229e-01F, 9.643238187e-01F, 9.643364549e-01F, 9.643491507e-01F, 9.643618464e-01F, 9.643745422e-01F,
	9.643872380e-01F, 9.643998742e-01F, 9.644125700e-01F, 9.644252658e-01F, 9.644379020e-01F, 9.644505978e-01F, 9.644632339e-01F, 9.644759297e-01F,
	9.644885659e-01F, 9.645012617e-01F, 9.645138979e-01F, 9.645265341e-01F, 9.645392299e-01F, 9.645518661e-01F, 9.645645022e-01F, 9.645771384e-01F,
	9.645897746e-01F, 9.646024108e-01F, 9.646150470e-01F, 9.646277428e-01F, 9.646403790e-01F, 9.646529555e-01F, 9.646655917e-01F, 9.646782279e-01F,
	9.646908641e-01F, 9.647035003e-01F, 9.647161365e-01F, 9.647287130e-01F, 9.647413492e-01F, 9.647539854e-01F, 9.647665620e-01F, 9.647791982e-01F,
	9.647918344e-01F, 9.648044109e-01F, 9.648170471e-01F, 9.648296237e-01F, 9.648422003e-01F, 9.648548365e-01F, 9.648674130e-01F, 9.648799896e-01F,
	9.648926258e-01F, 9.649052024e-01F, 9.649177790e-01F, 9.649303555e-01F, 9.649429321e-01F, 9.649555087e-01F, 9.649680853e-01F, 9.649806619e-01F,
	9.649932384e-01F, 9.650058150e-01F, 9.650183916e-01F, 9.650309682e-01F, 9.650435448e-01F, 9.650560617e-01F, 9.650686383e-01F, 9.650812149e-01F,
	9.650937915e-01F, 9.651063085e-01F, 9.651188850e-01F, 9.651314020e-01F, 9.651439786e-01F, 9.651564956e-01F, 9.651690722e-01F, 9.651815891e-01F,
	9.651941061e-01F, 9.652066827e-01F, 9.652191997e-01F, 9.652317166e-01F, 9.652442336e-01F, 9.652568102e-01F, 9.652693272e-01F, 9.652818441e-01F,
	9.652943611e-01F, 9.653068781e-01F, 9.653193951e-01F, 9.653319120e-01F, 9.653444290e-01F, 9.653569460e-01F, 9.653694630e-01F, 9.653819203e-01F,
	9.653944373e-01F, 9.654069543e-01F, 9.654194117e-01F, 9.654319286e-01F, 9.654444456e-01F, 9.654569030e-01F, 9.654694200e-01F, 9.654818773e-01F,
	9.654943943e-01F, 9.655068517e-01F, 9.655193686e-01F, 9.655318260e-01F, 9.655442834e-01F, 9.655568004e-01F, 9.655692577e-01F, 9.655817151e-01F,
	9.655941725e-01F, 9.656066298e-01F, 9.656190872e-01F, 9.656315446e-01F, 9.656440020e-01F, 9.656564593e-01F, 9.656689167e-01F, 9.656813741e-01F,
	9.656938314e-01F, 9.657062888e-01F, 9.657187462e-01F, 9.657312036e-01F, 9.657436013e-01F, 9.657560587e-01F, 9.657685161e-01F, 9.657809138e-01F,
	9.657933712e-01F, 9.658057690e-01F, 9.658182263e-01F, 9.658306241e-01F, 9.658430815e-01F, 9.658554792e-01F, 9.658678770e-01F, 9.658803344e-01F,
	9.658927321e-01F, 9.659051299e-01F, 9.659175277e-01F, 9.659299850e-01F, 9.659423828e-01F, 9.659547806e-01F, 9.659671783e-01F, 9.659795761e-01F,
	9.659919739e-01F, 9.660043716e-01F, 9.660167694e-01F, 9.660291672e-01F, 9.660415053e-01F, 9.660539031e-01F, 9.660663009e-01F, 9.660786986e-01F,
	9.660910368e-01F, 9.661034346e-01F, 9.661158323e-01F, 9.661281705e-01F, 9.661405683e-01F, 9.661529064e-01F, 9.661653042e-01F, 9.661776423e-01F,
	9.661899805e-01F, 9.662023783e-01F, 9.662147164e-01F, 9.662270546e-01F, 9.662394524e-01F, 9.662517905e-01F, 9.662641287e-01F, 9.662764668e-01F,
	9.662888050e-01F, 9.663011432e-01F, 9.663134813e-01F, 9.663258195e-01F, 9.663381577e-01F, 9.663504958e-01F, 9.663628340e-01F, 9.663751721e-01F,
	9.663874507e-01F, 9.663997889e-01F, 9.664121270e-01F, 9.664244652e-01F, 9.664367437e-01F, 9.664490819e-01F, 9.664613605e-01F, 9.664736986e-01F,
	9.664859772e-01F, 9.664983153e-01F, 9.665105939e-01F, 9.665229321e-01F, 9.665352106e-01F, 9.665474892e-01F, 9.665597677e-01F, 9.665721059e-01F,
	9.665843844e-01F, 9.665966630e-01F, 9.666089416e-01F, 9.666212201e-01F, 9.666334987e-01F, 9.666457772e-01F, 9.666580558e-01F, 9.666703343e-01F,
	9.666826129e-01F, 9.666948915e-01F, 9.667071700e-01F, 9.667193890e-01F, 9.667316675e-01F, 9.667439461e-01F, 9.667562246e-01F, 9.667684436e-01F,
	9.667807221e-01F, 9.667929411e-01F, 9.668052197e-01F, 9.668174386e-01F, 9.668297172e-01F, 9.668419361e-01F, 9.668542147e-01F, 9.668664336e-01F,
	9.668786526e-01F, 9.668908715e-01F, 9.669031501e-01F, 9.669153690e-01F, 9.669275880e-01F, 9.669398069e-01F, 9.669520259e-01F, 9.669642448e-01F,
	9.669764638e-01F, 9.669886827e-01F, 9.670009017e-01F, 9.670131207e-01F, 9.670253396e-01F, 9.670375586e-01F, 9.670497179e-01F, 9.670619369e-01F,
	9.670741558e-01F, 9.670863152e-01F, 9.670985341e-01F, 9.671107531e-01F, 9.671229124e-01F, 9.671351314e-01F, 9.671472907e-01F, 9.671595097e-01F,
	9.671716690e-01F, 9.671838284e-01F, 9.671960473e-01F, 9.672082067e-01F, 9.672203660e-01F, 9.672325253e-01F, 9.672447443e-01F, 9.672569036e-01F,
	9.672690630e-01F, 9.672812223e-01F, 9.672933817e-01F, 9.673055410e-01F, 9.673177004e-01F, 9.673298597e-01F, 9.673420191e-01F, 9.673541188e-01F,
	9.673662782e-01F, 9.673784375e-01F, 9.673905969e-01F, 9.674026966e-01F, 9.674148560e-01F, 9.674270153e-01F, 9.674391150e-01F, 9.674512744e-01F,
	9.674633741e-01F, 9.674755335e-01F, 9.674876332e-01F, 9.674997926e-01F, 9.675118923e-01F, 9.675239921e-01F, 9.675361514e-01F, 9.675482512e-01F,
	9.675603509e-01F, 9.675724506e-01F, 9.675845504e-01F, 9.675966501e-01F, 9.676087499e-01F, 9.676208496e-01F, 9.676329494e-01F, 9.676450491e-01F,
	9.676571488e-01F, 9.676692486e-01F, 9.676813483e-01F, 9.676934481e-01F, 9.677055478e-01F, 9.677175879e-01F, 9.677296877e-01F, 9.677417874e-01F,
	9.677538276e-01F, 9.677659273e-01F, 9.677779675e-01F, 9.677900672e-01F, 9.678021073e-01F, 9.678142071e-01F, 9.678262472e-01F, 9.678382874e-01F,
	9.678503871e-01F, 9.678624272e-01F, 9.678744674e-01F, 9.678865075e-01F, 9.678986073e-01F, 9.679106474e-01F, 9.679226875e-01F, 9.679347277e-01F,
	9.679467678e-01F, 9.679588079e-01F, 9.679708481e-01F, 9.679828882e-01F, 9.679948688e-01F, 9.680069089e-01F, 9.680189490e-01F, 9.680309892e-01F,
	9.680430293e-01F, 9.680550098e-01F, 9.680670500e-01F, 9.680790305e-01F, 9.680910707e-01F, 9.681031108e-01F, 9.681150913e-01F, 9.681270719e-01F,
	9.681391120e-01F, 9.681510925e-01F, 9.681631327e-01F, 9.681751132e-01F, 9.681870937e-01F, 9.681990743e-01F, 9.682111144e-01F, 9.682230949e-01F,
	9.682350755e-01F, 9.682470560e-01F, 9.682590365e-01F, 9.682710171e-01F, 9.682829976e-01F, 9.682949781e-01F, 9.683069587e-01F, 9.683189392e-01F,
	9.683308601e-01F, 9.683428407e-01F, 9.683548212e-01F, 9.683668017e-01F, 9.683787227e-01F, 9.683907032e-01F, 9.684026837e-01F, 9.684146047e-01F,
	9.684265852e-01F, 9.684385061e-01F, 9.684504867e-01F, 9.684624076e-01F, 9.684743285e-01F, 9.684863091e-01F, 9.684982300e-01F, 9.685101509e-01F,
	9.685220718e-01F, 9.685340524e-01F, 9.685459733e-01F, 9.685578942e-01F, 9.685698152e-01F, 9.685817361e-01F, 9.685936570e-01F, 9.686055779e-01F,
	9.686174989e-01F, 9.686294198e-01F, 9.686413407e-01F, 9.686532021e-01F, 9.686651230e-01F, 9.686770439e-01F, 9.686889648e-01F, 9.687008262e-01F,
	9.687127471e-01F, 9.687246084e-01F, 9.687365294e-01F, 9.687483907e-01F, 9.687603116e-01F, 9.687721729e-01F, 9.687840939e-01F, 9.687959552e-01F,
	9.688078165e-01F, 9.688197374e-01F, 9.688315988e-01F, 9.688434601e-01F, 9.688553214e-01F, 9.688671827e-01F, 9.688791037e-01F, 9.688909650e-01F,
	9.689028263e-01F, 9.689146876e-01F, 9.689265490e-01F, 9.689383507e-01F, 9.689502120e-01F, 9.689620733e-01F, 9.689739347e-01F, 9.689857960e-01F,
	9.689975977e-01F, 9.690094590e-01F, 9.690213203e-01F, 9.690331221e-01F, 9.690449834e-01F, 9.690568447e-01F, 9.690686464e-01F, 9.690805078e-01F,
	9.690923095e-01F, 9.691041112e-01F, 9.691159725e-01F, 9.691277742e-01F, 9.691395760e-01F, 9.691513777e-01F, 9.691632390e-01F, 9.691750407e-01F,
	9.691868424e-01F, 9.691986442e-01F, 9.692104459e-01F, 9.692222476e-01F, 9.692340493e-01F, 9.692458510e-01F, 9.692576528e-01F, 9.692694545e-01F,
	9.692812562e-01F, 9.692929983e-01F, 9.693048000e-01F, 9.693166018e-01F, 9.693284035e-01F, 9.693401456e-01F, 9.693519473e-01F, 9.693636894e-01F,
	9.693754911e-01F, 9.693872333e-01F, 9.693990350e-01F, 9.694107771e-01F, 9.694225788e-01F, 9.694343209e-01F, 9.694460630e-01F, 9.694578648e-01F,
	9.694696069e-01F, 9.694813490e-01F, 9.694930911e-01F, 9.695048332e-01F, 9.695165753e-01F, 9.695283175e-01F, 9.695400596e-01F, 9.695518017e-01F,
	9.695635438e-01F, 9.695752859e-01F, 9.695870280e-01F, 9.695987701e-01F, 9.696105123e-01F, 9.696221948e-01F, 9.696339369e-01F, 9.696456790e-01F,
	9.696573615e-01F, 9.696691036e-01F, 9.696808457e-01F, 9.696925282e-01F, 9.697042704e-01F, 9.697159529e-01F, 9.697276354e-01F, 9.697393775e-01F,
	9.697510600e-01F, 9.697627425e-01F, 9.697744846e-01F, 9.697861671e-01F, 9.697978497e-01F, 9.698095322e-01F, 9.698212147e-01F, 9.698328972e-01F,
	9.698445797e-01F, 9.698562622e-01F, 9.698679447e-01F, 9.698796272e-01F, 9.698913097e-01F, 9.699029922e-01F, 9.699146748e-01F, 9.699263573e-01F,
	9.699379802e-01F, 9.699496627e-01F, 9.699613452e-01F, 9.699729681e-01F, 9.699846506e-01F, 9.699962735e-01F, 9.700079560e-01F, 9.700195789e-01F,
	9.700312614e-01F, 9.700428843e-01F, 9.700545669e-01F, 9.700661898e-01F, 9.700778127e-01F, 9.700894356e-01F, 9.701011181e-01F, 9.701127410e-01F,
	9.701243639e-01F, 9.701359868e-01F, 9.701476097e-01F, 9.701592326e-01F, 9.701708555e-01F, 9.701824784e-01F, 9.701941013e-01F, 9.702057242e-01F,
	9.702173471e-01F, 9.702289701e-01F, 9.702405334e-01F, 9.702521563e-01F, 9.702637792e-01F, 9.702753425e-01F, 9.702869654e-01F, 9.702985883e-01F,
	9.703101516e-01F, 9.703217745e-01F, 9.703333378e-01F, 9.703449011e-01F, 9.703565240e-01F, 9.703680873e-01F, 9.703797102e-01F, 9.703912735e-01F,
	9.704028368e-01F, 9.704144001e-01F, 9.704259634e-01F, 9.704375863e-01F, 9.704491496e-01F, 9.704607129e-01F, 9.704722762e-01F, 9.704838395e-01F,
	9.704954028e-01F, 9.705069065e-01F, 9.705184698e-01F, 9.705300331e-01F, 9.705415964e-01F, 9.705531597e-01F, 9.705646634e-01F, 9.705762267e-01F,
	9.705877900e-01F, 9.705992937e-01F, 9.706108570e-01F, 9.706223607e-01F, 9.706339240e-01F, 9.706454277e-01F, 9.706569910e-01F, 9.706684947e-01F,
	9.706800580e-01F, 9.706915617e-01F, 9.707030654e-01F, 9.707145691e-01F, 9.707261324e-01F, 9.707376361e-01F, 9.707491398e-01F, 9.707606435e-01F,
	9.707721472e-01F, 9.707836509e-01F, 9.707951546e-01F, 9.708066583e-01F, 9.708181620e-01F, 9.708296657e-01F, 9.708411098e-01F, 9.708526134e-01F,
	9.708641171e-01F, 9.708756208e-01F, 9.708870649e-01F, 9.708985686e-01F, 9.709100127e-01F, 9.709215164e-01F, 9.709330201e-01F, 9.709444642e-01F,
	9.709559083e-01F, 9.709674120e-01F, 9.709788561e-01F, 9.709903598e-01F, 9.710018039e-01F, 9.710132480e-01F, 9.710246921e-01F, 9.710361362e-01F,
	9.710476398e-01F, 9.710590839e-01F, 9.710705280e-01F, 9.710819721e-01F, 9.710934162e-01F, 9.711048603e-01F, 9.711163044e-01F, 9.711277485e-01F,
	9.711391330e-01F, 9.711505771e-01F, 9.711620212e-01F, 9.711734653e-01F, 9.711848497e-01F, 9.711962938e-01F, 9.712077379e-01F, 9.712191224e-01F,
	9.712305665e-01F, 9.712419510e-01F, 9.712533951e-01F, 9.712647796e-01F, 9.712762237e-01F, 9.712876081e-01F, 9.712989926e-01F, 9.713104367e-01F,
	9.713218212e-01F, 9.713332057e-01F, 9.713445902e-01F, 9.713559747e-01F, 9.713673592e-01F, 9.713787436e-01F, 9.713901281e-01F, 9.714015126e-01F,
	9.714128971e-01F, 9.714242816e-01F, 9.714356661e-01F, 9.714470506e-01F, 9.714584351e-01F, 9.714698195e-01F, 9.714811444e-01F, 9.714925289e-01F,
	9.715039134e-01F, 9.715152383e-01F, 9.715266228e-01F, 9.715379477e-01F, 9.715493321e-01F, 9.715606570e-01F, 9.715720415e-01F, 9.715833664e-01F,
	9.715946913e-01F, 9.716060758e-01F, 9.716174006e-01F, 9.716287255e-01F, 9.716400504e-01F, 9.716514349e-01F, 9.716627598e-01F, 9.716740847e-01F,
	9.716854095e-01F, 9.716967344e-01F, 9.717080593e-01F, 9.717193842e-01F, 9.717307091e-01F, 9.717420340e-01F, 9.717532992e-01F, 9.717646241e-01F,
	9.717759490e-01F, 9.717872739e-01F, 9.717985392e-01F, 9.718098640e-01F, 9.718211293e-01F, 9.718324542e-01F, 9.718437791e-01F, 9.718550444e-01F,
	9.718663096e-01F, 9.718776345e-01F, 9.718888998e-01F, 9.719002247e-01F, 9.719114900e-01F, 9.719227552e-01F, 9.719340205e-01F, 9.719453454e-01F,
	9.719566107e-01F, 9.719678760e-01F, 9.719791412e-01F, 9.719904065e-01F, 9.720016718e-01F, 9.720129371e-01F, 9.720242023e-01F, 9.720354676e-01F,
	9.720467329e-01F, 9.720579386e-01F, 9.720692039e-01F, 9.720804691e-01F, 9.720917344e-01F, 9.721029401e-01F, 9.721142054e-01F, 9.721254110e-01F,
	9.721366763e-01F, 9.721478820e-01F, 9.721591473e-01F, 9.721703529e-01F, 9.721816182e-01F, 9.721928239e-01F, 9.722040296e-01F, 9.722152948e-01F,
	9.722265005e-01F, 9.722377062e-01F, 9.722489119e-01F, 9.722601175e-01F, 9.722713828e-01F, 9.722825885e-01F, 9.722937942e-01F, 9.723049998e-01F,
	9.723162055e-01F, 9.723273516e-01F, 9.723385572e-01F, 9.723497629e-01F, 9.723609686e-01F, 9.723721743e-01F, 9.723833203e-01F, 9.723945260e-01F,
	9.724057317e-01F, 9.724168777e-01F, 9.724280834e-01F, 9.724392891e-01F, 9.724504352e-01F, 9.724615812e-01F, 9.724727869e-01F, 9.724839330e-01F,
	9.724951386e-01F, 9.725062847e-01F, 9.725174308e-01F, 9.725285769e-01F, 9.725397825e-01F, 9.725509286e-01F, 9.725620747e-01F, 9.725732207e-01F,
	9.725843668e-01F, 9.725955129e-01F, 9.726066589e-01F, 9.726178050e-01F, 9.726289511e-01F, 9.726400971e-01F, 9.726512432e-01F, 9.726623297e-01F,
	9.726734757e-01F, 9.726846218e-01F, 9.726957083e-01F, 9.727068543e-01F, 9.727180004e-01F, 9.727290869e-01F, 9.727402329e-01F, 9.727513194e-01F,
	9.727624655e-01F, 9.727735519e-01F, 9.727846384e-01F, 9.727957845e-01F, 9.728068709e-01F, 9.728179574e-01F, 9.728291035e-01F, 9.728401899e-01F,
	9.728512764e-01F, 9.728623629e-01F, 9.728734493e-01F, 9.728845358e-01F, 9.728956223e-01F, 9.729067087e-01F, 9.729177952e-01F, 9.729288816e-01F,
	9.729399681e-01F, 9.729510546e-01F, 9.729620814e-01F, 9.729731679e-01F, 9.729842544e-01F, 9.729952812e-01F, 9.730063677e-01F, 9.730174541e-01F,
	9.730284810e-01F, 9.730395675e-01F, 9.730505943e-01F, 9.730616808e-01F, 9.730727077e-01F, 9.730837345e-01F, 9.730948210e-01F, 9.731058478e-01F,
	9.731168747e-01F, 9.731279016e-01F, 9.731389880e-01F, 9.731500149e-01F, 9.731610417e-01F, 9.731720686e-01F, 9.731830955e-01F, 9.731941223e-01F,
	9.732051492e-01F, 9.732161760e-01F, 9.732272029e-01F, 9.732381701e-01F, 9.732491970e-01F, 9.732602239e-01F, 9.732712507e-01F, 9.732822180e-01F,
	9.732932448e-01F, 9.733042717e-01F, 9.733152390e-01F, 9.733262658e-01F, 9.733372331e-01F, 9.733482599e-01F, 9.733592272e-01F, 9.733701944e-01F,
	9.733812213e-01F, 9.733921885e-01F, 9.734031558e-01F, 9.734141827e-01F, 9.734251499e-01F, 9.734361172e-01F, 9.734470844e-01F, 9.734580517e-01F,
	9.734690189e-01F, 9.734799862e-01F, 9.734909534e-01F, 9.735019207e-01F, 9.735128880e-01F, 9.735238552e-01F, 9.735348225e-01F, 9.735457897e-01F,
	9.735566974e-01F, 9.735676646e-01F, 9.735786319e-01F, 9.735895395e-01F, 9.736005068e-01F, 9.736114144e-01F, 9.736223817e-01F, 9.736332893e-01F,
	9.736442566e-01F, 9.736551642e-01F, 9.736661315e-01F, 9.736770391e-01F, 9.736879468e-01F, 9.736989141e-01F, 9.737098217e-01F, 9.737207294e-01F,
	9.737316370e-01F, 9.737425447e-01F, 9.737534523e-01F, 9.737643600e-01F, 9.737752676e-01F, 9.737861753e-01F, 9.737970829e-01F, 9.738079906e-01F,
	9.738188982e-01F, 9.738298059e-01F, 9.738406539e-01F, 9.738515615e-01F, 9.738624692e-01F, 9.738733768e-01F, 9.738842249e-01F, 9.738951325e-01F,
	9.739059806e-01F, 9.739168882e-01F, 9.739277363e-01F, 9.739386439e-01F, 9.739494920e-01F, 9.739603400e-01F, 9.739712477e-01F, 9.739820957e-01F,
	9.739929438e-01F, 9.740038514e-01F, 9.740146995e-01F, 9.740255475e-01F, 9.740363955e-01F, 9.740472436e-01F, 9.740580916e-01F, 9.740689397e-01F,
	9.740797877e-01F, 9.740906358e-01F, 9.741014838e-01F, 9.741123319e-01F, 9.741231203e-01F, 9.741339684e-01F, 9.741448164e-01F, 9.741556048e-01F,
	9.741664529e-01F, 9.741773009e-01F, 9.741880894e-01F, 9.741989374e-01F, 9.742097259e-01F, 9.742205739e-01F, 9.742313623e-01F, 9.742422104e-01F,
	9.742529988e-01F, 9.742637873e-01F, 9.742745757e-01F, 9.742854238e-01F, 9.742962122e-01F, 9.743070006e-01F, 9.743177891e-01F, 9.743285775e-01F,
	9.743393660e-01F, 9.743501544e-01F, 9.743609428e-01F, 9.743717313e-01F, 9.743825197e-01F, 9.743933082e-01F, 9.744040966e-01F, 9.744148850e-01F,
	9.744256139e-01F, 9.744364023e-01F, 9.744471908e-01F, 9.744579196e-01F, 9.744687080e-01F, 9.744794369e-01F, 9.744902253e-01F, 9.745009542e-01F,
	9.745117426e-01F, 9.745224714e-01F, 9.745332599e-01F, 9.745439887e-01F, 9.745547175e-01F, 9.745654464e-01F, 9.745762348e-01F, 9.745869637e-01F,
	9.745976925e-01F, 9.746084213e-01F, 9.746191502e-01F, 9.746298790e-01F, 9.746406078e-01F, 9.746513367e-01F, 9.746620655e-01F, 9.746727943e-01F,
	9.746835232e-01F, 9.746942520e-01F, 9.747049212e-01F, 9.747156501e-01F, 9.747263789e-01F, 9.747370481e-01F, 9.747477770e-01F, 9.747585058e-01F,
	9.747691751e-01F, 9.747799039e-01F, 9.747905731e-01F, 9.748013020e-01F, 9.748119712e-01F, 9.748226404e-01F, 9.748333693e-01F, 9.748440385e-01F,
	9.748547077e-01F, 9.748653769e-01F, 9.748760462e-01F, 9.748867750e-01F, 9.748974442e-01F, 9.749081135e-01F, 9.749187827e-01F, 9.749294519e-01F,
	9.749401212e-01F, 9.749507904e-01F, 9.749614000e-01F, 9.749720693e-01F, 9.749827385e-01F, 9.749934077e-01F, 9.750040770e-01F, 9.750146866e-01F,
	9.750253558e-01F, 9.750359654e-01F, 9.750466347e-01F, 9.750573039e-01F, 9.750679135e-01F, 9.750785232e-01F, 9.750891924e-01F, 9.750998020e-01F,
	9.751104712e-01F, 9.751210809e-01F, 9.751316905e-01F, 9.751423001e-01F, 9.751529694e-01F, 9.751635790e-01F, 9.751741886e-01F, 9.751847982e-01F,
	9.751954079e-01F, 9.752060175e-01F, 9.752166271e-01F, 9.752272367e-01F, 9.752378464e-01F, 9.752484560e-01F, 9.752590060e-01F, 9.752696157e-01F,
	9.752802253e-01F, 9.752908349e-01F, 9.753013849e-01F, 9.753119946e-01F, 9.753225446e-01F, 9.753331542e-01F, 9.753437042e-01F, 9.753543139e-01F,
	9.753648639e-01F, 9.753754735e-01F, 9.753860235e-01F, 9.753965735e-01F, 9.754071832e-01F, 9.754177332e-01F, 9.754282832e-01F, 9.754388332e-01F,
	9.754493833e-01F, 9.754599929e-01F, 9.754705429e-01F, 9.754810929e-01F, 9.754916430e-01F, 9.755021930e-01F, 9.755126834e-01F, 9.755232334e-01F,
	9.755337834e-01F, 9.755443335e-01F, 9.755548835e-01F, 9.755653739e-01F, 9.755759239e-01F, 9.755864739e-01F, 9.755969644e-01F, 9.756075144e-01F,
	9.756180048e-01F, 9.756285548e-01F, 9.756390452e-01F, 9.756495953e-01F, 9.756600857e-01F, 9.756706357e-01F, 9.756811261e-01F, 9.756916165e-01F,
	9.757021070e-01F, 9.757126570e-01F, 9.757231474e-01F, 9.757336378e-01F, 9.757441282e-01F, 9.757546186e-01F, 9.757651091e-01F, 9.757755995e-01F,
	9.757860899e-01F, 9.757965803e-01F, 9.758070707e-01F, 9.758175015e-01F, 9.758279920e-01F, 9.758384824e-01F, 9.758489728e-01F, 9.758594036e-01F,
	9.758698940e-01F, 9.758803844e-01F, 9.758908153e-01F, 9.759013057e-01F, 9.759117365e-01F, 9.759222269e-01F, 9.759326577e-01F, 9.759430885e-01F,
	9.759535789e-01F, 9.759640098e-01F, 9.759744406e-01F, 9.759848714e-01F, 9.759953618e-01F, 9.760057926e-01F, 9.760162234e-01F, 9.760266542e-01F,
	9.760370851e-01F, 9.760475159e-01F, 9.760579467e-01F, 9.760683775e-01F, 9.760788083e-01F, 9.760891795e-01F, 9.760996103e-01F, 9.761100411e-01F,
	9.761204720e-01F, 9.761308432e-01F, 9.761412740e-01F, 9.761517048e-01F, 9.761620760e-01F, 9.761725068e-01F, 9.761828780e-01F, 9.761933088e-01F,
	9.762036800e-01F, 9.762141109e-01F, 9.762244821e-01F, 9.762348533e-01F, 9.762452841e-01F, 9.762556553e-01F, 9.762660265e-01F, 9.762763977e-01F,
	9.762867689e-01F, 9.762971401e-01F, 9.763075113e-01F, 9.763178825e-01F, 9.763282537e-01F, 9.763386250e-01F, 9.763489962e-01F, 9.763593674e-01F,
	9.763697386e-01F, 9.763801098e-01F, 9.763904214e-01F, 9.764007926e-01F, 9.764111638e-01F, 9.764214754e-01F, 9.764318466e-01F, 9.764422178e-01F,
	9.764525294e-01F, 9.764629006e-01F, 9.764732122e-01F, 9.764835238e-01F, 9.764938951e-01F, 9.765042067e-01F, 9.765145183e-01F, 9.765248895e-01F,
	9.765352011e-01F, 9.765455127e-01F, 9.765558243e-01F, 9.765661359e-01F, 9.765764475e-01F, 9.765867591e-01F, 9.765970707e-01F, 9.766073823e-01F,
	9.766176939e-01F, 9.766280055e-01F, 9.766383171e-01F, 9.766486287e-01F, 9.766589403e-01F, 9.766691923e-01F, 9.766795039e-01F, 9.766898155e-01F,
	9.767000675e-01F, 9.767103791e-01F, 9.767206311e-01F, 9.767309427e-01F, 9.767411947e-01F, 9.767515063e-01F, 9.767617583e-01F, 9.767720699e-01F,
	9.767823219e-01F, 9.767925739e-01F, 9.768028259e-01F, 9.768131375e-01F, 9.768233895e-01F, 9.768336415e-01F, 9.768438935e-01F, 9.768541455e-01F,
	9.768643975e-01F, 9.768746495e-01F, 9.768849015e-01F, 9.768951535e-01F, 9.769054055e-01F, 9.769156575e-01F, 9.769258499e-01F, 9.769361019e-01F,
	9.769463539e-01F, 9.769566059e-01F, 9.769667983e-01F, 9.769770503e-01F, 9.769872427e-01F, 9.769974947e-01F, 9.770076871e-01F, 9.770179391e-01F,
	9.770281315e-01F, 9.770383835e-01F, 9.770485759e-01F, 9.770587683e-01F, 9.770689607e-01F, 9.770792127e-01F, 9.770894051e-01F, 9.770995975e-01F,
	9.771097898e-01F, 9.771199822e-01F, 9.771301746e-01F, 9.771403670e-01F, 9.771505594e-01F, 9.771607518e-01F, 9.771709442e-01F, 9.771811366e-01F,
	9.771913290e-01F, 9.772014618e-01F, 9.772116542e-01F, 9.772218466e-01F, 9.772320390e-01F, 9.772421718e-01F, 9.772523642e-01F, 9.772624969e-01F,
	9.772726893e-01F, 9.772828221e-01F, 9.772930145e-01F, 9.773031473e-01F, 9.773132801e-01F, 9.773234725e-01F, 9.773336053e-01F, 9.773437381e-01F,
	9.773538709e-01F, 9.773640633e-01F, 9.773741961e-01F, 9.773843288e-01F, 9.773944616e-01F, 9.774045944e-01F, 9.774147272e-01F, 9.774248600e-01F,
	9.774349928e-01F, 9.774451256e-01F, 9.774551988e-01F, 9.774653316e-01F, 9.774754643e-01F, 9.774855971e-01F, 9.774956703e-01F, 9.775058031e-01F,
	9.775159359e-01F, 9.775260091e-01F, 9.775361419e-01F, 9.775462151e-01F, 9.775563478e-01F, 9.775664210e-01F, 9.775765538e-01F, 9.775866270e-01F,
	9.775967002e-01F, 9.776067734e-01F, 9.776169062e-01F, 9.776269794e-01F, 9.776370525e-01F, 9.776471257e-01F, 9.776571989e-01F, 9.776672721e-01F,
	9.776773453e-01F, 9.776874185e-01F, 9.776974916e-01F, 9.777075648e-01F, 9.777176380e-01F, 9.777277112e-01F, 9.777377248e-01F, 9.777477980e-01F,
	9.777578712e-01F, 9.777679443e-01F, 9.777779579e-01F, 9.777880311e-01F, 9.777980447e-01F, 9.778081179e-01F, 9.778181314e-01F, 9.778282046e-01F,
	9.778382182e-01F, 9.778482318e-01F, 9.778583050e-01F, 9.778683186e-01F, 9.778783321e-01F, 9.778884053e-01F, 9.778984189e-01F, 9.779084325e-01F,
	9.779184461e-01F, 9.779284596e-01F, 9.779384732e-01F, 9.779484868e-01F, 9.779585004e-01F, 9.779685140e-01F, 9.779785275e-01F, 9.779885411e-01F,
	9.779984951e-01F, 9.780085087e-01F, 9.780185223e-01F, 9.780284762e-01F, 9.780384898e-01F, 9.780485034e-01F, 9.780584574e-01F, 9.780684710e-01F,
	9.780784249e-01F, 9.780884385e-01F, 9.780983925e-01F, 9.781084061e-01F, 9.781183600e-01F, 9.781283140e-01F, 9.781382680e-01F, 9.781482816e-01F,
	9.781582355e-01F, 9.781681895e-01F, 9.781781435e-01F, 9.781880975e-01F, 9.781980515e-01F, 9.782080054e-01F, 9.782179594e-01F, 9.782279134e-01F,
	9.782378674e-01F, 9.782478213e-01F, 9.782577753e-01F, 9.782677293e-01F, 9.782776237e-01F, 9.782875776e-01F, 9.782975316e-01F, 9.783074260e-01F,
	9.783173800e-01F, 9.783272743e-01F, 9.783372283e-01F, 9.783471227e-01F, 9.783570766e-01F, 9.783669710e-01F, 9.783769250e-01F, 9.783868194e-01F,
	9.783967137e-01F, 9.784066081e-01F, 9.784165621e-01F, 9.784264565e-01F, 9.784363508e-01F, 9.784462452e-01F, 9.784561396e-01F, 9.784660339e-01F,
	9.784759283e-01F, 9.784858227e-01F, 9.784957170e-01F, 9.785056114e-01F, 9.785155058e-01F, 9.785253406e-01F, 9.785352349e-01F, 9.785451293e-01F,
	9.785550237e-01F, 9.785648584e-01F, 9.785747528e-01F, 9.785845876e-01F, 9.785944819e-01F, 9.786043167e-01F, 9.786142111e-01F, 9.786240458e-01F,
	9.786339402e-01F, 9.786437750e-01F, 9.786536098e-01F, 9.786635041e-01F, 9.786733389e-01F, 9.786831737e-01F, 9.786930084e-01F, 9.787028432e-01F,
	9.787126780e-01F, 9.787225127e-01F, 9.787323475e-01F, 9.787421823e-01F, 9.787520170e-01F, 9.787618518e-01F, 9.787716866e-01F, 9.787815213e-01F,
	9.787913561e-01F, 9.788011312e-01F, 9.788109660e-01F, 9.788208008e-01F, 9.788305759e-01F, 9.788404107e-01F, 9.788502455e-01F, 9.788600206e-01F,
	9.788698554e-01F, 9.788796306e-01F, 9.788894057e-01F, 9.788992405e-01F, 9.789090157e-01F, 9.789187908e-01F, 9.789286256e-01F, 9.789384007e-01F,
	9.789481759e-01F, 9.789579511e-01F, 9.789677262e-01F, 9.789775014e-01F, 9.789872766e-01F, 9.789970517e-01F, 9.790068269e-01F, 9.790166020e-01F,
	9.790263772e-01F, 9.790361524e-01F, 9.790459275e-01F, 9.790556431e-01F, 9.790654182e-01F, 9.790751934e-01F, 9.790849090e-01F, 9.790946841e-01F,
	9.791044593e-01F, 9.791141748e-01F, 9.791239500e-01F, 9.791336656e-01F, 9.791434407e-01F, 9.791531563e-01F, 9.791628718e-01F, 9.791726470e-01F,
	9.791823626e-01F, 9.791920781e-01F, 9.792017937e-01F, 9.792115092e-01F, 9.792212844e-01F, 9.792309999e-01F, 9.792407155e-01F, 9.792504311e-01F,
	9.792601466e-01F, 9.792698622e-01F, 9.792795181e-01F, 9.792892337e-01F, 9.792989492e-01F, 9.793086648e-01F, 9.793183804e-01F, 9.793280363e-01F,
	9.793377519e-01F, 9.793474674e-01F, 9.793571234e-01F, 9.793668389e-01F, 9.793764949e-01F, 9.793862104e-01F, 9.793958664e-01F, 9.794055820e-01F,
	9.794152379e-01F, 9.794248939e-01F, 9.794346094e-01F, 9.794442654e-01F, 9.794539213e-01F, 9.794635773e-01F, 9.794732332e-01F, 9.794828892e-01F,
	9.794925451e-01F, 9.795022011e-01F, 9.795118570e-01F, 9.795215130e-01F, 9.795311689e-01F, 9.795408249e-01F, 9.795504808e-01F, 9.795601368e-01F,
	9.795697927e-01F, 9.795793891e-01F, 9.795890450e-01F, 9.795987010e-01F, 9.796082973e-01F, 9.796179533e-01F, 9.796275496e-01F, 9.796372056e-01F,
	9.796468019e-01F, 9.796564579e-01F, 9.796660542e-01F, 9.796756506e-01F, 9.796853065e-01F, 9.796949029e-01F, 9.797044992e-01F, 9.797140956e-01F,
	9.797237515e-01F, 9.797333479e-01F, 9.797429442e-01F, 9.797525406e-01F, 9.797621369e-01F, 9.797717333e-01F, 9.797813296e-01F, 9.797909260e-01F,
	9.798004627e-01F, 9.798100591e-01F, 9.798196554e-01F, 9.798292518e-01F, 9.798387885e-01F, 9.798483849e-01F, 9.798579812e-01F, 9.798675179e-01F,
	9.798771143e-01F, 9.798866510e-01F, 9.798962474e-01F, 9.799057841e-01F, 9.799153805e-01F, 9.799249172e-01F, 9.799344540e-01F, 9.799440503e-01F,
	9.799535871e-01F, 9.799631238e-01F, 9.799726605e-01F, 9.799821973e-01F, 9.799917340e-01F, 9.800013304e-01F, 9.800108671e-01F, 9.800204039e-01F,
	9.800298810e-01F, 9.800394177e-01F, 9.800489545e-01F, 9.800584912e-01F, 9.800680280e-01F, 9.800775647e-01F, 9.800870419e-01F, 9.800965786e-01F,
	9.801061153e-01F, 9.801155925e-01F, 9.801251292e-01F, 9.801346064e-01F, 9.801441431e-01F, 9.801536202e-01F, 9.801631570e-01F, 9.801726341e-01F,
	9.801821113e-01F, 9.801916480e-01F, 9.802011251e-01F, 9.802106023e-01F, 9.802200794e-01F, 9.802296162e-01F, 9.802390933e-01F, 9.802485704e-01F,
	9.802580476e-01F, 9.802675247e-01F, 9.802770019e-01F, 9.802864790e-01F, 9.802959561e-01F, 9.803053737e-01F, 9.803148508e-01F, 9.803243279e-01F,
	9.803338051e-01F, 9.803432226e-01F, 9.803526998e-01F, 9.803621769e-01F, 9.803715944e-01F, 9.803810716e-01F, 9.803904891e-01F, 9.803999662e-01F,
	9.804093838e-01F, 9.804188609e-01F, 9.804282784e-01F, 9.804376960e-01F, 9.804471731e-01F, 9.804565907e-01F, 9.804660082e-01F, 9.804754257e-01F,
	9.804848433e-01F, 9.804942608e-01F, 9.805036783e-01F, 9.805130959e-01F, 9.805225134e-01F, 9.805319309e-01F, 9.805413485e-01F, 9.805507660e-01F,
	9.805601835e-01F, 9.805696011e-01F, 9.805790186e-01F, 9.805883765e-01F, 9.805977941e-01F, 9.806072116e-01F, 9.806165695e-01F, 9.806259871e-01F,
	9.806353450e-01F, 9.806447625e-01F, 9.806541204e-01F, 9.806635380e-01F, 9.806728959e-01F, 9.806822538e-01F, 9.806916714e-01F, 9.807010293e-01F,
	9.807103872e-01F, 9.807197452e-01F, 9.807291031e-01F, 9.807385206e-01F, 9.807478786e-01F, 9.807572365e-01F, 9.807665944e-01F, 9.807759523e-01F,
	9.807852507e-01F, 9.807946086e-01F, 9.808039665e-01F, 9.808133245e-01F, 9.808226824e-01F, 9.808320403e-01F, 9.808413386e-01F, 9.808506966e-01F,
	9.808599949e-01F, 9.808693528e-01F, 9.808787107e-01F, 9.808880091e-01F, 9.808973670e-01F, 9.809066653e-01F, 9.809159636e-01F, 9.809253216e-01F,
	9.809346199e-01F, 9.809439182e-01F, 9.809532762e-01F, 9.809625745e-01F, 9.809718728e-01F, 9.809811711e-01F, 9.809904695e-01F, 9.809997678e-01F,
	9.810090661e-01F, 9.810183644e-01F, 9.810276628e-01F, 9.810369611e-01F, 9.810462594e-01F, 9.810555577e-01F, 9.810648561e-01F, 9.810740948e-01F,
	9.810833931e-01F, 9.810926914e-01F, 9.811019301e-01F, 9.811112285e-01F, 9.811204672e-01F, 9.811297655e-01F, 9.811390042e-01F, 9.811483026e-01F,
	9.811575413e-01F, 9.811668396e-01F, 9.811760783e-01F, 9.811853170e-01F, 9.811946154e-01F, 9.812038541e-01F, 9.812130928e-01F, 9.812223315e-01F,
	9.812315702e-01F, 9.812408090e-01F, 9.812500477e-01F, 9.812592864e-01F, 9.812685251e-01F, 9.812777638e-01F, 9.812870026e-01F, 9.812962413e-01F,
	9.813054800e-01F, 9.813146591e-01F, 9.813238978e-01F, 9.813331366e-01F, 9.813423157e-01F, 9.813515544e-01F, 9.813607931e-01F, 9.813699722e-01F,
	9.813792109e-01F, 9.813883901e-01F, 9.813976288e-01F, 9.814068079e-01F, 9.814159870e-01F, 9.814252257e-01F, 9.814344049e-01F, 9.814435840e-01F,
	9.814527631e-01F, 9.814619422e-01F, 9.814711809e-01F, 9.814803600e-01F, 9.814895391e-01F, 9.814987183e-01F, 9.815078974e-01F, 9.815170765e-01F,
	9.815262556e-01F, 9.815353751e-01F, 9.815445542e-01F, 9.815537333e-01F, 9.815629125e-01F, 9.815720320e-01F, 9.815812111e-01F, 9.815903902e-01F,
	9.815995097e-01F, 9.816086888e-01F, 9.816178083e-01F, 9.816269875e-01F, 9.816361070e-01F, 9.816452861e-01F, 9.816544056e-01F, 9.816635251e-01F,
	9.816727042e-01F, 9.816818237e-01F, 9.816909432e-01F, 9.817000628e-01F, 9.817091823e-01F, 9.817183614e-01F, 9.817274809e-01F, 9.817366004e-01F,
	9.817457199e-01F, 9.817548394e-01F, 9.817638993e-01F, 9.817730188e-01F, 9.817821383e-01F, 9.817912579e-01F, 9.818003774e-01F, 9.818094373e-01F,
	9.818185568e-01F, 9.818276763e-01F, 9.818367362e-01F, 9.818458557e-01F, 9.818549752e-01F, 9.818640351e-01F, 9.818730950e-01F, 9.818822145e-01F,
	9.818912745e-01F, 9.819003940e-01F, 9.819094539e-01F, 9.819185138e-01F, 9.819275737e-01F, 9.819366932e-01F, 9.819457531e-01F, 9.819548130e-01F,
	9.819638729e-01F, 9.819729328e-01F, 9.819819927e-01F, 9.819910526e-01F, 9.820001125e-01F, 9.820091724e-01F, 9.820182323e-01F, 9.820272326e-01F,
	9.820362926e-01F, 9.820453525e-01F, 9.820544124e-01F, 9.820634127e-01F, 9.820724726e-01F, 9.820814729e-01F, 9.820905328e-01F, 9.820995927e-01F,
	9.821085930e-01F, 9.821175933e-01F, 9.821266532e-01F, 9.821356535e-01F, 9.821447134e-01F, 9.821537137e-01F, 9.821627140e-01F, 9.821717143e-01F,
	9.821807146e-01F, 9.821897745e-01F, 9.821987748e-01F, 9.822077751e-01F, 9.822167754e-01F, 9.822257757e-01F, 9.822347760e-01F, 9.822437763e-01F,
	9.822527170e-01F, 9.822617173e-01F, 9.822707176e-01F, 9.822797179e-01F, 9.822886586e-01F, 9.822976589e-01F, 9.823066592e-01F, 9.823155999e-01F,
	9.823246002e-01F, 9.823335409e-01F, 9.823425412e-01F, 9.823514819e-01F, 9.823604822e-01F, 9.823694229e-01F, 9.823784232e-01F, 9.823873639e-01F,
	9.823963046e-01F, 9.824052453e-01F, 9.824142456e-01F, 9.824231863e-01F, 9.824321270e-01F, 9.824410677e-01F, 9.824500084e-01F, 9.824589491e-01F,
	9.824678898e-01F, 9.824768305e-01F, 9.824857712e-01F, 9.824946523e-01F, 9.825035930e-01F, 9.825125337e-01F, 9.825214744e-01F, 9.825303555e-01F,
	9.825392962e-01F, 9.825482368e-01F, 9.825571179e-01F, 9.825660586e-01F, 9.825749397e-01F, 9.825838804e-01F, 9.825927615e-01F, 9.826017022e-01F,
	9.826105833e-01F, 9.826194644e-01F, 9.826284051e-01F, 9.826372862e-01F, 9.826461673e-01F, 9.826550484e-01F, 9.826639295e-01F, 9.826728106e-01F,
	9.826816916e-01F, 9.826905727e-01F, 9.826994538e-01F, 9.827083349e-01F, 9.827172160e-01F, 9.827260971e-01F, 9.827349782e-01F, 9.827438593e-01F,
	9.827526808e-01F, 9.827615619e-01F, 9.827704430e-01F, 9.827792645e-01F, 9.827881455e-01F, 9.827970266e-01F, 9.828058481e-01F, 9.828147292e-01F,
	9.828235507e-01F, 9.828323722e-01F, 9.828412533e-01F, 9.828500748e-01F, 9.828588963e-01F, 9.828677773e-01F, 9.828765988e-01F, 9.828854203e-01F,
	9.828942418e-01F, 9.829030633e-01F, 9.829118848e-01F, 9.829207063e-01F, 9.829295278e-01F, 9.829383492e-01F, 9.829471707e-01F, 9.829559922e-01F,
	9.829648137e-01F, 9.829736352e-01F, 9.829823971e-01F, 9.829912186e-01F, 9.830000401e-01F, 9.830088615e-01F, 9.830176234e-01F, 9.830264449e-01F,
	9.830352068e-01F, 9.830440283e-01F, 9.830527902e-01F, 9.830616117e-01F, 9.830703735e-01F, 9.830791354e-01F, 9.830879569e-01F, 9.830967188e-01F,
	9.831054807e-01F, 9.831142426e-01F, 9.831230044e-01F, 9.831318259e-01F, 9.831405878e-01F, 9.831493497e-01F, 9.831581116e-01F, 9.831668735e-01F,
	9.831756353e-01F, 9.831843376e-01F, 9.831930995e-01F, 9.832018614e-01F, 9.832106233e-01F, 9.832193851e-01F, 9.832280874e-01F, 9.832368493e-01F,
	9.832456112e-01F, 9.832543135e-01F, 9.832630754e-01F, 9.832717776e-01F, 9.832805395e-01F, 9.832892418e-01F, 9.832980037e-01F, 9.833067060e-01F,
	9.833154082e-01F, 9.833241701e-01F, 9.833328724e-01F, 9.833415747e-01F, 9.833502769e-01F, 9.833589792e-01F, 9.833676815e-01F, 9.833763838e-01F,
	9.833850861e-01F, 9.833937883e-01F, 9.834024906e-01F, 9.834111929e-01F, 9.834198952e-01F, 9.834285975e-01F, 9.834372997e-01F, 9.834459424e-01F,
	9.834546447e-01F, 9.834633470e-01F, 9.834719896e-01F, 9.834806919e-01F, 9.834893942e-01F, 9.834980369e-01F, 9.835067391e-01F, 9.835153818e-01F,
	9.835240245e-01F, 9.835327268e-01F, 9.835413694e-01F, 9.835500121e-01F, 9.835587144e-01F, 9.835673571e-01F, 9.835759997e-01F, 9.835846424e-01F,
	9.835932851e-01F, 9.836019278e-01F, 9.836105704e-01F, 9.836192131e-01F, 9.836278558e-01F, 9.836364985e-01F, 9.836451411e-01F, 9.836537838e-01F,
	9.836624265e-01F, 9.836710691e-01F, 9.836796522e-01F, 9.836882949e-01F, 9.836969376e-01F, 9.837055206e-01F, 9.837141633e-01F, 9.837227464e-01F,
	9.837313890e-01F, 9.837399721e-01F, 9.837486148e-01F, 9.837571979e-01F, 9.837658405e-01F, 9.837744236e-01F, 9.837830067e-01F, 9.837915897e-01F,
	9.838002324e-01F, 9.838088155e-01F, 9.838173985e-01F, 9.838259816e-01F, 9.838345647e-01F, 9.838431478e-01F, 9.838517308e-01F, 9.838603139e-01F,
	9.838688970e-01F, 9.838774800e-01F, 9.838860035e-01F, 9.838945866e-01F, 9.839031696e-01F, 9.839117527e-01F, 9.839202762e-01F, 9.839288592e-01F,
	9.839374423e-01F, 9.839459658e-01F, 9.839545488e-01F, 9.839630723e-01F, 9.839715958e-01F, 9.839801788e-01F, 9.839887023e-01F, 9.839972854e-01F,
	9.840058088e-01F, 9.840143323e-01F, 9.840228558e-01F, 9.840313792e-01F, 9.840399623e-01F, 9.840484858e-01F, 9.840570092e-01F, 9.840655327e-01F,
	9.840740561e-01F, 9.840825796e-01F, 9.840911031e-01F, 9.840995669e-01F, 9.841080904e-01F, 9.841166139e-01F, 9.841251373e-01F, 9.841336608e-01F,
	9.841421247e-01F, 9.841506481e-01F, 9.841591120e-01F, 9.841676354e-01F, 9.841761589e-01F, 9.841846228e-01F, 9.841931462e-01F, 9.842016101e-01F,
	9.842100739e-01F, 9.842185974e-01F, 9.842270613e-01F, 9.842355251e-01F, 9.842439890e-01F, 9.842525125e-01F, 9.842609763e-01F, 9.842694402e-01F,
	9.842779040e-01F, 9.842863679e-01F, 9.842948318e-01F, 9.843032956e-01F, 9.843117595e-01F, 9.843202233e-01F, 9.843286872e-01F, 9.843370914e-01F,
	9.843455553e-01F, 9.843540192e-01F, 9.843624830e-01F, 9.843708873e-01F, 9.843793511e-01F, 9.843877554e-01F, 9.843962193e-01F, 9.844046235e-01F,
	9.844130874e-01F, 9.844214916e-01F, 9.844299555e-01F, 9.844383597e-01F, 9.844467640e-01F, 9.844552279e-01F, 9.844636321e-01F, 9.844720364e-01F,
	9.844804406e-01F, 9.844888449e-01F, 9.844972491e-01F, 9.845056534e-01F, 9.845141172e-01F, 9.845224619e-01F, 9.845308661e-01F, 9.845392704e-01F,
	9.845476747e-01F, 9.845560789e-01F, 9.845644832e-01F, 9.845728874e-01F, 9.845812321e-01F, 9.845896363e-01F, 9.845979810e-01F, 9.846063852e-01F,
	9.846147895e-01F, 9.846231341e-01F, 9.846315384e-01F, 9.846398830e-01F, 9.846482277e-01F, 9.846566319e-01F, 9.846649766e-01F, 9.846733212e-01F,
	9.846817255e-01F, 9.846900702e-01F, 9.846984148e-01F, 9.847067595e-01F, 9.847151041e-01F, 9.847234488e-01F, 9.847317934e-01F, 9.847401381e-01F,
	9.847484827e-01F, 9.847568274e-01F, 9.847651720e-01F, 9.847735167e-01F, 9.847818613e-01F, 9.847901464e-01F, 9.847984910e-01F, 9.848068357e-01F,
	9.848151803e-01F, 9.848234653e-01F, 9.848318100e-01F, 9.848400950e-01F, 9.848484397e-01F, 9.848567247e-01F, 9.848650694e-01F, 9.848733544e-01F,
	9.848816395e-01F, 9.848899841e-01F, 9.848982692e-01F, 9.849065542e-01F, 9.849148393e-01F, 9.849231243e-01F, 9.849314690e-01F, 9.849397540e-01F,
	9.849480391e-01F, 9.849563241e-01F, 9.849646091e-01F, 9.849728346e-01F, 9.849811196e-01F, 9.849894047e-01F, 9.849976897e-01F, 9.850059748e-01F,
	9.850142598e-01F, 9.850224853e-01F, 9.850307703e-01F, 9.850389957e-01F, 9.850472808e-01F, 9.850555658e-01F, 9.850637913e-01F, 9.850720763e-01F,
	9.850803018e-01F, 9.850885272e-01F, 9.850968122e-01F, 9.851050377e-01F, 9.851132631e-01F, 9.851215482e-01F, 9.851297736e-01F, 9.851379991e-01F,
	9.851462245e-01F, 9.851544499e-01F, 9.851626754e-01F, 9.851709008e-01F, 9.851791263e-01F, 9.851873517e-01F, 9.851955771e-01F, 9.852038026e-01F,
	9.852120280e-01F, 9.852201939e-01F, 9.852284193e-01F, 9.852366447e-01F, 9.852448702e-01F, 9.852530360e-01F, 9.852612615e-01F, 9.852694273e-01F,
	9.852776527e-01F, 9.852858186e-01F, 9.852940440e-01F, 9.853022099e-01F, 9.853104353e-01F, 9.853186011e-01F, 9.853267670e-01F, 9.853349328e-01F,
	9.853431582e-01F, 9.853513241e-01F, 9.853594899e-01F, 9.853676558e-01F, 9.853758216e-01F, 9.853839874e-01F, 9.853921533e-01F, 9.854003191e-01F,
	9.854084849e-01F, 9.854166508e-01F, 9.854248166e-01F, 9.854329228e-01F, 9.854410887e-01F, 9.854492545e-01F, 9.854574203e-01F, 9.854655266e-01F,
	9.854736924e-01F, 9.854817986e-01F, 9.854899645e-01F, 9.854980707e-01F, 9.855062366e-01F, 9.855143428e-01F, 9.855225086e-01F, 9.855306149e-01F,
	9.855387211e-01F, 9.855468273e-01F, 9.855549932e-01F, 9.855630994e-01F, 9.855712056e-01F, 9.855793118e-01F, 9.855874181e-01F, 9.855955243e-01F,
	9.856036305e-01F, 9.856117368e-01F, 9.856198430e-01F, 9.856279492e-01F, 9.856360555e-01F, 9.856441617e-01F, 9.856522083e-01F, 9.856603146e-01F,
	9.856684208e-01F, 9.856765270e-01F, 9.856845737e-01F, 9.856926799e-01F, 9.857007265e-01F, 9.857088327e-01F, 9.857168794e-01F, 9.857249856e-01F,
	9.857330322e-01F, 9.857410789e-01F, 9.857491851e-01F, 9.857572317e-01F, 9.857652783e-01F, 9.857733250e-01F, 9.857814312e-01F, 9.857894778e-01F,
	9.857975245e-01F, 9.858055711e-01F, 9.858136177e-01F, 9.858216643e-01F, 9.858297110e-01F, 9.858377576e-01F, 9.858457446e-01F, 9.858537912e-01F,
	9.858618379e-01F, 9.858698845e-01F, 9.858778715e-01F, 9.858859181e-01F, 9.858939648e-01F, 9.859019518e-01F, 9.859099984e-01F, 9.859179854e-01F,
	9.859260321e-01F, 9.859340191e-01F, 9.859420657e-01F, 9.859500527e-01F, 9.859580398e-01F, 9.859660864e-01F, 9.859740734e-01F, 9.859820604e-01F,
	9.859900475e-01F, 9.859980345e-01F, 9.860060811e-01F, 9.860140681e-01F, 9.860220551e-01F, 9.860300422e-01F, 9.860380292e-01F, 9.860459566e-01F,
	9.860539436e-01F, 9.860619307e-01F, 9.860699177e-01F, 9.860779047e-01F, 9.860858321e-01F, 9.860938191e-01F, 9.861018062e-01F, 9.861097336e-01F,
	9.861177206e-01F, 9.861256480e-01F, 9.861336350e-01F, 9.861415625e-01F, 9.861495495e-01F, 9.861574769e-01F, 9.861654043e-01F, 9.861733913e-01F,
	9.861813188e-01F, 9.861892462e-01F, 9.861971736e-01F, 9.862051606e-01F, 9.862130880e-01F, 9.862210155e-01F, 9.862289429e-01F, 9.862368703e-01F,
	9.862447977e-01F, 9.862527251e-01F, 9.862606525e-01F, 9.862685204e-01F, 9.862764478e-01F, 9.862843752e-01F, 9.862923026e-01F, 9.863001704e-01F,
	9.863080978e-01F, 9.863160253e-01F, 9.863238931e-01F, 9.863318205e-01F, 9.863396883e-01F, 9.863476157e-01F, 9.863554835e-01F, 9.863633513e-01F,
	9.863712788e-01F, 9.863791466e-01F, 9.863870144e-01F, 9.863949418e-01F, 9.864028096e-01F, 9.864106774e-01F, 9.864185452e-01F, 9.864264131e-01F,
	9.864342809e-01F, 9.864421487e-01F, 9.864500165e-01F, 9.864578843e-01F, 9.864657521e-01F, 9.864736199e-01F, 9.864814878e-01F, 9.864892960e-01F,
	9.864971638e-01F, 9.865050316e-01F, 9.865128994e-01F, 9.865207076e-01F, 9.865285754e-01F, 9.865363836e-01F, 9.865442514e-01F, 9.865520597e-01F,
	9.865599275e-01F, 9.865677357e-01F, 9.865755439e-01F, 9.865834117e-01F, 9.865912199e-01F, 9.865990281e-01F, 9.866068959e-01F, 9.866147041e-01F,
	9.866225123e-01F, 9.866303205e-01F, 9.866381288e-01F, 9.866459370e-01F, 9.866537452e-01F, 9.866615534e-01F, 9.866693616e-01F, 9.866771698e-01F,
	9.866849184e-01F, 9.866927266e-01F, 9.867005348e-01F, 9.867083430e-01F, 9.867160916e-01F, 9.867238998e-01F, 9.867317080e-01F, 9.867394567e-01F,
	9.867472649e-01F, 9.867550135e-01F, 9.867628217e-01F, 9.867705703e-01F, 9.867783189e-01F, 9.867861271e-01F, 9.867938757e-01F, 9.868016243e-01F,
	9.868093729e-01F, 9.868171811e-01F, 9.868249297e-01F, 9.868326783e-01F, 9.868404269e-01F, 9.868481755e-01F, 9.868559241e-01F, 9.868636727e-01F,
	9.868714213e-01F, 9.868791699e-01F, 9.868869185e-01F, 9.868946075e-01F, 9.869023561e-01F, 9.869101048e-01F, 9.869178534e-01F, 9.869255424e-01F,
	9.869332910e-01F, 9.869409800e-01F, 9.869487286e-01F, 9.869564176e-01F, 9.869641662e-01F, 9.869718552e-01F, 9.869796038e-01F, 9.869872928e-01F,
	9.869949818e-01F, 9.870027304e-01F, 9.870104194e-01F, 9.870181084e-01F, 9.870257974e-01F, 9.870334864e-01F, 9.870411754e-01F, 9.870488644e-01F,
	9.870565534e-01F, 9.870642424e-01F, 9.870719314e-01F, 9.870796204e-01F, 9.870873094e-01F, 9.870949984e-01F, 9.871026278e-01F, 9.871103168e-01F,
	9.871180058e-01F, 9.871256948e-01F, 9.871333241e-01F, 9.871410131e-01F, 9.871486425e-01F, 9.871563315e-01F, 9.871639609e-01F, 9.871716499e-01F,
	9.871792793e-01F, 9.871869087e-01F, 9.871945977e-01F, 9.872022271e-01F, 9.872098565e-01F, 9.872174859e-01F, 9.872251749e-01F, 9.872328043e-01F,
	9.872404337e-01F, 9.872480631e-01F, 9.872556925e-01F, 9.872633219e-01F, 9.872709513e-01F, 9.872785807e-01F, 9.872862101e-01F, 9.872937799e-01F,
	9.873014092e-01F, 9.873090386e-01F, 9.873166680e-01F, 9.873242378e-01F, 9.873318672e-01F, 9.873394370e-01F, 9.873470664e-01F, 9.873546958e-01F,
	9.873622656e-01F, 9.873698354e-01F, 9.873774648e-01F, 9.873850346e-01F, 9.873926640e-01F, 9.874002337e-01F, 9.874078035e-01F, 9.874153733e-01F,
	9.874229431e-01F, 9.874305725e-01F, 9.874381423e-01F, 9.874457121e-01F, 9.874532819e-01F, 9.874608517e-01F, 9.874684215e-01F, 9.874759912e-01F,
	9.874835014e-01F, 9.874910712e-01F, 9.874986410e-01F, 9.875062108e-01F, 9.875137806e-01F, 9.875212908e-01F, 9.875288606e-01F, 9.875363708e-01F,
	9.875439405e-01F, 9.875515103e-01F, 9.875590205e-01F, 9.875665307e-01F, 9.875741005e-01F, 9.875816107e-01F, 9.875891805e-01F, 9.875966907e-01F,
	9.876042008e-01F, 9.876117110e-01F, 9.876192808e-01F, 9.876267910e-01F, 9.876343012e-01F, 9.876418114e-01F, 9.876493216e-01F, 9.876568317e-01F,
	9.876643419e-01F, 9.876718521e-01F, 9.876793623e-01F, 9.876868129e-01F, 9.876943231e-01F, 9.877018332e-01F, 9.877093434e-01F, 9.877167940e-01F,
	9.877243042e-01F, 9.877318144e-01F, 9.877392650e-01F, 9.877467752e-01F, 9.877542257e-01F, 9.877617359e-01F, 9.877691865e-01F, 9.877766967e-01F,
	9.877841473e-01F, 9.877915978e-01F, 9.877990484e-01F, 9.878065586e-01F, 9.878140092e-01F, 9.878214598e-01F, 9.878289104e-01F, 9.878363609e-01F,
	9.878438115e-01F, 9.878512621e-01F, 9.878587127e-01F, 9.878661633e-01F, 9.878736138e-01F, 9.878810644e-01F, 9.878885150e-01F, 9.878959060e-01F,
	9.879033566e-01F, 9.879108071e-01F, 9.879182577e-01F, 9.879256487e-01F, 9.879330993e-01F, 9.879404902e-01F, 9.879479408e-01F, 9.879553318e-01F,
	9.879627824e-01F, 9.879701734e-01F, 9.879775643e-01F, 9.879850149e-01F, 9.879924059e-01F, 9.879997969e-01F, 9.880072474e-01F, 9.880146384e-01F,
	9.880220294e-01F, 9.880294204e-01F, 9.880368114e-01F, 9.880442023e-01F, 9.880515933e-01F, 9.880589843e-01F, 9.880663753e-01F, 9.880737662e-01F,
	9.880810976e-01F, 9.880884886e-01F, 9.880958796e-01F, 9.881032705e-01F, 9.881106019e-01F, 9.881179929e-01F, 9.881253839e-01F, 9.881327152e-01F,
	9.881401062e-01F, 9.881474376e-01F, 9.881548285e-01F, 9.881621599e-01F, 9.881694913e-01F, 9.881768823e-01F, 9.881842136e-01F, 9.881915450e-01F,
	9.881988764e-01F, 9.882062674e-01F, 9.882135987e-01F, 9.882209301e-01F, 9.882282615e-01F, 9.882355928e-01F, 9.882429242e-01F, 9.882502556e-01F,
	9.882575870e-01F, 9.882649183e-01F, 9.882721901e-01F, 9.882795215e-01F, 9.882868528e-01F, 9.882941842e-01F, 9.883014560e-01F, 9.883087873e-01F,
	9.883161187e-01F, 9.883233905e-01F, 9.883307219e-01F, 9.883379936e-01F, 9.883453250e-01F, 9.883525968e-01F, 9.883598685e-01F, 9.883671999e-01F,
	9.883744717e-01F, 9.883817434e-01F, 9.883890152e-01F, 9.883963466e-01F, 9.884036183e-01F, 9.884108901e-01F, 9.884181619e-01F, 9.884254336e-01F,
	9.884327054e-01F, 9.884399772e-01F, 9.884472489e-01F, 9.884545207e-01F, 9.884617925e-01F, 9.884690046e-01F, 9.884762764e-01F, 9.884835482e-01F,
	9.884908199e-01F, 9.884980321e-01F, 9.885053039e-01F, 9.885125160e-01F, 9.885197878e-01F, 9.885270000e-01F, 9.885342717e-01F, 9.885414839e-01F,
	9.885487556e-01F, 9.885559678e-01F, 9.885631800e-01F, 9.885704517e-01F, 9.885776639e-01F, 9.885848761e-01F, 9.885920882e-01F, 9.885993004e-01F,
	9.886065125e-01F, 9.886137247e-01F, 9.886209369e-01F, 9.886281490e-01F, 9.886353612e-01F, 9.886425734e-01F, 9.886497855e-01F, 9.886569977e-01F,
	9.886642098e-01F, 9.886713624e-01F, 9.886785746e-01F, 9.886857867e-01F, 9.886929393e-01F, 9.887001514e-01F, 9.887073040e-01F, 9.887145162e-01F,
	9.887216687e-01F, 9.887288809e-01F, 9.887360334e-01F, 9.887432456e-01F, 9.887503982e-01F, 9.887575507e-01F, 9.887647033e-01F, 9.887719154e-01F,
	9.887790680e-01F, 9.887862206e-01F, 9.887933731e-01F, 9.888005257e-01F, 9.888076782e-01F, 9.888148308e-01F, 9.888219833e-01F, 9.888291359e-01F,
	9.888362885e-01F, 9.888433814e-01F, 9.888505340e-01F, 9.888576865e-01F, 9.888648391e-01F, 9.888719320e-01F, 9.888790846e-01F, 9.888862371e-01F,
	9.888933301e-01F, 9.889004827e-01F, 9.889075756e-01F, 9.889147282e-01F, 9.889218211e-01F, 9.889289141e-01F, 9.889360666e-01F, 9.889431596e-01F,
	9.889502525e-01F, 9.889573455e-01F, 9.889644980e-01F, 9.889715910e-01F, 9.889786839e-01F, 9.889857769e-01F, 9.889928699e-01F, 9.889999628e-01F,
	9.890070558e-01F, 9.890141487e-01F, 9.890212417e-01F, 9.890282750e-01F, 9.890353680e-01F, 9.890424609e-01F, 9.890495539e-01F, 9.890565872e-01F,
	9.890636802e-01F, 9.890707731e-01F, 9.890778065e-01F, 9.890848994e-01F, 9.890919328e-01F, 9.890990257e-01F, 9.891060591e-01F, 9.891130924e-01F,
	9.891201854e-01F, 9.891272187e-01F, 9.891342521e-01F, 9.891412854e-01F, 9.891483784e-01F, 9.891554117e-01F, 9.891624451e-01F, 9.891694784e-01F,
	9.891765118e-01F, 9.891835451e-01F, 9.891905785e-01F, 9.891976118e-01F, 9.892046452e-01F, 9.892116785e-01F, 9.892186522e-01F, 9.892256856e-01F,
	9.892327189e-01F, 9.892396927e-01F, 9.892467260e-01F, 9.892537594e-01F, 9.892607331e-01F, 9.892677665e-01F, 9.892747402e-01F, 9.892817736e-01F,
	9.892887473e-01F, 9.892957807e-01F, 9.893027544e-01F, 9.893097281e-01F, 9.893167019e-01F, 9.893237352e-01F, 9.893307090e-01F, 9.893376827e-01F,
	9.893446565e-01F, 9.893516302e-01F, 9.893586040e-01F, 9.893655777e-01F, 9.893725514e-01F, 9.893795252e-01F, 9.893864989e-01F, 9.893934727e-01F,
	9.894004464e-01F, 9.894073606e-01F, 9.894143343e-01F, 9.894213080e-01F, 9.894282818e-01F, 9.894351959e-01F, 9.894421697e-01F, 9.894490838e-01F,
	9.894560575e-01F, 9.894629717e-01F, 9.894699454e-01F, 9.894768596e-01F, 9.894837737e-01F, 9.894907475e-01F, 9.894976616e-01F, 9.895045757e-01F,
	9.895114899e-01F, 9.895184636e-01F, 9.895253778e-01F, 9.895322919e-01F, 9.895392060e-01F, 9.895461202e-01F, 9.895530343e-01F, 9.895599484e-01F,
	9.895668626e-01F, 9.895737171e-01F, 9.895806313e-01F, 9.895875454e-01F, 9.895944595e-01F, 9.896013141e-01F, 9.896082282e-01F, 9.896151423e-01F,
	9.896219969e-01F, 9.896289110e-01F, 9.896357656e-01F, 9.896426797e-01F, 9.896495342e-01F, 9.896564484e-01F, 9.896633029e-01F, 9.896701574e-01F,
	9.896770716e-01F, 9.896839261e-01F, 9.896907806e-01F, 9.896976352e-01F, 9.897044897e-01F, 9.897113442e-01F, 9.897182584e-01F, 9.897251129e-01F,
	9.897319674e-01F, 9.897387624e-01F, 9.897456169e-01F, 9.897524714e-01F, 9.897593260e-01F, 9.897661805e-01F, 9.897730350e-01F, 9.897798300e-01F,
	9.897866845e-01F, 9.897935390e-01F, 9.898003340e-01F, 9.898071885e-01F, 9.898139834e-01F, 9.898208380e-01F, 9.898276329e-01F, 9.898344874e-01F,
	9.898412824e-01F, 9.898480773e-01F, 9.898549318e-01F, 9.898617268e-01F, 9.898685217e-01F, 9.898753166e-01F, 9.898821115e-01F, 9.898889065e-01F,
	9.898957014e-01F, 9.899024963e-01F, 9.899092913e-01F, 9.899160862e-01F, 9.899228811e-01F, 9.899296761e-01F, 9.899364710e-01F, 9.899432659e-01F,
	9.899500608e-01F, 9.899567962e-01F, 9.899635911e-01F, 9.899703860e-01F, 9.899771214e-01F, 9.899839163e-01F, 9.899906516e-01F, 9.899974465e-01F,
	9.900041819e-01F, 9.900109768e-01F, 9.900177121e-01F, 9.900244474e-01F, 9.900312424e-01F, 9.900379777e-01F, 9.900447130e-01F, 9.900514483e-01F,
	9.900581837e-01F, 9.900649786e-01F, 9.900717139e-01F, 9.900784492e-01F, 9.900851846e-01F, 9.900919199e-01F, 9.900986552e-01F, 9.901053309e-01F,
	9.901120663e-01F, 9.901188016e-01F, 9.901255369e-01F, 9.901322722e-01F, 9.901389480e-01F, 9.901456833e-01F, 9.901523590e-01F, 9.901590943e-01F,
	9.901658297e-01F, 9.901725054e-01F, 9.901791811e-01F, 9.901859164e-01F, 9.901925921e-01F, 9.901993275e-01F, 9.902060032e-01F, 9.902126789e-01F,
	9.902193546e-01F, 9.902260900e-01F, 9.902327657e-01F, 9.902394414e-01F, 9.902461171e-01F, 9.902527928e-01F, 9.902594686e-01F, 9.902661443e-01F,
	9.902728200e-01F, 9.902794957e-01F, 9.902861714e-01F, 9.902927876e-01F, 9.902994633e-01F, 9.903061390e-01F, 9.903128147e-01F, 9.903194308e-01F,
	9.903261065e-01F, 9.903327227e-01F, 9.903393984e-01F, 9.903460145e-01F, 9.903526902e-01F, 9.903593063e-01F, 9.903659821e-01F, 9.903725982e-01F,
	9.903792143e-01F, 9.903858900e-01F, 9.903925061e-01F, 9.903991222e-01F, 9.904057384e-01F, 9.904123545e-01F, 9.904189706e-01F, 9.904256463e-01F,
	9.904322624e-01F, 9.904388785e-01F, 9.904454350e-01F, 9.904520512e-01F, 9.904586673e-01F, 9.904652834e-01F, 9.904718995e-01F, 9.904785156e-01F,
	9.904850721e-01F, 9.904916883e-01F, 9.904982448e-01F, 9.905048609e-01F, 9.905114770e-01F, 9.905180335e-01F, 9.905246496e-01F, 9.905312061e-01F,
	9.905377626e-01F, 9.905443788e-01F, 9.905509353e-01F, 9.905574918e-01F, 9.905641079e-01F, 9.905706644e-01F, 9.905772209e-01F, 9.905837774e-01F,
	9.905903339e-01F, 9.905968904e-01F, 9.906034470e-01F, 9.906100035e-01F, 9.906165600e-01F, 9.906231165e-01F, 9.906296730e-01F, 9.906362295e-01F,
	9.906427860e-01F, 9.906492829e-01F, 9.906558394e-01F, 9.906623960e-01F, 9.906688929e-01F, 9.906754494e-01F, 9.906819463e-01F, 9.906885028e-01F,
	9.906949997e-01F, 9.907015562e-01F, 9.907080531e-01F, 9.907146096e-01F, 9.907211065e-01F, 9.907276034e-01F, 9.907341003e-01F, 9.907406569e-01F,
	9.907471538e-01F, 9.907536507e-01F, 9.907601476e-01F, 9.907666445e-01F, 9.907731414e-01F, 9.907796383e-01F, 9.907861352e-01F, 9.907926321e-01F,
	9.907991290e-01F, 9.908056259e-01F, 9.908120632e-01F, 9.908185601e-01F, 9.908250570e-01F, 9.908315539e-01F, 9.908379912e-01F, 9.908444881e-01F,
	9.908509254e-01F, 9.908574224e-01F, 9.908638597e-01F, 9.908703566e-01F, 9.908767939e-01F, 9.908832908e-01F, 9.908897281e-01F, 9.908961654e-01F,
	9.909026623e-01F, 9.909090996e-01F, 9.909155369e-01F, 9.909219742e-01F, 9.909284115e-01F, 9.909348488e-01F, 9.909412861e-01F, 9.909477234e-01F,
	9.909541607e-01F, 9.909605980e-01F, 9.909670353e-01F, 9.909734726e-01F, 9.909799099e-01F, 9.909862876e-01F, 9.909927249e-01F, 9.909991622e-01F,
	9.910055399e-01F, 9.910119772e-01F, 9.910184145e-01F, 9.910247922e-01F, 9.910312295e-01F, 9.910376072e-01F, 9.910440445e-01F, 9.910504222e-01F,
	9.910567999e-01F, 9.910632372e-01F, 9.910696149e-01F, 9.910759926e-01F, 9.910823703e-01F, 9.910887480e-01F, 9.910951257e-01F, 9.911015630e-01F,
	9.911079407e-01F, 9.911143184e-01F, 9.911206365e-01F, 9.911270142e-01F, 9.911333919e-01F, 9.911397696e-01F, 9.911461473e-01F, 9.911525249e-01F,
	9.911588430e-01F, 9.911652207e-01F, 9.911715984e-01F, 9.911779165e-01F, 9.911842942e-01F, 9.911906123e-01F, 9.911969900e-01F, 9.912033081e-01F,
	9.912096858e-01F, 9.912160039e-01F, 9.912223816e-01F, 9.912286997e-01F, 9.912350178e-01F, 9.912413359e-01F, 9.912477136e-01F, 9.912540317e-01F,
	9.912603498e-01F, 9.912666678e-01F, 9.912729859e-01F, 9.912793040e-01F, 9.912856221e-01F, 9.912919402e-01F, 9.912982583e-01F, 9.913045764e-01F,
	9.913108349e-01F, 9.913171530e-01F, 9.913234711e-01F, 9.913297892e-01F, 9.913360476e-01F, 9.913423657e-01F, 9.913486242e-01F, 9.913549423e-01F,
	9.913612604e-01F, 9.913675189e-01F, 9.913737774e-01F, 9.913800955e-01F, 9.913863540e-01F, 9.913926125e-01F, 9.913989305e-01F, 9.914051890e-01F,
	9.914114475e-01F, 9.914177060e-01F, 9.914239645e-01F, 9.914302826e-01F, 9.914365411e-01F, 9.914427996e-01F, 9.914490581e-01F, 9.914552569e-01F,
	9.914615154e-01F, 9.914677739e-01F, 9.914740324e-01F, 9.914802909e-01F, 9.914865494e-01F, 9.914927483e-01F, 9.914990067e-01F, 9.915052652e-01F,
	9.915114641e-01F, 9.915177226e-01F, 9.915239215e-01F, 9.915301800e-01F, 9.915363789e-01F, 9.915426373e-01F, 9.915488362e-01F, 9.915550351e-01F,
	9.915612340e-01F, 9.915674925e-01F, 9.915736914e-01F, 9.915798903e-01F, 9.915860891e-01F, 9.915922880e-01F, 9.915984869e-01F, 9.916046858e-01F,
	9.916108847e-01F, 9.916170835e-01F, 9.916232824e-01F, 9.916294813e-01F, 9.916356802e-01F, 9.916418791e-01F, 9.916480184e-01F, 9.916542172e-01F,
	9.916604161e-01F, 9.916665554e-01F, 9.916727543e-01F, 9.916789532e-01F, 9.916850924e-01F, 9.916912913e-01F, 9.916974306e-01F, 9.917035699e-01F,
	9.917097688e-01F, 9.917159081e-01F, 9.917220473e-01F, 9.917282462e-01F, 9.917343855e-01F, 9.917405248e-01F, 9.917466640e-01F, 9.917528033e-01F,
	9.917589426e-01F, 9.917650819e-01F, 9.917712212e-01F, 9.917773604e-01F, 9.917834997e-01F, 9.917896390e-01F, 9.917957783e-01F, 9.918019176e-01F,
	9.918079972e-01F, 9.918141365e-01F, 9.918202758e-01F, 9.918263555e-01F, 9.918324947e-01F, 9.918386340e-01F, 9.918447137e-01F, 9.918508530e-01F,
	9.918569326e-01F, 9.918630123e-01F, 9.918691516e-01F, 9.918752313e-01F, 9.918813109e-01F, 9.918874502e-01F, 9.918935299e-01F, 9.918996096e-01F,
	9.919056892e-01F, 9.919117689e-01F, 9.919178486e-01F, 9.919239283e-01F, 9.919300079e-01F, 9.919360876e-01F, 9.919421673e-01F, 9.919482470e-01F,
	9.919543266e-01F, 9.919604063e-01F, 9.919664264e-01F, 9.919725060e-01F, 9.919785857e-01F, 9.919846654e-01F, 9.919906855e-01F, 9.919967651e-01F,
	9.920027852e-01F, 9.920088649e-01F, 9.920148849e-01F, 9.920209646e-01F, 9.920269847e-01F, 9.920330048e-01F, 9.920390844e-01F, 9.920451045e-01F,
	9.920511246e-01F, 9.920571446e-01F, 9.920631647e-01F, 9.920692444e-01F, 9.920752645e-01F, 9.920812845e-01F, 9.920873046e-01F, 9.920933247e-01F,
	9.920992851e-01F, 9.921053052e-01F, 9.921113253e-01F, 9.921173453e-01F, 9.921233654e-01F, 9.921293259e-01F, 9.921353459e-01F, 9.921413660e-01F,
	9.921473265e-01F, 9.921533465e-01F, 9.921593666e-01F, 9.921653271e-01F, 9.921712875e-01F, 9.921773076e-01F, 9.921832681e-01F, 9.921892881e-01F,
	9.921952486e-01F, 9.922012091e-01F, 9.922071695e-01F, 9.922131896e-01F, 9.922191501e-01F, 9.922251105e-01F, 9.922310710e-01F, 9.922370315e-01F,
	9.922429919e-01F, 9.922489524e-01F, 9.922549129e-01F, 9.922608733e-01F, 9.922668338e-01F, 9.922727346e-01F, 9.922786951e-01F, 9.922846556e-01F,
	9.922906160e-01F, 9.922965169e-01F, 9.923024774e-01F, 9.923083782e-01F, 9.923143387e-01F, 9.923202395e-01F, 9.923262000e-01F, 9.923321009e-01F,
	9.923380613e-01F, 9.923439622e-01F, 9.923498631e-01F, 9.923558235e-01F, 9.923617244e-01F, 9.923676252e-01F, 9.923735261e-01F, 9.923794270e-01F,
	9.923853278e-01F, 9.923912287e-01F, 9.923971295e-01F, 9.924030304e-01F, 9.924089313e-01F, 9.924148321e-01F, 9.924207330e-01F, 9.924266338e-01F,
	9.924325347e-01F, 9.924383759e-01F, 9.924442768e-01F, 9.924501777e-01F, 9.924560189e-01F, 9.924619198e-01F, 9.924678206e-01F, 9.924736619e-01F,
	9.924795628e-01F, 9.924854040e-01F, 9.924912453e-01F, 9.924971461e-01F, 9.925029874e-01F, 9.925088286e-01F, 9.925147295e-01F, 9.925205708e-01F,
	9.925264120e-01F, 9.925322533e-01F, 9.925380945e-01F, 9.925439358e-01F, 9.925497770e-01F, 9.925556183e-01F, 9.925614595e-01F, 9.925673008e-01F,
	9.925731421e-01F, 9.925789833e-01F, 9.925847650e-01F, 9.925906062e-01F, 9.925964475e-01F, 9.926022887e-01F, 9.926080704e-01F, 9.926139116e-01F,
	9.926196933e-01F, 9.926255345e-01F, 9.926313162e-01F, 9.926371574e-01F, 9.926429391e-01F, 9.926487207e-01F, 9.926545620e-01F, 9.926603436e-01F,
	9.926661253e-01F, 9.926719069e-01F, 9.926777482e-01F, 9.926835299e-01F, 9.926893115e-01F, 9.926950932e-01F, 9.927008748e-01F, 9.927066565e-01F,
	9.927124381e-01F, 9.927182198e-01F, 9.927240014e-01F, 9.927297235e-01F, 9.927355051e-01F, 9.927412868e-01F, 9.927470684e-01F, 9.927527905e-01F,
	9.927585721e-01F, 9.927643538e-01F, 9.927700758e-01F, 9.927758574e-01F, 9.927815795e-01F, 9.927873611e-01F, 9.927930832e-01F, 9.927988052e-01F,
	9.928045869e-01F, 9.928103089e-01F, 9.928160310e-01F, 9.928217530e-01F, 9.928275347e-01F, 9.928332567e-01F, 9.928389788e-01F, 9.928447008e-01F,
	9.928504229e-01F, 9.928561449e-01F, 9.928618670e-01F, 9.928675890e-01F, 9.928733110e-01F, 9.928789735e-01F, 9.928846955e-01F, 9.928904176e-01F,
	9.928961396e-01F, 9.929018021e-01F, 9.929075241e-01F, 9.929132462e-01F, 9.929189086e-01F, 9.929246306e-01F, 9.929302931e-01F, 9.929360151e-01F,
	9.929416776e-01F, 9.929473400e-01F, 9.929530621e-01F, 9.929587245e-01F, 9.929643869e-01F, 9.929700494e-01F, 9.929757714e-01F, 9.929814339e-01F,
	9.929870963e-01F, 9.929927588e-01F, 9.929984212e-01F, 9.930040836e-01F, 9.930097461e-01F, 9.930154085e-01F, 9.930210710e-01F, 9.930266738e-01F,
	9.930323362e-01F, 9.930379987e-01F, 9.930436611e-01F, 9.930492640e-01F, 9.930549264e-01F, 9.930605888e-01F, 9.930661917e-01F, 9.930718541e-01F,
	9.930774570e-01F, 9.930831194e-01F, 9.930887222e-01F, 9.930943251e-01F, 9.930999875e-01F, 9.931055903e-01F, 9.931111932e-01F, 9.931168556e-01F,
	9.931224585e-01F, 9.931280613e-01F, 9.931336641e-01F, 9.931392670e-01F, 9.931448698e-01F, 9.931504726e-01F, 9.931560755e-01F, 9.931616783e-01F,
	9.931672812e-01F, 9.931728840e-01F, 9.931784272e-01F, 9.931840301e-01F, 9.931896329e-01F, 9.931952357e-01F, 9.932007790e-01F, 9.932063818e-01F,
	9.932119250e-01F, 9.932175279e-01F, 9.932230711e-01F, 9.932286739e-01F, 9.932342172e-01F, 9.932398200e-01F, 9.932453632e-01F, 9.932509065e-01F,
	9.932565093e-01F, 9.932620525e-01F, 9.932675958e-01F, 9.932731390e-01F, 9.932786822e-01F, 9.932842255e-01F, 9.932897687e-01F, 9.932953119e-01F,
	9.933008552e-01F, 9.933063984e-01F, 9.933119416e-01F, 9.933174849e-01F, 9.933230281e-01F, 9.933285117e-01F, 9.933340549e-01F, 9.933395982e-01F,
	9.933451414e-01F, 9.933506250e-01F, 9.933561683e-01F, 9.933616519e-01F, 9.933671951e-01F, 9.933726788e-01F, 9.933782220e-01F, 9.933837056e-01F,
	9.933891892e-01F, 9.933947325e-01F, 9.934002161e-01F, 9.934056997e-01F, 9.934111834e-01F, 9.934167266e-01F, 9.934222102e-01F, 9.934276938e-01F,
	9.934331775e-01F, 9.934386611e-01F, 9.934441447e-01F, 9.934496284e-01F, 9.934550524e-01F, 9.934605360e-01F, 9.934660196e-01F, 9.934715033e-01F,
	9.934769869e-01F, 9.934824109e-01F, 9.934878945e-01F, 9.934933782e-01F, 9.934988022e-01F, 9.935042858e-01F, 9.935097098e-01F, 9.935151935e-01F,
	9.935206175e-01F, 9.935260415e-01F, 9.935315251e-01F, 9.935369492e-01F, 9.935423732e-01F, 9.935478568e-01F, 9.935532808e-01F, 9.935587049e-01F,
	9.935641289e-01F, 9.935695529e-01F, 9.935749769e-01F, 9.935804009e-01F, 9.935858250e-01F, 9.935912490e-01F, 9.935966730e-01F, 9.936020970e-01F,
	9.936075211e-01F, 9.936128855e-01F, 9.936183095e-01F, 9.936237335e-01F, 9.936291575e-01F, 9.936345220e-01F, 9.936399460e-01F, 9.936453104e-01F,
	9.936507344e-01F, 9.936560988e-01F, 9.936615229e-01F, 9.936668873e-01F, 9.936722517e-01F, 9.936776757e-01F, 9.936830401e-01F, 9.936884046e-01F,
	9.936937690e-01F, 9.936991930e-01F, 9.937045574e-01F, 9.937099218e-01F, 9.937152863e-01F, 9.937206507e-01F, 9.937260151e-01F, 9.937313795e-01F,
	9.937367439e-01F, 9.937420487e-01F, 9.937474132e-01F, 9.937527776e-01F, 9.937581420e-01F, 9.937635064e-01F, 9.937688112e-01F, 9.937741756e-01F,
	9.937794805e-01F, 9.937848449e-01F, 9.937901497e-01F, 9.937955141e-01F, 9.938008189e-01F, 9.938061833e-01F, 9.938114882e-01F, 9.938167930e-01F,
	9.938221574e-01F, 9.938274622e-01F, 9.938327670e-01F, 9.938380718e-01F, 9.938433766e-01F, 9.938486814e-01F, 9.938540459e-01F, 9.938593507e-01F,
	9.938646555e-01F, 9.938699007e-01F, 9.938752055e-01F, 9.938805103e-01F, 9.938858151e-01F, 9.938911200e-01F, 9.938964248e-01F, 9.939016700e-01F,
	9.939069748e-01F, 9.939122796e-01F, 9.939175248e-01F, 9.939228296e-01F, 9.939280748e-01F, 9.939333797e-01F, 9.939386249e-01F, 9.939439297e-01F,
	9.939491749e-01F, 9.939544201e-01F, 9.939596653e-01F, 9.939649701e-01F, 9.939702153e-01F, 9.939754605e-01F, 9.939807057e-01F, 9.939859509e-01F,
	9.939911962e-01F, 9.939964414e-01F, 9.940016866e-01F, 9.940069318e-01F, 9.940121770e-01F, 9.940174222e-01F, 9.940226674e-01F, 9.940279126e-01F,
	9.940330982e-01F, 9.940383434e-01F, 9.940435886e-01F, 9.940487742e-01F, 9.940540195e-01F, 9.940592647e-01F, 9.940644503e-01F, 9.940696955e-01F,
	9.940748811e-01F, 9.940800667e-01F, 9.940853119e-01F, 9.940904975e-01F, 9.940956831e-01F, 9.941009283e-01F, 9.941061139e-01F, 9.941112995e-01F,
	9.941164851e-01F, 9.941216707e-01F, 9.941268563e-01F, 9.941320419e-01F, 9.941372275e-01F, 9.941424131e-01F, 9.941475987e-01F, 9.941527843e-01F,
	9.941579700e-01F, 9.941631556e-01F, 9.941682816e-01F, 9.941734672e-01F, 9.941786528e-01F, 9.941837788e-01F, 9.941889644e-01F, 9.941940904e-01F,
	9.941992760e-01F, 9.942044020e-01F, 9.942095876e-01F, 9.942147136e-01F, 9.942198992e-01F, 9.942250252e-01F, 9.942301512e-01F, 9.942353368e-01F,
	9.942404628e-01F, 9.942455888e-01F, 9.942507148e-01F, 9.942558408e-01F, 9.942609668e-01F, 9.942660928e-01F, 9.942712188e-01F, 9.942763448e-01F,
	9.942814708e-01F, 9.942865968e-01F, 9.942917228e-01F, 9.942968488e-01F, 9.943019152e-01F, 9.943070412e-01F, 9.943121672e-01F, 9.943172336e-01F,
	9.943223596e-01F, 9.943274856e-01F, 9.943325520e-01F, 9.943376780e-01F, 9.943427444e-01F, 9.943478107e-01F, 9.943529367e-01F, 9.943580031e-01F,
	9.943630695e-01F, 9.943681955e-01F, 9.943732619e-01F, 9.943783283e-01F, 9.943833947e-01F, 9.943884611e-01F, 9.943935275e-01F, 9.943985939e-01F,
	9.944036603e-01F, 9.944087267e-01F, 9.944137931e-01F, 9.944188595e-01F, 9.944239259e-01F, 9.944289923e-01F, 9.944339991e-01F, 9.944390655e-01F,
	9.944441319e-01F, 9.944491386e-01F, 9.944542050e-01F, 9.944592714e-01F, 9.944642782e-01F, 9.944693446e-01F, 9.944743514e-01F, 9.944794178e-01F,
	9.944844246e-01F, 9.944894314e-01F, 9.944944978e-01F, 9.944995046e-01F, 9.945045114e-01F, 9.945095181e-01F, 9.945145249e-01F, 9.945195317e-01F,
	9.945245385e-01F, 9.945296049e-01F, 9.945346117e-01F, 9.945395589e-01F, 9.945445657e-01F, 9.945495725e-01F, 9.945545793e-01F, 9.945595860e-01F,
	9.945645928e-01F, 9.945695400e-01F, 9.945745468e-01F, 9.945795536e-01F, 9.945845008e-01F, 9.945895076e-01F, 9.945944548e-01F, 9.945994616e-01F,
	9.946044087e-01F, 9.946094155e-01F, 9.946143627e-01F, 9.946193099e-01F, 9.946243167e-01F, 9.946292639e-01F, 9.946342111e-01F, 9.946391582e-01F,
	9.946441650e-01F, 9.946491122e-01F, 9.946540594e-01F, 9.946590066e-01F, 9.946639538e-01F, 9.946689010e-01F, 9.946738482e-01F, 9.946787357e-01F,
	9.946836829e-01F, 9.946886301e-01F, 9.946935773e-01F, 9.946985245e-01F, 9.947034121e-01F, 9.947083592e-01F, 9.947133064e-01F, 9.947181940e-01F,
	9.947231412e-01F, 9.947280288e-01F, 9.947329760e-01F, 9.947378635e-01F, 9.947427511e-01F, 9.947476983e-01F, 9.947525859e-01F, 9.947574735e-01F,
	9.947624207e-01F, 9.947673082e-01F, 9.947721958e-01F, 9.947770834e-01F, 9.947819710e-01F, 9.947868586e-01F, 9.947917461e-01F, 9.947966337e-01F,
	9.948015213e-01F, 9.948064089e-01F, 9.948112965e-01F, 9.948161244e-01F, 9.948210120e-01F, 9.948258996e-01F, 9.948307872e-01F, 9.948356152e-01F,
	9.948405027e-01F, 9.948453307e-01F, 9.948502183e-01F, 9.948551059e-01F, 9.948599339e-01F, 9.948647618e-01F, 9.948696494e-01F, 9.948744774e-01F,
	9.948793054e-01F, 9.948841929e-01F, 9.948890209e-01F, 9.948938489e-01F, 9.948986769e-01F, 9.949035048e-01F, 9.949083328e-01F, 9.949131608e-01F,
	9.949179888e-01F, 9.949228168e-01F, 9.949276447e-01F, 9.949324727e-01F, 9.949373007e-01F, 9.949421287e-01F, 9.949469566e-01F, 9.949517250e-01F,
	9.949565530e-01F, 9.949613810e-01F, 9.949661493e-01F, 9.949709773e-01F, 9.949757457e-01F, 9.949805737e-01F, 9.949853420e-01F, 9.949901700e-01F,
	9.949949384e-01F, 9.949997663e-01F, 9.950045347e-01F, 9.950093031e-01F, 9.950140715e-01F, 9.950188994e-01F, 9.950236678e-01F, 9.950284362e-01F,
	9.950332046e-01F, 9.950379729e-01F, 9.950427413e-01F, 9.950475097e-01F, 9.950522780e-01F, 9.950570464e-01F, 9.950618148e-01F, 9.950665236e-01F,
	9.950712919e-01F, 9.950760603e-01F, 9.950808287e-01F, 9.950855374e-01F, 9.950903058e-01F, 9.950950146e-01F, 9.950997829e-01F, 9.951044917e-01F,
	9.951092601e-01F, 9.951139688e-01F, 9.951187372e-01F, 9.951234460e-01F, 9.951281548e-01F, 9.951329231e-01F, 9.951376319e-01F, 9.951423407e-01F,
	9.951470494e-01F, 9.951517582e-01F, 9.951564670e-01F, 9.951611757e-01F, 9.951658845e-01F, 9.951705933e-01F, 9.951753020e-01F, 9.951800108e-01F,
	9.951847196e-01F, 9.951894283e-01F, 9.951941371e-01F, 9.951987863e-01F, 9.952034950e-01F, 9.952082038e-01F, 9.952128530e-01F, 9.952175617e-01F,
	9.952222705e-01F, 9.952269197e-01F, 9.952316284e-01F, 9.952362776e-01F, 9.952409267e-01F, 9.952456355e-01F, 9.952502847e-01F, 9.952549338e-01F,
	9.952595830e-01F, 9.952642918e-01F, 9.952689409e-01F, 9.952735901e-01F, 9.952782393e-01F, 9.952828884e-01F, 9.952875376e-01F, 9.952921867e-01F,
	9.952968359e-01F, 9.953014851e-01F, 9.953061342e-01F, 9.953107834e-01F, 9.953153729e-01F, 9.953200221e-01F, 9.953246713e-01F, 9.953292608e-01F,
	9.953339100e-01F, 9.953385592e-01F, 9.953431487e-01F, 9.953477979e-01F, 9.953523874e-01F, 9.953570366e-01F, 9.953616261e-01F, 9.953662157e-01F,
	9.953708649e-01F, 9.953754544e-01F, 9.953800440e-01F, 9.953846335e-01F, 9.953892231e-01F, 9.953938723e-01F, 9.953984618e-01F, 9.954030514e-01F,
	9.954076409e-01F, 9.954122305e-01F, 9.954168200e-01F, 9.954214096e-01F, 9.954259396e-01F, 9.954305291e-01F, 9.954351187e-01F, 9.954397082e-01F,
	9.954442382e-01F, 9.954488277e-01F, 9.954534173e-01F, 9.954579473e-01F, 9.954625368e-01F, 9.954670668e-01F, 9.954716563e-01F, 9.954761863e-01F,
	9.954807758e-01F, 9.954853058e-01F, 9.954898357e-01F, 9.954944253e-01F, 9.954989552e-01F, 9.955034852e-01F, 9.955080152e-01F, 9.955125451e-01F,
	9.955170751e-01F, 9.955216050e-01F, 9.955261350e-01F, 9.955306649e-01F, 9.955351949e-01F, 9.955397248e-01F, 9.955442548e-01F, 9.955487847e-01F,
	9.955533147e-01F, 9.955577850e-01F, 9.955623150e-01F, 9.955668449e-01F, 9.955713153e-01F, 9.955758452e-01F, 9.955803752e-01F, 9.955848455e-01F,
	9.955893755e-01F, 9.955938458e-01F, 9.955983162e-01F, 9.956028461e-01F, 9.956073165e-01F, 9.956117868e-01F, 9.956163168e-01F, 9.956207871e-01F,
	9.956252575e-01F, 9.956297278e-01F, 9.956341982e-01F, 9.956386685e-01F, 9.956431389e-01F, 9.956476092e-01F, 9.956520796e-01F, 9.956565499e-01F,
	9.956610203e-01F, 9.956654906e-01F, 9.956699610e-01F, 9.956743717e-01F, 9.956788421e-01F, 9.956833124e-01F, 9.956877232e-01F, 9.956921935e-01F,
	9.956966043e-01F, 9.957010746e-01F, 9.957054853e-01F, 9.957099557e-01F, 9.957143664e-01F, 9.957188368e-01F, 9.957232475e-01F, 9.957276583e-01F,
	9.957320690e-01F, 9.957365394e-01F, 9.957409501e-01F, 9.957453609e-01F, 9.957497716e-01F, 9.957541823e-01F, 9.957585931e-01F, 9.957630038e-01F,
	9.957674146e-01F, 9.957718253e-01F, 9.957762361e-01F, 9.957806468e-01F, 9.957849979e-01F, 9.957894087e-01F, 9.957938194e-01F, 9.957981706e-01F,
	9.958025813e-01F, 9.958069921e-01F, 9.958113432e-01F, 9.958157539e-01F, 9.958201051e-01F, 9.958245158e-01F, 9.958288670e-01F, 9.958332181e-01F,
	9.958376288e-01F, 9.958419800e-01F, 9.958463311e-01F, 9.958507419e-01F, 9.958550930e-01F, 9.958594441e-01F, 9.958637953e-01F, 9.958681464e-01F,
	9.958724976e-01F, 9.958768487e-01F, 9.958811998e-01F, 9.958855510e-01F, 9.958899021e-01F, 9.958941936e-01F, 9.958985448e-01F, 9.959028959e-01F,
	9.959072471e-01F, 9.959115386e-01F, 9.959158897e-01F, 9.959202409e-01F, 9.959245324e-01F, 9.959288836e-01F, 9.959331751e-01F, 9.959375262e-01F,
	9.959418178e-01F, 9.959461093e-01F, 9.959504604e-01F, 9.959547520e-01F, 9.959590435e-01F, 9.959633350e-01F, 9.959676862e-01F, 9.959719777e-01F,
	9.959762692e-01F, 9.959805608e-01F, 9.959848523e-01F, 9.959891438e-01F, 9.959934354e-01F, 9.959977269e-01F, 9.960020185e-01F, 9.960062504e-01F,
	9.960105419e-01F, 9.960148335e-01F, 9.960191250e-01F, 9.960233569e-01F, 9.960276484e-01F, 9.960319400e-01F, 9.960361719e-01F, 9.960404634e-01F,
	9.960446954e-01F, 9.960489869e-01F, 9.960532188e-01F, 9.960574508e-01F, 9.960617423e-01F, 9.960659742e-01F, 9.960702062e-01F, 9.960744381e-01F,
	9.960787296e-01F, 9.960829616e-01F, 9.960871935e-01F, 9.960914254e-01F, 9.960956573e-01F, 9.960998893e-01F, 9.961041212e-01F, 9.961083531e-01F,
	9.961125851e-01F, 9.961167574e-01F, 9.961209893e-01F, 9.961252213e-01F, 9.961294532e-01F, 9.961336255e-01F, 9.961378574e-01F, 9.961420894e-01F,
	9.961462617e-01F, 9.961504936e-01F, 9.961546659e-01F, 9.961588979e-01F, 9.961630702e-01F, 9.961672425e-01F, 9.961714745e-01F, 9.961756468e-01F,
	9.961798191e-01F, 9.961839914e-01F, 9.961882234e-01F, 9.961923957e-01F, 9.961965680e-01F, 9.962007403e-01F, 9.962049127e-01F, 9.962090850e-01F,
	9.962132573e-01F, 9.962174296e-01F, 9.962216020e-01F, 9.962257147e-01F, 9.962298870e-01F, 9.962340593e-01F, 9.962382317e-01F, 9.962423444e-01F,
	9.962465167e-01F, 9.962506890e-01F, 9.962548018e-01F, 9.962589741e-01F, 9.962630868e-01F, 9.962672591e-01F, 9.962713718e-01F, 9.962754846e-01F,
	9.962796569e-01F, 9.962837696e-01F, 9.962878823e-01F, 9.962919950e-01F, 9.962961674e-01F, 9.963002801e-01F, 9.963043928e-01F, 9.963085055e-01F,
	9.963126183e-01F, 9.963167310e-01F, 9.963208437e-01F, 9.963249564e-01F, 9.963290691e-01F, 9.963331223e-01F, 9.963372350e-01F, 9.963413477e-01F,
	9.963454604e-01F, 9.963495135e-01F, 9.963536263e-01F, 9.963577390e-01F, 9.963617921e-01F, 9.963659048e-01F, 9.963699579e-01F, 9.963740706e-01F,
	9.963781238e-01F, 9.963821769e-01F, 9.963862896e-01F, 9.963903427e-01F, 9.963943958e-01F, 9.963984489e-01F, 9.964025617e-01F, 9.964066148e-01F,
	9.964106679e-01F, 9.964147210e-01F, 9.964187741e-01F, 9.964228272e-01F, 9.964268804e-01F, 9.964309335e-01F, 9.964349866e-01F, 9.964390397e-01F,
	9.964430332e-01F, 9.964470863e-01F, 9.964511395e-01F, 9.964551330e-01F, 9.964591861e-01F, 9.964632392e-01F, 9.964672327e-01F, 9.964712858e-01F,
	9.964752793e-01F, 9.964793324e-01F, 9.964833260e-01F, 9.964873195e-01F, 9.964913726e-01F, 9.964953661e-01F, 9.964993596e-01F, 9.965034127e-01F,
	9.965074062e-01F, 9.965113997e-01F, 9.965153933e-01F, 9.965193868e-01F, 9.965233803e-01F, 9.965273738e-01F, 9.965313673e-01F, 9.965353608e-01F,
	9.965393543e-01F, 9.965433478e-01F, 9.965472817e-01F, 9.965512753e-01F, 9.965552688e-01F, 9.965592623e-01F, 9.965631962e-01F, 9.965671897e-01F,
	9.965711236e-01F, 9.965751171e-01F, 9.965790510e-01F, 9.965830445e-01F, 9.965869784e-01F, 9.965909719e-01F, 9.965949059e-01F, 9.965988398e-01F,
	9.966027737e-01F, 9.966067672e-01F, 9.966107011e-01F, 9.966146350e-01F, 9.966185689e-01F, 9.966225028e-01F, 9.966264367e-01F, 9.966303706e-01F,
	9.966343045e-01F, 9.966382384e-01F, 9.966421723e-01F, 9.966461062e-01F, 9.966500401e-01F, 9.966539145e-01F, 9.966578484e-01F, 9.966617823e-01F,
	9.966656566e-01F, 9.966695905e-01F, 9.966735244e-01F, 9.966773987e-01F, 9.966813326e-01F, 9.966852069e-01F, 9.966890812e-01F, 9.966930151e-01F,
	9.966968894e-01F, 9.967007637e-01F, 9.967046976e-01F, 9.967085719e-01F, 9.967124462e-01F, 9.967163205e-01F, 9.967201948e-01F, 9.967240691e-01F,
	9.967279434e-01F, 9.967318177e-01F, 9.967356920e-01F, 9.967395663e-01F, 9.967434406e-01F, 9.967473149e-01F, 9.967511892e-01F, 9.967550039e-01F,
	9.967588782e-01F, 9.967627525e-01F, 9.967666268e-01F, 9.967704415e-01F, 9.967743158e-01F, 9.967781305e-01F, 9.967820048e-01F, 9.967858195e-01F,
	9.967896938e-01F, 9.967935085e-01F, 9.967973232e-01F, 9.968011975e-01F, 9.968050122e-01F, 9.968088269e-01F, 9.968126416e-01F, 9.968164563e-01F,
	9.968202710e-01F, 9.968241453e-01F, 9.968279600e-01F, 9.968317747e-01F, 9.968355894e-01F, 9.968393445e-01F, 9.968431592e-01F, 9.968469739e-01F,
	9.968507886e-01F, 9.968546033e-01F, 9.968583584e-01F, 9.968621731e-01F, 9.968659878e-01F, 9.968697429e-01F, 9.968735576e-01F, 9.968773127e-01F,
	9.968811274e-01F, 9.968848825e-01F, 9.968886971e-01F, 9.968924522e-01F, 9.968962073e-01F, 9.969000220e-01F, 9.969037771e-01F, 9.969075322e-01F,
	9.969112873e-01F, 9.969151020e-01F, 9.969188571e-01F, 9.969226122e-01F, 9.969263673e-01F, 9.969301224e-01F, 9.969338775e-01F, 9.969376326e-01F,
	9.969413280e-01F, 9.969450831e-01F, 9.969488382e-01F, 9.969525933e-01F, 9.969563484e-01F, 9.969600439e-01F, 9.969637990e-01F, 9.969675541e-01F,
	9.969712496e-01F, 9.969750047e-01F, 9.969787002e-01F, 9.969824553e-01F, 9.969861507e-01F, 9.969898462e-01F, 9.969936013e-01F, 9.969972968e-01F,
	9.970009923e-01F, 9.970046878e-01F, 9.970084429e-01F, 9.970121384e-01F, 9.970158339e-01F, 9.970195293e-01F, 9.970232248e-01F, 9.970269203e-01F,
	9.970306158e-01F, 9.970343113e-01F, 9.970380068e-01F, 9.970417023e-01F, 9.970453382e-01F, 9.970490336e-01F, 9.970527291e-01F, 9.970564246e-01F,
	9.970600605e-01F, 9.970637560e-01F, 9.970673919e-01F, 9.970710874e-01F, 9.970747232e-01F, 9.970784187e-01F, 9.970820546e-01F, 9.970857501e-01F,
	9.970893860e-01F, 9.970930219e-01F, 9.970966578e-01F, 9.971003532e-01F, 9.971039891e-01F, 9.971076250e-01F, 9.971112609e-01F, 9.971148968e-01F,
	9.971185327e-01F, 9.971221685e-01F, 9.971258044e-01F, 9.971294403e-01F, 9.971330762e-01F, 9.971367121e-01F, 9.971403480e-01F, 9.971439242e-01F,
	9.971475601e-01F, 9.971511960e-01F, 9.971547723e-01F, 9.971584082e-01F, 9.971620440e-01F, 9.971656203e-01F, 9.971692562e-01F, 9.971728325e-01F,
	9.971764088e-01F, 9.971800447e-01F, 9.971836209e-01F, 9.971871972e-01F, 9.971908331e-01F, 9.971944094e-01F, 9.971979856e-01F, 9.972015619e-01F,
	9.972051382e-01F, 9.972087145e-01F, 9.972122908e-01F, 9.972158670e-01F, 9.972194433e-01F, 9.972230196e-01F, 9.972265959e-01F, 9.972301722e-01F,
	9.972337484e-01F, 9.972373247e-01F, 9.972408414e-01F, 9.972444177e-01F, 9.972479939e-01F, 9.972515106e-01F, 9.972550869e-01F, 9.972586036e-01F,
	9.972621799e-01F, 9.972656965e-01F, 9.972692728e-01F, 9.972727895e-01F, 9.972763062e-01F, 9.972798824e-01F, 9.972833991e-01F, 9.972869158e-01F,
	9.972904325e-01F, 9.972940087e-01F, 9.972975254e-01F, 9.973010421e-01F, 9.973045588e-01F, 9.973080754e-01F, 9.973115921e-01F, 9.973151088e-01F,
	9.973185658e-01F, 9.973220825e-01F, 9.973255992e-01F, 9.973291159e-01F, 9.973326325e-01F, 9.973360896e-01F, 9.973396063e-01F, 9.973431230e-01F,
	9.973465800e-01F, 9.973500967e-01F, 9.973535538e-01F, 9.973570704e-01F, 9.973605275e-01F, 9.973639846e-01F, 9.973675013e-01F, 9.973709583e-01F,
	9.973744154e-01F, 9.973778725e-01F, 9.973813891e-01F, 9.973848462e-01F, 9.973883033e-01F, 9.973917603e-01F, 9.973952174e-01F, 9.973986745e-01F,
	9.974021316e-01F, 9.974055886e-01F, 9.974090457e-01F, 9.974125028e-01F, 9.974159002e-01F, 9.974193573e-01F, 9.974228144e-01F, 9.974262714e-01F,
	9.974296689e-01F, 9.974331260e-01F, 9.974365234e-01F, 9.974399805e-01F, 9.974433780e-01F, 9.974468350e-01F, 9.974502325e-01F, 9.974536896e-01F,
	9.974570870e-01F, 9.974604845e-01F, 9.974639416e-01F, 9.974673390e-01F, 9.974707365e-01F, 9.974741340e-01F, 9.974775314e-01F, 9.974809289e-01F,
	9.974843264e-01F, 9.974877238e-01F, 9.974911213e-01F, 9.974945188e-01F, 9.974979162e-01F, 9.975013137e-01F, 9.975047112e-01F, 9.975080490e-01F,
	9.975114465e-01F, 9.975148439e-01F, 9.975181818e-01F, 9.975215793e-01F, 9.975249767e-01F, 9.975283146e-01F, 9.975317121e-01F, 9.975350499e-01F,
	9.975384474e-01F, 9.975417852e-01F, 9.975451231e-01F, 9.975485206e-01F, 9.975518584e-01F, 9.975551963e-01F, 9.975585341e-01F, 9.975618720e-01F,
	9.975652099e-01F, 9.975686073e-01F, 9.975719452e-01F, 9.975752831e-01F, 9.975786209e-01F, 9.975818992e-01F, 9.975852370e-01F, 9.975885749e-01F,
	9.975919127e-01F, 9.975952506e-01F, 9.975985289e-01F, 9.976018667e-01F, 9.976052046e-01F, 9.976084828e-01F, 9.976118207e-01F, 9.976150990e-01F,
	9.976184368e-01F, 9.976217151e-01F, 9.976250529e-01F, 9.976283312e-01F, 9.976316690e-01F, 9.976349473e-01F, 9.976382256e-01F, 9.976415038e-01F,
	9.976448417e-01F, 9.976481199e-01F, 9.976513982e-01F, 9.976546764e-01F, 9.976579547e-01F, 9.976612329e-01F, 9.976645112e-01F, 9.976677895e-01F,
	9.976710677e-01F, 9.976742864e-01F, 9.976775646e-01F, 9.976808429e-01F, 9.976841211e-01F, 9.976873398e-01F, 9.976906180e-01F, 9.976938963e-01F,
	9.976971149e-01F, 9.977003932e-01F, 9.977036119e-01F, 9.977068901e-01F, 9.977101088e-01F, 9.977133274e-01F, 9.977166057e-01F, 9.977198243e-01F,
	9.977230430e-01F, 9.977263212e-01F, 9.977295399e-01F, 9.977327585e-01F, 9.977359772e-01F, 9.977391958e-01F, 9.977424145e-01F, 9.977456331e-01F,
	9.977488518e-01F, 9.977520704e-01F, 9.977552891e-01F, 9.977585077e-01F, 9.977617264e-01F, 9.977648854e-01F, 9.977681041e-01F, 9.977713227e-01F,
	9.977744818e-01F, 9.977777004e-01F, 9.977809191e-01F, 9.977840781e-01F, 9.977872968e-01F, 9.977904558e-01F, 9.977936149e-01F, 9.977968335e-01F,
	9.977999926e-01F, 9.978031516e-01F, 9.978063703e-01F, 9.978095293e-01F, 9.978126884e-01F, 9.978158474e-01F, 9.978190064e-01F, 9.978221655e-01F,
	9.978253245e-01F, 9.978284836e-01F, 9.978316426e-01F, 9.978348017e-01F, 9.978379607e-01F, 9.978411198e-01F, 9.978442788e-01F, 9.978474379e-01F,
	9.978505373e-01F, 9.978536963e-01F, 9.978568554e-01F, 9.978599548e-01F, 9.978631139e-01F, 9.978662133e-01F, 9.978693724e-01F, 9.978724718e-01F,
	9.978756309e-01F, 9.978787303e-01F, 9.978818297e-01F, 9.978849888e-01F, 9.978880882e-01F, 9.978911877e-01F, 9.978942871e-01F, 9.978974462e-01F,
	9.979005456e-01F, 9.979036450e-01F, 9.979067445e-01F, 9.979098439e-01F, 9.979129434e-01F, 9.979160428e-01F, 9.979190826e-01F, 9.979221821e-01F,
	9.979252815e-01F, 9.979283810e-01F, 9.979314804e-01F, 9.979345202e-01F, 9.979376197e-01F, 9.979406595e-01F, 9.979437590e-01F, 9.979468584e-01F,
	9.979498982e-01F, 9.979529977e-01F, 9.979560375e-01F, 9.979590774e-01F, 9.979621768e-01F, 9.979652166e-01F, 9.979682565e-01F, 9.979712963e-01F,
	9.979743958e-01F, 9.979774356e-01F, 9.979804754e-01F, 9.979835153e-01F, 9.979865551e-01F, 9.979895949e-01F, 9.979926348e-01F, 9.979956746e-01F,
	9.979987144e-01F, 9.980017543e-01F, 9.980047345e-01F, 9.980077744e-01F, 9.980108142e-01F, 9.980138540e-01F, 9.980168343e-01F, 9.980198741e-01F,
	9.980228543e-01F, 9.980258942e-01F, 9.980288744e-01F, 9.980319142e-01F, 9.980348945e-01F, 9.980379343e-01F, 9.980409145e-01F, 9.980438948e-01F,
	9.980468750e-01F, 9.980499148e-01F, 9.980528951e-01F, 9.980558753e-01F, 9.980588555e-01F, 9.980618358e-01F, 9.980648160e-01F, 9.980677962e-01F,
	9.980707765e-01F, 9.980737567e-01F, 9.980767369e-01F, 9.980797172e-01F, 9.980826974e-01F, 9.980856180e-01F, 9.980885983e-01F, 9.980915785e-01F,
	9.980944991e-01F, 9.980974793e-01F, 9.981004596e-01F, 9.981033802e-01F, 9.981063604e-01F, 9.981092811e-01F, 9.981122017e-01F, 9.981151819e-01F,
	9.981181026e-01F, 9.981210232e-01F, 9.981240034e-01F, 9.981269240e-01F, 9.981298447e-01F, 9.981327653e-01F, 9.981356859e-01F, 9.981386065e-01F,
	9.981415272e-01F, 9.981444478e-01F, 9.981473684e-01F, 9.981502891e-01F, 9.981532097e-01F, 9.981561303e-01F, 9.981590509e-01F, 9.981619716e-01F,
	9.981648326e-01F, 9.981677532e-01F, 9.981706738e-01F, 9.981735349e-01F, 9.981764555e-01F, 9.981793165e-01F, 9.981822371e-01F, 9.981850982e-01F,
	9.981880188e-01F, 9.981908798e-01F, 9.981937408e-01F, 9.981966615e-01F, 9.981995225e-01F, 9.982023835e-01F, 9.982052445e-01F, 9.982081652e-01F,
	9.982110262e-01F, 9.982138872e-01F, 9.982167482e-01F, 9.982196093e-01F, 9.982224703e-01F, 9.982253313e-01F, 9.982281327e-01F, 9.982309937e-01F,
	9.982338548e-01F, 9.982367158e-01F, 9.982395768e-01F, 9.982423782e-01F, 9.982452393e-01F, 9.982480407e-01F, 9.982509017e-01F, 9.982537627e-01F,
	9.982565641e-01F, 9.982594252e-01F, 9.982622266e-01F, 9.982650280e-01F, 9.982678890e-01F, 9.982706904e-01F, 9.982734919e-01F, 9.982762933e-01F,
	9.982791543e-01F, 9.982819557e-01F, 9.982847571e-01F, 9.982875586e-01F, 9.982903600e-01F, 9.982931614e-01F, 9.982959628e-01F, 9.982987642e-01F,
	9.983015656e-01F, 9.983043075e-01F, 9.983071089e-01F, 9.983099103e-01F, 9.983127117e-01F, 9.983154535e-01F, 9.983182549e-01F, 9.983210564e-01F,
	9.983237982e-01F, 9.983265996e-01F, 9.983293414e-01F, 9.983321428e-01F, 9.983348846e-01F, 9.983376861e-01F, 9.983404279e-01F, 9.983431697e-01F,
	9.983459115e-01F, 9.983487129e-01F, 9.983514547e-01F, 9.983541965e-01F, 9.983569384e-01F, 9.983596802e-01F, 9.983624220e-01F, 9.983651638e-01F,
	9.983679056e-01F, 9.983706474e-01F, 9.983733892e-01F, 9.983761311e-01F, 9.983788133e-01F, 9.983815551e-01F, 9.983842969e-01F, 9.983870387e-01F,
	9.983897209e-01F, 9.983924627e-01F, 9.983951449e-01F, 9.983978868e-01F, 9.984005690e-01F, 9.984033108e-01F, 9.984059930e-01F, 9.984087348e-01F,
	9.984114170e-01F, 9.984140992e-01F, 9.984168410e-01F, 9.984195232e-01F, 9.984222054e-01F, 9.984248877e-01F, 9.984275699e-01F, 9.984302521e-01F,
	9.984329343e-01F, 9.984356165e-01F, 9.984382987e-01F, 9.984409809e-01F, 9.984436631e-01F, 9.984463453e-01F, 9.984490275e-01F, 9.984516501e-01F,
	9.984543324e-01F, 9.984570146e-01F, 9.984596372e-01F, 9.984623194e-01F, 9.984650016e-01F, 9.984676242e-01F, 9.984703064e-01F, 9.984729290e-01F,
	9.984755516e-01F, 9.984782338e-01F, 9.984808564e-01F, 9.984834790e-01F, 9.984861612e-01F, 9.984887838e-01F, 9.984914064e-01F, 9.984940290e-01F,
	9.984966516e-01F, 9.984992743e-01F, 9.985018969e-01F, 9.985045195e-01F, 9.985071421e-01F, 9.985097647e-01F, 9.985123873e-01F, 9.985150099e-01F,
	9.985176325e-01F, 9.985202551e-01F, 9.985228181e-01F, 9.985254407e-01F, 9.985280633e-01F, 9.985306263e-01F, 9.985332489e-01F, 9.985358119e-01F,
	9.985384345e-01F, 9.985409975e-01F, 9.985436201e-01F, 9.985461831e-01F, 9.985487461e-01F, 9.985513687e-01F, 9.985539317e-01F, 9.985564947e-01F,
	9.985590577e-01F, 9.985616207e-01F, 9.985642433e-01F, 9.985668063e-01F, 9.985693693e-01F, 9.985719323e-01F, 9.985744953e-01F, 9.985769987e-01F,
	9.985795617e-01F, 9.985821247e-01F, 9.985846877e-01F, 9.985872507e-01F, 9.985897541e-01F, 9.985923171e-01F, 9.985948801e-01F, 9.985973835e-01F,
	9.985999465e-01F, 9.986024499e-01F, 9.986050129e-01F, 9.986075163e-01F, 9.986100793e-01F, 9.986125827e-01F, 9.986150861e-01F, 9.986176491e-01F,
	9.986201525e-01F, 9.986226559e-01F, 9.986251593e-01F, 9.986277223e-01F, 9.986302257e-01F, 9.986327291e-01F, 9.986352324e-01F, 9.986377358e-01F,
	9.986402392e-01F, 9.986427426e-01F, 9.986451864e-01F, 9.986476898e-01F, 9.986501932e-01F, 9.986526966e-01F, 9.986552000e-01F, 9.986576438e-01F,
	9.986601472e-01F, 9.986625910e-01F, 9.986650944e-01F, 9.986675978e-01F, 9.986700416e-01F, 9.986724854e-01F, 9.986749887e-01F, 9.986774325e-01F,
	9.986799359e-01F, 9.986823797e-01F, 9.986848235e-01F, 9.986872673e-01F, 9.986897111e-01F, 9.986922145e-01F, 9.986946583e-01F, 9.986971021e-01F,
	9.986995459e-01F, 9.987019897e-01F, 9.987044334e-01F, 9.987068772e-01F, 9.987093210e-01F, 9.987117052e-01F, 9.987141490e-01F, 9.987165928e-01F,
	9.987190366e-01F, 9.987214208e-01F, 9.987238646e-01F, 9.987263083e-01F, 9.987286925e-01F, 9.987311363e-01F, 9.987335205e-01F, 9.987359643e-01F,
	9.987383485e-01F, 9.987407327e-01F, 9.987431765e-01F, 9.987455606e-01F, 9.987479448e-01F, 9.987503290e-01F, 9.987527728e-01F, 9.987551570e-01F,
	9.987575412e-01F, 9.987599254e-01F, 9.987623096e-01F, 9.987646937e-01F, 9.987670779e-01F, 9.987694621e-01F, 9.987718463e-01F, 9.987741709e-01F,
	9.987765551e-01F, 9.987789392e-01F, 9.987813234e-01F, 9.987836480e-01F, 9.987860322e-01F, 9.987884164e-01F, 9.987907410e-01F, 9.987931252e-01F,
	9.987954497e-01F, 9.987978339e-01F, 9.988001585e-01F, 9.988024831e-01F, 9.988048673e-01F, 9.988071918e-01F, 9.988095164e-01F, 9.988118410e-01F,
	9.988142252e-01F, 9.988165498e-01F, 9.988188744e-01F, 9.988211989e-01F, 9.988235235e-01F, 9.988258481e-01F, 9.988281727e-01F, 9.988304973e-01F,
	9.988328218e-01F, 9.988350868e-01F, 9.988374114e-01F, 9.988397360e-01F, 9.988420606e-01F, 9.988443255e-01F, 9.988466501e-01F, 9.988489747e-01F,
	9.988512397e-01F, 9.988535643e-01F, 9.988558292e-01F, 9.988581538e-01F, 9.988604188e-01F, 9.988626838e-01F, 9.988650084e-01F, 9.988672733e-01F,
	9.988695383e-01F, 9.988718033e-01F, 9.988741279e-01F, 9.988763928e-01F, 9.988786578e-01F, 9.988809228e-01F, 9.988831878e-01F, 9.988854527e-01F,
	9.988877177e-01F, 9.988899827e-01F, 9.988922477e-01F, 9.988944530e-01F, 9.988967180e-01F, 9.988989830e-01F, 9.989012480e-01F, 9.989034534e-01F,
	9.989057183e-01F, 9.989079833e-01F, 9.989101887e-01F, 9.989124537e-01F, 9.989146590e-01F, 9.989169240e-01F, 9.989191294e-01F, 9.989213347e-01F,
	9.989235997e-01F, 9.989258051e-01F, 9.989280105e-01F, 9.989302158e-01F, 9.989324808e-01F, 9.989346862e-01F, 9.989368916e-01F, 9.989390969e-01F,
	9.989413023e-01F, 9.989435077e-01F, 9.989457130e-01F, 9.989479184e-01F, 9.989501238e-01F, 9.989522696e-01F, 9.989544749e-01F, 9.989566803e-01F,
	9.989588857e-01F, 9.989610314e-01F, 9.989632368e-01F, 9.989653826e-01F, 9.989675879e-01F, 9.989697933e-01F, 9.989719391e-01F, 9.989740849e-01F,
	9.989762902e-01F, 9.989784360e-01F, 9.989806414e-01F, 9.989827871e-01F, 9.989849329e-01F, 9.989870787e-01F, 9.989892244e-01F, 9.989914298e-01F,
	9.989935756e-01F, 9.989957213e-01F, 9.989978671e-01F, 9.990000129e-01F, 9.990021586e-01F, 9.990043044e-01F, 9.990063906e-01F, 9.990085363e-01F,
	9.990106821e-01F, 9.990128279e-01F, 9.990149736e-01F, 9.990170598e-01F, 9.990192056e-01F, 9.990212917e-01F, 9.990234375e-01F, 9.990255237e-01F,
	9.990276694e-01F, 9.990297556e-01F, 9.990319014e-01F, 9.990339875e-01F, 9.990360737e-01F, 9.990382195e-01F, 9.990403056e-01F, 9.990423918e-01F,
	9.990444779e-01F, 9.990466237e-01F, 9.990487099e-01F, 9.990507960e-01F, 9.990528822e-01F, 9.990549684e-01F, 9.990570545e-01F, 9.990590811e-01F,
	9.990611672e-01F, 9.990632534e-01F, 9.990653396e-01F, 9.990674257e-01F, 9.990694523e-01F, 9.990715384e-01F, 9.990736246e-01F, 9.990756512e-01F,
	9.990777373e-01F, 9.990797639e-01F, 9.990818501e-01F, 9.990838766e-01F, 9.990859628e-01F, 9.990879893e-01F, 9.990900159e-01F, 9.990921021e-01F,
	9.990941286e-01F, 9.990961552e-01F, 9.990981817e-01F, 9.991002083e-01F, 9.991022348e-01F, 9.991043210e-01F, 9.991063476e-01F, 9.991083741e-01F,
	9.991103411e-01F, 9.991123676e-01F, 9.991143942e-01F, 9.991164207e-01F, 9.991184473e-01F, 9.991204739e-01F, 9.991224408e-01F, 9.991244674e-01F,
	9.991264939e-01F, 9.991284609e-01F, 9.991304874e-01F, 9.991324544e-01F, 9.991344810e-01F, 9.991364479e-01F, 9.991384149e-01F, 9.991404414e-01F,
	9.991424084e-01F, 9.991443753e-01F, 9.991464019e-01F, 9.991483688e-01F, 9.991503358e-01F, 9.991523027e-01F, 9.991542697e-01F, 9.991562366e-01F,
	9.991582036e-01F, 9.991601706e-01F, 9.991621375e-01F, 9.991641045e-01F, 9.991660714e-01F, 9.991680384e-01F, 9.991700053e-01F, 9.991719127e-01F,
	9.991738796e-01F, 9.991758466e-01F, 9.991777539e-01F, 9.991797209e-01F, 9.991816282e-01F, 9.991835952e-01F, 9.991855025e-01F, 9.991874695e-01F,
	9.991893768e-01F, 9.991913438e-01F, 9.991932511e-01F, 9.991951585e-01F, 9.991970658e-01F, 9.991990328e-01F, 9.992009401e-01F, 9.992028475e-01F,
	9.992047548e-01F, 9.992066622e-01F, 9.992085695e-01F, 9.992104769e-01F, 9.992123842e-01F, 9.992142916e-01F, 9.992161989e-01F, 9.992181063e-01F,
	9.992199540e-01F, 9.992218614e-01F, 9.992237687e-01F, 9.992256165e-01F, 9.992275238e-01F, 9.992294312e-01F, 9.992312789e-01F, 9.992331862e-01F,
	9.992350340e-01F, 9.992369413e-01F, 9.992387891e-01F, 9.992406368e-01F, 9.992425442e-01F, 9.992443919e-01F, 9.992462397e-01F, 9.992480874e-01F,
	9.992499948e-01F, 9.992518425e-01F, 9.992536902e-01F, 9.992555380e-01F, 9.992573857e-01F, 9.992592335e-01F, 9.992610812e-01F, 9.992629290e-01F,
	9.992647767e-01F, 9.992665648e-01F, 9.992684126e-01F, 9.992702603e-01F, 9.992721081e-01F, 9.992738962e-01F, 9.992757440e-01F, 9.992775321e-01F,
	9.992793798e-01F, 9.992811680e-01F, 9.992830157e-01F, 9.992848039e-01F, 9.992866516e-01F, 9.992884398e-01F, 9.992902279e-01F, 9.992920756e-01F,
	9.992938638e-01F, 9.992956519e-01F, 9.992974401e-01F, 9.992992282e-01F, 9.993010759e-01F, 9.993028641e-01F, 9.993046522e-01F, 9.993064404e-01F,
	9.993081689e-01F, 9.993099570e-01F, 9.993117452e-01F, 9.993135333e-01F, 9.993153214e-01F, 9.993171096e-01F, 9.993188381e-01F, 9.993206263e-01F,
	9.993223548e-01F, 9.993241429e-01F, 9.993259311e-01F, 9.993276596e-01F, 9.993294477e-01F, 9.993311763e-01F, 9.993329048e-01F, 9.993346930e-01F,
	9.993364215e-01F, 9.993381500e-01F, 9.993399382e-01F, 9.993416667e-01F, 9.993433952e-01F, 9.993451238e-01F, 9.993468523e-01F, 9.993485808e-01F,
	9.993503094e-01F, 9.993520379e-01F, 9.993537664e-01F, 9.993554950e-01F, 9.993572235e-01F, 9.993589520e-01F, 9.993606210e-01F, 9.993623495e-01F,
	9.993640780e-01F, 9.993658066e-01F, 9.993674755e-01F, 9.993692040e-01F, 9.993708730e-01F, 9.993726015e-01F, 9.993742704e-01F, 9.993759990e-01F,
	9.993776679e-01F, 9.993793368e-01F, 9.993810654e-01F, 9.993827343e-01F, 9.993844032e-01F, 9.993860722e-01F, 9.993878007e-01F, 9.993894696e-01F,
	9.993911386e-01F, 9.993928075e-01F, 9.993944764e-01F, 9.993961453e-01F, 9.993978143e-01F, 9.993994832e-01F, 9.994010925e-01F, 9.994027615e-01F,
	9.994044304e-01F, 9.994060993e-01F, 9.994077086e-01F, 9.994093776e-01F, 9.994110465e-01F, 9.994126558e-01F, 9.994143248e-01F, 9.994159341e-01F,
	9.994176030e-01F, 9.994192123e-01F, 9.994208813e-01F, 9.994224906e-01F, 9.994240999e-01F, 9.994257689e-01F, 9.994273782e-01F, 9.994289875e-01F,
	9.994305968e-01F, 9.994322062e-01F, 9.994338155e-01F, 9.994354248e-01F, 9.994370341e-01F, 9.994386435e-01F, 9.994402528e-01F, 9.994418621e-01F,
	9.994434714e-01F, 9.994450808e-01F, 9.994466901e-01F, 9.994482398e-01F, 9.994498491e-01F, 9.994514585e-01F, 9.994530082e-01F, 9.994546175e-01F,
	9.994561672e-01F, 9.994577765e-01F, 9.994593263e-01F, 9.994609356e-01F, 9.994624853e-01F, 9.994640350e-01F, 9.994656444e-01F, 9.994671941e-01F,
	9.994687438e-01F, 9.994702935e-01F, 9.994719028e-01F, 9.994734526e-01F, 9.994750023e-01F, 9.994765520e-01F, 9.994781017e-01F, 9.994796515e-01F,
	9.994812012e-01F, 9.994827509e-01F, 9.994842410e-01F, 9.994857907e-01F, 9.994873405e-01F, 9.994888902e-01F, 9.994903803e-01F, 9.994919300e-01F,
	9.994934797e-01F, 9.994949698e-01F, 9.994965196e-01F, 9.994980097e-01F, 9.994995594e-01F, 9.995010495e-01F, 9.995025992e-01F, 9.995040894e-01F,
	9.995055795e-01F, 9.995071292e-01F, 9.995086193e-01F, 9.995101094e-01F, 9.995115995e-01F, 9.995130897e-01F, 9.995145798e-01F, 9.995160699e-01F,
	9.995175600e-01F, 9.995190501e-01F, 9.995205402e-01F, 9.995220304e-01F, 9.995235205e-01F, 9.995250106e-01F, 9.995265007e-01F, 9.995279312e-01F,
	9.995294213e-01F, 9.995309114e-01F, 9.995323420e-01F, 9.995338321e-01F, 9.995352626e-01F, 9.995367527e-01F, 9.995381832e-01F, 9.995396733e-01F,
	9.995411038e-01F, 9.995425344e-01F, 9.995440245e-01F, 9.995454550e-01F, 9.995468855e-01F, 9.995483160e-01F, 9.995498061e-01F, 9.995512366e-01F,
	9.995526671e-01F, 9.995540977e-01F, 9.995555282e-01F, 9.995569587e-01F, 9.995583892e-01F, 9.995598197e-01F, 9.995611906e-01F, 9.995626211e-01F,
	9.995640516e-01F, 9.995654821e-01F, 9.995668530e-01F, 9.995682836e-01F, 9.995697141e-01F, 9.995710850e-01F, 9.995725155e-01F, 9.995738864e-01F,
	9.995753169e-01F, 9.995766878e-01F, 9.995780587e-01F, 9.995794892e-01F, 9.995808601e-01F, 9.995822310e-01F, 9.995836616e-01F, 9.995850325e-01F,
	9.995864034e-01F, 9.995877743e-01F, 9.995891452e-01F, 9.995905161e-01F, 9.995918870e-01F, 9.995932579e-01F, 9.995946288e-01F, 9.995959997e-01F,
	9.995973706e-01F, 9.995987415e-01F, 9.996000528e-01F, 9.996014237e-01F, 9.996027946e-01F, 9.996041059e-01F, 9.996054769e-01F, 9.996068478e-01F,
	9.996081591e-01F, 9.996095300e-01F, 9.996108413e-01F, 9.996121526e-01F, 9.996135235e-01F, 9.996148348e-01F, 9.996161461e-01F, 9.996175170e-01F,
	9.996188283e-01F, 9.996201396e-01F, 9.996214509e-01F, 9.996227622e-01F, 9.996240735e-01F, 9.996253848e-01F, 9.996266961e-01F, 9.996280074e-01F,
	9.996293187e-01F, 9.996306300e-01F, 9.996319413e-01F, 9.996332526e-01F, 9.996345639e-01F, 9.996358156e-01F, 9.996371269e-01F, 9.996384382e-01F,
	9.996396899e-01F, 9.996410012e-01F, 9.996422529e-01F, 9.996435642e-01F, 9.996448159e-01F, 9.996461272e-01F, 9.996473789e-01F, 9.996486306e-01F,
	9.996499419e-01F, 9.996511936e-01F, 9.996524453e-01F, 9.996536970e-01F, 9.996550083e-01F, 9.996562600e-01F, 9.996575117e-01F, 9.996587634e-01F,
	9.996600151e-01F, 9.996612668e-01F, 9.996625185e-01F, 9.996637106e-01F, 9.996649623e-01F, 9.996662140e-01F, 9.996674657e-01F, 9.996687174e-01F,
	9.996699095e-01F, 9.996711612e-01F, 9.996723533e-01F, 9.996736050e-01F, 9.996748567e-01F, 9.996760488e-01F, 9.996773005e-01F, 9.996784925e-01F,
	9.996796846e-01F, 9.996809363e-01F, 9.996821284e-01F, 9.996833205e-01F, 9.996845126e-01F, 9.996857643e-01F, 9.996869564e-01F, 9.996881485e-01F,
	9.996893406e-01F, 9.996905327e-01F, 9.996917248e-01F, 9.996929169e-01F, 9.996941090e-01F, 9.996953011e-01F, 9.996964335e-01F, 9.996976256e-01F,
	9.996988177e-01F, 9.997000098e-01F, 9.997011423e-01F, 9.997023344e-01F, 9.997035265e-01F, 9.997046590e-01F, 9.997058511e-01F, 9.997069836e-01F,
	9.997081757e-01F, 9.997093081e-01F, 9.997104406e-01F, 9.997116327e-01F, 9.997127652e-01F, 9.997138977e-01F, 9.997150898e-01F, 9.997162223e-01F,
	9.997173548e-01F, 9.997184873e-01F, 9.997196198e-01F, 9.997207522e-01F, 9.997218847e-01F, 9.997230172e-01F, 9.997241497e-01F, 9.997252822e-01F,
	9.997264147e-01F, 9.997274876e-01F, 9.997286201e-01F, 9.997297525e-01F, 9.997308850e-01F, 9.997319579e-01F, 9.997330904e-01F, 9.997341633e-01F,
	9.997352958e-01F, 9.997363687e-01F, 9.997375011e-01F, 9.997385740e-01F, 9.997397065e-01F, 9.997407794e-01F, 9.997418523e-01F, 9.997429252e-01F,
	9.997440577e-01F, 9.997451305e-01F, 9.997462034e-01F, 9.997472763e-01F, 9.997483492e-01F, 9.997494221e-01F, 9.997504950e-01F, 9.997515678e-01F,
	9.997526407e-01F, 9.997537136e-01F, 9.997547865e-01F, 9.997557998e-01F, 9.997568727e-01F, 9.997579455e-01F, 9.997590184e-01F, 9.997600317e-01F,
	9.997611046e-01F, 9.997621179e-01F, 9.997631907e-01F, 9.997642040e-01F, 9.997652769e-01F, 9.997662902e-01F, 9.997673631e-01F, 9.997683764e-01F,
	9.997693896e-01F, 9.997704625e-01F, 9.997714758e-01F, 9.997724891e-01F, 9.997735023e-01F, 9.997745156e-01F, 9.997755289e-01F, 9.997765422e-01F,
	9.997775555e-01F, 9.997785687e-01F, 9.997795820e-01F, 9.997805953e-01F, 9.997816086e-01F, 9.997826219e-01F, 9.997835755e-01F, 9.997845888e-01F,
	9.997856021e-01F, 9.997865558e-01F, 9.997875690e-01F, 9.997885227e-01F, 9.997895360e-01F, 9.997904897e-01F, 9.997915030e-01F, 9.997924566e-01F,
	9.997934699e-01F, 9.997944236e-01F, 9.997953773e-01F, 9.997963905e-01F, 9.997973442e-01F, 9.997982979e-01F, 9.997992516e-01F, 9.998002052e-01F,
	9.998011589e-01F, 9.998021126e-01F, 9.998030663e-01F, 9.998040199e-01F, 9.998049736e-01F, 9.998059273e-01F, 9.998068810e-01F, 9.998077750e-01F,
	9.998087287e-01F, 9.998096824e-01F, 9.998106360e-01F, 9.998115301e-01F, 9.998124838e-01F, 9.998133779e-01F, 9.998143315e-01F, 9.998152256e-01F,
	9.998161793e-01F, 9.998170733e-01F, 9.998180270e-01F, 9.998189211e-01F, 9.998198152e-01F, 9.998207092e-01F, 9.998216629e-01F, 9.998225570e-01F,
	9.998234510e-01F, 9.998243451e-01F, 9.998252392e-01F, 9.998261333e-01F, 9.998270273e-01F, 9.998279214e-01F, 9.998288155e-01F, 9.998297095e-01F,
	9.998306036e-01F, 9.998314381e-01F, 9.998323321e-01F, 9.998332262e-01F, 9.998341203e-01F, 9.998349547e-01F, 9.998358488e-01F, 9.998366833e-01F,
	9.998375773e-01F, 9.998384118e-01F, 9.998393059e-01F, 9.998401403e-01F, 9.998410344e-01F, 9.998418689e-01F, 9.998427033e-01F, 9.998435378e-01F,
	9.998444319e-01F, 9.998452663e-01F, 9.998461008e-01F, 9.998469353e-01F, 9.998477697e-01F, 9.998486042e-01F, 9.998494387e-01F, 9.998502731e-01F,
	9.998511076e-01F, 9.998519421e-01F, 9.998527169e-01F, 9.998535514e-01F, 9.998543859e-01F, 9.998552203e-01F, 9.998559952e-01F, 9.998568296e-01F,
	9.998576641e-01F, 9.998584390e-01F, 9.998592734e-01F, 9.998600483e-01F, 9.998608828e-01F, 9.998616576e-01F, 9.998624325e-01F, 9.998632669e-01F,
	9.998640418e-01F, 9.998648167e-01F, 9.998655915e-01F, 9.998664260e-01F, 9.998672009e-01F, 9.998679757e-01F, 9.998687506e-01F, 9.998695254e-01F,
	9.998703003e-01F, 9.998710752e-01F, 9.998718500e-01F, 9.998725653e-01F, 9.998733401e-01F, 9.998741150e-01F, 9.998748899e-01F, 9.998756647e-01F,
	9.998763800e-01F, 9.998771548e-01F, 9.998778701e-01F, 9.998786449e-01F, 9.998793602e-01F, 9.998801351e-01F, 9.998808503e-01F, 9.998816252e-01F,
	9.998823404e-01F, 9.998830557e-01F, 9.998838305e-01F, 9.998845458e-01F, 9.998852611e-01F, 9.998859763e-01F, 9.998866916e-01F, 9.998874664e-01F,
	9.998881817e-01F, 9.998888969e-01F, 9.998896122e-01F, 9.998902678e-01F, 9.998909831e-01F, 9.998916984e-01F, 9.998924136e-01F, 9.998931289e-01F,
	9.998938441e-01F, 9.998944998e-01F, 9.998952150e-01F, 9.998959303e-01F, 9.998965859e-01F, 9.998973012e-01F, 9.998979568e-01F, 9.998986721e-01F,
	9.998993278e-01F, 9.998999834e-01F, 9.999006987e-01F, 9.999013543e-01F, 9.999020100e-01F, 9.999027252e-01F, 9.999033809e-01F, 9.999040365e-01F,
	9.999046922e-01F, 9.999053478e-01F, 9.999060035e-01F, 9.999066591e-01F, 9.999073148e-01F, 9.999079704e-01F, 9.999086261e-01F, 9.999092817e-01F,
	9.999099374e-01F, 9.999105930e-01F, 9.999111891e-01F, 9.999118447e-01F, 9.999125004e-01F, 9.999130964e-01F, 9.999137521e-01F, 9.999143481e-01F,
	9.999150038e-01F, 9.999155998e-01F, 9.999162555e-01F, 9.999168515e-01F, 9.999174476e-01F, 9.999181032e-01F, 9.999186993e-01F, 9.999192953e-01F,
	9.999199510e-01F, 9.999205470e-01F, 9.999211431e-01F, 9.999217391e-01F, 9.999223351e-01F, 9.999229312e-01F, 9.999235272e-01F, 9.999241233e-01F,
	9.999247193e-01F, 9.999253154e-01F, 9.999258518e-01F, 9.999264479e-01F, 9.999270439e-01F, 9.999276400e-01F, 9.999281764e-01F, 9.999287724e-01F,
	9.999293089e-01F, 9.999299049e-01F, 9.999304414e-01F, 9.999310374e-01F, 9.999315739e-01F, 9.999321699e-01F, 9.999327064e-01F, 9.999332428e-01F,
	9.999338388e-01F, 9.999343753e-01F, 9.999349117e-01F, 9.999354482e-01F, 9.999359846e-01F, 9.999365211e-01F, 9.999371171e-01F, 9.999376535e-01F,
	9.999381304e-01F, 9.999386668e-01F, 9.999392033e-01F, 9.999397397e-01F, 9.999402761e-01F, 9.999408126e-01F, 9.999412894e-01F, 9.999418259e-01F,
	9.999423623e-01F, 9.999428391e-01F, 9.999433756e-01F, 9.999439120e-01F, 9.999443889e-01F, 9.999448657e-01F, 9.999454021e-01F, 9.999458790e-01F,
	9.999464154e-01F, 9.999468923e-01F, 9.999473691e-01F, 9.999478459e-01F, 9.999483824e-01F, 9.999488592e-01F, 9.999493361e-01F, 9.999498129e-01F,
	9.999502897e-01F, 9.999507666e-01F, 9.999512434e-01F, 9.999517202e-01F, 9.999521971e-01F, 9.999526739e-01F, 9.999530911e-01F, 9.999535680e-01F,
	9.999540448e-01F, 9.999545217e-01F, 9.999549389e-01F, 9.999554157e-01F, 9.999558330e-01F, 9.999563098e-01F, 9.999567866e-01F, 9.999572039e-01F,
	9.999576211e-01F, 9.999580979e-01F, 9.999585152e-01F, 9.999589324e-01F, 9.999594092e-01F, 9.999598265e-01F, 9.999602437e-01F, 9.999606609e-01F,
	9.999610782e-01F, 9.999614954e-01F, 9.999619126e-01F, 9.999623299e-01F, 9.999627471e-01F, 9.999631643e-01F, 9.999635816e-01F, 9.999639988e-01F,
	9.999644160e-01F, 9.999648333e-01F, 9.999651909e-01F, 9.999656081e-01F, 9.999660254e-01F, 9.999663830e-01F, 9.999668002e-01F, 9.999671578e-01F,
	9.999675751e-01F, 9.999679327e-01F, 9.999683499e-01F, 9.999687076e-01F, 9.999691248e-01F, 9.999694824e-01F, 9.999698400e-01F, 9.999701977e-01F,
	9.999706149e-01F, 9.999709725e-01F, 9.999713302e-01F, 9.999716878e-01F, 9.999720454e-01F, 9.999724030e-01F, 9.999727607e-01F, 9.999731183e-01F,
	9.999734759e-01F, 9.999737740e-01F, 9.999741316e-01F, 9.999744892e-01F, 9.999748468e-01F, 9.999751449e-01F, 9.999755025e-01F, 9.999758601e-01F,
	9.999761581e-01F, 9.999765158e-01F, 9.999768138e-01F, 9.999771714e-01F, 9.999774694e-01F, 9.999778271e-01F, 9.999781251e-01F, 9.999784231e-01F,
	9.999787211e-01F, 9.999790788e-01F, 9.999793768e-01F, 9.999796748e-01F, 9.999799728e-01F, 9.999802709e-01F, 9.999805689e-01F, 9.999808669e-01F,
	9.999811649e-01F, 9.999814630e-01F, 9.999817610e-01F, 9.999820590e-01F, 9.999823570e-01F, 9.999825954e-01F, 9.999828935e-01F, 9.999831915e-01F,
	9.999834299e-01F, 9.999837279e-01F, 9.999840260e-01F, 9.999842644e-01F, 9.999845624e-01F, 9.999848008e-01F, 9.999850392e-01F, 9.999853373e-01F,
	9.999855757e-01F, 9.999858141e-01F, 9.999861121e-01F, 9.999863505e-01F, 9.999865890e-01F, 9.999868274e-01F, 9.999870658e-01F, 9.999873042e-01F,
	9.999876022e-01F, 9.999877810e-01F, 9.999880195e-01F, 9.999882579e-01F, 9.999884963e-01F, 9.999887347e-01F, 9.999889731e-01F, 9.999892116e-01F,
	9.999893904e-01F, 9.999896288e-01F, 9.999898672e-01F, 9.999900460e-01F, 9.999902844e-01F, 9.999904633e-01F, 9.999907017e-01F, 9.999908805e-01F,
	9.999911189e-01F, 9.999912977e-01F, 9.999914765e-01F, 9.999917150e-01F, 9.999918938e-01F, 9.999920726e-01F, 9.999922514e-01F, 9.999924898e-01F,
	9.999926686e-01F, 9.999928474e-01F, 9.999930263e-01F, 9.999932051e-01F, 9.999933839e-01F, 9.999935627e-01F, 9.999936819e-01F, 9.999938607e-01F,
	9.999940395e-01F, 9.999942183e-01F, 9.999943972e-01F, 9.999945164e-01F, 9.999946952e-01F, 9.999948144e-01F, 9.999949932e-01F, 9.999951720e-01F,
	9.999952912e-01F, 9.999954104e-01F, 9.999955893e-01F, 9.999957085e-01F, 9.999958873e-01F, 9.999960065e-01F, 9.999961257e-01F, 9.999962449e-01F,
	9.999964237e-01F, 9.999965429e-01F, 9.999966621e-01F, 9.999967813e-01F, 9.999969006e-01F, 9.999970198e-01F, 9.999971390e-01F, 9.999972582e-01F,
	9.999973774e-01F, 9.999974370e-01F, 9.999975562e-01F, 9.999976754e-01F, 9.999977946e-01F, 9.999978542e-01F, 9.999979734e-01F, 9.999980927e-01F,
	9.999981523e-01F, 9.999982715e-01F, 9.999983311e-01F, 9.999984503e-01F, 9.999985099e-01F, 9.999985695e-01F, 9.999986887e-01F, 9.999987483e-01F,
	9.999988079e-01F, 9.999988675e-01F, 9.999989867e-01F, 9.999990463e-01F, 9.999991059e-01F, 9.999991655e-01F, 9.999992251e-01F, 9.999992847e-01F,
	9.999993443e-01F, 9.999994040e-01F, 9.999994636e-01F, 9.999994636e-01F, 9.999995232e-01F, 9.999995828e-01F, 9.999996424e-01F, 9.999996424e-01F,
	9.999997020e-01F, 9.999997616e-01F, 9.999997616e-01F, 9.999998212e-01F, 9.999998212e-01F, 9.999998808e-01F, 9.999998808e-01F, 9.999998808e-01F,
	9.999999404e-01F, 9.999999404e-01F, 9.999999404e-01F, 1.000000000e+00F, 1.000000000e+00F, 1.000000000e+00F, 1.000000000e+00F, 1.000000000e+00F,
	1.000000000e+00F
};

#define patch_secret_counter_status VAR_U_(0x00902474, long)
#define global_mesh_position VAR_U_(0x009019C0, PHD_VECTOR)
#define bridge_object ARRAY_(0x009019F4, short, [3])
#define HKTimer VAR_U_(0x00900062, char)
#define HKShotsFired VAR_U_(0x00900087, char)
#define LSHKTimer VAR_U_(0x0090087A, char)
#define LSHKShotsFired VAR_U_(0x0090087B, char)
#define hk_gunflash_slot VAR_U_(0x00901568, short)
#define sfx_hk_fire VAR_U_(0x00902208, short)
#define sfx_hk_stop VAR_U_(0x009019F0, short)
#define hk_ammo1 VAR_U_(0x00900084, short)
#define hk_ammo2 VAR_U_(0x009024E4, short)
#define hk_ammo3 VAR_U_(0x00902214, short)
#define hk_ammo1_slot VAR_U_(0x00902210, short)
#define hk_ammo2_slot VAR_U_(0x00901A40, short)
#define hk_ammo3_slot VAR_U_(0x00901A7C, short)
#define hk_still_hips_fire VAR_U_(0x00900086, char)
#define lift_doors ARRAY_(0x009019EC, short, [2])
#define sfx_lift_doors VAR_U_(0x00901A48, short)
#define sprite_object ARRAY_(0x0090093C, short, [16])
#define camera_bounce_strength VAR_U_(0x00902140, long)
#define camera_bounce_item_number VAR_U_(0x00902B10, short)
#define camera_bounce_status VAR_U_(0x00902418, long)
#define rollingball_object ARRAY_(0x0090249C, short, [16])
#define crossbow_grenade_animations VAR_U_(0x00900060, char)
#define crossbow_grenade_ammo ARRAY_(0x00902460, char, [3])
#define crossbow_grenade_ammo_type ARRAY_(0x009019FC, char, [3])
#define crossbow_grenade_ammo_slot ARRAY_(0x00902110, short, [3])
#define crossbow_grenade_ammo_sound ARRAY_(0x0090246C, short, [3])
#define crossbow_grenade_ammo_smoke ARRAY_(0x0090254C, char, [3])
#define in_fire_crossbow_grenade VAR_U_(0x00900061, char)
#define lara_meshswap_target ARRAY_(0x00902D38, short, [255])
#define lara_meshswap_source_slot ARRAY_(0x00900960, short, [255])
#define lara_meshswap_source ARRAY_(0x00902910, short, [255])
#define mine_cart_slot_minecart VAR_U_(0x00900878, short)
#define mine_cart_slot_vehicle_anim VAR_U_(0x00902464, short)
#define mine_cart_slot_mapper VAR_U_(0x0090220C, short)
#define mine_cart_slot_animating2 VAR_U_(0x00901A44, short)
#define mine_cart_sfx_mine_cart_clunk_start VAR_U_(0x009024E0, short)
#define mine_cart_sfx_quad_front_impact VAR_U_(0x00902204, short)
#define mine_cart_sfx_mine_cart_sreech_brake VAR_U_(0x009015BC, short)
#define mine_cart_sfx_mine_cart_track_loop VAR_U_(0x0090213C, short)
#define mine_cart_sfx_mine_cart_pully_loop VAR_U_(0x0090095C, short)
#define mine_cart_alignment VAR_U_(0x00900063, char)
#define mine_cart_slot_rollingball ARRAY_(0x009021C4, short, [16])
#define mine_cart_health ARRAY_(0x009024E8, short, [16])
#define trapdoor_object ARRAY_(0x009019A0, short, [16])
#define horizon_rotation VAR_U_(0x00902FD8, short)
#define horizon_rotation_speed VAR_U_(0x00902498, short)
#define train_object ARRAY_(0x0090156C, short, [16])
#define train_sfx_tube_loop VAR_U_(0x00902138, short)
#define train_animation_trainkill VAR_U_(0x009024BC, short)
#define train_distance_camera VAR_U_(0x00902B34, short)
#define bat_emitter_object ARRAY_(0x00902F38, short, [16])
#define bat_mesh_object ARRAY_(0x0090252C, short, [16])
#define bat_mesh_sound ARRAY_(0x0090089C, short, [16])
#define bat_effect ARRAY_(0x00900378, BAT_STRUCT, [64])
#define springboard_object ARRAY_(0x00902144, short, [16])
#define springboard_fallspeed ARRAY_(0x009021E4, short, [16])
#define aCameraMatrix ARRAY_(0x00901A4C, float, [indices_count])
#define aFMatrixStack ARRAY_(0x009015C0, float, [20 * indices_count])
#define alara_matricesF ARRAY_(0x00901A80, float, [180])
#define mw2v_matrix ARRAY_(0x0090158C, long, [indices_count])
#define mMatrixStack ARRAY_(0x00902550, long, [20 * indices_count])
#define miMatrixStack ARRAY_(0x00901D50, long, [20 * indices_count])
#define mlara_matrices ARRAY_(0x00900088, long, [180])
#define in_draw_loop VAR_U_(0x00902468, long)
#define quad_bike_slot_quadbike ARRAY_(0x00902118, short, [16])
#define quad_bike_slot_vehicle_anim ARRAY_(0x00900064, short, [16])
#define quad_bike_slot_avalanche ARRAY_(0x00902218, short, [16][16])
#define quad_bike_health ARRAY_(0x00902B38, short, [16][16])
#define quad_bike_sfx_quad_front_impact ARRAY_(0x00901980, short, [16])
#define quad_bike_sfx_quad_move ARRAY_(0x009008BC, short, [16])
#define quad_bike_sfx_quad_idle ARRAY_(0x009019CC, short, [16])
#define quad_bike_mesh_wheel ARRAY_(0x00902F58, short, [16][4])
#define quad_bike_mesh_wheel_index ARRAY_(0x00900000, char, [16][4])
#define quad_bike_deadly_fallspeed ARRAY_(0x00902440, short, [16])
#define quad_bike_deadly_water_depth ARRAY_(0x00902508, short, [16])
#define quad_bike_frame_fall_death_detach ARRAY_(0x009008FC, short, [16])
#define quad_bike_index ARRAY_(0x00900B60, char, [NUMBER_OBJECTS])
#define baddie_collision_roomies ARRAY_(0x00900D68, short, [1024])
#define spinning_blade_object ARRAY_(0x009024C0, short, [16])
#define spinning_blade_sound ARRAY_(0x00902478, short, [16])
#define spinning_blade_health ARRAY_(0x00902420, short, [16])
#define spinning_blade_collision ARRAY_(0x0090087C, short, [16])
#define spinning_blade_fall ARRAY_(0x00902184, short, [16])
#define spinning_blade_distance ARRAY_(0x00902FDC, short, [16])
#define spinning_blade_animation_front ARRAY_(0x00902B14, short, [16])
#define spinning_blade_animation_back ARRAY_(0x00902164, short, [16])
#define spinning_blade_animation_spike_front ARRAY_(0x00901A20, short, [16])
#define spinning_blade_animation_spike_back ARRAY_(0x00900358, short, [16])
#define spinning_blade_meshswap_front ARRAY_(0x00901A00, short, [16])
#define spinning_blade_meshswap_back ARRAY_(0x0090091C, short, [16])
#define spinning_blade_meshswap_spike_front ARRAY_(0x009021A4, short, [16])
#define spinning_blade_meshswap_spike_back ARRAY_(0x00900040, short, [16])
#define spinning_blade_meshswap ARRAY_(0x009008DC, short, [16])

long check_flep(long number)
{
	return flep_number == number;
}

long print_secret_counter(char* buf, char* format)
{
	uchar secrets, count;

	if (!patch_secret_counter_status)
		return sprintf(buf, format, savegame.Game.Secrets);

	secrets = savegame.Level.Secrets;
	count = 0;

	while (secrets)
	{
		if (secrets & 0x1)
			count++;
		secrets >>= 1;
	}

	return sprintf(buf, format, count);
}

void burning_torch_customizer_colour(SPARKS* sptr)
{
	sptr->sR = flame_start_colour_r;
	sptr->sG = (GetRandomControl() & 0x1F) + flame_start_colour_g;
	sptr->sB = flame_start_colour_b;
	sptr->dR = (GetRandomControl() & 0x3F) + flame_end_colour_r;
	sptr->dG = (GetRandomControl() & 0x3F) + flame_end_colour_g;
	sptr->dB = flame_end_colour_b;
}

void set_patch_secret_counter_status(long status)
{
	patch_secret_counter_status = status;
}

void get_global_mesh_position(void)
{
	PHD_VECTOR u;

	u.x = phd_mxptr[M03] >> W2V_SHIFT;
	u.y = phd_mxptr[M13] >> W2V_SHIFT;
	u.z = phd_mxptr[M23] >> W2V_SHIFT;
	ApplyTransposeMatrix(w2v_matrix, &u, &global_mesh_position);
	global_mesh_position.x += w2v_matrix[M03];
	global_mesh_position.y += w2v_matrix[M13];
	global_mesh_position.z += w2v_matrix[M23];
}

ulong calculate_static_vertex_light(D3DVERTEX* vtx)
{
	DYNAMIC* dptr;
	PHD_VECTOR d, w, u;
	float fVal;
	long r, g, b;

	r = 0;
	g = 0;
	b = 0;

	for (int i = 0; i < 127; i++)
	{
		dptr = &dynamics[i];

		if (dptr->on)
		{
			d.x = dptr->x - global_mesh_position.x;
			d.y = dptr->y - global_mesh_position.y;
			d.z = dptr->z - global_mesh_position.z;
			ApplyMatrix(w2v_matrix, &d, &w);
			ApplyTransposeMatrix(phd_mxptr, &w, &u);
			fVal = fsqrt(SQUARE(u.x - vtx->x) + SQUARE(u.y - vtx->y) + SQUARE(u.z - vtx->z)) * 1.7F;

			if (fVal <= dptr->falloff)
			{
				fVal = (dptr->falloff - fVal) / dptr->falloff;
				r += (long)(fVal * dptr->r);
				g += (long)(fVal * dptr->g);
				b += (long)(fVal * dptr->b);
			}
		}
	}

	if (r > 255)
		r = 255;

	if (g > 255)
		g = 255;

	if (b > 255)
		b = 255;

	return RGBA(r, g, b, 0xFF);
}

void setup_bridge_object(void)
{
	OBJECT_INFO* obj;

	for (int i = 0; i < 3; i++)
	{
		if (bridge_object[i] != -1)
		{
			obj = &objects[bridge_object[i]];
			obj->initialise = 0;
			obj->collision = 0;
			obj->control = 0;

			if (!i)
			{
				obj->floor = BridgeFlatFloor;
				obj->ceiling = BridgeFlatCeiling;
			}
			else if (i == 1)
			{
				obj->floor = BridgeTilt1Floor;
				obj->ceiling = BridgeTilt1Ceiling;
			}
			else
			{
				obj->floor = BridgeTilt2Floor;
				obj->ceiling = BridgeTilt2Ceiling;
			}
		}
	}
}

void FireHK(long running)
{
	short angles[2];

	if (lara.crossbow_type_carried & hk_ammo1)
		HKTimer = 12;
	else if (lara.crossbow_type_carried & hk_ammo2)
	{
		HKShotsFired++;

		if (HKShotsFired == 5)
		{
			HKShotsFired = 0;
			HKTimer = 12;
		}
	}

	angles[0] = lara.left_arm.y_rot + lara_item->pos.y_rot;
	angles[1] = lara.left_arm.x_rot;

	if (!pPatchMap[169] && !lara.left_arm.lock)
	{
		angles[0] += lara.torso_y_rot;
		angles[1] += lara.torso_x_rot;
	}

	if (running)
	{
		weapons[WEAPON_CROSSBOW].shot_accuracy = 2184;
		weapons[WEAPON_CROSSBOW].damage = 1;
	}
	else
	{
		weapons[WEAPON_CROSSBOW].shot_accuracy = 728;
		weapons[WEAPON_CROSSBOW].damage = 3;
	}

	if (FireWeapon(WEAPON_CROSSBOW, lara.target, lara_item, angles))
	{
		SmokeCountL = 12;
		SmokeWeapon = WEAPON_CROSSBOW;
		TriggerGunShell(1, GUNSHELL, WEAPON_CROSSBOW);
		lara.right_arm.flash_gun = weapons[WEAPON_CROSSBOW].flash_time;
		savegame.Game.AmmoUsed++;
	}
}

void reset_hk(long state)
{
	if (!state || state == 6)
	{
		HKTimer = 0;
		HKShotsFired = 0;
	}
	else if (HKTimer)
	{
		m16_firing = 0;
		HKTimer--;
	}
}

long get_shotgun_change(void)
{
	return lara.water_status != LW_UNDERWATER && (lara.gun_type != WEAPON_CROSSBOW || !lara_item->speed);
}

void play_sound_hk(void)
{
	if (sfx_hk_fire != -1)
		SoundEffect(sfx_hk_fire, &lara_item->pos, SFX_DEFAULT);
}

void handle_hk_fire(ITEM_INFO* item)
{
	if (!(lara.crossbow_type_carried & (hk_ammo1 | hk_ammo2)) || !HKTimer)
	{
		FireHK(0);
		m16_firing = 1;
		item->goal_anim_state = 2;
		play_sound_hk();
	}
	else
		item->goal_anim_state = 0;
}

void stop_sound_hk(void)
{
	if (sfx_hk_fire != -1)
		StopSoundEffect(sfx_hk_fire);

	if (sfx_hk_stop != -1)
		SoundEffect(sfx_hk_stop, &lara_item->pos, SFX_DEFAULT);
}

void animate_hk(ITEM_INFO* item)
{
	if (item->frame_number == anims[item->anim_number].frame_base)
	{
		item->goal_anim_state = 7;

		if ((lara.water_status == LW_UNDERWATER || lara.gun_type == WEAPON_CROSSBOW && (lara_item->speed || hk_still_hips_fire && input & IN_ACTION)) && !harpoon_fired)
		{
			if (input & IN_ACTION)
			{
				if (!lara.target || lara.left_arm.lock)
				{
					if (!(lara.crossbow_type_carried & (hk_ammo1 | hk_ammo2)) || !HKTimer)
					{
						FireHK(1);
						m16_firing = 1;
						item->goal_anim_state = 8;
						play_sound_hk();
					}
					else
						item->goal_anim_state = 6;
				}
			}
			else if (lara.left_arm.lock)
				item->goal_anim_state = 6;
		}

		if (item->goal_anim_state != 8 && m16_firing)
		{
			stop_sound_hk();
			m16_firing = 0;
		}
	}
	else if (m16_firing)
		play_sound_hk();
}

short get_gunflash_slot(void)
{
	short slot;

	if (lara.gun_type != WEAPON_CROSSBOW)
		slot = GUN_FLASH;
	else
		slot = hk_gunflash_slot;

	if (pPatchMap[89])
	{
		vertex_shader_target[0] = slot;
		vertex_shader_target[1] = 0;
	}

	return objects[slot].mesh_index;
}

void special_hk_animation(short** pprot, long skip)
{
	if (lara.weapon_item != -1 && lara.gun_type == WEAPON_CROSSBOW &&
		items[lara.weapon_item].current_anim_state >= 0 && items[lara.weapon_item].current_anim_state <= 4)
	{
		*pprot = &lara.right_arm.frame_base[lara.right_arm.frame_number * (anims[lara.right_arm.anim_number].interpolation >> 8) + 9];
		skip = 7;
	}

	gar_RotYXZsuperpack(pprot, skip);
}

void special_hk_animation_interpolated(short** pprot1, short** pprot2, long skip)
{
	if (lara.weapon_item != -1 && lara.gun_type == WEAPON_CROSSBOW &&
		items[lara.weapon_item].current_anim_state >= 0 && items[lara.weapon_item].current_anim_state <= 4)
	{
		*pprot1 = &lara.right_arm.frame_base[lara.right_arm.frame_number * (anims[lara.right_arm.anim_number].interpolation >> 8) + 9];
		*pprot2 = *pprot1;
		skip = 7;
	}

	gar_RotYXZsuperpack_I(pprot1, pprot2, skip);
}

void reset_hk_lasersight(void)
{
	if (LSHKTimer)
		LSHKTimer--;
}

void bounce_hk_lasersight(char Fire, short* ammo)
{
	if (inputBusy & IN_ACTION && !HKTimer && *ammo)
	{
		if (!Fire && lara.crossbow_type_carried & hk_ammo2 || lara.crossbow_type_carried & hk_ammo3)
			camera.bounce = -16 - (GetRandomControl() & 0x1F);
	}
	else if (!(inputBusy & IN_ACTION))
		camera.bounce = 0;
}

void wait_hk_lasersight(void)
{
	if (lara.gun_type == WEAPON_CROSSBOW)
	{
		if (pPatchMap[336])
			bounce_hk_lasersight(0, get_current_ammo_pointer(WEAPON_CROSSBOW));
		else if (!(inputBusy & IN_ACTION))
		{
			WeaponDelay = 0;
			LSHKShotsFired = 0;
			camera.bounce = 0;
		}
	}
}

void fire_hk_lasersight(char* Fire, short* ammo)
{
	if (!pPatchMap[273] || lara.gun_type != WEAPON_CROSSBOW)
	{
		if (!pPatchMap[336])
			WeaponDelay = 32;

		if (*ammo != -1)
			(*ammo)--;
	}
	else if (pPatchMap[336])
	{
		bounce_hk_lasersight(1, ammo);
		savegame.Game.AmmoUsed++;

		if (*ammo != -1)
			(*ammo)--;
	}
	else if (lara.crossbow_type_carried & hk_ammo1)
	{
		WeaponDelay = 12;
		play_sound_hk();
		savegame.Game.AmmoUsed++;

		if (*ammo != -1)
			(*ammo)--;
	}
	else if (lara.crossbow_type_carried & hk_ammo2)
	{
		if (LSHKTimer)
		{
			camera.bounce = -16 - (GetRandomControl() & 0x1F);
			*Fire = 0;
		}
		else
		{
			LSHKShotsFired++;

			if (LSHKShotsFired == 5)
			{
				LSHKShotsFired = 0;
				WeaponDelay = 12;
			}

			LSHKTimer = 4;
			savegame.Game.AmmoUsed++;

			if (*ammo != -1)
				(*ammo)--;
		}

		play_sound_hk();
	}
	else
	{
		if (LSHKTimer)
			*Fire = 0;
		else
		{
			LSHKTimer = 4;
			savegame.Game.AmmoUsed++;

			if (*ammo != -1)
				(*ammo)--;
		}

		play_sound_hk();
		camera.bounce = -16 - (GetRandomControl() & 0x1F);
	}
}

void InitialiseLiftDoors(short item_number)
{
	ITEM_INFO* item;

	item = &items[item_number];
	item->item_flags[0] = 4096;
	InitialiseDoor(item_number);
}

void LiftDoorsControl(short item_number)
{
	ITEM_INFO* item;
	DOOR_DATA* door;

	item = &items[item_number];
	door = (DOOR_DATA*)item->data;

	if (!TriggerActive(item))
	{
		if (item->item_flags[0] >= 4096)
		{
			if (door->Opened)
			{
				ShutThatDoor(&door->d1);
				ShutThatDoor(&door->d2);
				ShutThatDoor(&door->d1flip);
				ShutThatDoor(&door->d2flip);
				door->Opened = 0;
			}
		}
		else
		{
			if (!item->item_flags[0] && sfx_lift_doors != -1)
				SoundEffect(sfx_lift_doors, &item->pos, SFX_DEFAULT);

			item->item_flags[0] += 256;
		}
	}
	else
	{
		if (item->item_flags[0] > 0)
		{
			if (item->item_flags[0] == 4096 && sfx_lift_doors != -1)
				SoundEffect(sfx_lift_doors, &item->pos, SFX_DEFAULT);

			item->item_flags[0] -= 256;
		}

		if (!door->Opened)
		{
			OpenThatDoor(&door->d1);
			OpenThatDoor(&door->d2);
			OpenThatDoor(&door->d1flip);
			OpenThatDoor(&door->d2flip);
			door->Opened = 1;
		}
	}
}

void DrawLiftDoors(ITEM_INFO* item)
{
	PHD_VECTOR v;
	short** meshpp;
	short* frmptr[2];
	long clip, rate;

	if (item->item_flags[0])
	{
		GetFrames(item, frmptr, &rate);
		phd_PushMatrix();
		phd_TranslateAbs(item->pos.x_pos, item->pos.y_pos, item->pos.z_pos);
		phd_RotYXZ(item->pos.y_rot, item->pos.x_rot, item->pos.z_rot);
		clip = S_GetObjectBounds(frmptr[0]);

		if (clip)
		{
			meshpp = &meshes[objects[item->object_number].mesh_index];
			phd_TranslateRel(frmptr[0][6], frmptr[0][7], frmptr[0][8]);
			v.x = item->item_flags[0] << 2;
			v.y = 16384;
			v.z = 16384;
			ScaleCurrentMatrix(&v);
			CalculateObjectLighting(item, frmptr[0]);
			phd_PutPolygons(*meshpp, clip);
		}

		phd_PopMatrix();
	}
}

void setup_lift_doors(void)
{
	OBJECT_INFO* obj;

	for (int i = 0; i < 2; i++)
	{
		if (lift_doors[i] != -1)
		{
			obj = &objects[lift_doors[i]];
			obj->initialise = InitialiseLiftDoors;
			obj->collision = 0;
			obj->control = LiftDoorsControl;
			obj->draw_routine = DrawLiftDoors;
			obj->using_drawanimating_item = 0;
			obj->save_flags = 1;
		}
	}
}

long test_vertex_wibble(ROOM_INFO* r, D3DVECTOR* v)
{
	short* door;
	int count;

	door = r->door;

	if (door)
	{
		count = *door;
		door++;

		for (int i = 0; i < count; i++)
		{
			if (door[2] && ABS(v->y - door[5]) <= 1 && (r->flags & ROOM_UNDERWATER) != (room[door[0]].flags & ROOM_UNDERWATER))
			{
				if (door[4] < door[10])
				{
					if (v->x >= door[4] && v->x <= door[10] && v->z >= door[6] && v->z <= door[12])
						return 0;
				}
				else if (door[2] > 0)
				{
					if (v->x >= door[7] && v->x <= door[13] && v->z >= door[9] && v->z <= door[15])
						return 0;
				}
				else
				{
					if (v->x >= door[10] && v->x <= door[4] && v->z >= door[12] && v->z <= door[6])
						return 0;
				}
			}

			door += 16;
		}
	}

	return 1;
}

void S_PrintCircleShadow(short size, short* box, ITEM_INFO* item, D3DCOLOR inner, D3DCOLOR outer, long scale)
{
	TEXTURESTRUCT Tex;
	D3DTLVERTEX v[3];
	PHD_VECTOR pos;
	PHD_VECTOR cv[32];
	PHD_VECTOR cp[32];
	PHD_VECTOR ccv;
	PHD_VECTOR ccp;
	D3DCOLOR clr;
	long x, y, z, x1, y1, z1, x2, y2, z2, x3, y3, z3, xSize, zSize, xDist, zDist;
	short room_number;

	if (!scale)
		scale = 1;

	xSize = size * (box[1] - box[0]) / scale;
	zSize = size * (box[5] - box[4]) / scale;
	xDist = xSize / 4;
	zDist = zSize / 4;
	x = xDist + (xDist >> 1);
	z = zDist + (zDist >> 1);

	for (int i = 0; i < 32; i++)
	{
		cv[i].x = x * phd_sin(2048 * i) >> 14;
		cv[i].z = z * phd_cos(2048 * i) >> 14;
	}

	phd_PushUnitMatrix();

	if (item == lara_item)
	{
		pos.x = 0;
		pos.y = 0;
		pos.z = 0;
		GetLaraJointPos(&pos, LMX_TORSO);
		room_number = lara_item->room_number;
		y = GetHeight(GetFloor(pos.x, pos.y, pos.z, &room_number), pos.x, pos.y, pos.z);

		if (y == NO_HEIGHT)
			y = item->floor;
	}
	else
	{
		pos.x = item->pos.x_pos;
		y = item->floor;
		pos.z = item->pos.z_pos;
	}

	y -= 16;
	phd_TranslateRel(pos.x, y, pos.z);
	phd_RotY(item->pos.y_rot);

	for (int i = 0; i < 32; i++)
	{
		cp[i].x = (cv[i].x * phd_mxptr[M00] + cv[i].z * phd_mxptr[M02] + phd_mxptr[M03]) >> 14;
		cp[i].z = (cv[i].x * phd_mxptr[M20] + cv[i].z * phd_mxptr[M22] + phd_mxptr[M23]) >> 14;
	}

	ccp.x = phd_mxptr[M03] >> 14;
	ccp.z = phd_mxptr[M23] >> 14;
	phd_PopMatrix();

	for (int i = 0; i < 32; i++)
	{
		room_number = item->room_number;
		cp[i].y = GetHeight(GetFloor(cp[i].x, item->floor, cp[i].z, &room_number), cp[i].x, item->floor, cp[i].z);

		if (ABS(cp[i].y - item->floor) > 196)
			cp[i].y = item->floor;
	}

	room_number = item->room_number;
	ccp.y = GetHeight(GetFloor(ccp.x, item->floor, ccp.z, &room_number), ccp.x, item->floor, ccp.z);

	if (ABS(ccp.y - item->floor) > 196)
		ccp.y = item->floor;

	phd_PushMatrix();
	phd_TranslateAbs(pos.x, y, pos.z);
	phd_RotY(item->pos.y_rot);

	for (int i = 0; i < 32; i++)
	{
		x = cv[i].x;
		y = cp[i].y - item->floor;
		z = cv[i].z;
		cv[i].x = (phd_mxptr[M00] * x + phd_mxptr[M01] * y + phd_mxptr[M02] * z + phd_mxptr[M03]) >> 14;
		cv[i].y = (phd_mxptr[M10] * x + phd_mxptr[M11] * y + phd_mxptr[M12] * z + phd_mxptr[M13]) >> 14;
		cv[i].z = (phd_mxptr[M20] * x + phd_mxptr[M21] * y + phd_mxptr[M22] * z + phd_mxptr[M23]) >> 14;
	}

	y = ccp.y - item->floor;
	ccv.x = (phd_mxptr[M01] * y + phd_mxptr[M03]) >> 14;
	ccv.y = (phd_mxptr[M11] * y + phd_mxptr[M13]) >> 14;
	ccv.z = (phd_mxptr[M21] * y + phd_mxptr[M23]) >> 14;
	phd_PopMatrix();

	for (int i = 0; i < 32; i++)
	{
		x1 = cv[i].x;
		y1 = cv[i].y;
		z1 = cv[i].z;
		x2 = cv[(i + 1) % 32].x;
		y2 = cv[(i + 1) % 32].y;
		z2 = cv[(i + 1) % 32].z;
		x3 = ccv.x;
		y3 = ccv.y;
		z3 = ccv.z;
		setXYZ3(v, x1, y1, z1, x2, y2, z2, x3, y3, z3, clipflags);
		v[0].color = outer;
		v[1].color = v[0].color;
		v[2].color = inner;

		if (item->after_death)
		{
			clr = item->after_death << 25;

			if (v[0].color > clr)
				v[0].color -= clr;
			else
				v[0].color = 0x00000000;

			v[1].color = v[0].color;

			if (v[2].color > clr)
				v[2].color -= clr;
			else
				v[2].color = 0x00000000;
		}

		v[0].specular = 0xFF000000;
		v[1].specular = 0xFF000000;
		v[2].specular = 0xFF000000;
		Tex.flag = 0;
		Tex.tpage = 0;
		Tex.drawtype = 3;
		Tex.u1 = 0;
		Tex.v1 = 0;
		Tex.u2 = 0;
		Tex.v2 = 0;
		Tex.u3 = 0;
		Tex.v3 = 0;
		Tex.u4 = 0;
		Tex.v4 = 0;
		AddTriSorted(v, 0, 1, 2, &Tex, 1);
	}
}

long move_lara_position_to_pushable(PHD_VECTOR* v, ITEM_INFO* item, ITEM_INFO* l)
{
	PHD_VECTOR pos;

	phd_PushUnitMatrix();
	phd_RotY(-item->pos.y_rot);
	phd_TranslateRel(l->pos.x_pos - item->pos.x_pos, l->pos.y_pos - item->pos.y_pos, l->pos.z_pos - item->pos.z_pos);
	pos.x = phd_mxptr[M03] >> 14;
	phd_PopMatrix();
	pos.y = v->y;
	pos.z = v->z;
	AlignLaraPosition(&pos, item, l);
	return MoveLaraPositionTrampoline(&pos, item, l);
}

void DrawClassicHair(void)
{
	HAIR_STRUCT* hair;
	short** meshpp;
	char pigtails = 0;

	// HAIR_PAGE_BOY never enters the draw function, so no need to check for it
	// TRNGYLHairFlag is set if TRNGCustHair == HAIR_TWO_PLAITS
	if (((gfLevelFlags & GF_YOUNGLARA) || TRNGYLHairFlag) && !((TRNGCustHair == HAIR_ONE_PONYTAIL) || (TRNGCustHair == HAIR_ONE_TR5_PONYTAIL)))
		pigtails = 1;

	for (int j = 0; j < 2; j++)
	{
		meshpp = &meshes[objects[HAIR].mesh_index];

		for (int i = 0; i < 6; i++)
		{
			hair = &hairs[j][i];

			phd_PushMatrix();
			phd_TranslateAbs(hair->pos.x_pos, hair->pos.y_pos, hair->pos.z_pos);
			phd_RotY(hair->pos.y_rot);
			phd_RotX(hair->pos.x_rot);
			phd_PutPolygons(*meshpp, -1);
			phd_PopMatrix();

			meshpp += 2;
		}

		if (!pigtails)
			break;
	}
}

void RotateItem(ITEM_INFO* item)
{
	short angles[2];

	phd_GetVectorAngles(camera.pos.x - camera.target.x, camera.pos.y - camera.target.y, camera.pos.z - camera.target.z, angles);
	item->pos.y_rot = angles[0];
	item->pos.x_rot = angles[1];
}

void SpriteObjectControl(short item_number)
{
	ITEM_INFO* item;

	item = &items[item_number];
	item->mesh_bits = 1 << item->item_flags[0];
	item->item_flags[0]++;

	if (item->item_flags[0] >= objects[item->object_number].nmeshes)
		item->item_flags[0] = 0;

	AnimateItem(item);
	RotateItem(item);
}

void setup_sprite_object(void)
{
	OBJECT_INFO* obj;

	for (int i = 0; i < 16; i++)
	{
		if (sprite_object[i] != -1)
		{
			obj = &objects[sprite_object[i]];
			obj->initialise = 0;
			obj->collision = 0;
			obj->control = SpriteObjectControl;
			obj->draw_routine = DrawAnimatingItem;
			obj->save_flags = 1;
			obj->save_anim = 1;
		}
	}
}

long GetMaximumFloor(FLOOR_INFO* floor, long x, long z)
{
	long height, h1, h2;
	short* data, type, dx, dz, t0, t1, t2, t3, hadj;

	height = floor->floor << 8;

	if (height != NO_HEIGHT && floor->index)
	{
		data = &floor_data[floor->index];
		type = *data++;
		h1 = 0;
		h2 = 0;

		if ((type & 0x1F) != TILT_TYPE)
		{
			if ((type & 0x1F) == SPLIT1 || (type & 0x1F) == SPLIT2 || (type & 0x1F) == NOCOLF1T || (type & 0x1F) == NOCOLF1B || (type & 0x1F) == NOCOLF2T || (type & 0x1F) == NOCOLF2B)
			{
				dx = x & 0x3FF;
				dz = z & 0x3FF;
				t0 = *data & 0xF;
				t1 = *data >> 4 & 0xF;
				t2 = *data >> 8 & 0xF;
				t3 = *data >> 12 & 0xF;

				if ((type & 0x1F) == SPLIT1 || (type & 0x1F) == NOCOLF1T || (type & 0x1F) == NOCOLF1B)
				{
					if (dx <= 1024 - dz)
					{
						hadj = type >> 10 & 0x1F;
						h1 = t2 - t1;
						h2 = t0 - t1;
					}
					else
					{
						hadj = type >> 5 & 0x1F;
						h1 = t3 - t0;
						h2 = t3 - t2;
					}
				}
				else
				{
					if (dx <= dz)
					{
						hadj = type >> 10 & 0x1F;
						h1 = t2 - t1;
						h2 = t3 - t2;
					}
					else
					{
						hadj = type >> 5 & 0x1F;
						h1 = t3 - t0;
						h2 = t0 - t1;
					}
				}

				if (hadj & 0x10)
					hadj |= 0xFFF0;

				height += hadj << 8;
			}
		}
		else
		{
			h1 = *data >> 8;
			h2 = *(char*)data;
		}

		height += 256 * (ABS(h1) + ABS(h2));
	}

	return height;
}

long GetMinimumCeiling(FLOOR_INFO* floor, long x, long z)
{
	long height, h1, h2;
	short* data, type, dx, dz, t0, t1, t2, t3, hadj, ended;

	height = floor->ceiling << 8;

	if (height != NO_HEIGHT && floor->index)
	{
		data = &floor_data[floor->index];
		type = *data++;
		ended = 0;

		if ((type & 0x1F) == TILT_TYPE || (type & 0x1F) == SPLIT1 || (type & 0x1F) == SPLIT2 || (type & 0x1F) == NOCOLF1T || (type & 0x1F) == NOCOLF1B || (type & 0x1F) == NOCOLF2T || (type & 0x1F) == NOCOLF2B)
		{
			data++;

			if (type & 0x8000)
				ended = 1;

			type = *data++;
		}

		if (!ended)
		{
			h1 = 0;
			h2 = 0;

			if ((type & 0x1F) != ROOF_TYPE)
			{
				if ((type & 0x1F) == SPLIT3 || (type & 0x1F) == SPLIT4 || (type & 0x1F) == NOCOLC1T || (type & 0x1F) == NOCOLC1B || (type & 0x1F) == NOCOLC2T || (type & 0x1F) == NOCOLC2B)
				{
					dx = x & 0x3FF;
					dz = z & 0x3FF;
					t0 = -(*data & 0xF);
					t1 = -(*data >> 4 & 0xF);
					t2 = -(*data >> 8 & 0xF);
					t3 = -(*data >> 12 & 0xF);

					if ((type & 0x1F) == SPLIT3 || (type & 0x1F) == NOCOLC1T || (type & 0x1F) == NOCOLC1B)
					{
						if (dx <= 1024 - dz)
						{
							hadj = type >> 10 & 0x1F;
							h1 = t2 - t1;
							h2 = t3 - t2;
						}
						else
						{
							hadj = type >> 5 & 0x1F;
							h1 = t3 - t0;
							h2 = t0 - t1;
						}
					}
					else
					{
						if (dx <= dz)
						{
							hadj = type >> 10 & 0x1F;
							h1 = t2 - t1;
							h2 = t0 - t1;
						}
						else
						{
							hadj = type >> 5 & 0x1F;
							h1 = t3 - t0;
							h2 = t3 - t2;
						}
					}

					if (hadj & 0x10)
						hadj |= 0xFFF0;

					height += hadj << 8;
				}
			}
			else
			{
				h1 = *data >> 8;
				h2 = *(char*)data;
			}

			height -= 256 * (ABS(h1) + ABS(h2));
		}
	}

	return height;
}

void set_bounce(void)
{
	ITEM_INFO* item;
	long dx, dy, dz, distance;

	if (camera_bounce_status)
	{
		if (camera_bounce_item_number != -1)
		{
			item = &items[camera_bounce_item_number];
			dx = item->pos.x_pos - camera.pos.x;
			dy = item->pos.y_pos - camera.pos.y;
			dz = item->pos.z_pos - camera.pos.z;

			if (ABS(dx) < 16384 && ABS(dy) < 16384 && ABS(dz) < 16384)
			{
				distance = SQUARE(dx) + SQUARE(dy) + SQUARE(dz);

				if (distance <= 268435456)
					camera.bounce = camera_bounce_strength * (1048576 - distance / 256) / 1048576;
			}
		}
		else
			camera.bounce = camera_bounce_strength;
	}
}

void do_spotcam_bounce()
{
	long rndval, shake;

	set_bounce();

	if (camera.bounce)
	{
		if (camera.bounce <= 0)
		{
			rndval = -camera.bounce;
			shake = rndval >> 1;
			camera.target.x += GetRandomControl() % rndval - shake;
			camera.target.y += GetRandomControl() % rndval - shake;
			camera.target.z += GetRandomControl() % rndval - shake;
			camera.bounce += 5;
		}
		else
		{
			camera.pos.y += camera.bounce;
			camera.target.y += camera.bounce;
			camera.bounce = 0;
		}
	}
}

void lara_col_back_fix(ITEM_INFO* item)
{
	if (item->frame_number - anims[item->anim_number].frame_base >= backstep_start_frame && item->frame_number - anims[item->anim_number].frame_base <= backstep_end_frame)
	{
		item->anim_number = ANIM_BACKSTEPD_RIGHT;
		item->frame_number = anims[ANIM_BACKSTEPD_RIGHT].frame_base;
	}
	else
	{
		item->anim_number = ANIM_BACKSTEPD_LEFT;
		item->frame_number = anims[ANIM_BACKSTEPD_LEFT].frame_base;
	}
}

void InitialiseRollingBall(short item_number)
{
	ITEM_INFO* item;
	GAME_VECTOR* pos;

	item = &items[item_number];
	pos = (GAME_VECTOR*)game_malloc(sizeof(GAME_VECTOR));
	item->data = pos;
	pos->x = item->pos.x_pos;
	pos->y = item->pos.y_pos;
	pos->z = item->pos.z_pos;
	pos->room_number = item->room_number;
}

void RollingBallControl(short item_number)
{
	ITEM_INFO* item;
	GAME_VECTOR* pos;
	FLOOR_INFO* floor;
	long oldx, oldy, oldz, dx, dz, dist, x, y, z, h, c;
	short* bounds;
	short room_number, fallspeed;

	item = &items[item_number];

	if (item->status == ITEM_ACTIVE)
	{
		if (item->goal_anim_state == 2)
		{
			AnimateItem(item);
			return;
		}

		room_number = item->room_number;
		floor = GetFloor(item->pos.x_pos, item->pos.y_pos, item->pos.z_pos, &room_number);
		oldy = GetHeight(floor, item->pos.x_pos, item->pos.y_pos, item->pos.z_pos);

		if (item->pos.y_pos >= oldy)
		{
			if (!item->current_anim_state)
				item->goal_anim_state = 1;
		}
		else if (!item->gravity_status)
		{
			item->fallspeed = -10;
			item->gravity_status = 1;
		}

		oldx = item->pos.x_pos;
		oldz = item->pos.z_pos;
		AnimateItem(item);
		room_number = item->room_number;
		floor = GetFloor(item->pos.x_pos, item->pos.y_pos, item->pos.z_pos, &room_number);
		item->floor = GetHeight(floor, item->pos.x_pos, item->pos.y_pos, item->pos.z_pos);

		if (item->room_number != room_number)
		{
			if (item->trigger_flags & 0x20 && room[room_number].flags & ROOM_UNDERWATER && !(room[item->room_number].flags & ROOM_UNDERWATER))
			{
				fallspeed = item->fallspeed;
				item->fallspeed = 400;
				Splash(item);
				item->fallspeed = fallspeed;
			}

			ItemNewRoom(item_number, room_number);
		}

		TestTriggers(trigger_index, 1, 0);

		if (item->pos.y_pos >= item->floor - 256)
		{
			item->gravity_status = 0;
			item->fallspeed = 0;
			item->pos.y_pos = item->floor;

			if (!(item->trigger_flags & 0x1))
			{
				dx = camera.mike_pos.x - item->pos.x_pos;
				dz = camera.mike_pos.z - item->pos.z_pos;

				if (ABS(dx) < 32000 && ABS(dz) < 32000)
				{
					dist = phd_sqrt(SQUARE(dx) + SQUARE(dz));

					if (dist < 10240)
						camera.bounce = 40 * (dist - 10240) / 10240;
				}
			}
		}

		bounds = GetBoundsAccurate(item);
		dist = bounds[5];
		y = bounds[3] - bounds[2];
		x = item->pos.x_pos + ((dist * phd_sin(item->pos.y_rot)) >> W2V_SHIFT);
		z = item->pos.z_pos + ((dist * phd_cos(item->pos.y_rot)) >> W2V_SHIFT);
		floor = GetFloor(x, item->pos.y_pos, z, &room_number);
		h = GetHeight(floor, x, item->pos.y_pos, z);
		room_number = item->room_number;
		floor = GetFloor(x, item->pos.y_pos - y, z, &room_number);
		c = GetCeiling(floor, x, item->pos.y_pos - y, z);

		if (h < item->pos.y_pos || c > item->pos.y_pos - y)
		{
			item->pos.x_pos = oldx;
			item->pos.z_pos = oldz;

			if (item->pos.y_pos < item->floor)
				return;

			item->goal_anim_state = 2;
			item->pos.y_pos = oldy;
			item->fallspeed = 0;
			item->speed = 0;
			item->touch_bits = 0;
		}
	}
	else if (item->status == ITEM_DEACTIVATED && !TriggerActive(item))
	{
		item->status = ITEM_INACTIVE;
		pos = (GAME_VECTOR*)item->data;
		item->pos.x_pos = pos->x;
		item->pos.y_pos = pos->y;
		item->pos.z_pos = pos->z;

		if (item->room_number != pos->room_number)
			ItemNewRoom(item_number, pos->room_number);

		item->anim_number = objects[item->object_number].anim_index;
		item->frame_number = anims[item->anim_number].frame_base;
		item->current_anim_state = anims[item->anim_number].current_anim_state;
		item->goal_anim_state = item->current_anim_state;
		RemoveActiveItem(item_number);
	}
}

void RollingBallCollision(short item_number, ITEM_INFO* l, COLL_INFO* coll)
{
	ITEM_INFO* item;
	long x, y, z, d;
	short ang;

	item = &items[item_number];

	if (item->status == ITEM_ACTIVE)
	{
		if (!TestBoundsCollide(item, l, coll->radius) || !TestCollision(item, l))
			return;

		if (l->gravity_status)
		{
			if (coll->enable_baddie_push)
				ItemPushLara(item, l, coll, coll->enable_spaz, 1);

			l->hit_points -= 100;
			x = l->pos.x_pos - item->pos.x_pos;
			y = l->pos.y_pos - item->pos.y_pos + 162;
			z = l->pos.z_pos - item->pos.z_pos;
			d = phd_sqrt(SQUARE(x) + SQUARE(y) + SQUARE(z));

			if (d < 512)
				d = 512;

			x = item->pos.x_pos + 512 * x / d;
			y = item->pos.y_pos + 512 * y / d - 512;
			z = item->pos.z_pos + 512 * z / d;
			DoBloodSplat(x, y, z, item->speed, item->pos.y_rot, item->room_number);
		}
		else
		{
			l->hit_status = 1;

			if (l->hit_points <= 0)
				return;

			l->hit_points = -1;
			l->pos.x_rot = 0;
			l->pos.y_rot = item->pos.y_rot;
			l->pos.z_rot = 0;
			l->anim_number = ANIM_RBALL_DEATH;
			l->frame_number = anims[ANIM_RBALL_DEATH].frame_base;
			l->current_anim_state = AS_SPECIAL;
			l->goal_anim_state = AS_SPECIAL;
			camera.flags = 1;
			camera.target_angle = 30940;
			camera.target_elevation = -4550;

			for (int i = 0; i < 15; i++)
			{
				x = l->pos.x_pos + (GetRandomControl() - 0x4000) / 256;
				y = l->pos.y_pos - GetRandomControl() / 64;
				z = l->pos.z_pos + (GetRandomControl() - 0x4000) / 256;
				ang = (short)(item->pos.y_rot + (GetRandomControl() - 0x4000) / 8);
				DoBloodSplat(x, y, z, 2 * item->speed, ang, item->room_number);
			}
		}
	}
	else if (item->status != ITEM_INVISIBLE)
		ObjectCollision(item_number, l, coll);
}

void setup_rollingballs(void)
{
	OBJECT_INFO* obj;

	for (int i = 0; i < 16; i++)
	{
		if (rollingball_object[i] != -1)
		{
			obj = &objects[rollingball_object[i]];
			obj->initialise = InitialiseRollingBall;
			obj->control = RollingBallControl;
			obj->collision = RollingBallCollision;
			obj->save_position = 1;
			obj->save_flags = 1;
			obj->save_anim = 1;
		}
	}
}

void AdjustForcedFixedCamera(PHD_VECTOR* pos, short room_number)
{
	FLOOR_INFO* floor;
	GAME_VECTOR start;
	long height, ceiling;
	short r;

	r = ForcedFixedCamera.room_number;
	floor = GetFloor(ForcedFixedCamera.x, ForcedFixedCamera.y, ForcedFixedCamera.z, &r);
	height = GetHeight(floor, ForcedFixedCamera.x, ForcedFixedCamera.y, ForcedFixedCamera.z);
	ceiling = GetCeiling(floor, ForcedFixedCamera.x, ForcedFixedCamera.y, ForcedFixedCamera.z);

	if (ForcedFixedCamera.y < ceiling || ForcedFixedCamera.y > height)
	{
		start.x = pos->x;
		start.y = pos->y;
		start.z = pos->z;
		start.room_number = room_number;
		mgLOS(&start, &ForcedFixedCamera, ABS(ForcedFixedCamera.y - start.y));
	}
}

void fire_crossbow_grenade(void)
{
	PHD_VECTOR pos;
	PHD_VECTOR pos2;
	short *ammo, *grenade_ammo, backup_ammo, old_next_item_active;
	long index;
	char grenade_current_type, crossbow_current_type;

	grenade_current_type = lara.grenade_type_carried & (W_AMMO1 | W_AMMO2 | W_AMMO3);

	if (grenade_current_type & W_AMMO1)
		index = 0;
	else if (grenade_current_type & W_AMMO2)
		index = 1;
	else
		index = 2;

	if (crossbow_grenade_ammo[index])
	{
		if (crossbow_grenade_ammo_type[index] != grenade_current_type)
		{
			grenade_ammo = get_current_ammo_pointer(WEAPON_GRENADE);

			if (!*grenade_ammo)
				return;

			lara.grenade_type_carried &= ~(W_AMMO1 | W_AMMO2 | W_AMMO3);
			lara.grenade_type_carried |= crossbow_grenade_ammo_type[index];
			ammo = get_current_ammo_pointer(WEAPON_GRENADE);
			backup_ammo = *ammo;
			*ammo = -1;
		}

		old_next_item_active = next_item_active;
		FireGrenade();

		if (crossbow_grenade_ammo_type[index] != grenade_current_type)
		{
			*ammo = backup_ammo;
			lara.grenade_type_carried &= ~(W_AMMO1 | W_AMMO2 | W_AMMO3);
			lara.grenade_type_carried |= grenade_current_type;

			if (next_item_active != old_next_item_active && *grenade_ammo != -1)
				(*grenade_ammo)--;
		}

		if (next_item_active != old_next_item_active && crossbow_grenade_ammo_slot[index] != GRENADE)
			items[next_item_active].object_number = crossbow_grenade_ammo_slot[index];
	}
	else
	{
		grenade_ammo = get_current_ammo_pointer(WEAPON_GRENADE);

		if (!*grenade_ammo)
			return;

		crossbow_current_type = lara.crossbow_type_carried & (W_AMMO1 | W_AMMO2 | W_AMMO3);
		lara.crossbow_type_carried &= ~(W_AMMO1 | W_AMMO2 | W_AMMO3);
		lara.crossbow_type_carried |= crossbow_grenade_ammo_type[index];
		ammo = get_current_ammo_pointer(WEAPON_CROSSBOW);
		backup_ammo = *ammo;
		*ammo = -1;
		old_next_item_active = next_item_active;
		in_fire_crossbow_grenade = 1;
		FireCrossbow(0);
		in_fire_crossbow_grenade = 0;
		*ammo = backup_ammo;
		lara.crossbow_type_carried &= ~(W_AMMO1 | W_AMMO2 | W_AMMO3);
		lara.crossbow_type_carried |= crossbow_current_type;

		if (next_item_active != old_next_item_active)
		{
			if (*grenade_ammo != -1)
				(*grenade_ammo)--;

			if (crossbow_grenade_ammo_slot[index] != CROSSBOW_BOLT)
				items[next_item_active].object_number = crossbow_grenade_ammo_slot[index];
		}
	}

	if (next_item_active != old_next_item_active)
	{
		if (crossbow_grenade_ammo_sound[index] != -1)
			SoundEffect(crossbow_grenade_ammo_sound[index], 0, SFX_DEFAULT);

		if (crossbow_grenade_ammo_smoke[index])
		{
			SmokeCountL = 32;
			SmokeWeapon = WEAPON_GRENADE;
			pos.x = 0;
			pos.y = 276;
			pos.z = 80;
			GetLaraJointPos(&pos, LMX_HAND_R);
			pos2.x = 0;
			pos2.y = 1204;
			pos2.z = 80;
			GetLaraJointPos(&pos2, LMX_HAND_R);

			for (int i = 0; i < 5; i++)
				TriggerGunSmoke(pos.x, pos.y, pos.z, pos2.x - pos.x, pos2.y - pos.y, pos2.z - pos.z, 1, SmokeWeapon, SmokeCountL);
		}
	}
}

void setup_crossbow_grenade_ammo(void)
{
	OBJECT_INFO* obj;

	for (int i = 0; i < 3; i++)
	{
		if (crossbow_grenade_ammo_slot[i] != CROSSBOW_BOLT && crossbow_grenade_ammo_slot[i] != GRENADE)
		{
			obj = &objects[crossbow_grenade_ammo_slot[i]];
			obj->initialise = 0;
			obj->control = crossbow_grenade_ammo[i] ? ControlGrenade : ControlCrossbow;
			obj->collision = 0;
			obj->draw_routine = DrawWeaponMissile;
			obj->using_drawanimating_item = 0;
		}
	}
}

long fire_crossbow_sound(long sfx, PHD_3DPOS* pos, long flags)
{
	if (in_fire_crossbow_grenade)
		return 0;
	return SoundEffect(sfx, pos, flags);
}

long get_weapon_animation(ITEM_INFO* item)
{
	if (item->object_number == GRENADE_GUN_ANIM && crossbow_grenade_animations)
		return objects[GRENADE_GUN_ANIM].anim_index;
	return objects[item->object_number].anim_index + 1;
}

void do_lara_meshswap(long index)
{
	if (lara_meshswap_target[index] != -1 && lara_meshswap_source_slot[index] != -1 && lara_meshswap_source[index] != -1)
		lara.mesh_ptrs[lara_meshswap_target[index]] = meshes[objects[lara_meshswap_source_slot[index]].mesh_index + 2 * lara_meshswap_source[index]];
}

void revert_lara_meshswap(long target)
{
	lara.mesh_ptrs[target] = meshes[objects[LARA].mesh_index + 2 * target];
}

void exit_game(void)
{
	Gameflow->DemoDisc = 1;
	reset_flag = 1;
	gfLoadRoom = 255;
}

void MineCartInitialise(short item_number)
{
	ITEM_INFO* item;

	item = &items[item_number];
	item->data = game_malloc(sizeof(CARTINFO));
}

long GetInMineCart(ITEM_INFO* item, ITEM_INFO* l, COLL_INFO* coll)
{
	FLOOR_INFO* floor;
	long dx, dz, dist, h;
	short room_number, ang;

	if (!(input & IN_ACTION) || lara.gun_status != LG_NO_ARMS || l->gravity_status ||
		!TestBoundsCollide(item, l, coll->radius) || !TestCollision(item, l))
		return 0;

	dx = l->pos.x_pos - item->pos.x_pos;
	dz = l->pos.z_pos - item->pos.z_pos;
	dist = SQUARE(dx) + SQUARE(dz);

	if (dist > 200000)
		return 0;

	room_number = item->room_number;
	floor = GetFloor(item->pos.x_pos, item->pos.y_pos, item->pos.z_pos, &room_number);
	h = GetHeight(floor, item->pos.x_pos, item->pos.y_pos, item->pos.z_pos);

	if (h < -32000)
		return 0;

	ang = (short)(phd_atan(item->pos.z_pos - lara_item->pos.z_pos, item->pos.x_pos - lara_item->pos.x_pos) - item->pos.y_rot);

	if (ang > -24586 && ang < -8206)
	{
		ang = lara_item->pos.y_rot - item->pos.y_rot;

		if (ang > -24586 && ang < -8206)
			return 1;
	}
	else if (ang > 8190 && ang < 24570)
	{
		ang = lara_item->pos.y_rot - item->pos.y_rot;

		if (ang > 8190 && ang < 24570)
			return 1;
	}

	return 0;
}

void MineCartCollision(short item_number, ITEM_INFO* l, COLL_INFO* coll)
{
	ITEM_INFO* item;
	CARTINFO* cart;
	short ang;

	if (l->hit_points < 0 || lara.vehicle != NO_ITEM)
		return;

	item = &items[item_number];

	if (!GetInMineCart(item, l, coll))
		return ObjectCollision(item_number, l, coll);

	lara.vehicle = item_number;

	if (lara.gun_type == WEAPON_FLARE)
	{
		CreateFlare(FLARE_ITEM, 0);
		undraw_flare_meshes();
		lara.flare_control_left = 0;
		lara.gun_type = WEAPON_NONE;
		lara.request_gun_type = WEAPON_NONE;
	}

	lara.gun_status = LG_HANDS_BUSY;
	ang = (short)(mGetAngle(item->pos.x_pos, item->pos.z_pos, l->pos.x_pos, l->pos.z_pos) - item->pos.y_rot);

	if (ang > -0x1FFE && ang < 0x5FFA)
		l->anim_number = objects[mine_cart_slot_vehicle_anim].anim_index + 46;
	else
		l->anim_number = objects[mine_cart_slot_vehicle_anim].anim_index;

	l->frame_number = anims[l->anim_number].frame_base;
	l->current_anim_state = 0;
	l->goal_anim_state = 0;
	l->pos.x_pos = item->pos.x_pos;
	l->pos.y_pos = item->pos.y_pos;
	l->pos.z_pos = item->pos.z_pos;
	l->pos.x_rot = item->pos.x_rot;
	l->pos.y_rot = item->pos.y_rot;
	l->pos.z_rot = item->pos.z_rot;

	cart = (CARTINFO*)item->data;
	cart->Flags = 0;
	cart->Speed = 0;
	cart->YVel = 0;
	cart->Gradient = 0;

	item->flags |= IFL_TRIGGERED;
}

long MineCartCanGetOut(long lr)
{
	ITEM_INFO* item;
	FLOOR_INFO* floor;
	long x, y, z, h, c;
	short ang, room_number;

	item = &items[lara.vehicle];

	if (lr < 0)
		ang = item->pos.y_rot + 0x4000;
	else
		ang = item->pos.y_rot - 0x4000;

	x = item->pos.x_pos - ((330 * phd_sin(ang)) >> W2V_SHIFT);
	y = item->pos.y_pos;
	z = item->pos.z_pos - ((330 * phd_cos(ang)) >> W2V_SHIFT);
	room_number = item->room_number;
	floor = GetFloor(x, y, z, &room_number);
	h = GetHeight(floor, x, y, z);

	if (height_type != BIG_SLOPE && height_type != DIAGONAL && h != NO_HEIGHT && ABS(h - item->pos.y_pos) <= 512)
	{
		c = GetCeiling(floor, x, y, z);

		if (c - item->pos.y_pos <= -762 && h - c >= 762)
			return 1;
	}

	return 0;
}

short CollectBaddieCollisionRoomies(short room_number)
{
	short* doors;
	long flag;
	short room_count;

	room_count = 1;
	baddie_collision_roomies[0] = room_number;
	doors = room[room_number].door;

	if (doors)
	{
		for (int i = *doors++; i > 0; i--)
		{
			flag = 0;

			for (int j = 0; j < room_count; j++)
			{
				if (baddie_collision_roomies[j] == *doors)
				{
					flag = 1;
					break;
				}
			}

			if (!flag)
			{
				baddie_collision_roomies[room_count] = *doors;
				room_count++;
			}

			doors += 16;
		}
	}

	return room_count;
}

void CartToBaddieCollision(ITEM_INFO* cart)
{
	ITEM_INFO* item;
	OBJECT_INFO* obj;
	long dx, dy, dz, flag;
	short room_count, item_number, frame;

	room_count = CollectBaddieCollisionRoomies(cart->room_number);

	for (int i = 0; i < room_count; i++)
	{
		for (item_number = room[baddie_collision_roomies[i]].item_number; item_number != NO_ITEM; item_number = item->next_item)
		{
			item = &items[item_number];

			if (!item->collidable || item->status == ITEM_INVISIBLE)
				continue;

			obj = &objects[item->object_number];

			if (!obj->collision)
				continue;

			if (!obj->intelligent && item->object_number != mine_cart_slot_animating2)
			{
				flag = 0;

				for (int j = 0; j < 16; j++)
				{
					if (item->object_number == mine_cart_slot_rollingball[j])
					{
						flag = j + 1;
						break;
					}
				}
			}

			if (obj->intelligent || item->object_number == mine_cart_slot_animating2 || flag)
			{
				dx = cart->pos.x_pos - item->pos.x_pos;
				dy = cart->pos.y_pos - item->pos.y_pos;
				dz = cart->pos.z_pos - item->pos.z_pos;

				if (dx > -2048 && dx < 2048 && dz > -2048 && dz < 2048 && dy > -2048 && dy < 2048 && TestBoundsCollide(item, cart, 256))
				{
					if (item->object_number == mine_cart_slot_animating2)
					{
						if (item->status == ITEM_INACTIVE && !(item->flags & IFL_INVISIBLE) && lara_item->current_anim_state == 18 &&
							lara_item->anim_number == objects[mine_cart_slot_vehicle_anim].anim_index + 6)
						{
							frame = lara_item->frame_number - anims[lara_item->anim_number].frame_base;

							if (frame >= 12 && frame <= 22)
							{
								item->goal_anim_state = !item->current_anim_state;
								AddActiveItem(item_number);
								item->status = ITEM_ACTIVE;
								AnimateItem(item);
							}
						}

						continue;
					}

					if (obj->intelligent)
					{
						DoLotsOfBlood(item->pos.x_pos, cart->pos.y_pos - 256, item->pos.z_pos, cart->speed, cart->pos.y_rot, item->room_number, 3);
						item->hit_points = 0;
						continue;
					}

					if (lara_item->hit_points > 0)
					{
						DoLotsOfBlood(lara_item->pos.x_pos, lara_item->pos.y_pos - 512, lara_item->pos.z_pos,
							(GetRandomControl() & 3) + 8, lara_item->pos.y_rot, lara_item->room_number, 5);
						lara_item->hit_points -= mine_cart_health[flag - 1];
						lara_item->hit_status = 1;
					}
				}
			}
		}
	}
}

short MineCartGetCollision(ITEM_INFO* item, short ang, long dist, short* c)
{
	FLOOR_INFO* floor;
	long x, y, z, h;
	short room_number;

	x = item->pos.x_pos + ((dist * phd_sin(ang)) >> W2V_SHIFT);
	y = item->pos.y_pos - 762;
	z = item->pos.z_pos + ((dist * phd_cos(ang)) >> W2V_SHIFT);
	room_number = item->room_number;
	floor = GetFloor(x, y, z, &room_number);
	h = GetHeight(floor, x, y, z);
	*c = (short)GetCeiling(floor, x, y, z);

	if (h != NO_HEIGHT)
		h -= item->pos.y_pos;

	return (short)h;
}

long MineCartTestHeight(ITEM_INFO* item, long x, long z)
{
	PHD_VECTOR pos;
	FLOOR_INFO* floor;
	long s, c, h;
	short room_number;

	s = phd_sin(item->pos.y_rot);
	c = phd_cos(item->pos.y_rot);
	pos.x = item->pos.x_pos + ((x * c + z * s) >> W2V_SHIFT);
	pos.y = (item->pos.y_pos + ((x * phd_sin(item->pos.z_rot)) >> W2V_SHIFT)) - ((z * phd_sin(item->pos.x_rot)) >> W2V_SHIFT);
	pos.z = item->pos.z_pos + ((z * c - x * s) >> W2V_SHIFT);
	room_number = item->room_number;
	floor = GetFloor(pos.x, pos.y, pos.z, &room_number);
	h = GetHeight(floor, pos.x, pos.y, pos.z);
	return h;
}

void MineCartDoUserInput(ITEM_INFO* item, ITEM_INFO* l, CARTINFO* cart)
{
	ITEM_INFO* item2;
	OBJECT_INFO* obj;
	ITEM_INFO** itemlist;
	MESH_INFO** meshlist;
	PHD_VECTOR pos;
	long damage, collided, flag;
	short h, c;

	switch (l->current_anim_state)
	{
	case 0:

		if (l->anim_number == objects[mine_cart_slot_vehicle_anim].anim_index + 5 && l->frame_number == anims[l->anim_number].frame_base + 20 &&
			!cart->Flags)
		{
			lara.mesh_ptrs[LM_RHAND] = meshes[objects[mine_cart_slot_vehicle_anim].mesh_index + 2 * LM_RHAND];
			cart->Flags |= 1;
		}

		break;

	case 1:

		if (l->anim_number == objects[mine_cart_slot_vehicle_anim].anim_index + 7)
		{
			if (l->frame_number == anims[objects[mine_cart_slot_vehicle_anim].anim_index + 7].frame_base + 20 && cart->Flags & 1)
			{
				lara.mesh_ptrs[LM_RHAND] = meshes[LARA + 2 * LM_RHAND];
				cart->Flags &= ~1;
			}

			if (cart->Flags & 8)
				l->goal_anim_state = 3;
			else
				l->goal_anim_state = 2;
		}

		break;

	case 2:

		if (l->anim_number == objects[mine_cart_slot_vehicle_anim].anim_index + 1 && l->frame_number == anims[l->anim_number].frame_end)
		{
			pos.x = 0;
			pos.y = 640;
			pos.z = 0;
			GetLaraJointPos(&pos, LMX_HIPS);
			l->pos.x_pos = pos.x;
			l->pos.y_pos = pos.y;
			l->pos.z_pos = pos.z;
			l->pos.x_rot = 0;
			l->pos.y_rot = item->pos.y_rot + 0x4000;
			l->pos.z_rot = 0;
			l->anim_number = 11;
			l->frame_number = anims[l->anim_number].frame_base;
			l->current_anim_state = 2;
			l->goal_anim_state = 2;
			lara.vehicle = NO_ITEM;
			lara.gun_status = LG_NO_ARMS;
		}

		break;

	case 3:

		if (l->anim_number == objects[mine_cart_slot_vehicle_anim].anim_index + 47 && l->frame_number == anims[l->anim_number].frame_end)
		{
			pos.x = 0;
			pos.y = 640;
			pos.z = 0;
			GetLaraJointPos(&pos, LMX_HIPS);
			l->pos.x_pos = pos.x;
			l->pos.y_pos = pos.y;
			l->pos.z_pos = pos.z;
			l->pos.x_rot = 0;
			l->pos.y_rot = item->pos.y_rot - 0x4000;
			l->pos.z_rot = 0;
			l->anim_number = 11;
			l->frame_number = anims[l->anim_number].frame_base;
			l->current_anim_state = 2;
			l->goal_anim_state = 2;
			lara.vehicle = NO_ITEM;
			lara.gun_status = LG_NO_ARMS;
		}

		break;

	case 4:

		if (!(cart->Flags & 0x10))
		{
			if (mine_cart_sfx_mine_cart_clunk_start != -1)
				SoundEffect(mine_cart_sfx_mine_cart_clunk_start, &item->pos, SFX_ALWAYS);

			cart->StopDelay = 1;
			cart->Flags |= 0x10;
		}

		if (input & (IN_ROLL | IN_JUMP) && cart->Flags & 0x20)
		{
			if (input & IN_LEFT && MineCartCanGetOut(-1))
			{
				l->goal_anim_state = 1;
				cart->Flags &= ~8;
			}
			else if (input & IN_RIGHT && MineCartCanGetOut(1))
			{
				l->goal_anim_state = 1;
				cart->Flags |= 8;
			}
		}

		if (input & IN_DUCK)
			l->goal_anim_state = 5;
		else if (cart->Speed > 32)
			l->goal_anim_state = 6;

		break;

	case 5:

		if (input & IN_ACTION)
			l->goal_anim_state = 18;
		else if (input & IN_JUMP)
			l->goal_anim_state = 11;
		else if (!(input & IN_DUCK))
			l->goal_anim_state = 4;

		break;

	case 6:

		if (input & IN_ACTION)
			l->goal_anim_state = 18;
		else if (input & IN_DUCK)
			l->goal_anim_state = 5;
		else if (input & IN_JUMP)
			l->goal_anim_state = 11;
		else if (cart->Speed == 32 || cart->Flags & 0x20)
			l->goal_anim_state = 4;
		else if (cart->Gradient < -128)
			l->goal_anim_state = 12;
		else if (cart->Gradient > 128)
			l->goal_anim_state = 13;
		else if (input & IN_LEFT)
			l->goal_anim_state = 9;
		else if (input & IN_RIGHT)
			l->goal_anim_state = 7;

		break;

	case 7:

		if (input & IN_ACTION)
			l->goal_anim_state = 18;
		else if (input & IN_DUCK)
			l->goal_anim_state = 5;
		else if (input & IN_JUMP)
			l->goal_anim_state = 11;

		if (!(input & IN_RIGHT))
			l->goal_anim_state = 6;

		break;

	case 9:

		if (input & IN_ACTION)
			l->goal_anim_state = 18;
		else if (input & IN_DUCK)
			l->goal_anim_state = 5;
		else if (input & IN_JUMP)
			l->goal_anim_state = 11;

		if (!(input & IN_LEFT))
			l->goal_anim_state = 6;

		break;

	case 11:
		l->goal_anim_state = 19;
		break;

	case 12:

		if (input & IN_ACTION)
			l->goal_anim_state = 18;
		else if (input & IN_DUCK)
			l->goal_anim_state = 5;
		else if (input & IN_JUMP)
			l->goal_anim_state = 11;
		else if (cart->Gradient > -128)
			l->goal_anim_state = 6;

		break;

	case 13:

		if (input & IN_ACTION)
			l->goal_anim_state = 18;
		else if (input & IN_DUCK)
			l->goal_anim_state = 5;
		else if (input & IN_JUMP)
			l->goal_anim_state = 11;
		else if (cart->Gradient < 128)
			l->goal_anim_state = 6;

		break;

	case 14:
		camera.target_elevation = -8190;
		camera.target_distance = 2048;
		h = MineCartGetCollision(item, item->pos.y_rot, 512, &c);

		if (h > -256 && h < 256)
		{
			if (mine_cart_sfx_quad_front_impact != -1 && !(wibble & 7))
				SoundEffect(mine_cart_sfx_quad_front_impact, &item->pos, SFX_ALWAYS);

			item->pos.x_pos += 128 * phd_sin(item->pos.y_rot) >> W2V_SHIFT;
			item->pos.z_pos += 128 * phd_cos(item->pos.y_rot) >> W2V_SHIFT;
		}
		else if (l->anim_number == objects[mine_cart_slot_vehicle_anim].anim_index + 30)
		{
			cart->Flags |= 0x40;
			l->hit_points = -1;
		}

		break;

	case 16:
		camera.target_elevation = -4550;
		camera.target_distance = 4096;
		break;

	case 18:
		l->goal_anim_state = 6;
		break;

	case 19:

		if (input & IN_DUCK)
		{
			l->goal_anim_state = 5;

			if (mine_cart_sfx_mine_cart_sreech_brake != -1)
				StopSoundEffect(mine_cart_sfx_mine_cart_sreech_brake);
		}
		else if (!(input & IN_JUMP) || cart->Flags & 0x20)
		{
			l->goal_anim_state = 6;

			if (mine_cart_sfx_mine_cart_sreech_brake != -1)
				StopSoundEffect(mine_cart_sfx_mine_cart_sreech_brake);
		}
		else
		{
			cart->Speed -= 1536;

			if (mine_cart_sfx_mine_cart_sreech_brake != -1)
				SoundEffect(mine_cart_sfx_mine_cart_sreech_brake, &l->pos, SFX_ALWAYS);
		}

		break;
	}

	if (lara.vehicle != NO_ITEM && !(cart->Flags & 0x40))
	{
		AnimateItem(l);
		item->anim_number = l->anim_number + objects[mine_cart_slot_minecart].anim_index - objects[mine_cart_slot_vehicle_anim].anim_index;
		item->frame_number = l->frame_number + anims[item->anim_number].frame_base - anims[l->anim_number].frame_base;
	}

	if (l->current_anim_state == 14 || l->current_anim_state == 16)
		return;

	if (l->current_anim_state != 17 && l->hit_points <= 0)
	{
		l->anim_number = objects[mine_cart_slot_vehicle_anim].anim_index + 49;
		l->frame_number = anims[l->anim_number].frame_base;
		l->current_anim_state = 17;
		l->goal_anim_state = 17;
	}

	if (item->pos.z_rot > 4096 || item->pos.z_rot < -4096)
	{
		l->anim_number = objects[mine_cart_slot_vehicle_anim].anim_index + 31;
		l->frame_number = anims[l->anim_number].frame_base;
		l->current_anim_state = 14;
		l->goal_anim_state = 14;
		cart->Flags = cart->Flags & 0x4F | 0xA0;
		item->speed = 0;
		cart->Speed = 0;
		return;
	}

	h = MineCartGetCollision(item, item->pos.y_rot, 512, &c);

	if (h < -512)
	{
		l->anim_number = objects[mine_cart_slot_vehicle_anim].anim_index + 23;
		l->frame_number = anims[l->anim_number].frame_base;
		l->current_anim_state = 16;
		l->goal_anim_state = 16;
		cart->Flags = cart->Flags & ~0xB0 | 0xA0;
		item->speed = 0;
		cart->Speed = 0;
		l->hit_points = -1;
		return;
	}

	if (l->current_anim_state != 5 && l->current_anim_state != 17)
	{
		itemlist = (ITEM_INFO**)&tsv_buffer[0];
		meshlist = (MESH_INFO**)&tsv_buffer[1024];
		item->pos.y_pos -= 384;
		GetCollidedObjects(item, 256, 1, itemlist, meshlist, 0);
		item->pos.y_pos += 384;
		collided = meshlist[0] ? 1 : 0;

		if (!collided)
		{
			for (int i = 0; itemlist[i]; i++)
			{
				item2 = itemlist[i];

				obj = &objects[item2->object_number];

				if (obj->draw_routine && !obj->intelligent && obj->collision != PickupCollision && item2->object_number != mine_cart_slot_animating2)
				{
					flag = 0;

					for (int j = 0; j < 16; j++)
					{
						if (item2->object_number == mine_cart_slot_rollingball[j])
						{
							flag = 1;
							break;
						}
					}

					if (!flag)
					{
						collided = 1;
						break;
					}
				}
			}
		}

		if (collided)
		{
			l->anim_number = objects[mine_cart_slot_vehicle_anim].anim_index + 34;
			l->frame_number = anims[l->anim_number].frame_base;
			l->current_anim_state = 17;
			l->goal_anim_state = 17;
			DoLotsOfBlood(l->pos.x_pos, l->pos.y_pos - 768, l->pos.z_pos, item->speed, item->pos.y_rot, l->room_number, 3);

			damage = 25 * ((ushort)cart->Speed >> 11);

			if (damage < 20)
				damage = 20;

			l->hit_points -= (short)damage;
			return;
		}
	}

	if (h > 576 && !cart->YVel)
		cart->YVel = -1024;

	CartToBaddieCollision(item);
}

void MoveCart(ITEM_INFO* item, ITEM_INFO* l, CARTINFO* cart)
{
	ITEM_INFO* item2;
	long x, z, dx, dy, dz;
	ushort rot, quad, deg;
	short ang, item_number;
	uchar MineL, MineR;

	MineL = 0;
	MineR = 0;

	for (item_number = room[item->room_number].item_number; item_number != NO_ITEM; item_number = item2->next_item)
	{
		item2 = &items[item_number];

		if (item2->object_number == mine_cart_slot_mapper && item2->trigger_flags == item->trigger_flags)
		{
			dx = item2->pos.x_pos - item->pos.x_pos;
			dy = item2->pos.y_pos - item->pos.y_pos;
			dz = item2->pos.z_pos - item->pos.z_pos;

			if (ABS(dx) < 512 && ABS(dy) < 512 && ABS(dz) < 512)
			{
				switch ((((ushort)(item2->pos.y_rot + 0x2000) >> W2V_SHIFT) - ((ushort)(item->pos.y_rot + 0x2000) >> W2V_SHIFT)) & 3)
				{
				case 0:
					MineL = 1;
					MineR = 1;
					break;

				case 1:
					MineL = 1;
					MineR = 0;
					break;

				case 3:
					MineL = 0;
					MineR = 1;
					break;
				}

				break;
			}
		}
	}

	dx = item->pos.x_pos & 0x380;
	dz = item->pos.z_pos & 0x380;

	if ((dx == 384 || dx == 512) && (dz == 384 || dz == 512))
	{
		if (MineL && MineR && !cart->StopDelay && cart->Speed < 0xF000)
		{
			cart->Flags |= 0x30;
			item->speed = 0;
			cart->Speed = 0;
			return;
		}
	}
	else if (cart->StopDelay)
		cart->StopDelay = 0;


	if ((MineL || MineR) && !(MineL && MineR) && cart->Speed < 0xF000 && !(cart->Flags & 6))
	{
		rot = (ushort)((MineL << 2) | ((ushort)item->pos.y_rot >> 14));

		switch (rot)
		{
		case 0:
			cart->TurnX = (item->pos.x_pos + 4096) & ~WALL_MASK;
			cart->TurnZ = item->pos.z_pos & ~WALL_MASK;
			break;

		case 1:
			cart->TurnX = item->pos.x_pos & ~WALL_MASK;
			cart->TurnZ = (item->pos.z_pos - 4096) | WALL_MASK;
			break;

		case 2:
			cart->TurnX = (item->pos.x_pos - 4096) | WALL_MASK;
			cart->TurnZ = item->pos.z_pos | WALL_MASK;
			break;

		case 3:
			cart->TurnX = item->pos.x_pos | WALL_MASK;
			cart->TurnZ = (item->pos.z_pos + 4096) & ~WALL_MASK;
			break;

		case 4:
			cart->TurnX = (item->pos.x_pos - 4096) | WALL_MASK;
			cart->TurnZ = item->pos.z_pos & ~WALL_MASK;
			break;

		case 5:
			cart->TurnX = item->pos.x_pos & ~WALL_MASK;
			cart->TurnZ = (item->pos.z_pos + 4096) & ~WALL_MASK;
			break;

		case 6:
			cart->TurnX = (item->pos.x_pos + 4096) & ~WALL_MASK;
			cart->TurnZ = item->pos.z_pos | WALL_MASK;
			break;

		case 7:
			cart->TurnX = item->pos.x_pos | WALL_MASK;
			cart->TurnZ = (item->pos.z_pos - 4096) | WALL_MASK;
			break;
		}

		ang = mGetAngle(item->pos.x_pos, item->pos.z_pos, cart->TurnX, cart->TurnZ) & 0x3FFF;

		if (rot >= 4 && ang)
			ang = 0x4000 - ang;

		cart->TurnRot = item->pos.y_rot;
		cart->TurnLen = ang;
		cart->Flags |= MineL ? 2 : 4;
	}

	if (cart->Speed < 2560)
		cart->Speed = 2560;

	cart->Speed += -4 * cart->Gradient;
	item->speed = (short)(cart->Speed >> 8);

	if (item->speed < 32)
	{
		item->speed = 32;

		if (mine_cart_sfx_mine_cart_track_loop != -1)
			StopSoundEffect(mine_cart_sfx_mine_cart_track_loop);

		if (mine_cart_sfx_mine_cart_pully_loop != -1)
		{
			if (cart->YVel)
				StopSoundEffect(mine_cart_sfx_mine_cart_pully_loop);
			else
				SoundEffect(mine_cart_sfx_mine_cart_pully_loop, &item->pos, SFX_ALWAYS);
		}
	}
	else
	{
		if (mine_cart_sfx_mine_cart_pully_loop != -1)
			StopSoundEffect(mine_cart_sfx_mine_cart_pully_loop);

		if (mine_cart_sfx_mine_cart_track_loop != -1)
		{
			if (cart->YVel)
				StopSoundEffect(mine_cart_sfx_mine_cart_track_loop);
			else
				SoundEffect(mine_cart_sfx_mine_cart_track_loop, &item->pos, (item->speed << 15) + 0x1000000 | SFX_SETPITCH | SFX_ALWAYS);
		}
	}

	if (cart->Flags & 6)
	{
		cart->TurnLen += 3 * item->speed;

		if (cart->TurnLen > 0x3FFC)
		{
			if (cart->Flags & 2)
				item->pos.y_rot = cart->TurnRot - 0x4000;
			else
				item->pos.y_rot = cart->TurnRot + 0x4000;

			cart->Flags &= ~6;
		}
		else
		{
			if (cart->Flags & 2)
				item->pos.y_rot = cart->TurnRot - cart->TurnLen;
			else
				item->pos.y_rot = cart->TurnRot + cart->TurnLen;
		}

		if (cart->Flags & 6)
		{
			quad = (ushort)item->pos.y_rot >> W2V_SHIFT;
			deg = item->pos.y_rot & 0x3FFF;

			switch (quad)
			{
			case 0:
				x = -phd_cos(deg);
				z = phd_sin(deg);
				break;

			case 1:
				x = phd_sin(deg);
				z = phd_cos(deg);
				break;

			case 2:
				x = phd_cos(deg);
				z = -phd_sin(deg);
				break;

			default:
				x = -phd_sin(deg);
				z = -phd_cos(deg);
				break;
			}

			if (cart->Flags & 2)
			{
				x = -x;
				z = -z;
			}

			item->pos.x_pos = cart->TurnX + ((3584 * x) >> W2V_SHIFT);
			item->pos.z_pos = cart->TurnZ + ((3584 * z) >> W2V_SHIFT);
		}
	}
	else
	{
		item->pos.x_pos += (item->speed * phd_sin(item->pos.y_rot)) >> W2V_SHIFT;
		item->pos.z_pos += (item->speed * phd_cos(item->pos.y_rot)) >> W2V_SHIFT;
	}

	cart->MidPos = MineCartTestHeight(item, 0, 0);

	if (!cart->YVel)
	{
		cart->FrontPos = MineCartTestHeight(item, 0, 256);
		cart->Gradient = (short)(cart->MidPos - cart->FrontPos);
		item->pos.y_pos = cart->MidPos;
	}
	else if (item->pos.y_pos > cart->MidPos)
	{
		if (mine_cart_sfx_quad_front_impact != -1 && cart->YVel > 0)
			SoundEffect(mine_cart_sfx_quad_front_impact, &item->pos, SFX_ALWAYS);

		item->pos.y_pos = cart->MidPos;
		cart->YVel = 0;
	}
	else
	{
		cart->YVel += 1025;

		if (cart->YVel > 0x3F00)
			cart->YVel = 0x3F00;

		item->pos.y_pos += cart->YVel >> 8;
	}

	item->pos.x_rot = cart->Gradient << 5;
	ang = item->pos.y_rot & 0x3FFF;

	if (cart->Flags & 6)
	{
		if (cart->Flags & 4)
			item->item_flags[0] = -(item->speed * ang) >> 9;
		else
			item->item_flags[0] = (item->speed * (0x4000 - ang)) >> 9;
	}
	else
		item->item_flags[0] -= item->item_flags[0] >> 3;

	item->pos.z_rot = item->item_flags[0];

	if (mine_cart_alignment)
		item->pos.z_rot += (short)(MineCartTestHeight(item, 128, 0) - MineCartTestHeight(item, -128, 0)) << 5;
}

long MineCartControl(void)
{
	ITEM_INFO* item;
	ITEM_INFO* l;
	CARTINFO* cart;
	FLOOR_INFO* floor;
	short room_number;

	l = lara_item;
	item = &items[lara.vehicle];
	cart = (CARTINFO*)item->data;
	MineCartDoUserInput(item, l, cart);

	if (cart->Flags & 0x10)
		MoveCart(item, l, cart);

	if (lara.vehicle != -1)
	{
		l->pos.x_pos = item->pos.x_pos;
		l->pos.y_pos = item->pos.y_pos;
		l->pos.z_pos = item->pos.z_pos;
		l->pos.x_rot = item->pos.x_rot;
		l->pos.y_rot = item->pos.y_rot;
		l->pos.z_rot = item->pos.z_rot;
	}

	room_number = item->room_number;
	floor = GetFloor(item->pos.x_pos, item->pos.y_pos, item->pos.z_pos, &room_number);
	GetHeight(floor, item->pos.x_pos, item->pos.y_pos, item->pos.z_pos);

	if (room_number != item->room_number)
	{
		ItemNewRoom(lara.vehicle, room_number);
		ItemNewRoom(lara.item_number, room_number);
	}

	TestTriggers(trigger_index, 1, 0);
	TestTriggers(trigger_index, 0, 0);

	if (!(cart->Flags & 0x80))
	{
		camera.target_elevation = -8190;
		camera.target_distance = 2048;
	}

	return lara.vehicle != NO_ITEM;
}

void MineCartMapperInitialise(short item_number)
{
	items[item_number].flags |= IFL_CODEBITS;
}

long IsMineCartAssigned(void)
{
	return mine_cart_slot_minecart != -1 && mine_cart_slot_vehicle_anim != -1 && mine_cart_slot_mapper != -1;
}

long IsInMineCart(void)
{
	return IsMineCartAssigned() && items[lara.vehicle].object_number == mine_cart_slot_minecart;
}

long IsDrivingMineCart(void)
{
	return lara.vehicle != -1 && IsInMineCart();
}

void setup_mine_cart(void)
{
	OBJECT_INFO* obj;

	if (IsMineCartAssigned())
	{
		obj = &objects[mine_cart_slot_minecart];
		obj->initialise = MineCartInitialise;
		obj->collision = MineCartCollision;
		obj->control = 0;
		obj->draw_routine = DrawAnimatingItem;
		obj->using_drawanimating_item = 1;
		obj->save_position = 1;
		obj->save_hitpoints = 0;
		obj->save_flags = 1;
		obj->save_anim = 1;

		obj = &objects[mine_cart_slot_mapper];
		obj->initialise = MineCartMapperInitialise;
		obj->collision = 0;
		obj->control = 0;
		obj->draw_routine = 0;
		obj->using_drawanimating_item = 0;
		obj->save_position = 1;
		obj->save_hitpoints = 0;
		obj->save_flags = 0;
		obj->save_anim = 0;

		if (mine_cart_slot_animating2 != -1)
		{
			obj = &objects[mine_cart_slot_animating2];
			obj->initialise = 0;
			obj->collision = ObjectCollision;
			obj->control = SwitchControl;
			obj->draw_routine = DrawAnimatingItem;
			obj->using_drawanimating_item = 1;
			obj->save_position = 0;
			obj->save_hitpoints = 0;
			obj->save_flags = 1;
			obj->save_anim = 1;
		}
	}
}

void InitialiseQuadBike(short item_number)
{
	ITEM_INFO* item;
	QUADINFO* quad;

	item = &items[item_number];
	quad = (QUADINFO*)game_malloc(sizeof(QUADINFO));
	item->data = quad;
	quad->Velocity = 0;
	quad->skidoo_turn = 0;
	quad->right_fallspeed = 0;
	quad->left_fallspeed = 0;
	quad->momentum_angle = item->pos.y_rot;
	quad->extra_rotation = 0;
	quad->track_mesh = 0;
	quad->pitch = 0;
	quad->Flags = 0;
	quad->FrontRot = 0;
	quad->RearRot = 0;
	quad->Revs = 0;
	quad->EngineRevs = 0;

	for (int i = 0; i < 4; i++)
		quad->joint_rotation[i] = 0;
}

long GetOnQuadBike(short item_number, COLL_INFO* coll)
{
	ITEM_INFO* item;
	FLOOR_INFO* floor;
	long dx, dy, dz, dist, h;
	ushort uang;
	short room_number, ang;

	item = &items[item_number];

	if (!(input & IN_ACTION) || item->flags & IFL_INVISIBLE || lara.gun_status != LG_NO_ARMS || lara_item->gravity_status)
		return 0;

	dx = lara_item->pos.x_pos - item->pos.x_pos;
	dy = ABS(item->pos.y_pos - lara_item->pos.y_pos);
	dz = lara_item->pos.z_pos - item->pos.z_pos;
	dist = SQUARE(dx) + SQUARE(dz);

	if (dy > 256 || dist > 170000)
		return 0;

	room_number = item->room_number;
	floor = GetFloor(item->pos.x_pos, item->pos.y_pos, item->pos.z_pos, &room_number);
	h = GetHeight(floor, item->pos.x_pos, item->pos.y_pos, item->pos.z_pos);

	if (h < -32000)
		return 0;

	ang = (short)phd_atan(item->pos.z_pos - lara_item->pos.z_pos, item->pos.x_pos - lara_item->pos.x_pos) - item->pos.y_rot;
	uang = lara_item->pos.y_rot - item->pos.y_rot;

	if (ang > -0x1FFE && ang < 0x5FFA)
	{
		if (uang <= 0x1FFE || uang >= 0x5FFA)
			return 0;
	}
	else
	{
		if (uang <= 0x9FF6 || uang >= 0xDFF2)
			return 0;
	}

	return 1;
}

void QuadBikeCollision(short item_number, ITEM_INFO* l, COLL_INFO* coll)
{
	ITEM_INFO* item;
	QUADINFO* quad;
	short ang;

	if (l->hit_points < 0 || lara.vehicle != NO_ITEM)
		return;

	if (!GetOnQuadBike(item_number, coll))
		return ObjectCollision(item_number, l, coll);

	lara.vehicle = item_number;

	if (lara.gun_type == WEAPON_FLARE)
	{
		CreateFlare(FLARE_ITEM, 0);
		undraw_flare_meshes();
		lara.flare_control_left = 0;
		lara.gun_type = WEAPON_NONE;
		lara.request_gun_type = WEAPON_NONE;
	}

	lara.gun_status = LG_HANDS_BUSY;
	item = &items[item_number];
	ang = (short)phd_atan(item->pos.z_pos - l->pos.z_pos, item->pos.x_pos - l->pos.x_pos) - item->pos.y_rot;

	if (ang > -0x1FFE && ang < 0x5FFA)
	{
		l->anim_number = objects[quad_bike_slot_vehicle_anim[quad_bike_index[item->object_number]]].anim_index + 23;
		l->current_anim_state = QS_GETONL;
		l->goal_anim_state = QS_GETONL;
	}
	else
	{
		l->anim_number = objects[quad_bike_slot_vehicle_anim[quad_bike_index[item->object_number]]].anim_index + 9;
		l->current_anim_state = QS_GETONR;
		l->goal_anim_state = QS_GETONR;
	}

	l->frame_number = anims[l->anim_number].frame_base;
	l->pos.x_pos = item->pos.x_pos;
	l->pos.y_pos = item->pos.y_pos;
	l->pos.z_pos = item->pos.z_pos;
	l->pos.y_rot = item->pos.y_rot;
	lara.head_y_rot = 0;
	lara.head_x_rot = 0;
	lara.torso_y_rot = 0;
	lara.torso_x_rot = 0;
	lara.hit_direction = -1;
	AnimateItem(l);

	quad = (QUADINFO*)item->data;
	quad->Revs = 0;

	item->flags |= IFL_TRIGGERED;
}

void QuadbikeExplode(ITEM_INFO* item)
{
	if (room[item->room_number].flags & ROOM_UNDERWATER)
		TriggerUnderwaterExplosion(item, 0);
	else
	{
		TriggerExplosionSparks(item->pos.x_pos, item->pos.y_pos, item->pos.z_pos, 3, -2, 0, item->room_number);

		for (int i = 0; i < 3; i++)
			TriggerExplosionSparks(item->pos.x_pos, item->pos.y_pos, item->pos.z_pos, 3, -1, 0, item->room_number);
	}

	ExplodingDeath2(lara.vehicle, -2, 0);
	KillItem(lara.vehicle);
	item->status = ITEM_DEACTIVATED;
	SoundEffect(SFX_EXPLOSION1, 0, SFX_DEFAULT);
	SoundEffect(SFX_EXPLOSION2, 0, SFX_DEFAULT);
	lara.vehicle = NO_ITEM;
}

long QuadBikeCheckGetOff(void)
{
	ITEM_INFO* item;
	QUADINFO* quad;

	item = &items[lara.vehicle];

	if ((lara_item->current_anim_state == QS_GETOFFR || lara_item->current_anim_state == QS_GETOFFL) &&
		lara_item->frame_number == anims[lara_item->anim_number].frame_end)
	{
		if (lara_item->current_anim_state == QS_GETOFFL)
			lara_item->pos.y_rot += 0x4000;
		else
			lara_item->pos.y_rot -= 0x4000;

		lara_item->anim_number = ANIM_STOP;
		lara_item->frame_number = anims[ANIM_STOP].frame_base;
		lara_item->current_anim_state = AS_STOP;
		lara_item->goal_anim_state = AS_STOP;
		lara_item->pos.x_pos -= (512 * phd_sin(lara_item->pos.y_rot)) >> W2V_SHIFT;
		lara_item->pos.z_pos -= (512 * phd_cos(lara_item->pos.y_rot)) >> W2V_SHIFT;
		lara_item->pos.x_rot = 0;
		lara_item->pos.z_rot = 0;
		lara.vehicle = NO_ITEM;
		lara.gun_status = LG_NO_ARMS;
		return 1;
	}

	quad = (QUADINFO*)item->data;

	if (lara_item->current_anim_state == QS_FALLDEATH && lara_item->frame_number == anims[lara_item->anim_number].frame_base + quad_bike_frame_fall_death_detach[quad_bike_index[item->object_number]])
	{
		lara_item->pos.x_rot = 0;
		lara_item->pos.z_rot = 0;
		lara_item->speed = 0;
		quad->Flags |= 0x80;
	}

	return 1;
}

long QuadBikeTestHeight(ITEM_INFO* item, long x, long z, PHD_VECTOR* pos)
{
	FLOOR_INFO* floor;
	long s, c;
	short room_number;

	s = phd_sin(item->pos.y_rot);
	c = phd_cos(item->pos.y_rot);
	pos->x = item->pos.x_pos + ((z * c + x * s) >> W2V_SHIFT);
	pos->y = item->pos.y_pos + ((z * phd_sin(item->pos.z_rot)) >> W2V_SHIFT) - ((x * phd_sin(item->pos.x_rot)) >> W2V_SHIFT);
	pos->z = item->pos.z_pos + ((x * c - z * s) >> W2V_SHIFT);

	room_number = item->room_number;
	floor = GetFloor(pos->x, pos->y, pos->z, &room_number);
	c = GetCeiling(floor, pos->x, pos->y, pos->z);

	if (c == NO_HEIGHT || pos->y - 762 < c)
		return NO_HEIGHT;

	return GetHeight(floor, pos->x, pos->y, pos->z);
}

void QuadBikeTriggerExhaustSmoke(long x, long y, long z, short angle, long speed, long moving)
{
	SPARKS* sptr;

	sptr = &spark[GetFreeSpark()];
	sptr->On = 1;
	sptr->sR = 0;
	sptr->sG = 0;
	sptr->sB = 0;

	if (moving)
	{
		sptr->dR = (uchar)((96 * speed) >> 5);
		sptr->dG = (uchar)((96 * speed) >> 5);
		sptr->dB = (uchar)((128 * speed) >> 5);
	}
	else
	{
		sptr->dR = 96;
		sptr->dG = 96;
		sptr->dB = 128;
	}

	sptr->ColFadeSpeed = 4;
	sptr->FadeToBlack = 4;
	sptr->Life = (uchar)((GetRandomControl() & 3) - (speed >> 12) + 20);
	sptr->sLife = sptr->Life;

	if (sptr->Life < 9)
	{
		sptr->Life = 9;
		sptr->sLife = 9;
	}

	sptr->TransType = 2;
	sptr->extras = 0;
	sptr->Dynamic = -1;
	sptr->x = (GetRandomControl() & 0xF) + x - 8;
	sptr->y = (GetRandomControl() & 0xF) + y - 8;
	sptr->z = (GetRandomControl() & 0xF) + z - 8;
	sptr->Xvel = (GetRandomControl() & 0xFF) + ((speed * phd_sin(angle)) >> 16) - 128;
	sptr->Yvel = -8 - (GetRandomControl() & 7);
	sptr->Zvel = (GetRandomControl() & 0xFF) + ((speed * phd_cos(angle)) >> 16) - 128;
	sptr->Friction = 4;

	if (GetRandomControl() & 1)
	{
		sptr->Flags = SF_ROTATE | SF_DEF | SF_SCALE;
		sptr->RotAng = GetRandomControl() & 0xFFF;

		if (GetRandomControl() & 1)
			sptr->RotAdd = -24 - (GetRandomControl() & 7);
		else
			sptr->RotAdd = (GetRandomControl() & 7) + 24;
	}
	else
		sptr->Flags = SF_DEF | SF_SCALE;

	sptr->Scalar = 2;
	sptr->Def = (uchar)objects[DEFAULT_SPRITES].mesh_index;
	sptr->Gravity = -4 - (GetRandomControl() & 3);
	sptr->MaxYvel = -8 - (GetRandomControl() & 7);
	sptr->dSize = (uchar)((GetRandomControl() & 7) + (speed >> 7) + 32);
	sptr->sSize = sptr->dSize >> 1;
	sptr->Size = sptr->dSize >> 1;
}

long QuadBikeCanGetOff(long lr)
{
	ITEM_INFO* item;
	FLOOR_INFO* floor;
	long x, y, z, h, c;
	short angle, room_number;

	item = &items[lara.vehicle];

	if (lr >= 0)
		angle = item->pos.y_rot + 0x4000;
	else
		angle = item->pos.y_rot - 0x4000;

	x = item->pos.x_pos + ((512 * phd_sin(angle)) >> W2V_SHIFT);
	y = item->pos.y_pos;
	z = item->pos.z_pos + ((512 * phd_cos(angle)) >> W2V_SHIFT);

	room_number = item->room_number;
	floor = GetFloor(x, y, z, &room_number);
	h = GetHeight(floor, x, y, z);
	c = GetCeiling(floor, x, y, z);

	if (height_type != BIG_SLOPE && height_type != DIAGONAL &&
		h != NO_HEIGHT && ABS(h - item->pos.y_pos) <= 512 &&
		c - item->pos.y_pos <= -762 && h - c >= 762)
		return 1;

	return 0;
}

long QuadBikeGetCollisionAnim(ITEM_INFO* item, PHD_VECTOR* pos)
{
	long s, c, fb, lr;

	pos->x = item->pos.x_pos - pos->x;
	pos->z = item->pos.z_pos - pos->z;

	if (!pos->x && !pos->z)
		return 0;

	s = phd_sin(item->pos.y_rot);
	c = phd_cos(item->pos.y_rot);
	fb = (pos->x * s + pos->z * c) >> W2V_SHIFT;
	lr = (pos->x * c - pos->z * s) >> W2V_SHIFT;

	if (ABS(fb) > ABS(lr))
	{
		if (fb > 0)
			return 14;
		else
			return 13;
	}
	else
	{
		if (lr > 0)
			return 11;
		else
			return 12;
	}
}

long QuadBikeDoDynamics(long height, long fallspeed, long* ypos)
{
	long bounce;

	if (height <= *ypos)
	{
		bounce = (height - *ypos) << 2;

		if (bounce < -80)
			bounce = -80;

		fallspeed += ((bounce - fallspeed) >> 3);

		if (*ypos > height)
			*ypos = height;
	}
	else
	{
		*ypos += fallspeed;

		if (*ypos <= height - 80)
				fallspeed += 6;
		else
		{
			*ypos = height;
			fallspeed = 0;
		}
	}

	return fallspeed;
}

long QuadBikeDoShift(ITEM_INFO* item, PHD_VECTOR* newPos, PHD_VECTOR* oldPos)	//from boat.cpp
{
	FLOOR_INFO* floor;
	long x, z, nX, nZ, oX, oZ, sX, sZ, h;
	short room_number;

	nX = newPos->x >> WALL_SHIFT;
	nZ = newPos->z >> WALL_SHIFT;
	oX = oldPos->x >> WALL_SHIFT;
	oZ = oldPos->z >> WALL_SHIFT;
	sX = newPos->x & WALL_MASK;
	sZ = newPos->z & WALL_MASK;

	if (nX == oX)
	{
		if (nZ == oZ)
		{
			item->pos.z_pos += (oldPos->z - newPos->z);
			item->pos.x_pos += (oldPos->x - newPos->x);
			return 0;
		}
		else if (nZ <= oZ)
		{
			item->pos.z_pos += WALL_SIZE - sZ;
			return item->pos.x_pos - newPos->x;
		}
		else
		{
			item->pos.z_pos -= 1 + sZ;
			return newPos->x - item->pos.x_pos;
		}
	}

	if (nZ == oZ)
	{
		if (nX <= oX)
		{
			item->pos.x_pos += WALL_SIZE - sX;
			return newPos->z - item->pos.z_pos;
		}
		else
		{
			item->pos.x_pos -= 1 + sX;
			return item->pos.z_pos - newPos->z;
		}
	}

	x = 0;
	z = 0;
	room_number = item->room_number;
	floor = GetFloor(oldPos->x, newPos->y, newPos->z, &room_number);
	h = GetHeight(floor, oldPos->x, newPos->y, newPos->z);

	if (h < oldPos->y - 256)
	{
		if (newPos->z > oldPos->z)
			z = -1 - sZ;
		else
			z = WALL_SIZE - sZ;
	}

	room_number = item->room_number;
	floor = GetFloor(newPos->x, newPos->y, oldPos->z, &room_number);
	h = GetHeight(floor, newPos->x, newPos->y, oldPos->z);

	if (h < oldPos->y - 256)
	{
		if (newPos->x > oldPos->x)
			x = -1 - sX;
		else
			x = WALL_SIZE - sX;
	}

	if (x && z)
	{
		item->pos.x_pos += x;
		item->pos.z_pos += z;
		return 0;
	}

	if (z)
	{
		item->pos.z_pos += z;

		if (z > 0)
			return item->pos.x_pos - newPos->x;
		else
			return newPos->x - item->pos.x_pos;
	}

	if (x)
	{
		item->pos.x_pos += x;

		if (x > 0)
			return newPos->z - item->pos.z_pos;
		else
			return item->pos.z_pos - newPos->z;
	}

	item->pos.x_pos += oldPos->x - newPos->x;
	item->pos.z_pos += oldPos->z - newPos->z;
	return 0;
}

long QuadBikeIsAvalanche(ITEM_INFO* quad, short objnum)
{
	for (int i = 0; i < 16; i++)
	{
		if (quad_bike_slot_avalanche[quad_bike_index[quad->object_number]][i] == objnum)
			return i;
	}

	return -1;
}

void QuadBikeBaddieCollision(ITEM_INFO* quad)
{
	ITEM_INFO* item;
	OBJECT_INFO* obj;
	long dx, dy, dz, avalanche;
	short room_count, item_number;

	room_count = CollectBaddieCollisionRoomies(quad->room_number);

	for (int i = 0; i < room_count; i++)
	{
		for (item_number = room[baddie_collision_roomies[i]].item_number; item_number != NO_ITEM; item_number = item->next_item)
		{
			item = &items[item_number];

			if (item->collidable && item->status != ITEM_INVISIBLE && item != lara_item && item != quad)
			{
				obj = &objects[item->object_number];
				avalanche = QuadBikeIsAvalanche(quad, item->object_number);

				if (obj->collision && (obj->intelligent || avalanche != -1))
				{
					dx = quad->pos.x_pos - item->pos.x_pos;
					dy = quad->pos.y_pos - item->pos.y_pos;
					dz = quad->pos.z_pos - item->pos.z_pos;

					if (dx > -2048 && dx < 2048 && dz > -2048 && dz < 2048 && dy > -2048 && dy < 2048 && TestBoundsCollide(item, quad, 500))
					{
						if (avalanche != -1)
						{
							lara_item->hit_status = 1;
							lara_item->hit_points -= quad_bike_health[quad_bike_index[quad->object_number]][avalanche];
							continue;
						}

						DoLotsOfBlood(item->pos.x_pos, quad->pos.y_pos - 256, item->pos.z_pos, quad->speed, quad->pos.y_rot, item->room_number, 3);
						item->hit_points = 0;
					}
				}
			}
		}
	}
}

long QuadBikeDynamics(ITEM_INFO* item)
{
	QUADINFO* quad;
	FLOOR_INFO* floor;
	PHD_VECTOR oldPos, newPos;
	PHD_VECTOR flPos, frPos, blPos, brPos, mlPos, mrPos, bmlPos, bmrPos, fmlPos, fmrPos;
	PHD_VECTOR flPos2, bmlPos2, mlPos2, fmlPos2, blPos2, frPos2, bmrPos2, mrPos2, fmrPos2, brPos2;
	long front_left, front_right, back_left, back_right, mid_left, mid_right, bm_left, bm_right, fm_left, fm_right;
	long front_left2, bm_left2, mid_left2, fm_left2, back_left2, front_right2, bm_right2, mid_right2, fm_right2, back_right2;
	long h, speed, slip, anim, dx, dz;
	short vel, ang, room_number, shift, shift2;

	quad = (QUADINFO*)item->data;
	quad->Flags &= ~0x1;
	oldPos.x = item->pos.x_pos;
	oldPos.y = item->pos.y_pos;
	oldPos.z = item->pos.z_pos;

	front_left = QuadBikeTestHeight(item, 550, -260, &flPos);
	front_right = QuadBikeTestHeight(item, 550, 260, &frPos);
	back_left = QuadBikeTestHeight(item, -550, -260, &blPos);
	back_right = QuadBikeTestHeight(item, -550, 260, &brPos);
	mid_left = QuadBikeTestHeight(item, 0, -260, &mlPos);
	mid_right = QuadBikeTestHeight(item, 0, 260, &mrPos);
	bm_left = QuadBikeTestHeight(item, 275, -260, &bmlPos);
	bm_right = QuadBikeTestHeight(item, 275, 260, &bmrPos);
	fm_left = QuadBikeTestHeight(item, -275, -260, &fmlPos);
	fm_right = QuadBikeTestHeight(item, -275, 260, &fmrPos);

	if (blPos.y > back_left)
		blPos.y = back_left;

	if (brPos.y > back_right)
		brPos.y = back_right;

	if (flPos.y > front_left)
		flPos.y = front_left;

	if (frPos.y > front_right)
		frPos.y = front_right;

	if (fmlPos.y > fm_left)
		fmlPos.y = fm_left;

	if (fmrPos.y > fm_right)
		fmrPos.y = fm_right;

	if (bmlPos.y > bm_left)
		bmlPos.y = bm_left;

	if (bmrPos.y > bm_right)
		bmrPos.y = bm_right;

	if (mlPos.y > mid_left)
		mlPos.y = mid_left;

	if (mrPos.y > mid_right)
		mrPos.y = mid_right;

	if (item->pos.y_pos <= item->floor - 256)
		item->pos.y_rot += (short)(quad->extra_rotation + quad->skidoo_turn);
	else
	{
		if (quad->skidoo_turn < -364)
			quad->skidoo_turn += 364;
		else if (quad->skidoo_turn > 364)
			quad->skidoo_turn -= 364;
		else
			quad->skidoo_turn = 0;

		item->pos.y_rot += (short)(quad->extra_rotation + quad->skidoo_turn);
		vel = (short)(546 - (quad->Velocity >> 8));
		ang = item->pos.y_rot - quad->momentum_angle;

		if (!(input & IN_ACTION) && quad->Velocity > 0)
			vel += vel >> 2;

		if (ang < -273)
		{
			if (ang >= -27300)
				quad->momentum_angle -= vel;
			else
				quad->momentum_angle = item->pos.y_rot + 27300;
		}
		else if (ang > 273)
		{
			if (ang <= 27300)
				quad->momentum_angle += vel;
			else
				quad->momentum_angle = item->pos.y_rot - 27300;
		}
		else
			quad->momentum_angle = item->pos.y_rot;
	}

	room_number = item->room_number;
	floor = GetFloor(item->pos.x_pos, item->pos.y_pos, item->pos.z_pos, &room_number);
	h = GetHeight(floor, item->pos.x_pos, item->pos.y_pos, item->pos.z_pos);

	if (item->pos.y_pos < h)
		speed = item->speed;
	else
		speed = (item->speed * phd_cos(item->pos.x_rot)) >> W2V_SHIFT;

	item->pos.x_pos += (speed * phd_sin(quad->momentum_angle)) >> W2V_SHIFT;
	item->pos.z_pos += (speed * phd_cos(quad->momentum_angle)) >> W2V_SHIFT;

	slip = (100 * phd_sin(item->pos.x_rot)) >> W2V_SHIFT;

	if (ABS(slip) > 50)
	{
		quad->Flags |= 0x1;

		if (slip > 0)
			slip -= 10;
		else
			slip += 10;

		item->pos.x_pos -= (slip * phd_sin(item->pos.y_rot)) >> W2V_SHIFT;
		item->pos.z_pos -= (slip * phd_cos(item->pos.y_rot)) >> W2V_SHIFT;
	}

	slip = (50 * phd_sin(item->pos.z_rot)) >> W2V_SHIFT;

	if (ABS(slip) > 25)
	{
		quad->Flags |= 0x1;
		item->pos.x_pos += (slip * phd_cos(item->pos.y_rot)) >> W2V_SHIFT;
		item->pos.z_pos -= (slip * phd_sin(item->pos.y_rot)) >> W2V_SHIFT;
	}

	newPos.x = item->pos.x_pos;
	newPos.z = item->pos.z_pos;

	if (!(item->flags & IFL_INVISIBLE))
		QuadBikeBaddieCollision(item);

	shift = 0;

	front_left2 = QuadBikeTestHeight(item, 550, -260, &flPos2);

	if (front_left2 < flPos.y - 256)
		shift = (short)QuadBikeDoShift(item, &flPos2, &flPos);

	bm_left2 = QuadBikeTestHeight(item, 275, -260, &bmlPos2);

	if (bm_left2 < bmlPos.y - 256)
		QuadBikeDoShift(item, &bmlPos2, &bmlPos);

	mid_left2 = QuadBikeTestHeight(item, 0, -260, &mlPos2);

	if (mid_left2 < mlPos.y - 256)
		QuadBikeDoShift(item, &mlPos2, &mlPos);

	fm_left2 = QuadBikeTestHeight(item, -275, -260, &fmlPos2);

	if (fm_left2 < fmlPos.y - 256)
		QuadBikeDoShift(item, &fmlPos2, &fmlPos);

	back_left2 = QuadBikeTestHeight(item, -550, -260, &blPos2);

	if (back_left2 < blPos.y - 256)
	{
		shift2 = (short)QuadBikeDoShift(item, &blPos2, &blPos);

		if ((shift2 > 0 && shift >= 0) || (shift2 < 0 && shift <= 0))
			shift += shift2;
	}

	front_right2 = QuadBikeTestHeight(item, 550, 260, &frPos2);

	if (front_right2 < frPos.y - 256)
	{
		shift2 = (short)QuadBikeDoShift(item, &frPos2, &frPos);

		if ((shift2 > 0 && shift >= 0) || (shift2 < 0 && shift <= 0))
			shift += shift2;
	}

	bm_right2 = QuadBikeTestHeight(item, 275, 260, &bmrPos2);

	if (bm_right2 < bmrPos.y - 256)
		QuadBikeDoShift(item, &bmrPos2, &bmrPos);

	mid_right2 = QuadBikeTestHeight(item, 0, 260, &mrPos2);

	if (mid_right2 < mrPos.y - 256)
		QuadBikeDoShift(item, &mrPos2, &mrPos);

	fm_right2 = QuadBikeTestHeight(item, -275, 260, &fmrPos2);

	if (fm_right2 < fmrPos.y - 256)
		QuadBikeDoShift(item, &fmrPos2, &fmrPos);

	back_right2 = QuadBikeTestHeight(item, -550, 260, &brPos2);

	if (back_right2 < brPos.y - 256)
	{
		shift2 = (short)QuadBikeDoShift(item, &brPos2, &brPos);

		if ((shift2 > 0 && shift >= 0) || (shift2 < 0 && shift <= 0))
			shift += shift2;
	}

	room_number = item->room_number;
	floor = GetFloor(item->pos.x_pos, item->pos.y_pos, item->pos.z_pos, &room_number);
	h = GetHeight(floor, item->pos.x_pos, item->pos.y_pos, item->pos.z_pos);

	if (h < item->pos.y_pos - 256)
		QuadBikeDoShift(item, (PHD_VECTOR*)&item->pos, &oldPos);

	quad->extra_rotation = shift;
	anim = QuadBikeGetCollisionAnim(item, &newPos);

	if (anim)
	{
		dx = item->pos.x_pos - oldPos.x;
		dz = item->pos.z_pos - oldPos.z;
		speed = (dx * phd_sin(quad->momentum_angle) + dz * phd_cos(quad->momentum_angle)) >> W2V_SHIFT;
		speed <<= 8;

		if (&items[lara.vehicle] == item && quad->Velocity == 0xA000 && speed < 0x9FF6)
		{
			lara_item->hit_points -= (short)((0xA000 - speed) >> 7);
			lara_item->hit_status = 1;
		}

		if (quad->Velocity > 0 && speed < quad->Velocity)
			quad->Velocity = speed < 0 ? 0 : speed;
		else if (quad->Velocity < 0 && speed > quad->Velocity)
			quad->Velocity = speed > 0 ? 0 : speed;

		if (quad->Velocity < -0x3000)
			quad->Velocity = -0x3000;
	}

	return anim;
}

void AnimateQuadBike(ITEM_INFO* item, long hitWall, long killed)
{
	QUADINFO* quad;
	short state;

	quad = (QUADINFO*)item->data;
	state = lara_item->current_anim_state;

	if (item->pos.y_pos != item->floor && state != QS_FALL && state != QS_LAND && state != QS_FALLOFF && !killed)
	{
		if (quad->Velocity < 0)
			lara_item->anim_number = objects[quad_bike_slot_vehicle_anim[quad_bike_index[item->object_number]]].anim_index + 6;
		else
			lara_item->anim_number = objects[quad_bike_slot_vehicle_anim[quad_bike_index[item->object_number]]].anim_index + 25;

		lara_item->frame_number = anims[lara_item->anim_number].frame_base;
		lara_item->current_anim_state = 8;
		lara_item->goal_anim_state = 8;
	}
	else if (hitWall &&
		state != QS_HITFRONT && state != QS_HITBACK && state != QS_HITLEFT && state != QS_HITRIGHT && state != QS_FALLOFF &&
		quad->Velocity > 0x3555 && !killed)
	{
		switch (hitWall)
		{
		case 13:
			lara_item->anim_number = objects[quad_bike_slot_vehicle_anim[quad_bike_index[item->object_number]]].anim_index + 12;
			lara_item->current_anim_state = QS_HITFRONT;
			lara_item->goal_anim_state = QS_HITFRONT;
			break;

		case 14:
			lara_item->anim_number = objects[quad_bike_slot_vehicle_anim[quad_bike_index[item->object_number]]].anim_index + 11;
			lara_item->current_anim_state = QS_HITBACK;
			lara_item->goal_anim_state = QS_HITBACK;
			break;

		case 11:
			lara_item->anim_number = objects[quad_bike_slot_vehicle_anim[quad_bike_index[item->object_number]]].anim_index + 14;
			lara_item->current_anim_state = QS_HITLEFT;
			lara_item->goal_anim_state = QS_HITLEFT;
			break;

		default:
			lara_item->anim_number = objects[quad_bike_slot_vehicle_anim[quad_bike_index[item->object_number]]].anim_index + 13;
			lara_item->current_anim_state = QS_HITRIGHT;
			lara_item->goal_anim_state = QS_HITRIGHT;
			break;
		}

		lara_item->frame_number = anims[lara_item->anim_number].frame_base;

		if (quad_bike_sfx_quad_front_impact[quad_bike_index[item->object_number]] != -1)
			SoundEffect(quad_bike_sfx_quad_front_impact[quad_bike_index[item->object_number]], &item->pos, SFX_DEFAULT);
	}
	else
	{
		switch (lara_item->current_anim_state)
		{
		case QS_DRIVE:

			if (killed)
			{
				if (quad->Velocity <= 0x5000)
					lara_item->goal_anim_state = QS_BIKEDEATH;
				else
					lara_item->goal_anim_state = QS_FALLDEATH;
			}
			else if (!(quad->Velocity & 0xFFFFFF00) && !(input & (IN_JUMP | IN_ACTION)))
				lara_item->goal_anim_state = QS_STOP;
			else if (input & IN_LEFT && !(quad->Flags & 0x2))
				lara_item->goal_anim_state = QS_TURNL;
			else if (input & IN_RIGHT && !(quad->Flags & 0x2))
				lara_item->goal_anim_state = QS_TURNR;
			else if (input & IN_JUMP)
			{
				if (quad->Velocity <= 0x6AAA)
					lara_item->goal_anim_state = QS_SLOW;
				else
					lara_item->goal_anim_state = QS_BRAKE;
			}

			break;

		case 2:

			if (!(quad->Velocity & 0xFFFFFF00))
				lara_item->goal_anim_state = QS_STOP;
			else if (input & IN_RIGHT)
			{
				lara_item->anim_number = objects[quad_bike_slot_vehicle_anim[quad_bike_index[item->object_number]]].anim_index + 20;
				lara_item->frame_number = anims[lara_item->anim_number].frame_base;
				lara_item->current_anim_state = QS_TURNR;
				lara_item->goal_anim_state = QS_TURNR;
			}
			else if (!(input & IN_LEFT))
				lara_item->goal_anim_state = QS_DRIVE;

			break;

		case 5:
		case 6:
		case 18:

			if (!(quad->Velocity & 0xFFFFFF00))
				lara_item->goal_anim_state = QS_STOP;
			else if (input & IN_LEFT)
				lara_item->goal_anim_state = QS_TURNL;
			else if (input & IN_RIGHT)
				lara_item->goal_anim_state = QS_TURNR;

			break;

		case 8:

			if (item->pos.y_pos == item->floor)
				lara_item->goal_anim_state = QS_LAND;

			break;

		case 11:
		case 12:
		case 13:
		case 14:

			if (input & (IN_JUMP | IN_ACTION))
				lara_item->goal_anim_state = QS_DRIVE;

			break;

		case 15:

			if (killed)
			{
				lara_item->goal_anim_state = QS_BIKEDEATH;
				break;
			}

			if (input & IN_ROLL && !quad->Velocity && !(quad->Flags & 0x1))
			{
				if (input & IN_RIGHT && QuadBikeCanGetOff(1))
					lara_item->goal_anim_state = QS_GETOFFR;
				else if (input & IN_LEFT && QuadBikeCanGetOff(-1))
					lara_item->goal_anim_state = QS_GETOFFL;
			}
			else if (input & (IN_JUMP | IN_ACTION))
				lara_item->goal_anim_state = QS_DRIVE;

			break;

		case 22:

			if (!(quad->Velocity & 0xFFFFFF00))
				lara_item->goal_anim_state = QS_STOP;
			else if (input & IN_LEFT)
			{
				lara_item->anim_number = objects[quad_bike_slot_vehicle_anim[quad_bike_index[item->object_number]]].anim_index + 3;
				lara_item->frame_number = anims[lara_item->anim_number].frame_base;
				lara_item->current_anim_state = QS_TURNL;
				lara_item->goal_anim_state = QS_TURNL;
			}
			else if (!(input & IN_RIGHT))
				lara_item->goal_anim_state = QS_DRIVE;

			break;
		}
	}

	if (item->fallspeed > quad_bike_deadly_fallspeed[quad_bike_index[item->object_number]])
		quad->Flags |= 0x40;
}

long QuadBikeUserControl(ITEM_INFO* item, long height, long* pitch)
{
	QUADINFO* quad;
	long revs;

	quad = (QUADINFO*)item->data;

	if (!quad->Velocity && !(input & IN_SPRINT) && !(quad->Flags & 0x4))
		quad->Flags |= 0x4;
	else if (quad->Velocity)
		quad->Flags &= ~0x4;

	if (!(input & IN_SPRINT))
		quad->Flags &= ~0x2;

	if (!(quad->Flags & 0x2))
	{
		if (quad->Revs > 16)
		{
			quad->Velocity += quad->Revs >> 4;
			quad->Revs -= quad->Revs >> 3;
		}
		else
			quad->Revs = 0;
	}

	if (item->pos.y_pos < height - 256)
	{
		if (quad->EngineRevs < 0xA000)
			quad->EngineRevs += (0xA000 - quad->EngineRevs) >> 3;
	}
	else
	{
		if (!quad->Velocity && input & IN_LOOK)
		{
			camera.type = LOOK_CAMERA;

			if (input & IN_FORWARD)
			{
				input -= IN_FORWARD;

				if (lara.head_x_rot > -6370)
					lara.head_x_rot -= 364;
			}
			else if (input & IN_BACK)
			{
				input -= IN_BACK;

				if (lara.head_x_rot < 5460)
					lara.head_x_rot += 364;
			}
		}

		if (quad->Velocity > 0)
		{
			if (input & IN_SPRINT && !(quad->Flags & 0x2) && quad->Velocity > 0x3000)
			{
				if (input & IN_LEFT)
				{
					quad->skidoo_turn -= 500;

					if (quad->skidoo_turn < -0x5B0)
						quad->skidoo_turn = -0x5B0;
				}
				else if (input & IN_RIGHT)
				{
					quad->skidoo_turn += 500;

					if (quad->skidoo_turn > 0x5B0)
						quad->skidoo_turn = 0x5B0;
				}
			}
			else
			{
				if (input & IN_LEFT)
				{
					quad->skidoo_turn -= 455;

					if (quad->skidoo_turn < -910)
						quad->skidoo_turn = -910;
				}
				else if (input & IN_RIGHT)
				{
					quad->skidoo_turn += 455;

					if (quad->skidoo_turn > 910)
						quad->skidoo_turn = 910;
				}
			}
		}
		else if (quad->Velocity < 0)
		{
			if (input & IN_SPRINT && !(quad->Flags & 0x2) && quad->Velocity < -0x2800)
			{
				if (input & IN_RIGHT)
				{
					quad->skidoo_turn -= 500;

					if (quad->skidoo_turn < -0x5B0)
						quad->skidoo_turn = -0x5B0;
				}
				else if (input & IN_LEFT)
				{
					quad->skidoo_turn += 500;

					if (quad->skidoo_turn > 0x5B0)
						quad->skidoo_turn = 0x5B0;
				}
			}
			else
			{
				if (input & IN_RIGHT)
				{
					quad->skidoo_turn -= 455;

					if (quad->skidoo_turn < -910)
						quad->skidoo_turn = -910;
				}
				else if (input & IN_LEFT)
				{
					quad->skidoo_turn += 455;

					if (quad->skidoo_turn > 910)
						quad->skidoo_turn = 910;
				}
			}
		}

		if (input & IN_JUMP)
		{
			if (input & IN_SPRINT && quad->Flags & 0x6)
			{
				quad->Flags |= 0x2;
				quad->Revs -= 512;

				if (quad->Revs < -0x3000)
					quad->Revs = -0x3000;
			}
			else if (quad->Velocity > 0)
				quad->Velocity -= 640;
			else  if (quad->Velocity > -0x3000)
				quad->Velocity -= 768;
		}
		else if (input & IN_ACTION)
		{
			if (input & IN_SPRINT && quad->Flags & 0x6)
			{
				quad->Flags |= 0x2;
				quad->Revs += 512;

				if (quad->Revs >= 0xA000)
					quad->Revs = 0xA000;
			}
			else if (quad->Velocity < 0xA000)
			{
				if (quad->Velocity < 0x4000)
					quad->Velocity += ((0x4800 - quad->Velocity) >> 3) + 8;
				else if (quad->Velocity < 0x7000)
					quad->Velocity += ((0x7800 - quad->Velocity) >> 4) + 4;
				else
					quad->Velocity += ((0xA000 - quad->Velocity) >> 3) + 2;
			}
			else
				quad->Velocity = 0xA000;
		}
		else if (quad->Velocity > 256)
			quad->Velocity -= 256;
		else if (quad->Velocity < -256)
			quad->Velocity += 256;
		else
			quad->Velocity = 0;

		if (quad->Flags & 0x2 && quad->Revs && !(input & (IN_JUMP | IN_ACTION)))
		{
			if (quad->Revs > 8)
				quad->Revs -= quad->Revs >> 3;
			else
				quad->Revs = 0;
		}

		item->speed = (short)(quad->Velocity >> 8);

		if (quad->EngineRevs > 0x7000)
			quad->EngineRevs = -0x2000;

		revs = 0;	//originally uninitialized

		if (quad->Velocity < 0)
			revs = ABS(quad->Revs) + ABS(quad->Velocity >> 1);
		else if (quad->Velocity < 0x7000)
			revs = ABS(quad->Revs) + 0x8800 * quad->Velocity / 0x7000 - 0x2000;
		else if (quad->Velocity <= 0xA000)
			revs = ABS(quad->Revs) + 0x9800 * (quad->Velocity - 0x7000) / 0x3000 - 0x2800;
		else
			revs += ABS(quad->Revs);

		quad->EngineRevs += (revs - quad->EngineRevs) >> 3;
	}

	*pitch = quad->EngineRevs;
	return 0;
}

long QuadBikeControl(void)
{
	ITEM_INFO* item;
	QUADINFO* quad;
	FLOOR_INFO* floor;
	PHD_VECTOR flPos, frPos, pos;
	long front_left, front_right, wh;
	long killed, hitWall, h, driving, pitch, smokeVel;
	short room_number, rot, xrot, zrot, state;

	item = &items[lara.vehicle];
	quad = (QUADINFO*)item->data;
	hitWall = QuadBikeDynamics(item);
	killed = 0;
	pitch = 0;	//originally uninitialized

	front_left = QuadBikeTestHeight(item, 550, -260, &flPos);
	front_right = QuadBikeTestHeight(item, 550, 260, &frPos);

	room_number = item->room_number;
	floor = GetFloor(item->pos.x_pos, item->pos.y_pos, item->pos.z_pos, &room_number);
	h = GetHeight(floor, item->pos.x_pos, item->pos.y_pos, item->pos.z_pos);
	TestTriggers(trigger_index, 1, 0);
	TestTriggers(trigger_index, 0, 0);

	if (lara_item->hit_points <= 0)
	{
		killed = 1;
		input &= ~(IN_FORWARD | IN_BACK | IN_LEFT | IN_RIGHT | IN_ACTION | IN_JUMP | IN_SPRINT);
	}

	if (quad->Flags & 0x40)
	{
		driving = -1;
		hitWall = 0;
	}
	else
	{
		switch (lara_item->current_anim_state)
		{
		case QS_GETONR:
		case QS_GETOFFR:
		case QS_GETONL:
		case QS_GETOFFL:
			driving = -1;
			hitWall = 0;
			break;

		default:
			driving = QuadBikeUserControl(item, h, &pitch);
			break;
		}
	}

	if (quad->Velocity || quad->Revs)
	{
		quad->pitch = pitch;

		if (quad->pitch < -0x8000)
			quad->pitch = -0x8000;
		else if (quad->pitch > 0xA000)
			quad->pitch = 0xA000;

		if (quad_bike_sfx_quad_move[quad_bike_index[item->object_number]] != -1)
			SoundEffect(quad_bike_sfx_quad_move[quad_bike_index[item->object_number]], &item->pos, (quad->pitch << 8) + 0x1000004);
	}
	else
	{
		if (driving != -1 && quad_bike_sfx_quad_idle[quad_bike_index[item->object_number]] != -1)
			SoundEffect(quad_bike_sfx_quad_idle[quad_bike_index[item->object_number]], &item->pos, SFX_DEFAULT);

		quad->pitch = 0;
	}

	item->floor = h;
	rot = (short)(quad->Velocity >> 2);
	quad->FrontRot -= rot;
	quad->RearRot -= (short)(rot + (quad->Revs >> 3));

	for (int i = 0; i < 4 && quad_bike_mesh_wheel[quad_bike_index[item->object_number]][quad_bike_mesh_wheel_index[quad_bike_index[item->object_number]][i]]; i++)
		quad->joint_rotation[i] = quad_bike_mesh_wheel_index[quad_bike_index[item->object_number]][i] < 2 ? quad->FrontRot : quad->RearRot;

	quad->left_fallspeed = QuadBikeDoDynamics(front_left, quad->left_fallspeed, &flPos.y);
	quad->right_fallspeed = QuadBikeDoDynamics(front_right, quad->right_fallspeed, &frPos.y);
	item->fallspeed = (short)QuadBikeDoDynamics(h, item->fallspeed, &item->pos.y_pos);

	h = (flPos.y + frPos.y) >> 1;
	xrot = (short)phd_atan(550, item->pos.y_pos - h);
	zrot = (short)phd_atan(260, h - flPos.y);
	item->pos.x_rot += (xrot - item->pos.x_rot) >> 1;
	item->pos.z_rot += (zrot - item->pos.z_rot) >> 1;

	if (room_number != item->room_number)
	{
		ItemNewRoom(lara.vehicle, room_number);

		if (!(quad->Flags & 0x80))
			ItemNewRoom(lara.item_number, room_number);
	}

	if (!(quad->Flags & 0x80))
	{
		lara_item->pos.x_pos = item->pos.x_pos;
		lara_item->pos.y_pos = item->pos.y_pos;
		lara_item->pos.z_pos = item->pos.z_pos;
		lara_item->pos.x_rot = item->pos.x_rot;
		lara_item->pos.y_rot = item->pos.y_rot;
		lara_item->pos.z_rot = item->pos.z_rot;
	}

	AnimateQuadBike(item, hitWall, killed);
	wh = GetWaterHeight(item->pos.x_pos, item->pos.y_pos, item->pos.z_pos, item->room_number);

	if (wh != NO_HEIGHT && item->pos.y_pos - wh > quad_bike_deadly_water_depth[quad_bike_index[item->object_number]])
	{
		if (!(quad->Flags & 0x80))
		{
			lara_item->anim_number = ANIM_FALLDOWN;
			lara_item->frame_number = anims[ANIM_FALLDOWN].frame_base;
			lara_item->current_anim_state = AS_FORWARDJUMP;
			lara_item->goal_anim_state = AS_FORWARDJUMP;
			lara_item->gravity_status = 1;
			lara_item->fallspeed = 1;
			lara_item->speed = 0;
			lara_item->pos.x_rot = 0;
			lara_item->pos.z_rot = 0;
			lara_item->hit_points = 0;
		}

		QuadbikeExplode(item);
		return 0;
	}

	AnimateItem(lara_item);
	item->anim_number = lara_item->anim_number + objects[quad_bike_slot_quadbike[quad_bike_index[item->object_number]]].anim_index - objects[quad_bike_slot_vehicle_anim[quad_bike_index[item->object_number]]].anim_index;
	item->frame_number = lara_item->frame_number + anims[item->anim_number].frame_base - anims[lara_item->anim_number].frame_base;

	if (!(quad->Flags & 0x80))
		camera.target_elevation = -5460;

	if (quad->Flags & 0x40 && item->pos.y_pos == item->floor)
	{
		if (!(quad->Flags & 0x80))
		{
			ExplodingDeath2(lara.item_number, -1, 0);
			lara_item->hit_points = 0;
			lara_item->flags |= IFL_INVISIBLE;
		}

		QuadbikeExplode(item);
		return 0;
	}

	state = lara_item->current_anim_state;

	if (state != QS_GETONR && state != QS_GETONL && state != QS_GETOFFR && state != QS_GETOFFL)
	{
		for (int i = 0; i < 2; i++)
		{
			if (!i)
			{
				pos.x = -56;
				rot = item->pos.y_rot + 0x9000;
			}
			else
			{
				pos.x = 56;
				rot = item->pos.y_rot + 0x7000;
			}

			pos.y = -32;
			pos.z = -380;
			GetJointAbsPosition(item, &pos, 0);

			if (item->speed > 32)
			{
				if (item->speed < 64)
					QuadBikeTriggerExhaustSmoke(pos.x, pos.y, pos.z, rot, 64 - item->speed, 1);
			}
			else
			{
				if (quad->track_mesh < 16)
				{
					smokeVel = ((GetRandomControl() & 7) + (GetRandomControl() & 0x10) + 2 * quad->track_mesh) << 7;
					quad->track_mesh++;
				}
				else if (quad->Flags & 0x2)
					smokeVel = (ABS(quad->Revs) >> 2) + ((GetRandomControl() & 7) << 7);
				else if (GetRandomControl() & 3)
					smokeVel = 0;
				else
					smokeVel = ((GetRandomControl() & 0xF) + (GetRandomControl() & 0x10)) << 7;

				QuadBikeTriggerExhaustSmoke(pos.x, pos.y, pos.z, rot, smokeVel, 0);
			}
		}
	}
	else
		quad->track_mesh = 0;

	return QuadBikeCheckGetOff();
}

long IsQuadBikeAssigned(long index)
{
	return quad_bike_slot_quadbike[index] != -1 && quad_bike_slot_vehicle_anim[index] != -1;
}

long IsInQuadBike(void)
{
	for (int i = 0; i < 16; i++)
	{
		if (IsQuadBikeAssigned(i) && quad_bike_index[quad_bike_slot_quadbike[i]] == i && items[lara.vehicle].object_number == quad_bike_slot_quadbike[i])
			return 1;
	}

	return 0;
}

long IsDrivingQuadBike(void)
{
	return lara.vehicle != -1 && IsInQuadBike();
}

void SortQuadBikeJoints(long index)
{
	short mesh;
	char tmp;

	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			mesh = quad_bike_mesh_wheel[index][quad_bike_mesh_wheel_index[index][i]];

			if (!mesh || mesh < quad_bike_mesh_wheel[index][quad_bike_mesh_wheel_index[index][j]])
			{
				tmp = quad_bike_mesh_wheel_index[index][i];
				quad_bike_mesh_wheel_index[index][i] = quad_bike_mesh_wheel_index[index][j];
				quad_bike_mesh_wheel_index[index][j] = tmp;
			}
		}
	}
}

void setup_quad_bike(void)
{
	OBJECT_INFO* obj;

	for (int i = 0; i < 16; i++)
	{
		if (IsQuadBikeAssigned(i) && quad_bike_index[quad_bike_slot_quadbike[i]] == -1)
		{
			obj = &objects[quad_bike_slot_quadbike[i]];
			obj->initialise = InitialiseQuadBike;
			obj->collision = QuadBikeCollision;
			obj->control = 0;
			obj->draw_routine = DrawAnimatingItem;
			obj->using_drawanimating_item = 1;
			obj->save_position = 1;
			obj->save_hitpoints = 0;
			obj->save_flags = 1;
			obj->save_anim = 1;

			for (int j = 0; j < 4; j++)
			{
				if (quad_bike_mesh_wheel[i][j])
					bones[obj->bone_index + 4 * (quad_bike_mesh_wheel[i][j] - 1)] |= 0x4;
			}

			quad_bike_index[quad_bike_slot_quadbike[i]] = i;
		}
	}
}

long VehicleControl(void)
{
	if (IsInMineCart())
		return MineCartControl();

	if (IsInQuadBike())
		return QuadBikeControl();

	return -1;
}

void VehicleLook(void)
{
	if (lara.vehicle != -1 && (IsInMineCart() || IsInQuadBike()) && input & IN_LOOK && lara.look)
	{
		camera.type = LOOK_CAMERA;

		if (input & IN_LEFT)
		{
			input -= IN_LEFT;

			if (lara.head_y_rot > -8008)
				lara.head_y_rot -= 364;
		}
		else if (input & IN_RIGHT)
		{
			input -= IN_RIGHT;

			if (lara.head_y_rot < 8008)
				lara.head_y_rot += 364;
		}
	}
}

void SaveVehicle(ITEM_INFO* item)
{
	if (IsMineCartAssigned() && item->object_number == mine_cart_slot_minecart)
		WriteSG(item->data, sizeof(CARTINFO));
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if (IsQuadBikeAssigned(i) && quad_bike_index[quad_bike_slot_quadbike[i]] == i && item->object_number == quad_bike_slot_quadbike[i])
			{
				WriteSG(item->data, sizeof(QUADINFO));
				break;
			}
		}
	}
}

void RestoreVehicle(ITEM_INFO* item)
{
	if (IsMineCartAssigned() && item->object_number == mine_cart_slot_minecart)
		ReadSG(item->data, sizeof(CARTINFO));
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if (IsQuadBikeAssigned(i) && quad_bike_index[quad_bike_slot_quadbike[i]] == i && item->object_number == quad_bike_slot_quadbike[i])
			{
				ReadSG(item->data, sizeof(QUADINFO));
				break;
			}
		}
	}
}

long OnTrapDoor(ITEM_INFO* item, long x, long z)
{
	long ix, iz;

	x >>= WALL_SHIFT;
	z >>= WALL_SHIFT;
	ix = item->pos.x_pos >> WALL_SHIFT;
	iz = item->pos.z_pos >> WALL_SHIFT;

	if (!item->pos.y_rot && x == ix && (z == iz || z == iz + 1))
		return 1;

	if (item->pos.y_rot == -0x8000 && x == ix && (z == iz || z == iz - 1))
		return 1;

	if (item->pos.y_rot == 0x4000 && z == iz && (x == ix || x == ix + 1))
		return 1;

	if (item->pos.y_rot == -0x4000 && z == iz && (x == ix || x == ix - 1))
		return 1;

	return 0;
}

void TrapDoorCeiling(ITEM_INFO* item, long x, long y, long z, long* h)
{
	if (OnTrapDoor(item, x, z) && y > item->pos.y_pos && !item->current_anim_state && item->pos.y_pos > *h)
		*h = item->pos.y_pos + 256;
}

void TrapDoorFloor(ITEM_INFO* item, long x, long y, long z, long* h)
{
	if (OnTrapDoor(item, x, z) && y <= item->pos.y_pos && !item->current_anim_state && item->pos.y_pos < *h)
	{
		*h = item->pos.y_pos;
		OnObject = 1;
		height_type = WALL;
	}
}

void TrapDoorControl(short item_number)
{
	ITEM_INFO* item;

	item = &items[item_number];

	if (TriggerActive(item))
	{
		if (!item->current_anim_state)
			item->goal_anim_state = 1;
	}
	else if (item->current_anim_state == 1)
		item->goal_anim_state = 0;

	AnimateItem(item);
}

void setup_trapdoors(void)
{
	OBJECT_INFO* obj;

	for (int i = 0; i < 16; i++)
	{
		if (trapdoor_object[i] != -1)
		{
			obj = &objects[trapdoor_object[i]];
			obj->initialise = 0;
			obj->collision = 0;
			obj->control = TrapDoorControl;
			obj->floor = TrapDoorFloor;
			obj->ceiling = TrapDoorCeiling;
			obj->save_flags = 1;
			obj->save_anim = 1;
		}
	}
}

void rotate_horizon(void)
{
	phd_RotY(horizon_rotation);
	horizon_rotation += horizon_rotation_speed;
}

void lara_as_duckcrouch(void)
{
	ITEM_INFO* item = lara_item;

	lara.IsDucked = 1;

	if (item->anim_number == 217 || item->anim_number == 310 || item->anim_number == 311)
		item->goal_anim_state = item->current_anim_state = 80;

	if (input & IN_ROLL)
		item->goal_anim_state = AS_ROLL;

	if (item->goal_anim_state == AS_DASH && !(input & IN_SPRINT) || item->goal_anim_state == AS_ROLL && !(input & IN_ROLL))
		item->goal_anim_state = AS_ALL4S;
}

void lara_col_duckcrouch(void)
{
	ITEM_INFO** itemlist;
	MESH_INFO** meshlist;
	MESH_INFO* StaticMesh;
	GAME_VECTOR s, d;
	PHD_VECTOR v;
	long slope, x, z, collided, target;
	short height, ceiling;
	ITEM_INFO* item = lara_item;
	COLL_INFO* coll = lara_coll;

	slope = ABS(coll->left_floor2 - coll->right_floor2) >= 120;
	lara.keep_ducked = coll->mid_ceiling >= -362;
	ShiftItem(item, coll);

	if (coll->mid_floor != NO_HEIGHT && coll->mid_floor > -256)
		item->pos.y_pos += coll->mid_floor;

	if ((input & IN_DUCK || lara.keep_ducked) && lara.water_status != LW_WADE)
	{
		if (item->anim_number == 263 || item->anim_number == 264)
		{

			if (input & IN_FORWARD)
			{
				height = LaraFloorFront(item, item->pos.y_rot, 256);

				if (height < 255 && height > -255 && height_type != BIG_SLOPE)
					item->goal_anim_state = AS_CRAWL;
			}
			else if (input & IN_BACK)
			{
				height = LaraCeilingFront(item, item->pos.y_rot, -300, 128);

				if (height == NO_HEIGHT || height > 256)
					return;

				height = LaraFloorFront(item, item->pos.y_rot, -300);

				if (height < 255 && height > -255 && height_type != BIG_SLOPE)
					item->goal_anim_state = AS_CRAWLBACK;
				else
				{
					if (input & IN_ACTION && lara.gun_status == LG_NO_ARMS && height > 768 && !slope)
					{
						x = item->pos.x_pos;
						z = item->pos.z_pos;
						item->pos.x_pos -= 100 * phd_sin(coll->facing) >> W2V_SHIFT;
						item->pos.z_pos -= 100 * phd_cos(coll->facing) >> W2V_SHIFT;
						itemlist = (ITEM_INFO**)&tsv_buffer[0];
						meshlist = (MESH_INFO**)&tsv_buffer[1024];
						collided = GetCollidedObjects(item, 100, 1, itemlist, meshlist, 0);
						item->pos.x_pos = x;
						item->pos.z_pos = z;

						if (!collided)
						{
							switch ((ushort)(item->pos.y_rot + 0x2000) / 0x4000)
							{
							case 0:
								item->pos.y_rot = 0;
								item->pos.z_pos = (item->pos.z_pos & ~0x3FF) + 225;
								break;

							case 1:
								item->pos.y_rot = 16384;
								item->pos.x_pos = (item->pos.x_pos & ~0x3FF) + 225;
								break;

							case 2:
								item->pos.y_rot = -32768;
								item->pos.z_pos = (item->pos.z_pos | 0x3FF) - 225;
								break;

							case 3:
								item->pos.y_rot = -16384;
								item->pos.x_pos = (item->pos.x_pos | 0x3FF) - 225;
								break;
							}

							item->goal_anim_state = AS_CRAWL2HANG;
							lara.gun_status = LG_HANDS_BUSY;
						}
					}
				}
			}
			else if (input & IN_LEFT)
			{
				item->anim_number = 269;
				item->frame_number = anims[269].frame_base;
				item->current_anim_state = AS_ALL4TURNL;
				item->goal_anim_state = AS_ALL4TURNL;
			}
			else if (input & IN_RIGHT)
			{
				item->anim_number = 270;
				item->frame_number = anims[270].frame_base;
				item->current_anim_state = AS_ALL4TURNR;
				item->goal_anim_state = AS_ALL4TURNR;
			}

			if (input & IN_JUMP && lara.gun_status == LG_NO_ARMS)
			{
				height = LaraFloorFront(item, item->pos.y_rot, 768);
				ceiling = LaraCeilingFront(item, item->pos.y_rot, 768, 512);

				if (height >= crawljump_pitdepth && ceiling != NO_HEIGHT && ceiling <= 0)
				{
					s.x = item->pos.x_pos;
					s.y = item->pos.y_pos - 96;
					s.z = item->pos.z_pos;
					s.room_number = item->room_number;

					d.x = s.x + ((phd_sin(item->pos.y_rot) * 768) >> W2V_SHIFT);
					d.z = s.z + ((phd_cos(item->pos.y_rot) * 768) >> W2V_SHIFT);
					d.y = s.y + 160;

					if (LOS(&s, &d))
					{
						target = ObjectOnLOS2(&s, &d, &v, &StaticMesh);

						if (target == 999)
						{
							item->goal_anim_state = AS_FORWARDJUMP;
							lara.gun_status = LG_HANDS_BUSY;
						}
					}
				}
			}

			if (input & IN_SPRINT)
			{
				height = LaraFloorFront(item, item->pos.y_rot, crawldash_lookahead);
				ceiling = LaraCeilingFront(item, item->pos.y_rot, crawldash_lookahead, 512);

				if (height > -crawldash_step_up && height < crawldash_step_down && ceiling < 112)
				{
					s.x = item->pos.x_pos;
					s.y = item->pos.y_pos - 96;
					s.z = item->pos.z_pos;
					s.room_number = item->room_number;

					d.x = s.x + ((phd_sin(item->pos.y_rot) * 1024) >> W2V_SHIFT);
					d.z = s.z + ((phd_cos(item->pos.y_rot) * 1024) >> W2V_SHIFT);
					d.y = s.y;

					if (LOS(&s, &d))
					{
						target = ObjectOnLOS2(&s, &d, &v, &StaticMesh);

						if (target == 999)
							item->goal_anim_state = AS_DASH;
					}
				}
			}
		}
	}
	else
		item->goal_anim_state = AS_DUCK;
}

void lara_as_duckcrawl()
{
	ITEM_INFO* item = lara_item;
	COLL_INFO* coll = lara_coll;

	camera.target_elevation = -4186;

	if (input & IN_FORWARD && lara.water_status != LW_WADE)
	{
		if (input & IN_DUCK || lara.keep_ducked)
		{
			if (input & IN_LEFT)
			{
				lara.turn_rate -= 409;

				if (lara.turn_rate < -546)
					lara.turn_rate = -546;
			}
			else if (input & IN_RIGHT)
			{
				lara.turn_rate += 409;

				if (lara.turn_rate > 546)
					lara.turn_rate = 546;
			}
		}
	}
	else
		item->goal_anim_state = AS_ALL4S;
}

void lara_col_duckcrawl(void)
{
	ITEM_INFO* item = lara_item;
	COLL_INFO* coll = lara_coll;

	ShiftItem(item, coll);

	if (coll->mid_floor != NO_HEIGHT && coll->mid_floor > -256)
		item->pos.y_pos += coll->mid_floor;

	coll->radius *= 4;
	GetCollisionInfo(coll, item->pos.x_pos, item->pos.y_pos, item->pos.z_pos, item->room_number, 400);

	lara.keep_ducked = (coll->front_ceiling >= -362 || coll->mid_ceiling >= -362);

	if (!(input & IN_DUCK) && !lara.keep_ducked)
		item->goal_anim_state = AS_RUN;
}

long LaraTestClimbUpPosDuck(ITEM_INFO* item, long front, long right, long* shift, long* ledge, long* testDuck)
{
	FLOOR_INFO* floor;
	long angle, x, y, z, xfront, zfront, h, c;
	short room_number;

	xfront = 0;
	zfront = 0;
	y = item->pos.y_pos - 768;
	angle = (ushort)(item->pos.y_rot + 0x2000) / 0x4000;

	switch (angle)
	{
	case 0:
		x = right + item->pos.x_pos;
		z = front + item->pos.z_pos;
		zfront = 4;
		break;

	case 1:
		x = front + item->pos.x_pos;
		z = item->pos.z_pos - right;
		xfront = 4;
		break;

	case 2:
		x = item->pos.x_pos - right;
		z = item->pos.z_pos - front;
		zfront = -4;
		break;

	default:
		x = item->pos.x_pos - front;
		z = right + item->pos.z_pos;
		xfront = -4;
		break;
	}

	*shift = 0;
	room_number = item->room_number;
	floor = GetFloor(x, y, z, &room_number);
	c = 256 - y + GetCeiling(floor, x, y, z);

	if (c > 70)
		return 0;

	if (c > 0)
		*shift = c;

	floor = GetFloor(x + xfront, y, z + zfront, &room_number);
	h = GetHeight(floor, x + xfront, y, z + zfront);

	if (h == NO_HEIGHT)
	{
		*ledge = NO_HEIGHT;
		return 1;
	}

	h -= y;
	*ledge = h;

	if (h > 128)
	{
		c = GetCeiling(floor, x + xfront, y, z + zfront) - y;

		if (c >= 512)
			return 1;

		if (h - c > 762)
		{
			*shift = h;
			*testDuck = 0;
			return -1;
		}
		else if (h - c > 400)
		{
			*shift = h;
			*testDuck = 1;
			return -1;
		}
	}
	else
	{
		if (h > 0 && h > * shift)
			*shift = h;

		room_number = item->room_number;
		GetFloor(x, y + 512, z, &room_number);
		floor = GetFloor(x + xfront, y + 512, z + zfront, &room_number);
		c = GetCeiling(floor, x + xfront, y + 512, z + zfront) - y;

		if (c <= h || c >= 512)
			return 1;
	}

	return 0;
}

long lara_col_climbstnc_new(void)
{
	long result_r, result_l, shift_r, shift_l, ledge_r, ledge_l;
	long testDuckR, testDuckL;
	ITEM_INFO* item = lara_item;
	COLL_INFO* coll = lara_coll;

	if (item->goal_anim_state == AS_NULL || item->goal_anim_state == AS_ALL4S)
		return 0;

	item->goal_anim_state = AS_CLIMBSTNC;
	result_r = LaraTestClimbUpPosDuck(item, coll->radius, coll->radius + 120, &shift_r, &ledge_r, &testDuckR);
	result_l = LaraTestClimbUpPosDuck(item, coll->radius, coll->radius - 120, &shift_l, &ledge_l, &testDuckL);

	if (!result_r || !result_l)
		return 0;

	if (result_r < 0 || result_l < 0)
	{
		if (testDuckR || testDuckL)
		{
			if (ABS(ledge_l - ledge_r) <= 120)
			{
				item->goal_anim_state = AS_ALL4S;
				item->pos.y_pos += (ledge_l + ledge_r) / 2 - 256;
				return 1;
			}
		}
		if (ABS(ledge_l - ledge_r) <= 120)
		{
			item->goal_anim_state = AS_NULL;
			item->pos.y_pos += (ledge_l + ledge_r) / 2 - 256;
			return 1;
		}
	}

	if (shift_r)
	{
		if (shift_l)
		{
			if (shift_r < 0 != shift_l < 0)
				return 1;

			if (shift_r < 0 && shift_r < shift_l)
				shift_l = shift_r;
			else if (shift_r > 0 && shift_r > shift_l)
				shift_l = shift_r;
		}
		else
			shift_l = shift_r;
	}

	item->goal_anim_state = AS_CLIMBING;
	item->pos.y_pos += shift_l;
	return 0;
}

void lara_col_climbing_new(long yshift)
{
	long result_r, result_l, shift_r, shift_l, ledge_r, ledge_l;
	long testDuckR, testDuckL;
	ITEM_INFO* item = lara_item;
	COLL_INFO* coll = lara_coll;

	item->pos.y_pos += yshift - 256;
	result_r = LaraTestClimbUpPosDuck(item, coll->radius, coll->radius + 120, &shift_r, &ledge_r, &testDuckR);
	result_l = LaraTestClimbUpPosDuck(item, coll->radius, -(coll->radius + 120), &shift_l, &ledge_l, &testDuckL);
	item->pos.y_pos += 256;

	if (result_r && result_l && input & IN_FORWARD)
	{
		if (result_r < 0 || result_l < 0)
		{
			item->goal_anim_state = AS_CLIMBSTNC;
			AnimateLara(item);

			if (testDuckR || testDuckL)
			{
				if (ABS(ledge_l - ledge_r) <= 120)
				{
					item->goal_anim_state = AS_ALL4S;
					item->pos.y_pos += (ledge_l + ledge_r) / 2 - 256;
					return;
				}
			}
			if (ABS(ledge_r - ledge_l) <= 120)
			{
				item->goal_anim_state = AS_NULL;
				item->pos.y_pos += (ledge_r + ledge_l) / 2 - 256;
			}
		}
		else
		{
			item->goal_anim_state = AS_CLIMBING;
			item->pos.y_pos -= yshift;
		}
	}
	else
	{
		item->goal_anim_state = AS_CLIMBSTNC;

		if (yshift)
			AnimateLara(item);
	}
}

long lara_as_run_torch(void)
{
	ITEM_INFO* item = lara_item;

	if (lara.gun_status == LG_NO_ARMS || lara.gun_type == WEAPON_NONE || lara.gun_type == WEAPON_PISTOLS ||
			lara.gun_type == WEAPON_REVOLVER || lara.gun_type == WEAPON_UZI || lara.gun_type == WEAPON_FLARE ||
			lara.gun_type == WEAPON_TORCH)
	{
		item->goal_anim_state = AS_DUCK;
		return 1;
	}

	return 0;
}

long lara_as_stop_torch(void)
{
	ITEM_INFO* item = lara_item;

	if (lara.gun_status == LG_NO_ARMS || lara.gun_type == WEAPON_NONE || lara.gun_type == WEAPON_PISTOLS ||
			lara.gun_type == WEAPON_REVOLVER || lara.gun_type == WEAPON_UZI || lara.gun_type == WEAPON_FLARE ||
			lara.gun_type == WEAPON_TORCH)
	{
		return 1;
	}

	return 0;
}

long DuckCrawlPickupAnim(ITEM_INFO* item)
{
	ITEM_INFO* l = lara_item;

	if (l->current_anim_state == AS_DUCK)
	{
		AlignLaraPosition(&PickUpPosition, item, l);

		if (item->object_number == FLARE_ITEM)
		{
			l->anim_number = 312;
			l->current_anim_state = AS_FLAREPICKUP;
		}
		else
		{
			l->anim_number = 291;
			l->current_anim_state = AS_PICKUP;
		}

		return 2;
	}
	else if (l->current_anim_state == AS_ALL4S)
	{
		if (lara.gun_status == LG_NO_ARMS)
		{
			AlignLaraPosition(&PickUpPosition, item, l);

			if (item->object_number == FLARE_ITEM)
			{
				l->anim_number = crawlpickup_flare_anim;
				l->current_anim_state = AS_FLAREPICKUP;
			}
			else if (item->object_number == BURNING_TORCH_ITEM)
			{
				l->anim_number = crawlpickup_torch_anim;
				l->current_anim_state = AS_PICKUP;
			}
			else
			{
				l->anim_number = crawlpickup_anim;
				l->current_anim_state = AS_PICKUP;
			}

			return 2;
		}

		return 1;
	}

	return 0;
}

long DuckCrawlPickupFrame(void)
{
	ITEM_INFO* l = lara_item;

	if (l->frame_number == anims[crawlpickup_torch_anim].frame_base + crawlpickup_torch_frame)
		return 1;
	else if (l->frame_number == anims[crawlpickup_anim].frame_base + crawlpickup_frame)
		return 1;

	return 0;
}

long DuckCrawlFlarePickupFrame(void)
{
	ITEM_INFO* l = lara_item;

	if (l->current_anim_state == AS_FLAREPICKUP)
	{
		if (l->frame_number == anims[crawlpickup_flare_anim].frame_base + crawlpickup_flare_frame)
			return 1;
		else if (l->frame_number == anims[204].frame_base + 58)
			return 1;
	}

	return 0;
}

void speedup(void)
{
	framecount++;
}

void speeddn(void)
{
	framecount--;
}

void TiltHer(ITEM_INFO* item, long rad, long height)
{
	FLOOR_INFO* floor;
	FVECTOR plane;
	long wy[4];
	long yT, y, wx, wz, dy;
	short room_number, rotX, rotZ;

	yT = item->pos.y_pos - height - 162;
	room_number = item->room_number;
	floor = GetFloor(item->pos.x_pos, yT, item->pos.z_pos, &room_number);
	y = GetHeight(floor, item->pos.x_pos, yT, item->pos.z_pos);

	if (!OnObject)
	{
		plane.x = -(float)tiltyoff / 4;
		plane.y = -(float)tiltxoff / 4;
	}
	else
	{
		wx = item->pos.x_pos & 0xFFFFFC00 | 0xFF;
		wz = item->pos.z_pos & 0xFFFFFC00 | 0xFF;
		room_number = item->room_number;
		floor = GetFloor(wx, yT, wz, &room_number);
		wy[0] = GetHeight(floor, wx, yT, wz);
		wx = item->pos.x_pos & 0xFFFFFC00 | 0x2FF;
		wz = item->pos.z_pos & 0xFFFFFC00 | 0xFF;
		room_number = item->room_number;
		floor = GetFloor(wx, yT, wz, &room_number);
		wy[1] = GetHeight(floor, wx, yT, wz);
		wx = item->pos.x_pos & 0xFFFFFC00 | 0xFF;
		wz = item->pos.z_pos & 0xFFFFFC00 | 0x2FF;
		room_number = item->room_number;
		floor = GetFloor(wx, yT, wz, &room_number);
		wy[2] = GetHeight(floor, wx, yT, wz);
		plane.x = (float)(wy[1] - wy[0]) / 512;
		plane.y = (float)(wy[2] - wy[0]) / 512;
	}

	plane.z = item->pos.y_pos - plane.x * item->pos.x_pos - plane.y * item->pos.z_pos;

	for (int i = 0; i < 4; i++)
	{
		wx = item->pos.x_pos + (rad * phd_sin(item->pos.y_rot + 16384 * i) >> W2V_SHIFT);
		wz = item->pos.z_pos + (rad * phd_cos(item->pos.y_rot + 16384 * i) >> W2V_SHIFT);
		room_number = item->room_number;
		floor = GetFloor(wx, yT, wz, &room_number);
		wy[i] = GetHeight(floor, wx, yT, wz);

		if (ABS(y - wy[i]) > rad / 2)
			wy[i] = (long)(plane.x * wx + plane.y * wz + plane.z);
	}

	dy = wy[0] - wy[2];
	rotX = (short)phd_atan(2 * rad, dy);

	if (dy > 0 && rotX > 0 || dy < 0 && rotX < 0)
		rotX = -rotX;

	dy = wy[3] - wy[1];
	rotZ = (short)phd_atan(2 * rad, dy);

	if (dy > 0 && rotZ > 0 || dy < 0 && rotZ < 0)
		rotZ = -rotZ;

	if (ABS(rotX - item->pos.x_rot) < 546)
		item->pos.x_rot = rotX;
	else if (rotX > item->pos.x_rot)
		item->pos.x_rot += 546;
	else if (rotX < item->pos.x_rot)
		item->pos.x_rot -= 546;

	if (item->pos.x_rot > 8192)
		item->pos.x_rot = 8192;
	else if (item->pos.x_rot < -8192)
		item->pos.x_rot = -8192;

	if (ABS(rotZ - item->pos.z_rot) < 546)
		item->pos.z_rot = rotZ;
	else if (rotZ > item->pos.z_rot)
		item->pos.z_rot += 546;
	else if (rotZ < item->pos.z_rot)
		item->pos.z_rot -= 546;

	if (item->pos.z_rot > 8192)
		item->pos.z_rot = 8192;
	else if (item->pos.z_rot < -8192)
		item->pos.z_rot = -8192;
}

void GetCollisionInfoAndTiltHer(COLL_INFO* coll, long x, long y, long z, short room_number, long hite)
{
	GetCollisionInfo(coll, x, y, z, room_number, hite);
	TiltHer(lara_item, 140, 400);
}

void AlignCrawlPickupPosition(PHD_VECTOR* pos, ITEM_INFO* item, ITEM_INFO* l)
{
	short xrot, zrot;

	if (pPatchMap[332])
	{
		xrot = item->pos.x_rot;
		zrot = item->pos.x_rot;
		item->pos.x_rot = l->pos.x_rot;
		item->pos.z_rot = l->pos.z_rot;
	}

	AlignLaraPosition(pos, item, l);

	if (pPatchMap[332])
	{
		item->pos.x_rot = xrot;
		item->pos.z_rot = zrot;
	}
}

void GetLaraCollisionInfoAndTiltHer(ITEM_INFO* item, COLL_INFO* coll)
{
	GetLaraCollisionInfo(item, coll);

	if (item->current_anim_state == AS_PICKUP && item->anim_number == ANIM_CRAWLPICKUP && (pPatchMap[34] || pPatchMap[216]))
		TiltHer(lara_item, 140, 400);
}

long TrainTestHeight(ITEM_INFO* item, long x, long z, short* room_number)
{
	FLOOR_INFO* floor;
	PHD_VECTOR pos;
	long s, c;

	s = phd_sin(item->pos.y_rot);
	c = phd_cos(item->pos.y_rot);
	pos.x = item->pos.x_pos + ((z * s + x * c) >> W2V_SHIFT);
	pos.y = ((x * phd_sin(item->pos.z_rot)) >> W2V_SHIFT) + (item->pos.y_pos - ((z * phd_sin(item->pos.x_rot)) >> W2V_SHIFT));
	pos.z = item->pos.z_pos + ((z * c - x * s) >> W2V_SHIFT);
	*room_number = item->room_number;
	floor = GetFloor(pos.x, pos.y, pos.z, room_number);
	return GetHeight(floor, pos.x, pos.y, pos.z);
}

void TrainCollision(short item_number, ITEM_INFO* l, COLL_INFO* coll)
{
	ITEM_INFO* item;
	long x, y, z;

	item = &items[item_number];

	if (!TriggerActive(item))
	{
		ObjectCollision(item_number, l, coll);
		return;
	}

	if (!TestBoundsCollide(item, l, coll->radius) || !TestCollision(item, l))
		return;

	SoundEffect(SFX_LARA_GENERAL_DEATH, &l->pos, SFX_ALWAYS);
	SoundEffect(SFX_LARA_FALLDEATH, &l->pos, SFX_ALWAYS);

	if (train_sfx_tube_loop != -1)
		StopSoundEffect(train_sfx_tube_loop);

	if (train_animation_trainkill != -1)
	{
		l->anim_number = train_animation_trainkill;
		l->frame_number = anims[l->anim_number].frame_base;
		l->current_anim_state = AS_DEATH;
	}

	l->goal_anim_state = AS_DEATH;
	l->hit_points = 0;
	l->pos.y_rot = item->pos.y_rot;
	l->gravity_status = 0;
	l->fallspeed = 0;
	l->speed = 0;
	AnimateItem(l);
	lara.gun_status = LG_HANDS_BUSY;
	lara.gun_type = WEAPON_NONE;
	lara.hit_direction = -1;
	lara.air = -1;
	item->item_flags[1] = 160;	//train speed
	x = l->pos.x_pos + (256 * phd_sin(item->pos.y_rot) >> W2V_SHIFT);
	y = l->pos.y_pos - 512;
	z = l->pos.z_pos + (256 * phd_cos(item->pos.y_rot) >> W2V_SHIFT);
	DoLotsOfBlood(x, y, z, 1024, item->pos.y_rot, l->room_number, 15);
}

void TrainControl(short item_number)
{
	ITEM_INFO* item;
	FLOOR_INFO* floor;
	long s, c, mid, front, x, y, z;
	short room_number;

	item = &items[item_number];

	if (!TriggerActive(item))
		return;

	if (!item->item_flags[0])
	{
		item->item_flags[0] = 260;
		item->item_flags[1] = 260;
	}

	s = phd_sin(item->pos.y_rot);
	c = phd_cos(item->pos.y_rot);
	item->pos.x_pos += (item->item_flags[1] * s) >> W2V_SHIFT;
	item->pos.z_pos += (item->item_flags[1] * c) >> W2V_SHIFT;
	front = TrainTestHeight(item, 0, 5120, &room_number);
	mid = TrainTestHeight(item, 0, 0, &room_number);
	item->pos.y_pos = mid;

	if (item->pos.y_pos == NO_HEIGHT)
	{
		KillItem(item_number);
		return;
	}

	item->pos.y_pos -= 32;
	room_number = item->room_number;
	GetFloor(item->pos.x_pos, item->pos.y_pos, item->pos.z_pos, &room_number);

	if (room_number != item->room_number)
		ItemNewRoom(item_number, room_number);

	item->pos.x_rot = (short)((mid - front) << 1);

	x = item->pos.x_pos + ((3072 * s) >> W2V_SHIFT);
	y = item->pos.y_pos;
	z = item->pos.z_pos + ((3072 * c) >> W2V_SHIFT);
	TriggerDynamic(x, y, z, 16, 31, 31, 31);

	if (item->item_flags[1] == 260)
	{
		if (train_sfx_tube_loop != -1)
			SoundEffect(train_sfx_tube_loop, &item->pos, SFX_ALWAYS);

		return;
	}

	//not full speed means train hit lara
	item->item_flags[1] -= 48;

	if (item->item_flags[1] < 0)
		item->item_flags[1] = 0;

	if (!UseForcedFixedCamera)
	{
		ForcedFixedCamera.x = item->pos.x_pos + (train_distance_camera * s >> W2V_SHIFT);
		ForcedFixedCamera.z = item->pos.z_pos + (train_distance_camera * c >> W2V_SHIFT);
		room_number = item->room_number;
		floor = GetFloor(ForcedFixedCamera.x, item->pos.y_pos - 512, ForcedFixedCamera.z, &room_number);
		ForcedFixedCamera.y = GetHeight(floor, ForcedFixedCamera.x, item->pos.y_pos - 512, ForcedFixedCamera.z);
		ForcedFixedCamera.room_number = room_number;
		UseForcedFixedCamera = 1;
	}
}

void setup_trains(void)
{
	OBJECT_INFO* obj;

	for (int i = 0; i < 16; i++)
	{
		if (train_object[i] != -1)
		{
			obj = &objects[train_object[i]];
			obj->initialise = 0;
			obj->collision = TrainCollision;
			obj->control = TrainControl;
			obj->save_position = 1;
			obj->save_flags = 1;
			obj->save_anim = 1;
		}
	}
}

ushort GetBatEmitter(BAT_STRUCT* bat)
{
	ushort emitter;

	emitter = bat->flags;
	emitter |= bat->pad << 8;
	return emitter;
}

void SetBatEmitter(BAT_STRUCT* bat, ushort emitter)
{
	bat->flags = emitter & 0xFF;
	bat->pad = emitter >> 8;
}

long UpdateBats(short item_number)
{
	BAT_STRUCT* bat;
	ITEM_INFO* item;
	long on;

	item = &items[item_number];

	if (item->room_number != camera.pos.room_number)
		ItemNewRoom(item_number, camera.pos.room_number);

	on = 0;

	for (int i = 0; i < 64; i++)
	{
		bat = &bat_effect[i];

		if (!bat->life || GetBatEmitter(bat) != item_number)
			continue;

		on = 1;

		for (int j = 0; j < 16; j++)
		{
			if (bat_emitter_object[j] == item->object_number)
			{
				if (bat_mesh_sound[j] != -1 && !(i & 3) && !(GetRandomControl() & 7))
					SoundEffect(bat_mesh_sound[j], (PHD_3DPOS*)&bat->x, SFX_DEFAULT);

				bat->WingYoff = (bat->WingYoff + 1) % objects[bat_mesh_object[j]].nmeshes;
				break;
			}
		}

		bat->x -= (bat->speed * rcossin_tbl[(bat->angle << 1) + 1]) >> W2V_SHIFT;
		bat->y -= GetRandomControl() & 3;
		bat->z += (bat->speed * rcossin_tbl[bat->angle << 1]) >> W2V_SHIFT;

		if (bat->life < 128)
		{
			bat->y += -4 - (i >> 1);

			if (!(GetRandomControl() & 3))
			{
				bat->angle = (bat->angle + (GetRandomControl() & 0xFF) - 128) & 0xFFF;
				bat->speed += GetRandomControl() & 3;
			}
		}

		bat->speed += 12;

		if (bat->speed > 300)
			bat->speed = 300;

		if (wibble & 4)
			bat->life--;
	}

	return on;
}

void DrawBats(ITEM_INFO* item)
{
	BAT_STRUCT* bat;
	short** meshpp;
	short item_number;

	item_number = item - items;

	for (int i = 0; i < 64; i++)
	{
		bat = &bat_effect[i];

		if (!bat->life || GetBatEmitter(bat) != item_number)
			continue;

		phd_PushMatrix();
		phd_TranslateAbs(bat->x, bat->y, bat->z);
		phd_RotY(bat->angle << 4);

		for (int j = 0; j < 16; j++)
		{
			if (bat_emitter_object[j] == item->object_number)
			{
				meshpp = &meshes[objects[bat_mesh_object[j]].mesh_index + 2 * bat->WingYoff];
				phd_PutPolygons(*meshpp, 0);
				break;
			}
		}

		phd_PopMatrix();
	}
}

void TriggerBats(short item_number)
{
	BAT_STRUCT* bat;
	BAT_STRUCT* bat2;
	ITEM_INFO* item;
	short ang;

	item = &items[item_number];
	ang = ((item->pos.y_rot >> 4) - 1024) & 0xFFF;

	for (int i = 0; i < item->trigger_flags && i < 64; i++)
	{
		bat = &bat_effect[0];

		for (int j = 1; bat->life && j < 64; j++)
		{
			bat2 = &bat_effect[j];

			if (bat2->life < bat->life)
				bat = bat2;
		}

		bat->x = (GetRandomControl() & 0x1FF) + item->pos.x_pos - 256;
		bat->y = item->pos.y_pos - (GetRandomControl() & 0xFF) + 256;
		bat->z = (GetRandomControl() & 0x1FF) + item->pos.z_pos - 256;
		bat->angle = ((GetRandomControl() & 0x7F) + ang - 64) & 0xFFF;
		bat->speed = (GetRandomControl() & 0x1F) + 64;
		bat->WingYoff = GetRandomControl() & 0x3F;
		bat->life = (GetRandomControl() & 7) + 144;
		SetBatEmitter(bat, item_number);
	}
}

void BatEmitterControl(short item_number)
{
	ITEM_INFO* item;

	item = &items[item_number];

	if (!TriggerActive(item))
		return;

	if (!item->item_flags[0])
	{
		TriggerBats(item_number);
		item->item_flags[0] = 1;
	}

	if (!UpdateBats(item_number))
		KillItem(item_number);
}

void setup_bats(void)
{
	OBJECT_INFO* obj;

	for (int i = 0; i < 16; i++)
	{
		if (bat_emitter_object[i] != -1 && bat_mesh_object[i] != -1)
		{
			obj = &objects[bat_emitter_object[i]];
			obj->initialise = 0;
			obj->collision = 0;
			obj->control = BatEmitterControl;
			obj->draw_routine = DrawBats;
			obj->using_drawanimating_item = 0;
			obj->save_flags = 1;
		}
	}
}

void SpringBoardControl(short item_number) {
	ITEM_INFO *item;

	item = &items[item_number];
	if (!item->current_anim_state &&
		item->pos.y_pos == lara_item->pos.y_pos &&
		!((item->pos.x_pos ^ lara_item->pos.x_pos) & 0xFFFFFC00) &&
		!((item->pos.z_pos ^ lara_item->pos.z_pos) & 0xFFFFFC00))
	{
		if (lara_item->hit_points > 0)
		{
			if (lara_item->current_anim_state == AS_BACK || lara_item->current_anim_state == AS_FASTBACK)
				lara_item->speed = -lara_item->speed;

			for (int i = 0; i < 16; i++)
			{
				if (springboard_object[i] == item->object_number)
				{
					if (springboard_fallspeed[i] == -1)
						lara_item->fallspeed = -240;
					else
						lara_item->fallspeed = -springboard_fallspeed[i];

					break;
				}
			}

			lara_item->gravity_status = 1;
			lara_item->anim_number = 34;
			lara_item->frame_number = anims[lara_item->anim_number].frame_base;
			lara_item->current_anim_state = AS_FORWARDJUMP;
			lara_item->goal_anim_state = AS_FORWARDJUMP;
			item->goal_anim_state = 1;
			AnimateItem(item);
		}
	}
	else
		AnimateItem(item);
}

void setup_springboards(void)
{
	OBJECT_INFO* obj;

	for (int i = 0; i < 16; i++)
	{
		if (springboard_object[i] != -1)
		{
			obj = &objects[springboard_object[i]];
			obj->initialise = 0;
			obj->collision = 0;
			obj->control = SpringBoardControl;
			obj->save_anim = 1;
			obj->save_flags = 1;
		}
	}
}

float Sin(long angle)
{
	angle = (short)angle;

	if (angle >= 0)
	{
		if (angle < 16384)
			return cossin_tbl[2 * angle];

		return cossin_tbl[65536 - 2 * angle];
	}

	if (angle >= -16384)
		return -cossin_tbl[-2 * angle];

	return -cossin_tbl[2 * angle + 65536];
}

float Cos(long angle)
{
	angle = (short)angle;

	if (angle >= 0)
	{
		if (angle < 16384)
			return cossin_tbl[32768 - 2 * angle];

		return -cossin_tbl[2 * angle - 32768];
	}

	if (angle >= -16384)
		return cossin_tbl[2 * angle + 32768];

	return -cossin_tbl[-2 * angle - 32768];
}

float SinHalf(long angle)
{
	angle = (short)angle;

	if (angle >= 0)
		return cossin_tbl[angle];

	return -cossin_tbl[-angle];
}

float CosHalf(long angle)
{
	angle = (short)angle;

	if (angle >= 0)
		return cossin_tbl[32768 - angle];

	return cossin_tbl[angle + 32768];
}

long ConfirmSP(long sp, long push)
{
	if (sp < 0 || sp % indices_count || sp / indices_count >= 20 - push)
		return -1;

	return sp;
}

long ConfirmLSP(long lsp)
{
	if (lsp < 0 || lsp % indices_count || lsp / indices_count >= 15)
		return -1;

	return lsp;
}

void SetInDrawLoop(void)
{
	in_draw_loop = 1;
}

void ClearInDrawLoop(void)
{
	in_draw_loop = 0;
}

void GenerateQuaternion(float* q, ushort *prot)
{
	float sx, cx, sy, cy, sz, cz;
	long angles;
	short angle, x, y, z;

	switch (prot[0] >> 14)
	{
	case 0:
		angles = (prot[0] << 16) + prot[1];
		x = ((angles >> 20) & 0x3FF) << 6;
		y = ((angles >> 10) & 0x3FF) << 6;
		z = (angles & 0x3FF) << 6;
		sx = SinHalf(x);
		cx = CosHalf(x);
		sy = SinHalf(y);
		cy = CosHalf(y);
		sz = SinHalf(z);
		cz = CosHalf(z);
		q[0] = sx * sy * sz + cx * cy * cz;
		q[1] = sx * cy * cz + cx * sy * sz;
		q[2] = cx * sy * cz - sx * cy * sz;
		q[3] = cx * cy * sz - sx * sy * cz;
		break;

	case 1:
		angle = (short)((prot[0] & 0xFFF) << 4);
		q[0] = CosHalf(angle);
		q[1] = SinHalf(angle);
		q[2] = 0;
		q[3] = 0;
		break;

	case 2:
		angle = (short)((prot[0] & 0xFFF) << 4);
		q[0] = CosHalf(angle);
		q[1] = 0;
		q[2] = SinHalf(angle);
		q[3] = 0;
		break;

	default:
		angle = (short)((prot[0] & 0xFFF) << 4);
		q[0] = CosHalf(angle);
		q[1] = 0;
		q[2] = 0;
		q[3] = SinHalf(angle);
		break;
	}
}

void aPushMatrix(float* aMXPtr)
{
	aMXPtr[indices_count + M00] = aMXPtr[M00];
	aMXPtr[indices_count + M01] = aMXPtr[M01];
	aMXPtr[indices_count + M02] = aMXPtr[M02];
	aMXPtr[indices_count + M03] = aMXPtr[M03];
	aMXPtr[indices_count + M10] = aMXPtr[M10];
	aMXPtr[indices_count + M11] = aMXPtr[M11];
	aMXPtr[indices_count + M12] = aMXPtr[M12];
	aMXPtr[indices_count + M13] = aMXPtr[M13];
	aMXPtr[indices_count + M20] = aMXPtr[M20];
	aMXPtr[indices_count + M21] = aMXPtr[M21];
	aMXPtr[indices_count + M22] = aMXPtr[M22];
	aMXPtr[indices_count + M23] = aMXPtr[M23];
}

void aTranslateAbs(float* aMXPtr, long x, long y, long z)
{
	float fx, fy, fz;

	fx = x - aCameraMatrix[M03];
	fy = y - aCameraMatrix[M13];
	fz = z - aCameraMatrix[M23];
	aMXPtr[M03] = fx * aMXPtr[M00] + fy * aMXPtr[M01] + fz * aMXPtr[M02];
	aMXPtr[M13] = fx * aMXPtr[M10] + fy * aMXPtr[M11] + fz * aMXPtr[M12];
	aMXPtr[M23] = fx * aMXPtr[M20] + fy * aMXPtr[M21] + fz * aMXPtr[M22];
}

void aTranslateRel(float* aMXPtr, long x, long y, long z)
{
	aMXPtr[M03] += x * aMXPtr[M00] + y * aMXPtr[M01] + z * aMXPtr[M02];
	aMXPtr[M13] += x * aMXPtr[M10] + y * aMXPtr[M11] + z * aMXPtr[M12];
	aMXPtr[M23] += x * aMXPtr[M20] + y * aMXPtr[M21] + z * aMXPtr[M22];
}

void aRotX(float* aMXPtr, short angle)
{
	float sin, cos, mx1, mx2;

	if (angle)
	{
		sin = Sin(angle);
		cos = Cos(angle);

		mx1 = cos * aMXPtr[M01] + sin * aMXPtr[M02];
		mx2 = cos * aMXPtr[M02] - sin * aMXPtr[M01];
		aMXPtr[M01] = mx1;
		aMXPtr[M02] = mx2;

		mx1 = cos * aMXPtr[M11] + sin * aMXPtr[M12];
		mx2 = cos * aMXPtr[M12] - sin * aMXPtr[M11];
		aMXPtr[M11] = mx1;
		aMXPtr[M12] = mx2;

		mx1 = cos * aMXPtr[M21] + sin * aMXPtr[M22];
		mx2 = cos * aMXPtr[M22] - sin * aMXPtr[M21];
		aMXPtr[M21] = mx1;
		aMXPtr[M22] = mx2;
	}
}

void aRotY(float* aMXPtr, short angle)
{
	float sin, cos, mx1, mx2;

	if (angle)
	{
		sin = Sin(angle);
		cos = Cos(angle);

		mx1 = cos * aMXPtr[M00] - sin * aMXPtr[M02];
		mx2 = cos * aMXPtr[M02] + sin * aMXPtr[M00];
		aMXPtr[M00] = mx1;
		aMXPtr[M02] = mx2;

		mx1 = cos * aMXPtr[M10] - sin * aMXPtr[M12];
		mx2 = cos * aMXPtr[M12] + sin * aMXPtr[M10];
		aMXPtr[M10] = mx1;
		aMXPtr[M12] = mx2;

		mx1 = cos * aMXPtr[M20] - sin * aMXPtr[M22];
		mx2 = cos * aMXPtr[M22] + sin * aMXPtr[M20];
		aMXPtr[M20] = mx1;
		aMXPtr[M22] = mx2;
	}
}

void aRotZ(float* aMXPtr, short angle)
{
	float sin, cos, mx1, mx2;

	if (angle)
	{
		sin = Sin(angle);
		cos = Cos(angle);

		mx1 = cos * aMXPtr[M00] + sin * aMXPtr[M01];
		mx2 = cos * aMXPtr[M01] - sin * aMXPtr[M00];
		aMXPtr[M00] = mx1;
		aMXPtr[M01] = mx2;

		mx1 = cos * aMXPtr[M10] + sin * aMXPtr[M11];
		mx2 = cos * aMXPtr[M11] - sin * aMXPtr[M10];
		aMXPtr[M10] = mx1;
		aMXPtr[M11] = mx2;

		mx1 = cos * aMXPtr[M20] + sin * aMXPtr[M21];
		mx2 = cos * aMXPtr[M21] - sin * aMXPtr[M20];;
		aMXPtr[M20] = mx1;
		aMXPtr[M21] = mx2;
	}
}

void aRotYXZPack(float* aMXPtr, long angles)	//angles is XYZ
{
	short angle;

	angle = (angles >> 10) & 0x3FF;//second ten bits, Y
	angle <<= 6;
	aRotY(aMXPtr, angle);
	angle = (angles >> 20) & 0x3FF;//first ten bits, X
	angle <<= 6;
	aRotX(aMXPtr, angle);
	angle = angles & 0x3FF;//last ten, Z
	angle <<= 6;
	aRotZ(aMXPtr, angle);
}

void aRotYXZ(float* aMXPtr, short y, short x, short z)
{
	aRotY(aMXPtr, y);
	aRotX(aMXPtr, x);
	aRotZ(aMXPtr, z);
}

void aScaleCurrentMatrix(float* aMXPtr, PHD_VECTOR* vec)
{
	float x, y, z;

	x = vec->x * (1.0F / (1 << 14));
	y = vec->y * (1.0F / (1 << 14));
	z = vec->z * (1.0F / (1 << 14));

	aMXPtr[M00] = aMXPtr[M00] * x;
	aMXPtr[M10] = aMXPtr[M10] * x;
	aMXPtr[M20] = aMXPtr[M20] * x;

	aMXPtr[M01] = aMXPtr[M01] * y;
	aMXPtr[M11] = aMXPtr[M11] * y;
	aMXPtr[M21] = aMXPtr[M21] * y;

	aMXPtr[M02] = aMXPtr[M02] * z;
	aMXPtr[M12] = aMXPtr[M12] * z;
	aMXPtr[M22] = aMXPtr[M22] * z;
}

void aInterpolateArmMatrix(float* aMXPtr, float* mx)
{
	aMXPtr[M00] = mx[M00];
	aMXPtr[M01] = mx[M01];
	aMXPtr[M02] = mx[M02];
	aMXPtr[M10] = mx[M10];
	aMXPtr[M11] = mx[M11];
	aMXPtr[M12] = mx[M12];
	aMXPtr[M20] = mx[M20];
	aMXPtr[M21] = mx[M21];
	aMXPtr[M22] = mx[M22];
}

void aGenerateW2V(PHD_3DPOS* viewPos)
{
	PHD_VECTOR scalar;
	float sx, cx, sy, cy, sz, cz;

	sx = Sin(viewPos->x_rot);
	cx = Cos(viewPos->x_rot);
	sy = Sin(viewPos->y_rot);
	cy = Cos(viewPos->y_rot);
	sz = Sin(viewPos->z_rot);
	cz = Cos(viewPos->z_rot);

	aCameraMatrix[M00] = sx * sy * sz + cy * cz;
	aCameraMatrix[M01] = cx * sz;
	aCameraMatrix[M02] = sx * cy * sz - sy * cz;
	aFMatrixStack[M00] = aCameraMatrix[M00];
	aFMatrixStack[M01] = aCameraMatrix[M01];
	aFMatrixStack[M02] = aCameraMatrix[M02];

	aCameraMatrix[M10] = sx * sy * cz - cy * sz;
	aCameraMatrix[M11] = cx * cz;
	aCameraMatrix[M12] = sx * cy * cz + sy * sz;
	aFMatrixStack[M10] = aCameraMatrix[M10];
	aFMatrixStack[M11] = aCameraMatrix[M11];
	aFMatrixStack[M12] = aCameraMatrix[M12];

	aCameraMatrix[M20] = cx * sy;
	aCameraMatrix[M21] = -sx;
	aCameraMatrix[M22] = cx * cy;
	aFMatrixStack[M20] = aCameraMatrix[M20];
	aFMatrixStack[M21] = aCameraMatrix[M21];
	aFMatrixStack[M22] = aCameraMatrix[M22];

	if (!pPatchMap[205] && lara.poisoned >= 256)
	{
		scalar.x = (lara.poisoned - 256) * ((phd_sin(XSoff1) + phd_sin(XSoff2)) >> 2);
		scalar.y = (lara.poisoned - 256) * ((phd_sin(YSoff1) + phd_sin(YSoff2)) >> 2);
		scalar.z = (lara.poisoned - 256) * ((phd_sin(ZSoff1) + phd_sin(ZSoff2)) >> 2);

		if (scalar.x || scalar.y || scalar.z)
		{
			scalar.x = (scalar.x >> 12) + 0x4000;
			scalar.y = (scalar.y >> 12) + 0x4000;
			scalar.z = (scalar.z >> 12) + 0x4000;
			aScaleCurrentMatrix(aFMatrixStack, &scalar);
		}
	}

	aCameraMatrix[M03] = (float)viewPos->x_pos;
	aCameraMatrix[M13] = (float)viewPos->y_pos;
	aCameraMatrix[M23] = (float)viewPos->z_pos;
	aFMatrixStack[M03] = aCameraMatrix[M03];
	aFMatrixStack[M13] = aCameraMatrix[M13];
	aFMatrixStack[M23] = aCameraMatrix[M23];

	aCameraMatrix[M10] = LfAspectCorrection * aFMatrixStack[M10];
	aCameraMatrix[M11] = LfAspectCorrection * aFMatrixStack[M11];
	aCameraMatrix[M12] = LfAspectCorrection * aFMatrixStack[M12];
	aFMatrixStack[M10] = aCameraMatrix[M10];
	aFMatrixStack[M11] = aCameraMatrix[M11];
	aFMatrixStack[M12] = aCameraMatrix[M12];
}

void aSetViewMatrix(float* aMXPtr)
{
	D3DMView._11 = aMXPtr[M00];
	D3DMView._12 = aMXPtr[M10];
	D3DMView._13 = aMXPtr[M20];
	D3DMView._21 = aMXPtr[M01];
	D3DMView._22 = aMXPtr[M11];
	D3DMView._23 = aMXPtr[M21];
	D3DMView._31 = aMXPtr[M02];
	D3DMView._32 = aMXPtr[M12];
	D3DMView._33 = aMXPtr[M22];
	D3DMView._41 = aMXPtr[M03];
	D3DMView._42 = aMXPtr[M13];
	D3DMView._43 = aMXPtr[M23];
}

void aCopyMatrix(float* aMXPtr, float* Fmatrix)
{
	Fmatrix[M00] = aMXPtr[M00];
	Fmatrix[M01] = aMXPtr[M01];
	Fmatrix[M02] = aMXPtr[M02];
	Fmatrix[M03] = aMXPtr[M03];
	Fmatrix[M10] = aMXPtr[M10];
	Fmatrix[M11] = aMXPtr[M11];
	Fmatrix[M12] = aMXPtr[M12];
	Fmatrix[M13] = aMXPtr[M13];
	Fmatrix[M20] = aMXPtr[M20];
	Fmatrix[M21] = aMXPtr[M21];
	Fmatrix[M22] = aMXPtr[M22];
	Fmatrix[M23] = aMXPtr[M23];
}

void aChangeMatrix(float* aMXPtr, float* mx)
{
	aMXPtr[M00] = mx[M00];
	aMXPtr[M01] = mx[M01];
	aMXPtr[M02] = mx[M02];
	aMXPtr[M10] = mx[M10];
	aMXPtr[M11] = mx[M11];
	aMXPtr[M12] = mx[M12];
	aMXPtr[M20] = mx[M20];
	aMXPtr[M21] = mx[M21];
	aMXPtr[M22] = mx[M22];
}

void aLoadMatrix(float* aMXPtr, float* Fmatrix)
{
	aMXPtr[M00] = Fmatrix[M00];
	aMXPtr[M01] = Fmatrix[M01];
	aMXPtr[M02] = Fmatrix[M02];
	aMXPtr[M03] = Fmatrix[M03];
	aMXPtr[M10] = Fmatrix[M10];
	aMXPtr[M11] = Fmatrix[M11];
	aMXPtr[M12] = Fmatrix[M12];
	aMXPtr[M13] = Fmatrix[M13];
	aMXPtr[M20] = Fmatrix[M20];
	aMXPtr[M21] = Fmatrix[M21];
	aMXPtr[M22] = Fmatrix[M22];
	aMXPtr[M23] = Fmatrix[M23];
}

void aTranslateRelInterpolated(float* aMXPtr, long x, long y, long z, long x2, long y2, long z2)
{
	float fVal, ix, iy, iz;

	fVal = (float)IM_frac / IM_rate;
	ix = (1 - fVal) * x + fVal * x2;
	iy = (1 - fVal) * y + fVal * y2;
	iz = (1 - fVal) * z + fVal * z2;
	aMXPtr[M03] += ix * aMXPtr[M00] + iy * aMXPtr[M01] + iz * aMXPtr[M02];
	aMXPtr[M13] += ix * aMXPtr[M10] + iy * aMXPtr[M11] + iz * aMXPtr[M12];
	aMXPtr[M23] += ix * aMXPtr[M20] + iy * aMXPtr[M21] + iz * aMXPtr[M22];
}

void aRotYXZSuperPackInterpolated(float* aMXPtr, short** pprot1, short** pprot2, long skip)
{
	ushort* prot;
	ushort* prot2;
	float q[4], q2[4], iq[4], mx[indices_count], temp[indices_count];
	float fVal, dot, num, ang, c, c2;

	prot = (ushort*)*pprot1;
	prot2 = (ushort*)*pprot2;

	while (skip)
	{
		if (prot[0] & 0xC000)
			prot++;
		else
			prot += 2;

		if (prot2[0] & 0xC000)
			prot2++;
		else
			prot2 += 2;

		skip--;
	}

	GenerateQuaternion(q, prot);
	GenerateQuaternion(q2, prot2);
	dot = q[0] * q2[0] + q[1] * q2[1] + q[2] * q2[2] + q[3] * q2[3];

	if (dot > -1 && dot < 1)
	{
		if (dot < 0)
		{
			q2[0] = -q2[0];
			q2[1] = -q2[1];
			q2[2] = -q2[2];
			q2[3] = -q2[3];
			dot = -dot;
		}

		num = fsqrt(1 - dot * dot);
		ang = fatan2(num, dot);
		fVal = (float)IM_frac / IM_rate;
		c = fsin((1 - fVal) * ang) / num;
		c2 = fsin(fVal * ang) / num;
		iq[0] = c * q[0] + c2 * q2[0];
		iq[1] = c * q[1] + c2 * q2[1];
		iq[2] = c * q[2] + c2 * q2[2];
		iq[3] = c * q[3] + c2 * q2[3];
	}
	else
	{
		iq[0] = q[0];
		iq[1] = q[1];
		iq[2] = q[2];
		iq[3] = q[3];
	}

	mx[M00] = iq[0] * iq[0] + iq[1] * iq[1] - iq[2] * iq[2] - iq[3] * iq[3];
	mx[M01] = 2 * (iq[1] * iq[2] - iq[0] * iq[3]);
	mx[M02] = 2 * (iq[1] * iq[3] + iq[0] * iq[2]);
	mx[M10] = 2 * (iq[1] * iq[2] + iq[0] * iq[3]);
	mx[M11] = iq[0] * iq[0] - iq[1] * iq[1] + iq[2] * iq[2] - iq[3] * iq[3];
	mx[M12] = 2 * (iq[2] * iq[3] - iq[0] * iq[1]);
	mx[M20] = 2 * (iq[1] * iq[3] - iq[0] * iq[2]);
	mx[M21] = 2 * (iq[2] * iq[3] + iq[0] * iq[1]);
	mx[M22] = iq[0] * iq[0] - iq[1] * iq[1] - iq[2] * iq[2] + iq[3] * iq[3];
	temp[M00] = aMXPtr[M00] * mx[M00] + aMXPtr[M01] * mx[M10] + aMXPtr[M02] * mx[M20];
	temp[M01] = aMXPtr[M00] * mx[M01] + aMXPtr[M01] * mx[M11] + aMXPtr[M02] * mx[M21];
	temp[M02] = aMXPtr[M00] * mx[M02] + aMXPtr[M01] * mx[M12] + aMXPtr[M02] * mx[M22];
	temp[M10] = aMXPtr[M10] * mx[M00] + aMXPtr[M11] * mx[M10] + aMXPtr[M12] * mx[M20];
	temp[M11] = aMXPtr[M10] * mx[M01] + aMXPtr[M11] * mx[M11] + aMXPtr[M12] * mx[M21];
	temp[M12] = aMXPtr[M10] * mx[M02] + aMXPtr[M11] * mx[M12] + aMXPtr[M12] * mx[M22];
	temp[M20] = aMXPtr[M20] * mx[M00] + aMXPtr[M21] * mx[M10] + aMXPtr[M22] * mx[M20];
	temp[M21] = aMXPtr[M20] * mx[M01] + aMXPtr[M21] * mx[M11] + aMXPtr[M22] * mx[M21];
	temp[M22] = aMXPtr[M20] * mx[M02] + aMXPtr[M21] * mx[M12] + aMXPtr[M22] * mx[M22];
	aMXPtr[M00] = temp[M00];
	aMXPtr[M01] = temp[M01];
	aMXPtr[M02] = temp[M02];
	aMXPtr[M10] = temp[M10];
	aMXPtr[M11] = temp[M11];
	aMXPtr[M12] = temp[M12];
	aMXPtr[M20] = temp[M20];
	aMXPtr[M21] = temp[M21];
	aMXPtr[M22] = temp[M22];
}

void mPushMatrix(long* mMatrix)
{
	mMatrix[indices_count + M00] = mMatrix[M00];
	mMatrix[indices_count + M01] = mMatrix[M01];
	mMatrix[indices_count + M02] = mMatrix[M02];
	mMatrix[indices_count + M03] = mMatrix[M03];
	mMatrix[indices_count + M10] = mMatrix[M10];
	mMatrix[indices_count + M11] = mMatrix[M11];
	mMatrix[indices_count + M12] = mMatrix[M12];
	mMatrix[indices_count + M13] = mMatrix[M13];
	mMatrix[indices_count + M20] = mMatrix[M20];
	mMatrix[indices_count + M21] = mMatrix[M21];
	mMatrix[indices_count + M22] = mMatrix[M22];
	mMatrix[indices_count + M23] = mMatrix[M23];
}

void mTranslateAbsXYZ(long* mMatrix, long x, long y, long z)
{
	long fx, fy, fz;

	fx = x - mw2v_matrix[M03];
	fy = y - mw2v_matrix[M13];
	fz = z - mw2v_matrix[M23];
	mMatrix[M03] = fx * mMatrix[M00] + fy * mMatrix[M01] + fz * mMatrix[M02];
	mMatrix[M13] = fx * mMatrix[M10] + fy * mMatrix[M11] + fz * mMatrix[M12];
	mMatrix[M23] = fx * mMatrix[M20] + fy * mMatrix[M21] + fz * mMatrix[M22];
}

void mTranslateXYZ(long* mMatrix, long x, long y, long z)
{
	mMatrix[M03] += x * mMatrix[M00] + y * mMatrix[M01] + z * mMatrix[M02];
	mMatrix[M13] += x * mMatrix[M10] + y * mMatrix[M11] + z * mMatrix[M12];
	mMatrix[M23] += x * mMatrix[M20] + y * mMatrix[M21] + z * mMatrix[M22];
}

void mRotX(long* mMatrix, short angle)
{
	long sin, cos, mx1, mx2;

	if (angle)
	{
		sin = phd_sin(angle);
		cos = phd_cos(angle);

		mx1 = cos * mMatrix[M01] + sin * mMatrix[M02];
		mx2 = cos * mMatrix[M02] - sin * mMatrix[M01];
		mMatrix[M01] = mx1 >> 14;
		mMatrix[M02] = mx2 >> 14;

		mx1 = cos * mMatrix[M11] + sin * mMatrix[M12];
		mx2 = cos * mMatrix[M12] - sin * mMatrix[M11];
		mMatrix[M11] = mx1 >> 14;
		mMatrix[M12] = mx2 >> 14;

		mx1 = cos * mMatrix[M21] + sin * mMatrix[M22];
		mx2 = cos * mMatrix[M22] - sin * mMatrix[M21];
		mMatrix[M21] = mx1 >> 14;
		mMatrix[M22] = mx2 >> 14;
	}
}

void mRotY(long* mMatrix, short angle)
{
	long sin, cos, mx1, mx2;

	if (angle)
	{
		sin = phd_sin(angle);
		cos = phd_cos(angle);

		mx1 = cos * mMatrix[M00] - sin * mMatrix[M02];
		mx2 = cos * mMatrix[M02] + sin * mMatrix[M00];
		mMatrix[M00] = mx1 >> 14;
		mMatrix[M02] = mx2 >> 14;

		mx1 = cos * mMatrix[M10] - sin * mMatrix[M12];
		mx2 = cos * mMatrix[M12] + sin * mMatrix[M10];
		mMatrix[M10] = mx1 >> 14;
		mMatrix[M12] = mx2 >> 14;

		mx1 = cos * mMatrix[M20] - sin * mMatrix[M22];
		mx2 = cos * mMatrix[M22] + sin * mMatrix[M20];
		mMatrix[M20] = mx1 >> 14;
		mMatrix[M22] = mx2 >> 14;
	}
}

void mRotZ(long* mMatrix, short angle)
{
	long sin, cos, mx1, mx2;

	if (angle)
	{
		sin = phd_sin(angle);
		cos = phd_cos(angle);

		mx1 = cos * mMatrix[M00] + sin * mMatrix[M01];
		mx2 = cos * mMatrix[M01] - sin * mMatrix[M00];
		mMatrix[M00] = mx1 >> 14;
		mMatrix[M01] = mx2 >> 14;

		mx1 = cos * mMatrix[M10] + sin * mMatrix[M11];
		mx2 = cos * mMatrix[M11] - sin * mMatrix[M10];
		mMatrix[M10] = mx1 >> 14;
		mMatrix[M11] = mx2 >> 14;

		mx1 = cos * mMatrix[M20] + sin * mMatrix[M21];
		mx2 = cos * mMatrix[M21] - sin * mMatrix[M20];
		mMatrix[M20] = mx1 >> 14;
		mMatrix[M21] = mx2 >> 14;
	}
}

void mRotPackedYXZ(long* mMatrix, long angles)	//angles is XYZ
{
	short angle;

	angle = (angles >> 10) & 0x3FF;//second ten bits, Y
	angle <<= 6;
	mRotY(mMatrix, angle);
	angle = (angles >> 20) & 0x3FF;//first ten bits, X
	angle <<= 6;
	mRotX(mMatrix, angle);
	angle = angles & 0x3FF;//last ten, Z
	angle <<= 6;
	mRotZ(mMatrix, angle);
}

void mRotYXZ(long* mMatrix, short y, short x, short z)
{
	mRotY(mMatrix, y);
	mRotX(mMatrix, x);
	mRotZ(mMatrix, z);
}

void mScaleCurrentMatrix(long* mMatrix, PHD_VECTOR* vec)
{
	mMatrix[M00] = (mMatrix[M00] * vec->x) >> 14;
	mMatrix[M10] = (mMatrix[M10] * vec->x) >> 14;
	mMatrix[M20] = (mMatrix[M20] * vec->x) >> 14;

	mMatrix[M01] = (mMatrix[M01] * vec->y) >> 14;
	mMatrix[M11] = (mMatrix[M11] * vec->y) >> 14;
	mMatrix[M21] = (mMatrix[M21] * vec->y) >> 14;

	mMatrix[M02] = (mMatrix[M02] * vec->z) >> 14;
	mMatrix[M12] = (mMatrix[M12] * vec->z) >> 14;
	mMatrix[M22] = (mMatrix[M22] * vec->z) >> 14;
}

void mInitInterpolation(long* mMatrix)
{
	miMatrixStack[M00] = mMatrix[M00];
	miMatrixStack[M01] = mMatrix[M01];
	miMatrixStack[M02] = mMatrix[M02];
	miMatrixStack[M03] = mMatrix[M03];
	miMatrixStack[M10] = mMatrix[M10];
	miMatrixStack[M11] = mMatrix[M11];
	miMatrixStack[M12] = mMatrix[M12];
	miMatrixStack[M13] = mMatrix[M13];
	miMatrixStack[M20] = mMatrix[M20];
	miMatrixStack[M21] = mMatrix[M21];
	miMatrixStack[M22] = mMatrix[M22];
	miMatrixStack[M23] = mMatrix[M23];
}

void mInterpolateMatrix(long* mMatrix, long* miMatrix)
{
	mMatrix[M00] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M00] + (__int64)IM_frac * miMatrix[M00]) / IM_rate);
	mMatrix[M01] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M01] + (__int64)IM_frac * miMatrix[M01]) / IM_rate);
	mMatrix[M02] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M02] + (__int64)IM_frac * miMatrix[M02]) / IM_rate);
	mMatrix[M03] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M03] + (__int64)IM_frac * miMatrix[M03]) / IM_rate);
	mMatrix[M10] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M10] + (__int64)IM_frac * miMatrix[M10]) / IM_rate);
	mMatrix[M11] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M11] + (__int64)IM_frac * miMatrix[M11]) / IM_rate);
	mMatrix[M12] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M12] + (__int64)IM_frac * miMatrix[M12]) / IM_rate);
	mMatrix[M13] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M13] + (__int64)IM_frac * miMatrix[M13]) / IM_rate);
	mMatrix[M20] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M20] + (__int64)IM_frac * miMatrix[M20]) / IM_rate);
	mMatrix[M21] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M21] + (__int64)IM_frac * miMatrix[M21]) / IM_rate);
	mMatrix[M22] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M22] + (__int64)IM_frac * miMatrix[M22]) / IM_rate);
	mMatrix[M23] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M23] + (__int64)IM_frac * miMatrix[M23]) / IM_rate);
}

void mInterpolateArmMatrix(long* mMatrix, long* miMatrix, long* mx)
{
	mMatrix[M00] = mx[M00];
	mMatrix[M01] = mx[M01];
	mMatrix[M02] = mx[M02];
	mMatrix[M10] = mx[M10];
	mMatrix[M11] = mx[M11];
	mMatrix[M12] = mx[M12];
	mMatrix[M20] = mx[M20];
	mMatrix[M21] = mx[M21];
	mMatrix[M22] = mx[M22];

	mMatrix[M03] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M03] + (__int64)IM_frac * miMatrix[M03]) / IM_rate);
	mMatrix[M13] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M13] + (__int64)IM_frac * miMatrix[M13]) / IM_rate);
	mMatrix[M23] = (long)(((__int64)(IM_rate - IM_frac) * mMatrix[M23] + (__int64)IM_frac * miMatrix[M23]) / IM_rate);
}

void mGenerateW2V(PHD_3DPOS* viewPos)
{
	PHD_VECTOR scalar;
	long sx, cx, sy, cy, sz, cz;

	sx = phd_sin(viewPos->x_rot);
	cx = phd_cos(viewPos->x_rot);
	sy = phd_sin(viewPos->y_rot);
	cy = phd_cos(viewPos->y_rot);
	sz = phd_sin(viewPos->z_rot);
	cz = phd_cos(viewPos->z_rot);

	mw2v_matrix[M00] = TRIGMULT3(sx, sy, sz) + TRIGMULT2(cy, cz);
	mw2v_matrix[M01] = TRIGMULT2(cx, sz);
	mw2v_matrix[M02] = TRIGMULT3(sx, cy, sz) - TRIGMULT2(sy, cz);
	mMatrixStack[M00] = mw2v_matrix[M00];
	mMatrixStack[M01] = mw2v_matrix[M01];
	mMatrixStack[M02] = mw2v_matrix[M02];

	mw2v_matrix[M10] = TRIGMULT3(sx, sy, cz) - TRIGMULT2(cy, sz);
	mw2v_matrix[M11] = TRIGMULT2(cx, cz);
	mw2v_matrix[M12] = TRIGMULT3(sx, cy, cz) + TRIGMULT2(sy, sz);
	mMatrixStack[M10] = mw2v_matrix[M10];
	mMatrixStack[M11] = mw2v_matrix[M11];
	mMatrixStack[M12] = mw2v_matrix[M12];

	mw2v_matrix[M20] = TRIGMULT2(cx, sy);
	mw2v_matrix[M21] = -sx;
	mw2v_matrix[M22] = TRIGMULT2(cx, cy);
	mMatrixStack[M20] = mw2v_matrix[M20];
	mMatrixStack[M21] = mw2v_matrix[M21];
	mMatrixStack[M22] = mw2v_matrix[M22];

	if (!pPatchMap[205] && lara.poisoned >= 256)
	{
		scalar.x = (lara.poisoned - 256) * ((phd_sin(XSoff1) + phd_sin(XSoff2)) >> 2);
		scalar.y = (lara.poisoned - 256) * ((phd_sin(YSoff1) + phd_sin(YSoff2)) >> 2);
		scalar.z = (lara.poisoned - 256) * ((phd_sin(ZSoff1) + phd_sin(ZSoff2)) >> 2);

		if (scalar.x || scalar.y || scalar.z)
		{
			scalar.x = (scalar.x >> 12) + 0x4000;
			scalar.y = (scalar.y >> 12) + 0x4000;
			scalar.z = (scalar.z >> 12) + 0x4000;
			mScaleCurrentMatrix(mMatrixStack, &scalar);
		}
	}

	mw2v_matrix[M03] = viewPos->x_pos;
	mw2v_matrix[M13] = viewPos->y_pos;
	mw2v_matrix[M23] = viewPos->z_pos;
	mMatrixStack[M03] = mw2v_matrix[M03];
	mMatrixStack[M13] = mw2v_matrix[M13];
	mMatrixStack[M23] = mw2v_matrix[M23];

	mw2v_matrix[M10] = (long)(LfAspectCorrection * (float)(mMatrixStack[M10]));
	mw2v_matrix[M11] = (long)(LfAspectCorrection * (float)(mMatrixStack[M11]));
	mw2v_matrix[M12] = (long)(LfAspectCorrection * (float)(mMatrixStack[M12]));
	mMatrixStack[M10] = mw2v_matrix[M10];
	mMatrixStack[M11] = mw2v_matrix[M11];
	mMatrixStack[M12] = mw2v_matrix[M12];
}

long mTestCurrentMatrix(long* mMatrix, long* mx)
{
	return mMatrix[M00] == mx[M00] && mMatrix[M01] == mx[M01] && mMatrix[M02] == mx[M02] && mMatrix[M03] == mx[M03] &&
		mMatrix[M10] == mx[M10] && mMatrix[M11] == mx[M11] && mMatrix[M12] == mx[M12] && mMatrix[M13] == mx[M13] &&
		mMatrix[M20] == mx[M20] && mMatrix[M21] == mx[M21] && mMatrix[M22] == mx[M22] && mMatrix[M23] == mx[M23];
}

void mCopyMatrix(long* mMatrix, long* matrix)
{
	matrix[M00] = mMatrix[M00];
	matrix[M01] = mMatrix[M01];
	matrix[M02] = mMatrix[M02];
	matrix[M03] = mMatrix[M03];
	matrix[M10] = mMatrix[M10];
	matrix[M11] = mMatrix[M11];
	matrix[M12] = mMatrix[M12];
	matrix[M13] = mMatrix[M13];
	matrix[M20] = mMatrix[M20];
	matrix[M21] = mMatrix[M21];
	matrix[M22] = mMatrix[M22];
	matrix[M23] = mMatrix[M23];
}

void mChangeMatrix(long* mMatrix, long* mx)
{
	mMatrix[M00] = mx[M00];
	mMatrix[M01] = mx[M01];
	mMatrix[M02] = mx[M02];
	mMatrix[M10] = mx[M10];
	mMatrix[M11] = mx[M11];
	mMatrix[M12] = mx[M12];
	mMatrix[M20] = mx[M20];
	mMatrix[M21] = mx[M21];
	mMatrix[M22] = mx[M22];
}

void mLoadMatrix(long* mMatrix, long* matrix)
{
	mMatrix[M00] = matrix[M00];
	mMatrix[M01] = matrix[M01];
	mMatrix[M02] = matrix[M02];
	mMatrix[M03] = matrix[M03];
	mMatrix[M10] = matrix[M10];
	mMatrix[M11] = matrix[M11];
	mMatrix[M12] = matrix[M12];
	mMatrix[M13] = matrix[M13];
	mMatrix[M20] = matrix[M20];
	mMatrix[M21] = matrix[M21];
	mMatrix[M22] = matrix[M22];
	mMatrix[M23] = matrix[M23];
}

void phd_PushMatrix_init(void)
{
	long sp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 1);

	if (sp != -1)
	{
		aPushMatrix(&aFMatrixStack[sp]);
		mPushMatrix(&mMatrixStack[sp]);
	}
}

void phd_TranslateAbs_init(long x, long y, long z)
{
	long sp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);

	if (sp != -1)
	{
		aTranslateAbs(&aFMatrixStack[sp], x, y, z);
		mTranslateAbsXYZ(&mMatrixStack[sp], x, y, z);
		return;
	}

	sp = ConfirmSP(phd_mxptr - IMstack, 0);

	if (sp != -1)
		mTranslateAbsXYZ(&miMatrixStack[sp], x, y, z);
}

void phd_TranslateRel_init(long x, long y, long z)
{
	long sp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);

	if (sp != -1)
	{
		aTranslateRel(&aFMatrixStack[sp], x, y, z);
		mTranslateXYZ(&mMatrixStack[sp], x, y, z);
		return;
	}

	sp = ConfirmSP(phd_mxptr - IMstack, 0);

	if (sp != -1)
		mTranslateXYZ(&miMatrixStack[sp], x, y, z);
}

void phd_RotX_init(short angle)
{
	long sp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);

	if (sp != -1)
	{
		aRotX(&aFMatrixStack[sp], angle);
		mRotX(&mMatrixStack[sp], angle);
		return;
	}

	sp = ConfirmSP(phd_mxptr - IMstack, 0);

	if (sp != -1)
		mRotX(&miMatrixStack[sp], angle);
}

void phd_RotY_init(short angle)
{
	long sp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);

	if (sp != -1)
	{
		aRotY(&aFMatrixStack[sp], angle);
		mRotY(&mMatrixStack[sp], angle);
		return;
	}

	sp = ConfirmSP(phd_mxptr - IMstack, 0);

	if (sp != -1)
		mRotY(&miMatrixStack[sp], angle);
}

void phd_RotZ_init(short angle)
{
	long sp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);

	if (sp != -1)
	{
		aRotZ(&aFMatrixStack[sp], angle);
		mRotZ(&mMatrixStack[sp], angle);
		return;
	}

	sp = ConfirmSP(phd_mxptr - IMstack, 0);

	if (sp != -1)
		mRotZ(&miMatrixStack[sp], angle);
}

void phd_RotYXZpack_init(long angles)
{
	long sp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);

	if (sp != -1)
	{
		aRotYXZPack(&aFMatrixStack[sp], angles);
		mRotPackedYXZ(&mMatrixStack[sp], angles);
		return;
	}

	sp = ConfirmSP(phd_mxptr - IMstack, 0);

	if (sp != -1)
		mRotPackedYXZ(&miMatrixStack[sp], angles);
}

void phd_RotYXZ_init(short y, short x, short z)
{
	long sp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);

	if (sp != -1)
	{
		aRotYXZ(&aFMatrixStack[sp], y, x, z);
		mRotYXZ(&mMatrixStack[sp], y, x, z);
		return;
	}

	sp = ConfirmSP(phd_mxptr - IMstack, 0);

	if (sp != -1)
		mRotYXZ(&miMatrixStack[sp], y, x, z);
}

void ScaleCurrentMatrix_init(PHD_VECTOR* vec)
{
	long sp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);

	if (sp != -1)
	{
		aScaleCurrentMatrix(&aFMatrixStack[sp], vec);
		mScaleCurrentMatrix(&mMatrixStack[sp], vec);
	}
}

void InitInterpolate_init(void)
{
	long sp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);

	if (sp != -1)
		mInitInterpolation(&mMatrixStack[sp]);
}

void InterpolateMatrix_init(void)
{
	long sp, isp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);
	isp = ConfirmSP(IMptr - IMstack, 0);

	if (sp != -1 && isp != -1)
		mInterpolateMatrix(&mMatrixStack[sp], &miMatrixStack[isp]);
}

void InterpolateArmMatrix_init(long* mx)
{
	long sp, isp, msp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);
	isp = ConfirmSP(IMptr - IMstack, 0);
	msp = ConfirmSP(mx - matrix_stack, 0);

	if (sp != -1 && isp != -1 && msp != -1)
	{
		aInterpolateArmMatrix(&aFMatrixStack[sp], &aFMatrixStack[msp]);
		mInterpolateArmMatrix(&mMatrixStack[sp], &miMatrixStack[isp], &mMatrixStack[msp]);
	}
}

void phd_PushMatrix_I_init(void)
{
	long sp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(IMptr - IMstack, 1);

	if (sp != -1)
		mPushMatrix(&miMatrixStack[sp]);
}

void phd_TranslateRel_ID_new_1(long x, long y, long z, long x2, long y2, long z2)
{
	long sp;

	if (in_draw_loop)
	{
		sp = ConfirmSP(phd_mxptr - matrix_stack, 0);

		if (sp != -1)
		{
			aTranslateRelInterpolated(&aFMatrixStack[sp], x, y, z, x2, y2, z2);
			mTranslateXYZ(&mMatrixStack[sp], x, y, z);
		}
	}

	phd_TranslateRel_raw(x, y, z);
}

void gar_RotYXZsuperpack_I_new_1(short** pprot1, short** pprot2, long skip)
{
	ushort* prot;
	long sp;

	if (in_draw_loop)
	{
		sp = ConfirmSP(phd_mxptr - matrix_stack, 0);

		if (sp != -1)
			aRotYXZSuperPackInterpolated(&aFMatrixStack[sp], pprot1, pprot2, skip);
	}

	while (skip)
	{
		prot = (ushort*)*pprot1;

		if (prot[0] & 0xC000)
			*pprot1 += 1;
		else
			*pprot1 += 2;

		skip--;
	}

	prot = (ushort*)*pprot1;

	switch (prot[0] >> 14)
	{
	case 0:

		if (in_draw_loop && sp != -1)
			mRotPackedYXZ(&mMatrixStack[sp], (prot[0] << 16) + prot[1]);

		phd_RotYXZpack_raw((prot[0] << 16) + prot[1]);
		++*pprot1;
		break;

	case 1:

		if (in_draw_loop && sp != -1)
			mRotX(&mMatrixStack[sp], (short)((prot[0] & 0xFFF) << 4));

		phd_RotX_raw((short)((prot[0] & 0xFFF) << 4));
		break;

	case 2:

		if (in_draw_loop && sp != -1)
			mRotY(&mMatrixStack[sp], (short)((prot[0] & 0xFFF) << 4));

		phd_RotY_raw((short)((prot[0] & 0xFFF) << 4));
		break;

	default:

		if (in_draw_loop && sp != -1)
			mRotZ(&mMatrixStack[sp], (short)((prot[0] & 0xFFF) << 4));

		phd_RotZ_raw((short)((prot[0] & 0xFFF) << 4));
		break;
	}

	++*pprot1;
}

void phd_GenerateW2V_end(PHD_3DPOS* viewPos)
{
	aGenerateW2V(viewPos);
	mGenerateW2V(viewPos);
}

long SetD3DViewMatrix_test(void)
{
	long sp;

	if (!in_draw_loop)
		return 0;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);

	if (sp == -1 || !mTestCurrentMatrix(&mMatrixStack[sp], phd_mxptr))
		return 0;

	aSetViewMatrix(&aFMatrixStack[sp]);
	return 1;
}

void CalcLaraMatrices_copy(long* matrix)
{
	long sp, lsp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);
	lsp = ConfirmLSP(matrix - lara_matrices);

	if (sp != -1 && lsp != -1)
	{
		aCopyMatrix(&aFMatrixStack[sp], &alara_matricesF[lsp]);
		mCopyMatrix(&mMatrixStack[sp], &mlara_matrices[lsp]);
	}
}

void CalcLaraMatrices_change(long* mx)
{
	long sp, msp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);
	msp = ConfirmSP(mx - matrix_stack, 0);

	if (sp != -1 && msp != -1)
	{
		aChangeMatrix(&aFMatrixStack[sp], &aFMatrixStack[msp]);
		mChangeMatrix(&mMatrixStack[sp], &mMatrixStack[msp]);
	}
}

void DrawLara_load(long* matrix)
{
	long sp, lsp;

	if (!in_draw_loop)
		return;

	sp = ConfirmSP(phd_mxptr - matrix_stack, 0);
	lsp = ConfirmLSP(matrix - lara_matrices);

	if (sp != -1 && lsp != -1)
	{
		aLoadMatrix(&aFMatrixStack[sp], &alara_matricesF[lsp]);
		mLoadMatrix(&mMatrixStack[sp], &mlara_matrices[lsp]);
	}
}

void draw_pistol_mesh_right(ITEM_INFO* item)
{
	if (lara.mesh_ptrs[LM_RHAND] == meshes[objects[LARA].mesh_index + 2 * LM_RHAND])
	{
		lara.holster = LARA_HOLSTERS;
		lara.mesh_ptrs[LM_RHAND] = meshes[objects[PISTOLS_ANIM].mesh_index + 2 * LM_RHAND];
	}
	else
	{
		lara.holster = LARA_HOLSTERS_PISTOLS;
		lara.mesh_ptrs[LM_RHAND] = meshes[objects[LARA].mesh_index + 2 * LM_RHAND];
	}
}

void draw_pistol_mesh_left(ITEM_INFO* item)
{
	if (lara.mesh_ptrs[LM_LHAND] == meshes[objects[LARA].mesh_index + 2 * LM_LHAND])
	{
		lara.holster = LARA_HOLSTERS;
		lara.mesh_ptrs[LM_LHAND] = meshes[objects[PISTOLS_ANIM].mesh_index + 2 * LM_LHAND];
	}
	else
	{
		lara.holster = LARA_HOLSTERS_PISTOLS;
		lara.mesh_ptrs[LM_LHAND] = meshes[objects[LARA].mesh_index + 2 * LM_LHAND];
	}
}

void InitialiseSpinningBlade(short item_number)
{
	ITEM_INFO* item;

	item = &items[item_number];
	item->anim_number = objects[item->object_number].anim_index + 3;
	item->frame_number = anims[item->anim_number].frame_base;
	item->current_anim_state = anims[item->anim_number].current_anim_state;
	item->goal_anim_state = anims[item->anim_number].current_anim_state;
}

void do_spinning_blade_meshswap(short object_number)
{
	short** meshpp;

	if (object_number != -1)
	{
		meshpp = &meshes[objects[object_number].mesh_index];

		for (int i = 0; i < 15; i++)
			lara.mesh_ptrs[i] = meshpp[2 * i];
	}
}

void SpinningBlade(short item_number)
{
	ITEM_INFO* item;
	FLOOR_INFO* floor;
	long flip, x, y, z, ox, oz, xrot, zrot, index, height, next_height, distance, ahead;
	short* bounds;
	short room_number, ang, angle, facing, anim;

	item = &items[item_number];

	for (int i = 0; i < 16; i++)
	{
		if (spinning_blade_object[i] == item->object_number)
		{
			index = i;
			break;
		}
	}

	if (item->current_anim_state == 1 || item->current_anim_state == 4 || item->current_anim_state == 6)
	{
		if (TriggerActive(item))
		{
			if (item->current_anim_state == 4)
				item->goal_anim_state = 5;
			else if (item->current_anim_state == 6)
				item->goal_anim_state = 3;
			else
				item->goal_anim_state = 2;

			if (spinning_blade_sound[index] != -1)
				SoundEffect(spinning_blade_sound[index], &item->pos, SFX_DEFAULT);
		}

		flip = 0;
	}
	else
	{
		if (item->goal_anim_state == item->current_anim_state)
		{
			distance = item->current_anim_state < 5 ? spinning_blade_distance[index] : -spinning_blade_distance[index];
			x = item->pos.x_pos + (distance * phd_sin(item->pos.y_rot) >> W2V_SHIFT);
			y = item->pos.y_pos - spinning_blade_distance[index] / 2 - 256;
			z = item->pos.z_pos + (distance * phd_cos(item->pos.y_rot) >> W2V_SHIFT);
			room_number = item->room_number;
			floor = GetFloor(x, y, z, &room_number);
			height = GetHeight(floor, x, y, z);

			if (height == NO_HEIGHT)
			{
				if (item->current_anim_state == 3)
					item->goal_anim_state = 4;
				else if (item->current_anim_state == 5)
					item->goal_anim_state = 6;
				else
					item->goal_anim_state = 1;
			}
			else if (spinning_blade_collision[index])
			{
				x = item->pos.x_pos + ((distance + item->speed) * phd_sin(item->pos.y_rot) >> W2V_SHIFT);
				z = item->pos.z_pos + ((distance + item->speed) * phd_cos(item->pos.y_rot) >> W2V_SHIFT);
				room_number = item->room_number;
				floor = GetFloor(x, y, z, &room_number);
				next_height = GetHeight(floor, x, y, z);

				if (next_height != NO_HEIGHT && height - next_height > 5 * ABS(item->speed) / 8)
				{
					if (item->current_anim_state == 3)
						item->goal_anim_state = 4;
					else if (item->current_anim_state == 5)
						item->goal_anim_state = 6;
					else
						item->goal_anim_state = 1;
				}
			}
		}

		flip = 1;

		if (item->touch_bits)
		{
			lara_item->hit_points -= spinning_blade_health[index];
			lara_item->hit_status = 1;
			DoLotsOfBlood(lara_item->pos.x_pos, lara_item->pos.y_pos - 512, lara_item->pos.z_pos,
				item->speed << 1, lara_item->pos.y_rot, lara_item->room_number, 2);

			if (lara_item->hit_points <= 0)
			{
				bounds = GetBoundsAccurate(item);

				if (item->current_anim_state < 5)
				{
					ox = item->pos.x_pos + (bounds[5] * phd_sin(item->pos.y_rot) >> W2V_SHIFT);
					oz = item->pos.z_pos + (bounds[5] * phd_cos(item->pos.y_rot) >> W2V_SHIFT);
				}
				else
				{
					ox = item->pos.x_pos + (bounds[4] * phd_sin(item->pos.y_rot) >> W2V_SHIFT);
					oz = item->pos.z_pos + (bounds[4] * phd_cos(item->pos.y_rot) >> W2V_SHIFT);
				}

				x = lara_item->pos.x_pos - ox;
				z = lara_item->pos.z_pos - oz;
				ang = (short)phd_atan(z, x);
				angle = ang - item->pos.y_rot;
				ahead = angle > -16384 && angle < 16384;

				if (item->current_anim_state >= 5)
					ahead = !ahead;

				if (ahead)
				{
					facing = ang - lara_item->pos.y_rot + 32768;
					xrot = (x * phd_cos(item->pos.y_rot) >> W2V_SHIFT) - (z * phd_sin(item->pos.y_rot) >> W2V_SHIFT);

					if (facing > -16384 && facing < 16384)
					{
						if (xrot > -256 && xrot < 256)
						{
							anim = spinning_blade_animation_front[index];
							do_spinning_blade_meshswap(spinning_blade_meshswap_front[index]);
						}
						else
						{
							anim = spinning_blade_animation_spike_front[index];
							do_spinning_blade_meshswap(spinning_blade_meshswap_spike_front[index]);
						}
					}
					else
					{
						if (xrot > -256 && xrot < 256)
						{
							anim = spinning_blade_animation_back[index];
							do_spinning_blade_meshswap(spinning_blade_meshswap_back[index]);
						}
						else
						{
							anim = spinning_blade_animation_spike_back[index];
							do_spinning_blade_meshswap(spinning_blade_meshswap_spike_back[index]);
						}
					}

					if (anim != -1)
					{
						if (xrot > -256 && xrot < 256)
						{
							zrot = (x * phd_sin(item->pos.y_rot) >> W2V_SHIFT) + (z * phd_cos(item->pos.y_rot) >> W2V_SHIFT);
							lara_item->pos.x_pos = ox + (zrot * phd_sin(item->pos.y_rot) >> W2V_SHIFT);
							lara_item->pos.z_pos = oz + (zrot * phd_cos(item->pos.y_rot) >> W2V_SHIFT);
						}

						lara_item->fallspeed = 0;
						lara_item->gravity_status = 0;
						lara_item->pos.x_rot = 0;
						lara_item->pos.z_rot = 0;

						if (item->current_anim_state < 5)
						{
							if (facing > -16384 && facing < 16384)
								lara_item->pos.y_rot = item->pos.y_rot - 32768;
							else
								lara_item->pos.y_rot = item->pos.y_rot;
						}
						else if (facing > -16384 && facing < 16384)
							lara_item->pos.y_rot = item->pos.y_rot;
						else
							lara_item->pos.y_rot = item->pos.y_rot - 32768;

						lara_item->anim_number = anim;
						lara_item->frame_number = anims[lara_item->anim_number].frame_base;
						lara_item->current_anim_state = anims[lara_item->anim_number].current_anim_state;
						lara_item->goal_anim_state = lara_item->current_anim_state;
					}
				}
				else
					do_spinning_blade_meshswap(spinning_blade_meshswap[index]);
			}
		}

		if (spinning_blade_sound[index] != -1)
			SoundEffect(spinning_blade_sound[index], &item->pos, SFX_DEFAULT);
	}

	AnimateItem(item);

	x = item->pos.x_pos;
	y = item->pos.y_pos - 256;
	z = item->pos.z_pos;
	room_number = item->room_number;
	floor = GetFloor(x, y, z, &room_number);
	item->floor = GetHeight(floor, x, y, z);

	if (!spinning_blade_fall[index])
		item->pos.y_pos = item->floor;
	else if (item->pos.y_pos >= item->floor - 256)
	{
		if (item->gravity_status)
		{
			item->gravity_status = 0;
			item->fallspeed = 0;
		}

		item->pos.y_pos = item->floor;
	}
	else if (!item->gravity_status)
	{
		item->gravity_status = 1;
		item->fallspeed = -10;
	}

	if (item->room_number != room_number)
		ItemNewRoom(item_number, room_number);

	if (flip && item->current_anim_state == 1)
		item->pos.y_rot += 0x8000;
}

void setup_spinning_blades(void)
{
	OBJECT_INFO* obj;

	for (int i = 0; i < 16; i++)
	{
		if (spinning_blade_object[i] != -1)
		{
			obj = &objects[spinning_blade_object[i]];
			obj->initialise = InitialiseSpinningBlade;
			obj->collision = ObjectCollision;
			obj->control = SpinningBlade;
			obj->save_position = 1;
			obj->save_anim = 1;
			obj->save_flags = 1;
		}
	}
}

#ifdef __TINYC__
void (*pWriteMyData)(void* Data, ulong Size);
void (*pReadMyData)(void* Data, ulong Size);
#else
void pWriteMyData(void* Data, ulong Size);
void pReadMyData(void* Data, ulong Size);
#endif

#ifdef __TINYC__
void cbSaveMyData(void)
#else
void pcbSaveMyData(void)
#endif
{
	pWriteMyData(&patch_secret_counter_status, sizeof(long));
	pWriteMyData(&camera_bounce_strength, sizeof(long));
	pWriteMyData(&camera_bounce_item_number, sizeof(short));
	pWriteMyData(&camera_bounce_status, sizeof(long));
}

#ifdef __TINYC__
void cbLoadMyData(void)
#else
void pcbLoadMyData(void)
#endif
{
	pReadMyData(&patch_secret_counter_status, sizeof(long));
	pReadMyData(&camera_bounce_strength, sizeof(long));
	pReadMyData(&camera_bounce_item_number, sizeof(short));
	pReadMyData(&camera_bounce_status, sizeof(long));
}

#ifdef __TINYC__
void cbInitLoadNewLevel(void)
#else
void pcbInitLoadNewLevel(void)
#endif
{
	if (!gfCurrentLevel)
		patch_secret_counter_status = 1;

	for (int i = 0; i < 3; i++)
		bridge_object[i] = -1;

	hk_gunflash_slot = GUN_FLASH;
	sfx_hk_fire = -1;
	sfx_hk_stop = -1;
	hk_ammo1 = W_AMMO1;
	hk_ammo2 = W_AMMO2;
	hk_ammo3 = W_AMMO3;
	hk_ammo1_slot = CROSSBOW_AMMO1_ITEM;
	hk_ammo2_slot = CROSSBOW_AMMO2_ITEM;
	hk_ammo3_slot = CROSSBOW_AMMO3_ITEM;
	hk_still_hips_fire = 0;

	for (int i = 0; i < 2; i++)
		lift_doors[i] = -1;

	sfx_lift_doors = -1;

	for (int i = 0; i < 16; i++)
		sprite_object[i] = -1;

	camera_bounce_strength = -66;
	camera_bounce_item_number = -1;
	camera_bounce_status = 0;

	for (int i = 0; i < 16; i++)
		rollingball_object[i] = -1;

	crossbow_grenade_animations = 1;

	for (int i = 0; i < 3; i++)
	{
		crossbow_grenade_ammo[i] = 1;
		crossbow_grenade_ammo_type[i] = 8 * (1 << i);
		crossbow_grenade_ammo_slot[i] = GRENADE;
		crossbow_grenade_ammo_sound[i] = -1;
		crossbow_grenade_ammo_smoke[i] = 1;
	}

	in_fire_crossbow_grenade = 0;

	for (int i = 0; i < 255; i++)
	{
		lara_meshswap_target[i] = -1;
		lara_meshswap_source_slot[i] = -1;
		lara_meshswap_source[i] = -1;
	}

	mine_cart_slot_minecart = -1;
	mine_cart_slot_vehicle_anim = -1;
	mine_cart_slot_mapper = -1;
	mine_cart_slot_animating2 = -1;
	mine_cart_sfx_mine_cart_clunk_start = -1;
	mine_cart_sfx_quad_front_impact = -1;
	mine_cart_sfx_mine_cart_sreech_brake = -1;
	mine_cart_sfx_mine_cart_track_loop = -1;
	mine_cart_sfx_mine_cart_pully_loop = -1;
	mine_cart_alignment = 0;

	for (int i = 0; i < 16; i++)
	{
		mine_cart_slot_rollingball[i] = -1;
		mine_cart_health[i] = 8;
	}

	for (int i = 0; i < 16; i++)
		trapdoor_object[i] = -1;

	horizon_rotation = 0;
	horizon_rotation_speed = 0;

	for (int i = 0; i < 16; i++)
		train_object[i] = -1;

	train_sfx_tube_loop = -1;
	train_animation_trainkill = -1;
	train_distance_camera = 8192;

	for (int i = 0; i < 16; i++)
	{
		bat_emitter_object[i] = -1;
		bat_mesh_object[i] = -1;
		bat_mesh_sound[i] = -1;
	}

	for (int i = 0; i < 64; i++)
		bat_effect[i].life = 0;

	for (int i = 0; i < 16; i++)
	{
		springboard_object[i] = -1;
		springboard_fallspeed[i] = -1;
	}

	in_draw_loop = 0;

	for (int i = 0; i < 16; i++)
	{
		quad_bike_slot_quadbike[i] = -1;
		quad_bike_slot_vehicle_anim[i] = -1;

		for (int j = 0; j < 16; j++)
		{
			quad_bike_slot_avalanche[i][j] = -1;
			quad_bike_health[i][j] = 100;
		}

		quad_bike_sfx_quad_front_impact[i] = -1;
		quad_bike_sfx_quad_move[i] = -1;
		quad_bike_sfx_quad_idle[i] = -1;
		quad_bike_mesh_wheel[i][0] = 7;
		quad_bike_mesh_wheel[i][1] = 6;
		quad_bike_mesh_wheel[i][2] = 3;
		quad_bike_mesh_wheel[i][3] = 4;
		quad_bike_mesh_wheel_index[i][0] = 2;
		quad_bike_mesh_wheel_index[i][1] = 3;
		quad_bike_mesh_wheel_index[i][2] = 1;
		quad_bike_mesh_wheel_index[i][3] = 0;
		quad_bike_deadly_fallspeed[i] = 240;
		quad_bike_deadly_water_depth[i] = 0;
		quad_bike_frame_fall_death_detach[i] = 58;
	}

	for (int i = 0; i < NUMBER_OBJECTS; i++)
		quad_bike_index[i] = -1;

	for (int i = 0; i < 16; i++)
	{
		spinning_blade_object[i] = -1;
		spinning_blade_sound[i] = -1;
		spinning_blade_health[i] = 100;
		spinning_blade_collision[i] = 0;
		spinning_blade_fall[i] = 0;
		spinning_blade_distance[i] = 1536;
		spinning_blade_animation_front[i] = -1;
		spinning_blade_animation_back[i] = -1;
		spinning_blade_animation_spike_front[i] = -1;
		spinning_blade_animation_spike_back[i] = -1;
		spinning_blade_meshswap_front[i] = -1;
		spinning_blade_meshswap_back[i] = -1;
		spinning_blade_meshswap_spike_front[i] = -1;
		spinning_blade_meshswap_spike_back[i] = -1;
		spinning_blade_meshswap[i] = -1;
	}
}

#ifdef __TINYC__
long cbFlipEffectMine(ushort FlipIndex, ushort Timer, ushort Extra, ushort ActivationMode)
#else
long pcbFlipEffectMine(ushort FlipIndex, ushort Timer, ushort Extra, ushort ActivationMode)
#endif
{
	long RetValue;

	RetValue = ActivationMode & 0x400 ? 2 : 1;

	switch (FlipIndex)
	{
	case 1:
		set_patch_secret_counter_status(Timer);
		break;

	case 2:
		camera_bounce_strength = -Timer;
		break;

	case 3:
		camera_bounce_strength = -(ushort)pBaseVariableTRNG->Globals.CurrentValue;
		break;

	case 4:
		camera_bounce_status = 1;
		camera_bounce_item_number = -1;
		break;

	case 5:
		camera_bounce_status = 1;
		camera_bounce_item_number = TRNGItemIndexSelected;
		break;

	case 6:
		camera_bounce_status = 0;
		break;

	case 7:
		do_lara_meshswap(Timer - 1);
		break;

	case 8:
		revert_lara_meshswap(Timer);
		break;

	case 9:
		exit_game();
		break;

	case 10:
		speedup();
		RetValue = ActivationMode & 0x400 ? 2 : 0;
		break;

	case 11:
		speeddn();
		RetValue = ActivationMode & 0x400 ? 2 : 0;
		break;
	}

	return RetValue;
}

#ifdef __TINYC__
long cbActionMine(ushort ActionIndex, long ItemIndex, ushort Extra, ushort ActivationMode)
#else
long pcbActionMine(ushort ActionIndex, long ItemIndex, ushort Extra, ushort ActivationMode)
#endif
{
	long RetValue;

	RetValue = ActivationMode & 0x400 ? 2 : 1;

#if 0
	switch (ActionIndex)
	{
	}
#endif

	return RetValue;
}

#ifdef __TINYC__
long cbConditionMine(ushort ConditionIndex, long ItemIndex, ushort Extra, ushort ActivationMode)
#else
long pcbConditionMine(ushort ConditionIndex, long ItemIndex, ushort Extra, ushort ActivationMode)
#endif
{
	long RetValue;

	RetValue = 0x10;

	switch (ConditionIndex)
	{
	case 1:
		RetValue |= check_flep(ItemIndex);
		break;

	case 2:
		RetValue |= IsDrivingMineCart();
		break;

	case 3:
		RetValue |= IsDrivingQuadBike();
		break;
	}

	return RetValue;
}

#ifdef __TINYC__
void cbCustomizeMine(ushort CustomizeValue, long NumberOfItems, short* pItemArray)
#else
void pcbCustomizeMine(ushort CustomizeValue, long NumberOfItems, short* pItemArray)
#endif
{
	long index;

	switch (CustomizeValue)
	{
	case 1:

		if (NumberOfItems > 0 && pItemArray[0] != -1)
			hk_gunflash_slot = pItemArray[0];

		if (NumberOfItems > 1 && pItemArray[1] != -1)
			sfx_hk_fire = pItemArray[1];

		if (NumberOfItems > 2 && pItemArray[2] != -1)
			sfx_hk_stop = pItemArray[2];

		if (NumberOfItems > 3 && pItemArray[3] != -1)
			hk_ammo1 = 4 * (1 << pItemArray[3]);

		if (NumberOfItems > 4 && pItemArray[4] != -1)
			hk_ammo2 = 4 * (1 << pItemArray[4]);

		if (NumberOfItems > 5 && pItemArray[5] != -1)
			hk_ammo3 = 4 * (1 << pItemArray[5]);

		if (NumberOfItems > 6 && pItemArray[6] != -1)
			hk_ammo1_slot = pItemArray[6];

		if (NumberOfItems > 7 && pItemArray[7] != -1)
			hk_ammo2_slot = pItemArray[7];

		if (NumberOfItems > 8 && pItemArray[8] != -1)
			hk_ammo3_slot = pItemArray[8];

		if (NumberOfItems > 9 && pItemArray[9] != -1)
			hk_still_hips_fire = (char)pItemArray[9];

		break;

	case 2:

		if (NumberOfItems > 0 && pItemArray[0] != -1)
			sfx_lift_doors = pItemArray[0];

		break;

	case 3:

		if (NumberOfItems > 0 && pItemArray[0] != -1)
			crossbow_grenade_animations = (char)pItemArray[0];

		for (int i = 0; i < 3; i++)
		{
			if (NumberOfItems > i + 1 && pItemArray[i + 1] != -1)
				crossbow_grenade_ammo[i] = pItemArray[i + 1] != WEAPON_CROSSBOW;

			if (NumberOfItems > i + 4 && pItemArray[i + 4] != -1)
				crossbow_grenade_ammo_type[i] = 4 * (1 << pItemArray[i + 4]);

			if (NumberOfItems > i + 7 && pItemArray[i + 7] != -1)
				crossbow_grenade_ammo_slot[i] = pItemArray[i + 7];
			else if (!crossbow_grenade_ammo[i])
				crossbow_grenade_ammo_slot[i] = CROSSBOW_BOLT;

			if (NumberOfItems > i + 10 && pItemArray[i + 10] != -1)
				crossbow_grenade_ammo_sound[i] = pItemArray[i + 10];

			if (NumberOfItems > i + 13 && pItemArray[i + 13] != -1)
				crossbow_grenade_ammo_smoke[i] = (char)pItemArray[i + 13];

			if (crossbow_grenade_ammo_slot[i] == CROSSBOW_BOLT)
			{
				if (crossbow_grenade_ammo[i])
					crossbow_grenade_ammo_slot[i] = GRENADE;
			}
			else if (crossbow_grenade_ammo_slot[i] == GRENADE)
			{
				if (!crossbow_grenade_ammo[i])
					crossbow_grenade_ammo_slot[i] = CROSSBOW_BOLT;
			}
		}

		break;

	case 4:

		if (NumberOfItems > 0 && pItemArray[0] != -1)
			mine_cart_slot_minecart = pItemArray[0];

		if (NumberOfItems > 1 && pItemArray[1] != -1)
			mine_cart_slot_vehicle_anim = pItemArray[1];

		if (NumberOfItems > 2 && pItemArray[2] != -1)
			mine_cart_slot_mapper = pItemArray[2];

		if (NumberOfItems > 3 && pItemArray[3] != -1)
			mine_cart_slot_animating2 = pItemArray[3];

		if (NumberOfItems > 4 && pItemArray[4] != -1)
			mine_cart_sfx_mine_cart_clunk_start = pItemArray[4];

		if (NumberOfItems > 5 && pItemArray[5] != -1)
			mine_cart_sfx_quad_front_impact = pItemArray[5];

		if (NumberOfItems > 6 && pItemArray[6] != -1)
			mine_cart_sfx_mine_cart_sreech_brake = pItemArray[6];

		if (NumberOfItems > 7 && pItemArray[7] != -1)
			mine_cart_sfx_mine_cart_track_loop = pItemArray[7];

		if (NumberOfItems > 8 && pItemArray[8] != -1)
			mine_cart_sfx_mine_cart_pully_loop = pItemArray[8];

		if (NumberOfItems > 9 && pItemArray[9] != -1)
			mine_cart_alignment = (char)pItemArray[9];

		break;

	case 5:

		for (int i = 0; i < 32; i++)
		{
			if (NumberOfItems > i && pItemArray[i] != -1)
			{
				if (!(i % 2))
					mine_cart_slot_rollingball[i / 2] = pItemArray[i];
				else
					mine_cart_health[i / 2] = pItemArray[i];
			}
		}

		break;

	case 6:

		if (NumberOfItems > 0 && pItemArray[0])
			horizon_rotation_speed = pItemArray[0];

		break;

	case 7:

		if (NumberOfItems > 0 && pItemArray[0] != -1)
			train_sfx_tube_loop = pItemArray[0];

		if (NumberOfItems > 1 && pItemArray[1] != -1)
			train_animation_trainkill = pItemArray[1];

		if (NumberOfItems > 2 && pItemArray[2] != -1)
			train_distance_camera = pItemArray[2];

		break;

	case 8:

		for (int i = 0; i < 48; i++)
		{
			if (NumberOfItems > i && pItemArray[i] != -1)
			{
				if (!(i % 3))
					bat_emitter_object[i / 3] = pItemArray[i];
				else if (i % 3 == 1)
					bat_mesh_object[i / 3] = pItemArray[i];
				else
					bat_mesh_sound[i / 3] = pItemArray[i];
			}
		}

		break;

	case 9:

		if (NumberOfItems > 0 && pItemArray[0] != -1)
		{
			index = pItemArray[0] - 70;

			if (NumberOfItems > 1 && pItemArray[1] != -1)
				springboard_fallspeed[index] = (short)phd_sqrt(3072 * pItemArray[1]);
		}

		break;

	case 10:

		if (NumberOfItems > 0 && pItemArray[0] != -1)
		{
			index = pItemArray[0] - 1;

			if (NumberOfItems > 1 && pItemArray[1] != -1)
				quad_bike_slot_quadbike[index] = pItemArray[1];

			if (NumberOfItems > 2 && pItemArray[2] != -1)
				quad_bike_slot_vehicle_anim[index] = pItemArray[2];

			if (NumberOfItems > 3 && pItemArray[3] != -1)
				quad_bike_sfx_quad_front_impact[index] = pItemArray[3];

			if (NumberOfItems > 4 && pItemArray[4] != -1)
				quad_bike_sfx_quad_move[index] = pItemArray[4];

			if (NumberOfItems > 5 && pItemArray[5] != -1)
				quad_bike_sfx_quad_idle[index] = pItemArray[5];
		}

		break;

	case 11:

		if (NumberOfItems > 0 && pItemArray[0] != -1)
		{
			index = pItemArray[0] - 1;

			for (int i = 0; i < 32; i++)
			{
				if (NumberOfItems > i + 1 && pItemArray[i + 1] != -1)
				{
					if (!(i % 2))
						quad_bike_slot_avalanche[index][i / 2] = pItemArray[i + 1];
					else
						quad_bike_health[index][i / 2] = pItemArray[i + 1];
				}
			}
		}

		break;

	case 12:

		if (NumberOfItems > 0 && pItemArray[0] != -1)
		{
			index = pItemArray[0] - 1;

			for (int i = 0; i < 4; i++)
			{
				if (NumberOfItems > i + 1 && pItemArray[i + 1] != -1)
					quad_bike_mesh_wheel[index][i] = pItemArray[i + 1];
			}

			if (NumberOfItems > 5 && pItemArray[5] != -1)
				quad_bike_deadly_fallspeed[index] = (short)phd_sqrt(3072 * pItemArray[5]);

			if (NumberOfItems > 6 && pItemArray[6] != -1)
				quad_bike_deadly_water_depth[index] = 256 * pItemArray[6];

			if (NumberOfItems > 7 && pItemArray[7] != -1)
				quad_bike_frame_fall_death_detach[index] = pItemArray[7];

			SortQuadBikeJoints(index);
		}

		break;

	case 13:

		if (NumberOfItems > 0 && pItemArray[0] != -1)
		{
			index = pItemArray[0] - 86;

			if (NumberOfItems > 1 && pItemArray[1] != -1)
				spinning_blade_sound[index] = pItemArray[1];

			if (NumberOfItems > 2 && pItemArray[2] != -1)
				spinning_blade_health[index] = pItemArray[2];

			if (NumberOfItems > 3 && pItemArray[3] != -1)
				spinning_blade_collision[index] = pItemArray[3];

			if (NumberOfItems > 4 && pItemArray[4] != -1)
				spinning_blade_fall[index] = pItemArray[4];

			if (NumberOfItems > 5 && pItemArray[5] != -1)
				spinning_blade_distance[index] = pItemArray[5];

			if (NumberOfItems > 6 && pItemArray[6] != -1)
				spinning_blade_animation_front[index] = pItemArray[6];

			if (NumberOfItems > 7 && pItemArray[7] != -1)
				spinning_blade_animation_back[index] = pItemArray[7];

			if (NumberOfItems > 8 && pItemArray[8] != -1)
				spinning_blade_animation_spike_front[index] = pItemArray[8];

			if (NumberOfItems > 9 && pItemArray[9] != -1)
				spinning_blade_animation_spike_back[index] = pItemArray[9];

			if (NumberOfItems > 10 && pItemArray[10] != -1)
				spinning_blade_meshswap_front[index] = pItemArray[10];

			if (NumberOfItems > 11 && pItemArray[11] != -1)
				spinning_blade_meshswap_back[index] = pItemArray[11];

			if (NumberOfItems > 12 && pItemArray[12] != -1)
				spinning_blade_meshswap_spike_front[index] = pItemArray[12];

			if (NumberOfItems > 13 && pItemArray[13] != -1)
				spinning_blade_meshswap_spike_back[index] = pItemArray[13];

			if (NumberOfItems > 14 && pItemArray[14] != -1)
				spinning_blade_meshswap[index] = pItemArray[14];
		}

		break;
	}
}

#ifdef __TINYC__
void cbParametersMine(ushort ParameterValue, long NumberOfItems, short* pItemArray)
#else
void pcbParametersMine(ushort ParameterValue, long NumberOfItems, short* pItemArray)
#endif
{
	long index;

	switch (ParameterValue)
	{
	case 1:

		if (NumberOfItems > 0 && pItemArray[0] != -1)
		{
			index = pItemArray[0] - 1;

			if (NumberOfItems > 1 && pItemArray[1] != -1)
				lara_meshswap_target[index] = pItemArray[1];

			if (NumberOfItems > 2 && pItemArray[2] != -1)
				lara_meshswap_source_slot[index] = pItemArray[2];

			if (NumberOfItems > 3 && pItemArray[3] != -1)
				lara_meshswap_source[index] = pItemArray[3];
		}

		break;
	}
}

#ifdef __TINYC__
void cbAssignSlotMine(ushort Slot, ushort ObjType)
#else
void pcbAssignSlotMine(ushort Slot, ushort ObjType)
#endif
{
	switch (ObjType)
	{
	case 1:
	case 2:
	case 3:
		bridge_object[ObjType - 1] = Slot;
		break;

	case 4:
	case 5:
		lift_doors[ObjType - 4] = Slot;
		break;

	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
		sprite_object[ObjType - 6] = Slot;
		break;

	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
		rollingball_object[ObjType - 22] = Slot;
		break;

	case 38:
	case 39:
	case 40:
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:
		trapdoor_object[ObjType - 38] = Slot;
		break;

	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69:
		train_object[ObjType - 54] = Slot;
		break;

	case 70:
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
		springboard_object[ObjType - 70] = Slot;
		break;

	case 86:
	case 87:
	case 88:
	case 89:
	case 90:
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96:
	case 97:
	case 98:
	case 99:
	case 100:
	case 101:
		spinning_blade_object[ObjType - 86] = Slot;
		break;
	}
}

#ifdef __TINYC__
void cbInitObjects(void)
#else
void pcbInitObjects(void)
#endif
{
	setup_bridge_object();
	setup_lift_doors();
	setup_sprite_object();
	setup_rollingballs();
	setup_crossbow_grenade_ammo();
	setup_mine_cart();
	setup_quad_bike();
	setup_trapdoors();
	setup_trains();
	setup_bats();
	setup_springboards();
	setup_spinning_blades();
}

#ifdef __TINYC__
void cbInitGame(void)
#else
void pcbInitGame(void)
#endif
{
	if (pPatchMap[273])
	{
		TRNGDefaultWeaponBalestraDistanceAiming = 12288;
		TRNGDefaultWeaponBalestraSizeShell = 3;
		TRNGDefaultWeaponBalestraFrameToTakeWeapon = 16;
	}
}

#ifdef __TINYC__
void cbInitLevel(void)
#else
void pcbInitLevel(void)
#endif
{
	if (pPatchMap[273])
	{
		weapons[WEAPON_CROSSBOW].target_dist = TRNGCustWeaponBalestraDistanceAiming;
		weapons[WEAPON_CROSSBOW].flash_time = TRNGCustWeaponBalestraSizeShell;
		weapons[WEAPON_CROSSBOW].draw_frame = TRNGCustWeaponBalestraFrameToTakeWeapon;
		inventry_objects_list[INV_CROSSBOW_ITEM].yrot = 0;
		inventry_objects_list[INV_CROSSBOW_ITEM].xrot = -16384;
		inventry_objects_list[INV_CROSSBOW_LASER_ITEM].yrot = 0;
		inventry_objects_list[INV_CROSSBOW_LASER_ITEM].xrot = -16384;
		inventry_objects_list[INV_CROSSBOW_AMMO1_ITEM].object_number = hk_ammo1_slot;
		inventry_objects_list[INV_CROSSBOW_AMMO2_ITEM].object_number = hk_ammo2_slot;
		inventry_objects_list[INV_CROSSBOW_AMMO3_ITEM].object_number = hk_ammo3_slot;
	}
}

void Inject(void)
{
	ulong* ptr;
	char* data;

	data = (char*)0x00900000;

	for (int i = 0; i < 0xC000; i++)
		*data++ = 0;

	ptr = (ulong*)0x0090C000;

	*ptr++ = (ulong)check_flep;
	*ptr++ = (ulong)print_secret_counter;
	*ptr++ = (ulong)burning_torch_customizer_colour;
	*ptr++ = (ulong)set_patch_secret_counter_status;
	*ptr++ = (ulong)get_global_mesh_position;
	*ptr++ = (ulong)calculate_static_vertex_light;
	*ptr++ = (ulong)setup_bridge_object;
	*ptr++ = (ulong)FireHK;
	*ptr++ = (ulong)reset_hk;
	*ptr++ = (ulong)get_shotgun_change;
	*ptr++ = (ulong)play_sound_hk;
	*ptr++ = (ulong)handle_hk_fire;
	*ptr++ = (ulong)stop_sound_hk;
	*ptr++ = (ulong)animate_hk;
	*ptr++ = (ulong)get_gunflash_slot;
	*ptr++ = (ulong)special_hk_animation;
	*ptr++ = (ulong)special_hk_animation_interpolated;
	*ptr++ = (ulong)reset_hk_lasersight;
	*ptr++ = (ulong)bounce_hk_lasersight;
	*ptr++ = (ulong)wait_hk_lasersight;
	*ptr++ = (ulong)fire_hk_lasersight;
	*ptr++ = (ulong)InitialiseLiftDoors;
	*ptr++ = (ulong)LiftDoorsControl;
	*ptr++ = (ulong)DrawLiftDoors;
	*ptr++ = (ulong)setup_lift_doors;
	*ptr++ = (ulong)test_vertex_wibble;
	*ptr++ = (ulong)S_PrintCircleShadow;
	*ptr++ = (ulong)move_lara_position_to_pushable;
	*ptr++ = (ulong)DrawClassicHair;
	*ptr++ = (ulong)RotateItem;
	*ptr++ = (ulong)SpriteObjectControl;
	*ptr++ = (ulong)setup_sprite_object;
	*ptr++ = (ulong)GetMaximumFloor;
	*ptr++ = (ulong)GetMinimumCeiling;
	*ptr++ = (ulong)set_bounce;
	*ptr++ = (ulong)do_spotcam_bounce;
	*ptr++ = (ulong)lara_col_back_fix;
	*ptr++ = (ulong)InitialiseRollingBall;
	*ptr++ = (ulong)RollingBallControl;
	*ptr++ = (ulong)RollingBallCollision;
	*ptr++ = (ulong)setup_rollingballs;
	*ptr++ = (ulong)AdjustForcedFixedCamera;
	*ptr++ = (ulong)fire_crossbow_grenade;
	*ptr++ = (ulong)setup_crossbow_grenade_ammo;
	*ptr++ = (ulong)fire_crossbow_sound;
	*ptr++ = (ulong)get_weapon_animation;
	*ptr++ = (ulong)do_lara_meshswap;
	*ptr++ = (ulong)revert_lara_meshswap;
	*ptr++ = (ulong)exit_game;
	*ptr++ = (ulong)MineCartInitialise;
	*ptr++ = (ulong)GetInMineCart;
	*ptr++ = (ulong)MineCartCollision;
	*ptr++ = (ulong)MineCartCanGetOut;
	*ptr++ = (ulong)CollectBaddieCollisionRoomies;
	*ptr++ = (ulong)CartToBaddieCollision;
	*ptr++ = (ulong)MineCartGetCollision;
	*ptr++ = (ulong)MineCartTestHeight;
	*ptr++ = (ulong)MineCartDoUserInput;
	*ptr++ = (ulong)MoveCart;
	*ptr++ = (ulong)MineCartControl;
	*ptr++ = (ulong)MineCartMapperInitialise;
	*ptr++ = (ulong)IsMineCartAssigned;
	*ptr++ = (ulong)IsInMineCart;
	*ptr++ = (ulong)IsDrivingMineCart;
	*ptr++ = (ulong)setup_mine_cart;
	*ptr++ = (ulong)InitialiseQuadBike;
	*ptr++ = (ulong)GetOnQuadBike;
	*ptr++ = (ulong)QuadBikeCollision;
	*ptr++ = (ulong)QuadbikeExplode;
	*ptr++ = (ulong)QuadBikeCheckGetOff;
	*ptr++ = (ulong)QuadBikeTestHeight;
	*ptr++ = (ulong)QuadBikeTriggerExhaustSmoke;
	*ptr++ = (ulong)QuadBikeCanGetOff;
	*ptr++ = (ulong)QuadBikeGetCollisionAnim;
	*ptr++ = (ulong)QuadBikeDoDynamics;
	*ptr++ = (ulong)QuadBikeDoShift;
	*ptr++ = (ulong)QuadBikeIsAvalanche;
	*ptr++ = (ulong)QuadBikeBaddieCollision;
	*ptr++ = (ulong)QuadBikeDynamics;
	*ptr++ = (ulong)AnimateQuadBike;
	*ptr++ = (ulong)QuadBikeUserControl;
	*ptr++ = (ulong)QuadBikeControl;
	*ptr++ = (ulong)IsQuadBikeAssigned;
	*ptr++ = (ulong)IsInQuadBike;
	*ptr++ = (ulong)IsDrivingQuadBike;
	*ptr++ = (ulong)SortQuadBikeJoints;
	*ptr++ = (ulong)setup_quad_bike;
	*ptr++ = (ulong)VehicleControl;
	*ptr++ = (ulong)VehicleLook;
	*ptr++ = (ulong)SaveVehicle;
	*ptr++ = (ulong)RestoreVehicle;
	*ptr++ = (ulong)OnTrapDoor;
	*ptr++ = (ulong)TrapDoorCeiling;
	*ptr++ = (ulong)TrapDoorFloor;
	*ptr++ = (ulong)TrapDoorControl;
	*ptr++ = (ulong)setup_trapdoors;
	*ptr++ = (ulong)rotate_horizon;
	*ptr++ = (ulong)lara_as_duckcrouch;
	*ptr++ = (ulong)lara_col_duckcrouch;
	*ptr++ = (ulong)lara_as_duckcrawl;
	*ptr++ = (ulong)lara_col_duckcrawl;
	*ptr++ = (ulong)LaraTestClimbUpPosDuck;
	*ptr++ = (ulong)lara_col_climbstnc_new;
	*ptr++ = (ulong)lara_col_climbing_new;
	*ptr++ = (ulong)lara_as_run_torch;
	*ptr++ = (ulong)lara_as_stop_torch;
	*ptr++ = (ulong)DuckCrawlPickupAnim;
	*ptr++ = (ulong)DuckCrawlPickupFrame;
	*ptr++ = (ulong)DuckCrawlFlarePickupFrame;
	*ptr++ = (ulong)speedup;
	*ptr++ = (ulong)speeddn;
	*ptr++ = (ulong)TiltHer;
	*ptr++ = (ulong)GetCollisionInfoAndTiltHer;
	*ptr++ = (ulong)AlignCrawlPickupPosition;
	*ptr++ = (ulong)GetLaraCollisionInfoAndTiltHer;
	*ptr++ = (ulong)TrainTestHeight;
	*ptr++ = (ulong)TrainCollision;
	*ptr++ = (ulong)TrainControl;
	*ptr++ = (ulong)setup_trains;
	*ptr++ = (ulong)GetBatEmitter;
	*ptr++ = (ulong)SetBatEmitter;
	*ptr++ = (ulong)UpdateBats;
	*ptr++ = (ulong)DrawBats;
	*ptr++ = (ulong)TriggerBats;
	*ptr++ = (ulong)BatEmitterControl;
	*ptr++ = (ulong)setup_bats;
	*ptr++ = (ulong)SpringBoardControl;
	*ptr++ = (ulong)setup_springboards;
	*ptr++ = (ulong)Sin;
	*ptr++ = (ulong)Cos;
	*ptr++ = (ulong)SinHalf;
	*ptr++ = (ulong)CosHalf;
	*ptr++ = (ulong)ConfirmSP;
	*ptr++ = (ulong)ConfirmLSP;
	*ptr++ = (ulong)SetInDrawLoop;
	*ptr++ = (ulong)ClearInDrawLoop;
	*ptr++ = (ulong)GenerateQuaternion;
	*ptr++ = (ulong)aPushMatrix;
	*ptr++ = (ulong)aTranslateAbs;
	*ptr++ = (ulong)aTranslateRel;
	*ptr++ = (ulong)aRotX;
	*ptr++ = (ulong)aRotY;
	*ptr++ = (ulong)aRotZ;
	*ptr++ = (ulong)aRotYXZPack;
	*ptr++ = (ulong)aRotYXZ;
	*ptr++ = (ulong)aScaleCurrentMatrix;
	*ptr++ = (ulong)aInterpolateArmMatrix;
	*ptr++ = (ulong)aGenerateW2V;
	*ptr++ = (ulong)aSetViewMatrix;
	*ptr++ = (ulong)aCopyMatrix;
	*ptr++ = (ulong)aChangeMatrix;
	*ptr++ = (ulong)aLoadMatrix;
	*ptr++ = (ulong)aTranslateRelInterpolated;
	*ptr++ = (ulong)aRotYXZSuperPackInterpolated;
	*ptr++ = (ulong)mPushMatrix;
	*ptr++ = (ulong)mTranslateAbsXYZ;
	*ptr++ = (ulong)mTranslateXYZ;
	*ptr++ = (ulong)mRotX;
	*ptr++ = (ulong)mRotY;
	*ptr++ = (ulong)mRotZ;
	*ptr++ = (ulong)mRotPackedYXZ;
	*ptr++ = (ulong)mRotYXZ;
	*ptr++ = (ulong)mScaleCurrentMatrix;
	*ptr++ = (ulong)mInitInterpolation;
	*ptr++ = (ulong)mInterpolateMatrix;
	*ptr++ = (ulong)mInterpolateArmMatrix;
	*ptr++ = (ulong)mGenerateW2V;
	*ptr++ = (ulong)mTestCurrentMatrix;
	*ptr++ = (ulong)mCopyMatrix;
	*ptr++ = (ulong)mChangeMatrix;
	*ptr++ = (ulong)mLoadMatrix;
	*ptr++ = (ulong)phd_PushMatrix_init;
	*ptr++ = (ulong)phd_TranslateAbs_init;
	*ptr++ = (ulong)phd_TranslateRel_init;
	*ptr++ = (ulong)phd_RotX_init;
	*ptr++ = (ulong)phd_RotY_init;
	*ptr++ = (ulong)phd_RotZ_init;
	*ptr++ = (ulong)phd_RotYXZpack_init;
	*ptr++ = (ulong)phd_RotYXZ_init;
	*ptr++ = (ulong)ScaleCurrentMatrix_init;
	*ptr++ = (ulong)InitInterpolate_init;
	*ptr++ = (ulong)InterpolateMatrix_init;
	*ptr++ = (ulong)InterpolateArmMatrix_init;
	*ptr++ = (ulong)phd_PushMatrix_I_init;
	*ptr++ = (ulong)phd_TranslateRel_ID_new_1;
	*ptr++ = (ulong)gar_RotYXZsuperpack_I_new_1;
	*ptr++ = (ulong)phd_GenerateW2V_end;
	*ptr++ = (ulong)SetD3DViewMatrix_test;
	*ptr++ = (ulong)CalcLaraMatrices_copy;
	*ptr++ = (ulong)CalcLaraMatrices_change;
	*ptr++ = (ulong)DrawLara_load;
	*ptr++ = (ulong)draw_pistol_mesh_right;
	*ptr++ = (ulong)draw_pistol_mesh_left;
	*ptr++ = (ulong)InitialiseSpinningBlade;
	*ptr++ = (ulong)do_spinning_blade_meshswap;
	*ptr++ = (ulong)SpinningBlade;
	*ptr++ = (ulong)setup_spinning_blades;

#ifdef __TINYC__
	*ptr++ = (ulong)cbSaveMyData;
	*ptr++ = (ulong)cbLoadMyData;
	*ptr++ = (ulong)cbInitLoadNewLevel;
	*ptr++ = (ulong)cbFlipEffectMine;
	*ptr++ = (ulong)cbActionMine;
	*ptr++ = (ulong)cbConditionMine;
	*ptr++ = (ulong)cbCustomizeMine;
	*ptr++ = (ulong)cbParametersMine;
	*ptr++ = (ulong)cbAssignSlotMine;
	*ptr++ = (ulong)cbInitObjects;
	*ptr++ = (ulong)cbInitGame;
	*ptr++ = (ulong)cbInitLevel;
#else
	*ptr++ = (ulong)pcbSaveMyData;
	*ptr++ = (ulong)pcbLoadMyData;
	*ptr++ = (ulong)pcbInitLoadNewLevel;
	*ptr++ = (ulong)pcbFlipEffectMine;
	*ptr++ = (ulong)pcbActionMine;
	*ptr++ = (ulong)pcbConditionMine;
	*ptr++ = (ulong)pcbCustomizeMine;
	*ptr++ = (ulong)pcbParametersMine;
	*ptr++ = (ulong)pcbAssignSlotMine;
	*ptr++ = (ulong)pcbInitObjects;
	*ptr++ = (ulong)pcbInitGame;
	*ptr++ = (ulong)pcbInitLevel;
#endif

	INJECT(0x00910000, print_secret_counter);
	INJECT(0x00910005, burning_torch_customizer_colour);
	INJECT(0x0091000A, get_global_mesh_position);
	INJECT(0x0091000F, calculate_static_vertex_light);
	INJECT(0x00910014, reset_hk);
	INJECT(0x00910019, get_shotgun_change);
	INJECT(0x0091001E, handle_hk_fire);
	INJECT(0x00910023, stop_sound_hk);
	INJECT(0x00910028, play_sound_hk);
	INJECT(0x0091002D, animate_hk);
	INJECT(0x00910032, get_gunflash_slot);
	INJECT(0x00910037, special_hk_animation);
	INJECT(0x0091003C, special_hk_animation_interpolated);
	INJECT(0x00910041, reset_hk_lasersight);
	INJECT(0x00910046, wait_hk_lasersight);
	INJECT(0x0091004B, fire_hk_lasersight);
	INJECT(0x00910050, test_vertex_wibble);
	INJECT(0x00910055, S_PrintCircleShadow);
	INJECT(0x0091005A, move_lara_position_to_pushable);
	INJECT(0x0091005F, DrawClassicHair);
	INJECT(0x00910064, GetMaximumFloor);
	INJECT(0x00910069, GetMinimumCeiling);
	INJECT(0x0091006E, set_bounce);
	INJECT(0x00910073, do_spotcam_bounce);
	INJECT(0x00910078, lara_col_back_fix);
	INJECT(0x0091007D, AdjustForcedFixedCamera);
	INJECT(0x00910082, fire_crossbow_grenade);
	INJECT(0x00910087, fire_crossbow_sound);
	INJECT(0x0091008C, get_weapon_animation);
	INJECT(0x00910096, VehicleControl);
	INJECT(0x0091009B, VehicleLook);
	INJECT(0x009100A0, SaveVehicle);
	INJECT(0x009100A5, RestoreVehicle);
	INJECT(0x009100AA, rotate_horizon);
	INJECT(0x009100AF, lara_as_duckcrouch);
	INJECT(0x009100B4, lara_col_duckcrouch);
	INJECT(0x009100B9, lara_as_duckcrawl);
	INJECT(0x009100BE, lara_col_duckcrawl);
	INJECT(0x009100C3, lara_col_climbstnc_new);
	INJECT(0x009100C8, lara_col_climbing_new);
	INJECT(0x009100CD, DuckCrawlPickupAnim);
	INJECT(0x009100D2, DuckCrawlPickupFrame);
	INJECT(0x009100D7, DuckCrawlFlarePickupFrame);
	INJECT(0x009100DC, lara_as_run_torch);
	INJECT(0x009100E1, lara_as_stop_torch);
	INJECT(0x009100E6, GetCollisionInfoAndTiltHer);
	INJECT(0x009100EB, AlignCrawlPickupPosition);
	INJECT(0x009100F0, GetLaraCollisionInfoAndTiltHer);
	INJECT(0x009100F5, phd_PushMatrix_init);
	INJECT(0x009100FA, phd_TranslateAbs_init);
	INJECT(0x009100FF, phd_TranslateRel_init);
	INJECT(0x00910104, phd_RotX_init);
	INJECT(0x00910109, phd_RotY_init);
	INJECT(0x0091010E, phd_RotZ_init);
	INJECT(0x00910113, phd_RotYXZpack_init);
	INJECT(0x00910118, phd_RotYXZ_init);
	INJECT(0x0091011D, ScaleCurrentMatrix_init);
	INJECT(0x00910122, InitInterpolate_init);
	INJECT(0x00910127, InterpolateMatrix_init);
	INJECT(0x0091012C, InterpolateArmMatrix_init);
	INJECT(0x00910131, phd_PushMatrix_I_init);
	INJECT(0x00910136, phd_TranslateRel_ID_new_1);
	INJECT(0x0091013B, gar_RotYXZsuperpack_I_new_1);
	INJECT(0x00910140, phd_GenerateW2V_end);
	INJECT(0x00910145, SetD3DViewMatrix_test);
	INJECT(0x0091014A, SetInDrawLoop);
	INJECT(0x0091014F, ClearInDrawLoop);
	INJECT(0x00910154, CalcLaraMatrices_copy);
	INJECT(0x00910159, CalcLaraMatrices_change);
	INJECT(0x0091015E, DrawLara_load);
	INJECT(0x00910163, mInterpolateMatrix);
	INJECT(0x00910168, mInterpolateArmMatrix);
	INJECT(0x0091016D, draw_pistol_mesh_right);
	INJECT(0x00910172, draw_pistol_mesh_left);
}
