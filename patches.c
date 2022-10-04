#pragma pack(push, 1)

typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned long ulong;
typedef long long __int64;
typedef float D3DVALUE;

#define W2V_SHIFT	14
#define SQUARE(x) ((x)*(x))
#define RGBONLY(r, g, b) ((b) | (((g) | ((r) << 8)) << 8))
#define RGBA(r, g, b, a) (RGBONLY(r, g, b) | ((a) << 24))

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

float sqrt(float num)
{
	__asm__ __volatile__
	(
		"flds 0x8(%ebp)\n\t"
		"fsqrt\n\t"
	);
}

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

long patch_secret_counter_status;
PHD_VECTOR global_mesh_position;
long bridge_object[3];
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
			fVal = sqrt(SQUARE(u.x - vtx->x) + SQUARE(u.y - vtx->y) + SQUARE(u.z - vtx->z)) * 1.7F;

			if (fVal <= dptr->falloff)
			{
				fVal = (dptr->falloff - fVal) / dptr->falloff;
				r += fVal * dptr->r;
				g += fVal * dptr->g;
				b += fVal * dptr->b;
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

void (*pWriteMyData)(void* Data, ulong Size);
void (*pReadMyData)(void* Data, ulong Size);

void cbSaveMyData(void)
{
	pWriteMyData(&patch_secret_counter_status, sizeof(long));
}

void cbLoadMyData(void)
{
	pReadMyData(&patch_secret_counter_status, sizeof(long));
}

void cbInitLoadNewLevel(void)
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
}

long cbFlipEffectMine(ushort FlipIndex, ushort Timer, ushort Extra, ushort ActivationMode)
{
	long RetValue;

	RetValue = ActivationMode & 0x400 ? 2 : 1;

	switch (FlipIndex)
	{
	case 1:
		set_patch_secret_counter_status(Timer);
		break;
	}

	return RetValue;
}

long cbActionMine(ushort ActionIndex, long ItemIndex, ushort Extra, ushort ActivationMode)
{
	long RetValue;

	RetValue = ActivationMode & 0x400 ? 2 : 1;

	switch (ActionIndex)
	{
	}

	return RetValue;
}

long cbConditionMine(ushort ConditionIndex, long ItemIndex, ushort Extra, ushort ActivationMode)
{
	long RetValue;

	RetValue = 0x10;

	switch (ConditionIndex)
	{
	case 1:
		RetValue |= check_flep(ItemIndex);
		break;
	}

	return RetValue;
}

void cbCustomizeMine(ushort CustomizeValue, long NumberOfItems, short* pItemArray)
{
	switch (CustomizeValue)
	{
	case 1:

		if (NumberOfItems == 6)
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
		}

		break;
	}
}

void cbParametersMine(ushort ParameterValue, long NumberOfItems, short* pItemArray)
{
	switch (ParameterValue)
	{
	}
}

void cbAssignSlotMine(ushort Slot, ushort ObjType)
{
	switch (ObjType)
	{
	case 1:
	case 2:
	case 3:
		bridge_object[ObjType - 1] = Slot;
		break;
	}
}

void cbInitObjects(void)
{
	setup_bridge_object();
}

void cbInitGame(void)
{

}

void cbInitLevel(void)
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
}
