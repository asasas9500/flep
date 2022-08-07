#include <math.h>

#pragma pack(push, 1)

typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned long ulong;
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

long patch_secret_counter_status;
PHD_VECTOR global_mesh_position;
long bridge_object[3];

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

void Inject(void)
{
	INJECT(0x00910000, print_secret_counter);
	INJECT(0x00910005, burning_torch_customizer_colour);
	INJECT(0x0091000A, get_global_mesh_position);
	INJECT(0x0091000F, calculate_static_vertex_light);
}
