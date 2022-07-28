; Function:	0x409110
; Description:	(calls 0x432F00)

; Path:		objects

jmp_0x409110:
	mov eax, dword [esp + 0x4]
	mov dx, word [eax + 0x20]
	mov word [temporary], dx
	mov edx, dword [0x533950]
	jmp 0x40911A

ALIGN 16

; Function:	0x40A740
; Description:	draws PLANET_EFFECT (slot 426)

; Path:		objects

jmp_0x40A79B:
	mov word [target + 0x2], 0x0
	movsx esi, word [esi + 0xC]
	mov word [target], si
	mov ecx, dword [0x533950]
	jmp 0x40A7A5

ALIGN 16

; Path:		objects

jmp_0x40A82C:
	inc word [target + 0x2]
	mov eax, dword [edi + 0xC]
	mov ecx, dword [edi + 0x8]
	jmp 0x40A832

ALIGN 16

; Function:	0x40FC50
; Description:	draws GOD_HEAD (slot 346)

; Path:		objects

jmp_0x40FCEF:
	mov word [target + 0x2], 0x0
	movsx eax, word [esi + 0xC]
	mov word [target], ax
	mov edx, dword [0x533950]
	jmp 0x40FCF9

ALIGN 16

; Function:	0x415790
; Description:	draws TEETH_SPIKES (slot 132) and similar objects

; Path:		objects

jmp_0x4158BA:
	mov word [target + 0x2], 0x0
	mov ax, word [esi + 0xC]
	mov word [target], ax
	push ebp
	jmp 0x4158BF

ALIGN 16

; Function:	0x41D030
; Description:	draws Lara

; Path:		objects

jmp_0x41D222:
	mov word [target], 0x0
	mov eax, dword [0x4 * ebp + 0x4AB768]
	mov word [target + 0x2], ax
	jmp 0x41D229

ALIGN 16

; Path:		objects

jmp_0x41D2AA:
	mov word [target], 0x9
	mov word [target + 0x2], 0x0
	mov ecx, dword [0x533950]
	jmp 0x41D2B0

ALIGN 16

; Path:		objects

jmp_0x41D2B8:
	inc word [target + 0x2]
	mov dl, byte [0x2 * edi + 0x4AB730]
	jmp 0x41D2BF

ALIGN 16

; Path:		objects

jmp_0x41D57A:
	mov word [target + 0x2], 0x4
	mov dx, cx
	sar dx, 0x6
	mov word [target], dx
	movsx edx, word [ecx + 0x52B722]
	jmp 0x41D581

ALIGN 16

; Path:		objects

jmp_0x41D6DA:
	mov word [target + 0x2], 0x8
	mov ecx, dword [0x80E6EC]
	jmp 0x41D6E0

ALIGN 16

; Path:		objects

jmp_0x41D805:
	mov word [target + 0x2], 0xE
	movsx ecx, word [0x80DEEC]
	mov word [target], cx
	jmp 0x41D80C

ALIGN 16

; Function:	0x420750
; Description:	draws HAIR (slot 30)

; Path:		objects

jmp_0x42077A:
	mov word [target], 0x1E
	mov word [target + 0x2], -0x1
	mov edi, 0x1
	jmp 0x42077F

ALIGN 16

; Path:		objects

jmp_0x420788:
	add word [target + 0x2], 0x2
	mov edx, dword [esi + 0x8]
	mov eax, dword [esi + 0x4]
	jmp 0x42078E

ALIGN 16

; Path:		objects

jmp_0x420818:
	mov word [target + 0x2], -0x2
	mov edx, dword [0x533950]
	jmp 0x42081E

ALIGN 16

; Path:		objects

jmp_0x420831:
	add word [target + 0x2], 0x2
	mov eax, dword [esp + 0x18]
	lea edx, [esi + ebx - 0x1D]
	jmp 0x420839

ALIGN 16

; Function:	0x432BB0
; Description:	(called from 0x432F00)

; Path:		objects, statics

jmp_0x432C10:
	mov cx, word [temporary]
	mov word [esi + 0x32], cx
	mov al, byte [0x4BF22C]
	jmp 0x432C15

ALIGN 16

; Function:	0x432F00
; Description:	sets up broken pieces of shatterable objects and statics

; Path:		statics

jmp_0x432F59:
	movsx ecx, word [eax + 0x12]
	mov si, cx
	or si, 0xFC00
	mov word [temporary], si
	lea esi, [0x8 * ecx]
	jmp 0x432F64

ALIGN 16

; Function:	0x438F80
; Description:	draws GUNSHELL (slot 386) and SHOTGUNSHELL (slot 387)

; Path:		objects

jmp_0x438FBE:
	mov word [target + 0x2], 0x0
	movsx edi, word [esi]
	mov word [target], di
	shl edi, 0x6
	jmp 0x438FC4

ALIGN 16

; Function:	0x439590
; Description:	draws GUN_FLASH (slot 388)

; Path:		objects

jmp_0x439691:
	mov word [target], 0x184
	mov word [target + 0x2], 0x0
	mov dword [0x5C0344], 0xFF2F2F00
	jmp 0x43969B

ALIGN 16

; Function:	0x43A030
; Description:	sets up explosion effects of objects

; Path:		objects

jmp_0x43A051:
	movsx ebp, word [0x2 * eax + ecx + 0xC]
	mov si, bp
	and si, 0x3FF
	mov word [temporary], si
	jmp 0x43A056

ALIGN 16

; Path:		objects

jmp_0x43A152:
	mov ax, word [temporary]
	mov word [edi + 0x20], ax
	mov eax, dword [0x7E70C8]
	jmp 0x43A157

ALIGN 16

; Path:		objects

jmp_0x43A389:
	mov edx, dword [esp + 0x18]
	mov ax, dx
	shl ax, 0xA
	or ax, word [temporary]
	mov word [edi + 0x20], ax
	lea eax, [edx + edx]
	jmp 0x43A390

ALIGN 16

; Function:	0x44CF10
; Description:	(calls 0x432F00)

; Path:		objects

jmp_0x44D0E4:
	mov ecx, dword [0x7FE858]
	test ecx, ecx
	jz 0x44D0EA
	bsf ebx, ecx
	shl bx, 0xA
	mov word [temporary], bx
	mov bx, ax
	and bx, 0x3FF
	or word [temporary], bx
	jmp 0x44D0EA

ALIGN 16

; Function:	0x44D4E0
; Description:	(calls 0x432F00)

; Path:		objects

jmp_0x44D535:
	mov dx, di
	shl dx, 0xA
	movsx ecx, word [esi + 0xC]
	mov ax, cx
	and ax, 0x3FF
	or dx, ax
	mov word [temporary], dx
	shl ecx, 0x6
	jmp 0x44D53C

ALIGN 16

; Function:	0x44E980
; Description:	draws rooms

; Path:		rooms, caustics

jmp_0x44E980:
	movsx eax, word [esp + 0x4]
	mov word [target + 0x2], ax
	jmp 0x44E985

ALIGN 16

; Path:		rooms, caustics

jmp_0x44E997:
	mov eax, dword [0x533934]
	lea esi, [0x4 * edx + eax]
	mov cx, word [esi + 0x4E]
	mov word [target], cx
	jmp 0x44E99F

ALIGN 16

; Function:	0x44E9E0
; Description:	draws statics

; Path:		statics

jmp_0x44EAF8:
	mov word [target + 0x2], -0x1
	mov word [target], ax
	lea edx, [0x8 * eax]
	jmp 0x44EAFF

ALIGN 16

; Function:	0x44F1B0
; Description:	draws exploded parts of objects

; Path:		objects

jmp_0x44F1C0:
	mov word [target + 0x2], 0x0
	movsx edi, word [0x8 * eax + ecx + 0x14]
	mov word [target], di
	jmp 0x44F1C5

ALIGN 16

; Path:		objects

jmp_0x44F27B:
	mov ax, word [esi + 0x20]
	shl ax, 0x6
	sar ax, 0x6
	mov word [target], ax
	mov ax, word [esi + 0x20]
	sar ax, 0xA
	mov word [target + 0x2], ax
	mov eax, dword [0x533950]
	jmp 0x44F280

ALIGN 16

; Function:	0x44F600
; Description:	draws objects

; Path:		objects

jmp_0x44F775:
	mov ecx, edi
	sub ecx, 0x52B720
	sar cx, 0x6
	mov word [target], cx
	mov word [target + 0x2], 0x0
	mov al, byte [ebp + 0x8]
	add esp, 0x14
	jmp 0x44F77B

ALIGN 16

; Path:		objects

jmp_0x44F7BE:
	mov edx, edi
	sub edx, 0x52B720
	sar dx, 0x6
	mov word [target], dx
	mov dx, word [esp + 0x1C]
	inc dx
	mov word [target + 0x2], dx
	mov edx, dword [esp + 0x18]
	mov ebx, dword [edx]
	jmp 0x44F7C4

ALIGN 16

; Path:		objects

jmp_0x44F8E0:
	mov word [target], 0x184
	mov word [target + 0x2], 0x0
	mov edx, dword [0x533950]
	jmp 0x44F8E6

ALIGN 16

; Path:		objects

jmp_0x44F993:
	mov ecx, edi
	sub ecx, 0x52B720
	sar cx, 0x6
	mov word [target], cx
	mov word [target + 0x2], 0x0
	mov al, byte [ebp + 0x8]
	add esp, 0x2C
	jmp 0x44F999

ALIGN 16

; Path:		objects

jmp_0x44F9DA:
	mov ecx, edi
	sub ecx, 0x52B720
	sar cx, 0x6
	mov word [target], cx
	mov cx, word [esp + 0x1C]
	inc cx
	mov word [target + 0x2], cx
	mov ecx, dword [esp + 0x18]
	mov ebx, dword [ecx]
	jmp 0x44F9E0

ALIGN 16

; Path:		objects

jmp_0x44FB33:
	mov word [target], 0x184
	mov word [target + 0x2], 0x0
	mov eax, dword [0x533950]
	jmp 0x44FB38

ALIGN 16

; Function:	0x463BD0
; Description:	draws headlight beam of MOTORBIKE (slot 31) and JEEP (slot 32)

; Path:		objects

jmp_0x463C4B:
	mov word [target + 0x2], -0x1
	movsx esi, word [esi + 0xC]
	mov word [target], si
	mov edx, dword [0x533950]
	jmp 0x463C55

ALIGN 16

; Path:		objects

jmp_0x463CCE:
	inc word [target + 0x2]
	mov eax, dword [edi + 0xC]
	mov ecx, dword [edi + 0x8]
	jmp 0x463CD4

ALIGN 16
