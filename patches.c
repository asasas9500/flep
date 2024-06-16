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
	ANIM_BACKSTEPD_LEFT = 61,
	ANIM_BACKSTEPD_RIGHT = 62,
	ANIM_RBALL_DEATH = 139
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
__int64 __fixsfdi(float num)
{
	__asm__ __volatile__
	(
		"subl $0xC, %esp\n\t"
		"flds 0x8(%ebp)\n\t"
		"fnstcw -0x2(%ebp)\n\t"
		"movw -0x2(%ebp), %ax\n\t"
		"orb $0xC, %ah\n\t"
		"movw %ax, -0x4(%ebp)\n\t"
		"fldcw -0x4(%ebp)\n\t"
		"fistpq -0xC(%ebp)\n\t"
		"fldcw -0x2(%ebp)\n\t"
		"movl -0xC(%ebp), %eax\n\t"
		"movl -0x8(%ebp), %edx\n\t"
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

long patch_secret_counter_status;
PHD_VECTOR global_mesh_position;
short bridge_object[3];
char HKTimer;
char HKShotsFired;
char LSHKTimer;
char LSHKShotsFired;
short hk_gunflash_slot;
short sfx_hk_fire;
short sfx_hk_stop;
short hk_ammo1;
short hk_ammo2;
short hk_ammo3;
short hk_ammo1_slot;
short hk_ammo2_slot;
short hk_ammo3_slot;
short lift_doors[2];
short sfx_lift_doors;
short sprite_object[16];
long camera_bounce_strength;
short camera_bounce_item_number;
long camera_bounce_status;
short rollingball_object[16];
char crossbow_grenade_animations;
char crossbow_grenade_ammo[3];
char crossbow_grenade_ammo_type[3];
short crossbow_grenade_ammo_slot[3];
short crossbow_grenade_ammo_sound[3];
char crossbow_grenade_ammo_smoke[3];
char in_fire_crossbow_grenade;
short lara_meshswap_target[256];
short lara_meshswap_source_slot[256];
short lara_meshswap_source[256];
short mine_cart_slot_minecart;
short mine_cart_slot_vehicle_anim;
short mine_cart_slot_mapper;
short mine_cart_slot_animating2;
short mine_cart_sfx_mine_cart_clunk_start;
short mine_cart_sfx_quad_front_impact;
short mine_cart_sfx_mine_cart_sreech_brake;
short mine_cart_sfx_mine_cart_track_loop;
short mine_cart_sfx_mine_cart_pully_loop;
char mine_cart_alignment;
short mine_cart_slot_rollingball[16];
short mine_cart_health[16];

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

		if (!get_shotgun_change() && !harpoon_fired)
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

void wait_hk_lasersight(void)
{
	if (lara.gun_type == WEAPON_CROSSBOW && !(inputBusy & IN_ACTION))
	{
		WeaponDelay = 0;
		LSHKShotsFired = 0;
		camera.bounce = 0;
	}
}

void fire_hk_lasersight(char* Fire, short* ammo)
{
	if (lara.gun_type != WEAPON_CROSSBOW)
	{
		WeaponDelay = 32;

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

long CanGetOut(long lr)
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

void CartToBaddieCollision(ITEM_INFO* cart)
{
	ITEM_INFO* item;
	OBJECT_INFO* obj;
	short* doors;
	long dx, dy, dz, flag;
	short roomies[20];
	short room_count, item_number, frame;

	room_count = 1;
	roomies[0] = cart->room_number;
	doors = room[cart->room_number].door;

	if (doors)
	{
		for (int i = *doors++; i > 0; i--, doors += 16)
		{
			roomies[room_count] = *doors;
			room_count++;
		}
	}

	for (int i = 0; i < room_count; i++)
	{
		for (item_number = room[roomies[i]].item_number; item_number != NO_ITEM; item_number = item->next_item)
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

short GetCollision(ITEM_INFO* item, short ang, long dist, short* c)
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

long TestHeight(ITEM_INFO* item, long x, long z)
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

void DoUserInput(ITEM_INFO* item, ITEM_INFO* l, CARTINFO* cart)
{
	ITEM_INFO* item2;
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
			if (input & IN_LEFT && CanGetOut(-1))
			{
				l->goal_anim_state = 1;
				cart->Flags &= ~8;
			}
			else if (input & IN_RIGHT && CanGetOut(1))
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
		h = GetCollision(item, item->pos.y_rot, 512, &c);

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

	h = GetCollision(item, item->pos.y_rot, 512, &c);

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

				if (objects[item2->object_number].draw_routine && !objects[item2->object_number].intelligent && item2->object_number != mine_cart_slot_animating2)
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

	cart->MidPos = TestHeight(item, 0, 0);

	if (!cart->YVel)
	{
		cart->FrontPos = TestHeight(item, 0, 256);
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
		item->pos.z_rot += (short)(TestHeight(item, 128, 0) - TestHeight(item, -128, 0)) << 5;
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
	DoUserInput(item, l, cart);

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

long IsInMineCart(void)
{
	return mine_cart_slot_minecart != -1 && mine_cart_slot_vehicle_anim != -1 && mine_cart_slot_mapper != -1 && items[lara.vehicle].object_number == mine_cart_slot_minecart;
}

void MineCartLook(void)
{
	if (lara.vehicle != -1 && IsInMineCart() && input & IN_LOOK && lara.look)
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

void SaveMineCart(ITEM_INFO* item)
{
	if (mine_cart_slot_minecart != -1 && mine_cart_slot_vehicle_anim != -1 && mine_cart_slot_mapper != -1 && item->object_number == mine_cart_slot_minecart)
		WriteSG(item->data, sizeof(CARTINFO));
}

void RestoreMineCart(ITEM_INFO* item)
{
	if (mine_cart_slot_minecart != -1 && mine_cart_slot_vehicle_anim != -1 && mine_cart_slot_mapper != -1 && item->object_number == mine_cart_slot_minecart)
		ReadSG(item->data, sizeof(CARTINFO));
}

void MineCartMapperInitialise(short item_number)
{
	items[item_number].flags |= IFL_CODEBITS;
}

long IsDrivingMineCart(void)
{
	return lara.vehicle != -1 && IsInMineCart();
}

void setup_mine_cart(void)
{
	OBJECT_INFO* obj;

	if (mine_cart_slot_minecart != -1 && mine_cart_slot_vehicle_anim != -1 && mine_cart_slot_mapper != -1)
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

	for (int i = 0; i < 256; i++)
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
	}

	return RetValue;
}

#ifdef __TINYC__
void cbCustomizeMine(ushort CustomizeValue, long NumberOfItems, short* pItemArray)
#else
void pcbCustomizeMine(ushort CustomizeValue, long NumberOfItems, short* pItemArray)
#endif
{
	switch (CustomizeValue)
	{
	case 1:

		if (NumberOfItems == 9)
		{
			if (pItemArray[0] != -1)
				hk_gunflash_slot = pItemArray[0];

			if (pItemArray[1] != -1)
				sfx_hk_fire = pItemArray[1];

			if (pItemArray[2] != -1)
				sfx_hk_stop = pItemArray[2];

			if (pItemArray[3] != -1)
				hk_ammo1 = 4 * (1 << pItemArray[3]);

			if (pItemArray[4] != -1)
				hk_ammo2 = 4 * (1 << pItemArray[4]);

			if (pItemArray[5] != -1)
				hk_ammo3 = 4 * (1 << pItemArray[5]);

			if (pItemArray[6] != -1)
				hk_ammo1_slot = pItemArray[6];

			if (pItemArray[7] != -1)
				hk_ammo2_slot = pItemArray[7];

			if (pItemArray[8] != -1)
				hk_ammo3_slot = pItemArray[8];
		}

		break;

	case 2:

		if (NumberOfItems == 1 && pItemArray[0] != -1)
			sfx_lift_doors = pItemArray[0];

		break;

	case 3:

		if (NumberOfItems == 16)
		{
			if (pItemArray[0] != -1)
				crossbow_grenade_animations = (char)pItemArray[0];

			for (int i = 0; i < 3; i++)
			{
				if (pItemArray[i + 1] != -1)
					crossbow_grenade_ammo[i] = pItemArray[i + 1] != WEAPON_CROSSBOW;

				if (pItemArray[i + 4] != -1)
					crossbow_grenade_ammo_type[i] = 4 * (1 << pItemArray[i + 4]);

				if (pItemArray[i + 7] != -1)
					crossbow_grenade_ammo_slot[i] = pItemArray[i + 7];
				else if (!crossbow_grenade_ammo[i])
					crossbow_grenade_ammo_slot[i] = CROSSBOW_BOLT;

				if (pItemArray[i + 10] != -1)
					crossbow_grenade_ammo_sound[i] = pItemArray[i + 10];

				if (pItemArray[i + 13] != -1)
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
		}

		break;

	case 4:

		if (NumberOfItems == 10)
		{
			if (pItemArray[0] != -1)
				mine_cart_slot_minecart = pItemArray[0];

			if (pItemArray[1] != -1)
				mine_cart_slot_vehicle_anim = pItemArray[1];

			if (pItemArray[2] != -1)
				mine_cart_slot_mapper = pItemArray[2];

			if (pItemArray[3] != -1)
				mine_cart_slot_animating2 = pItemArray[3];

			if (pItemArray[4] != -1)
				mine_cart_sfx_mine_cart_clunk_start = pItemArray[4];

			if (pItemArray[5] != -1)
				mine_cart_sfx_quad_front_impact = pItemArray[5];

			if (pItemArray[6] != -1)
				mine_cart_sfx_mine_cart_sreech_brake = pItemArray[6];

			if (pItemArray[7] != -1)
				mine_cart_sfx_mine_cart_track_loop = pItemArray[7];

			if (pItemArray[8] != -1)
				mine_cart_sfx_mine_cart_pully_loop = pItemArray[8];

			if (pItemArray[9] != -1)
				mine_cart_alignment = (char)pItemArray[9];
		}

		break;

	case 5:

		if (NumberOfItems >= 1 && NumberOfItems <= 32)
		{
			for (int i = 0; i < NumberOfItems; i++)
			{
				if (pItemArray[i] != -1)
				{
					if (!(i % 2))
						mine_cart_slot_rollingball[i / 2] = pItemArray[i];
					else
						mine_cart_health[i / 2] = pItemArray[i];
				}
			}
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

		if (NumberOfItems == 4)
		{
			index = pItemArray[0] - 1;
			lara_meshswap_target[index] = pItemArray[1];
			lara_meshswap_source_slot[index] = pItemArray[2];
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
}

#ifdef __TINYC__
void cbInitGame(void)
#else
void pcbInitGame(void)
#endif
{

}

#ifdef __TINYC__
void cbInitLevel(void)
#else
void pcbInitLevel(void)
#endif
{
	if (pPatchMap[273])
	{
		weapons[WEAPON_CROSSBOW].target_dist = 12288;
		weapons[WEAPON_CROSSBOW].flash_time = 3;
		weapons[WEAPON_CROSSBOW].draw_frame = 16;
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
	INJECT(0x00910091, MineCartControl);
	INJECT(0x00910096, IsInMineCart);
	INJECT(0x0091009B, MineCartLook);
	INJECT(0x009100A0, SaveMineCart);
	INJECT(0x009100A5, RestoreMineCart);
}
