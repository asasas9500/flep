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
