; Function:	0x4703A0
; Description:	(called from 0x470A70)

; Path:		caustics

jmp_0x470542:
	movsx ax, byte [0x4 * ecx + 0x5339E9]
	cmp byte [process], 0x0
	je 0x47054B
	neg ax
	mov bp, ax
	not bp
	sar bp, 0xF
	and ax, bp
	cmp ax, 0xFF
	jle .resume
	mov ax, 0xFF
.resume:
	movzx eax, ax
	imul eax, 0x10101
	pxor mm7, mm7
	movd mm0, eax
	punpcklbw mm0, mm7
	mov ebp, dword [node]
	movd mm1, dword [ebp + rule.colour]
	punpcklbw mm1, mm7
	movsx eax, byte [ebp + rule.blend_mode]
	call dword [0x4 * eax + blend_table + 0x4]
	movd mm1, dword [ebp + rule.colour + 0x4]
	punpcklbw mm1, mm7
	movsx eax, byte [ebp + rule.blend_mode + 0x1]
	call dword [0x4 * eax + blend_table + 0x4]
	movq mm1, mm0
	movzx ecx, byte [esi + 0x12]
	movzx eax, byte [esi + 0x11]
	shl ecx, 0x8
	or ecx, eax
	shl ecx, 0x8
	or ecx, edx
	movd mm0, ecx
	punpcklbw mm0, mm7
	movsx eax, byte [ebp + rule.operation]
	call dword [0x4 * eax + operation_table + 0x4]
	packsswb mm0, mm7
	movd edx, mm0
	or edx, 0xFF000000
	emms
	jmp 0x4705B4

ALIGN 16

; Function:	0x4705F0
; Description:	(called from 0x470A70)

; Path:		caustics

jmp_0x4707BD:
	shl eax, 0x3
	cmp byte [process], 0x0
	jne .proceed
	add edx, eax
	jmp 0x4707C2
.proceed:
	mov di, ax
	not di
	sar di, 0xF
	and ax, di
	cmp ax, 0xFF
	jle .resume
	mov ax, 0xFF
.resume:
	movzx eax, ax
	imul eax, 0x10101
	pxor mm7, mm7
	movd mm0, eax
	punpcklbw mm0, mm7
	mov edi, dword [node]
	movd mm1, dword [edi + rule.colour]
	punpcklbw mm1, mm7
	movsx eax, byte [edi + rule.blend_mode]
	call dword [0x4 * eax + blend_table + 0x4]
	movd mm1, dword [edi + rule.colour + 0x4]
	punpcklbw mm1, mm7
	movsx eax, byte [edi + rule.blend_mode + 0x1]
	call dword [0x4 * eax + blend_table + 0x4]
	movq mm1, mm0
	movzx ecx, cx
	movzx eax, byte [esi + 0x10]
	shl edx, 0x8
	or edx, ecx
	shl edx, 0x8
	or edx, eax
	movd mm0, edx
	punpcklbw mm0, mm7
	movsx eax, byte [edi + rule.operation]
	call dword [0x4 * eax + operation_table + 0x4]
	packsswb mm0, mm7
	movd edx, mm0
	or edx, 0xFF000000
	emms
	jmp 0x470822

ALIGN 16

; Function:	0x470860
; Description:	(called from 0x470A70)

; Path:		rooms

jmp_0x47086E:
	mov ecx, list
.loop:
	cmp byte [ecx + rule.result], 0x0
	je .continue
	cmp byte [ecx + rule.subject_type], 0x1
	jne .continue
	mov ax, word [ecx + rule.subject + 0x2]
	cmp ax, -0x1
	je .flags
	cmp ax, word [target + 0x2]
	jne .continue
.flags:
	mov ax, word [ecx + rule.subject]
	cmp ax, -0x1
	je .found
	test word [target], ax
	jz .continue
.found:
	mov dword [node], ecx
	mov byte [process + 0x1], 0x1
	jmp 0x47087D
.continue:
	add ecx, rule_size
	cmp ecx, list_end
	jne .loop
	mov byte [process + 0x1], 0x0
	jmp 0x47087D

ALIGN 16

; Path:		rooms, caustics

jmp_0x4708A3:
	movd mm0, dword [esp + 0x10]
	cmp byte [process + 0x1], 0x0
	jne .change
	cmp byte [process], 0x0
	je 0x4708A8
	cmp byte [esp + 0x23], -0x1
	jne 0x4708A8
	pxor mm7, mm7
	punpcklbw mm0, mm7
	movd mm1, dword [esp + 0x20]
	punpcklbw mm1, mm7
	psllw mm1, 0x8
	psraw mm1, 0x7
	paddw mm1, mm0
	packuswb mm1, mm7
	jmp 0x4708B0
.change:
	pxor mm7, mm7
	punpcklbw mm0, mm7
	mov ebx, dword [node]
	movd mm1, dword [ebx + rule.colour]
	punpcklbw mm1, mm7
	movsx edx, byte [ebx + rule.blend_mode]
	call dword [0x4 * edx + blend_table + 0x4]
	movd mm1, dword [ebx + rule.colour + 0x4]
	punpcklbw mm1, mm7
	movsx edx, byte [ebx + rule.blend_mode + 0x1]
	call dword [0x4 * edx + blend_table + 0x4]
	cmp byte [process], 0x0
	je .pack
	cmp byte [esp + 0x23], -0x1
	jne .pack
	movd mm1, dword [esp + 0x20]
	punpcklbw mm1, mm7
	psllw mm1, 0x8
	psraw mm1, 0x7
	paddw mm1, mm0
	packuswb mm1, mm7
	jmp 0x4708B0
.pack:
	packuswb mm0, mm7
	jmp 0x4708A8

ALIGN 16

; Function:	0x470A70
; Description:	draws room meshes

; Path:		caustics

jmp_0x470B13:
	mov ecx, list
.loop:
	cmp byte [ecx + rule.result], 0x0
	je .continue
	cmp byte [ecx + rule.subject_type], 0x2
	jne .continue
	mov ax, word [ecx + rule.subject + 0x2]
	cmp ax, -0x1
	je .flags
	cmp ax, word [target + 0x2]
	jne .continue
.flags:
	mov ax, word [ecx + rule.subject]
	cmp ax, -0x1
	je .found
	test word [target], ax
	jz .continue
.found:
	mov dword [node], ecx
	mov byte [process], 0x1
	mov ecx, dword [0x7FE73C]
	jmp 0x470B19
.continue:
	add ecx, rule_size
	cmp ecx, list_end
	jne .loop
	mov byte [process], 0x0
	mov ecx, dword [0x7FE73C]
	jmp 0x470B19

ALIGN 16

; Function:	0x47B900
; Description:	(called from 0x47BB30 and 0x47C950)

; Path:		objects

jmp_0x47B90F:
	cmp byte [process], 0x0
	je 0x47B99F
	mov ecx, list
.loop:
	cmp byte [ecx + rule.result], 0x0
	je .continue
	cmp byte [ecx + rule.subject_type], 0x3
	jne .continue
	mov ax, word [ecx + rule.subject + 0x2]
	cmp ax, -0x1
	je .slot
	cmp ax, word [target + 0x2]
	jne .continue
.slot:
	mov ax, word [ecx + rule.subject]
	cmp ax, -0x1
	je .found
	cmp ax, word [target]
	jne .continue
.found:
	mov dword [node], ecx
	jmp 0x47B932
.continue:
	add ecx, rule_size
	cmp ecx, list_end
	jne .loop
	jmp 0x47B99F

ALIGN 16

; Path:		objects

jmp_0x47B93C:
	pxor mm7, mm7
	movd mm0, dword [eax]
	punpcklbw mm0, mm7
	mov ebx, dword [node]
	movd mm1, dword [ebx + rule.colour]
	punpcklbw mm1, mm7
	movsx edx, byte [ebx + rule.blend_mode]
	call dword [0x4 * edx + blend_table + 0x4]
	movd mm1, dword [ebx + rule.colour + 0x4]
	punpcklbw mm1, mm7
	movsx edx, byte [ebx + rule.blend_mode + 0x1]
	call dword [0x4 * edx + blend_table + 0x4]
	packuswb mm0, mm7
	movd edx, mm0
	add eax, 0x20
	jmp 0x47B98D

ALIGN 16

; Function:	0x47B9F0
; Description:	(called from 0x47BB30 and 0x47C950)

; Path:		statics

jmp_0x47BA35:
	cmp byte [process], 0x0
	jne .start
	lea edi, [eax + 0x10]
	jmp 0x47BA42
.start:
	mov ecx, list
.loop:
	cmp byte [ecx + rule.result], 0x0
	je .continue
	cmp byte [ecx + rule.subject_type], 0x4
	jne .continue
	mov di, word [ecx + rule.subject]
	cmp di, -0x1
	je .found
	cmp di, word [target]
	jne .continue
.found:
	mov dword [node], ecx
	lea edi, [eax + 0x10]
	jmp 0x47BA42
.continue:
	add ecx, rule_size
	cmp ecx, list_end
	jne .loop
	mov byte [process], 0x0
	lea edi, [eax + 0x10]
	jmp 0x47BA42

ALIGN 16

; Path:		statics

jmp_0x47BAAB:
	cmp byte [process], 0x0
	je 0x47BAFC
	pxor mm7, mm7
	shl eax, 0x8
	or eax, ecx
	shl eax, 0x8
	or eax, esi
	movd mm0, eax
	punpcklbw mm0, mm7
	mov edx, dword [node]
	movd mm1, dword [edx + rule.colour]
	punpcklbw mm1, mm7
	movsx eax, byte [edx + rule.blend_mode]
	call dword [0x4 * eax + blend_table + 0x4]
	movd mm1, dword [edx + rule.colour + 0x4]
	punpcklbw mm1, mm7
	movsx eax, byte [edx + rule.blend_mode + 0x1]
	call dword [0x4 * eax + blend_table + 0x4]
	packuswb mm0, mm7
	movd eax, mm0
	or eax, 0xFF000000
	push edi
	jmp 0x47BB0C

ALIGN 16

; Path:		statics

jmp_0x47BB2A:
	emms
	pop ebp
	add esp, 0xC
	ret

ALIGN 16

; Function:	0x47BB30
; Description:	draws meshes of in-game objects and statics

; Path:		objects, statics

jmp_0x47BB30:
	mov eax, dword [esp]
	sub eax, 0x401000
	cmp eax, 0xA6000
	setbe al
	mov byte [process], al
	sub esp, 0x90
	jmp 0x47BB36

ALIGN 16

; Function:	0x47C950
; Description:	draws meshes of inventory objects

; Path:		objects

jmp_0x47C950:
	mov byte [process], 0x0
	sub esp, 0x90
	jmp 0x47C956

ALIGN 16

; Function:	0x4827B0
; Description:	(called from 0x470860)

; Path:		rooms, caustics

jmp_0x4827C5:
	movd mm4, dword [esp + 0xC]
	cmp byte [process + 0x1], 0x0
	jne .change
	cmp byte [process], 0x0
	je 0x4827CA
	cmp byte [esp + 0x7], -0x1
	jne 0x4827CA
	pxor mm7, mm7
	punpcklbw mm4, mm7
	movd mm0, dword [esp + 0x4]
	punpcklbw mm0, mm7
	psllw mm0, 0x8
	psraw mm0, 0x7
	paddw mm0, mm4
	packuswb mm0, mm7
	jmp 0x4827D2
.change:
	pxor mm7, mm7
	punpcklbw mm4, mm7
	movq mm0, mm4
	mov ebx, dword [node]
	movd mm1, dword [ebx + rule.colour]
	punpcklbw mm1, mm7
	movsx ecx, byte [ebx + rule.blend_mode]
	call dword [0x4 * ecx + blend_table + 0x4]
	movd mm1, dword [ebx + rule.colour + 0x4]
	punpcklbw mm1, mm7
	movsx ecx, byte [ebx + rule.blend_mode + 0x1]
	call dword [0x4 * ecx + blend_table + 0x4]
	cmp byte [process], 0x0
	je .pack
	cmp byte [esp + 0x7], -0x1
	jne .pack
	movd mm1, dword [esp + 0x4]
	punpcklbw mm1, mm7
	psllw mm1, 0x8
	psraw mm1, 0x7
	paddw mm0, mm1
	packuswb mm0, mm7
	jmp 0x4827D2
.pack:
	movq mm4, mm0
	packuswb mm4, mm7
	jmp 0x4827CA

ALIGN 16

; Function:	0x487940
; Description:	draws broken pieces of shatterable meshes

; Path:		objects, statics

jmp_0x487964:
	mov bx, word [esi + 0x26]
	shl bx, 0x6
	sar bx, 0x6
	mov dx, word [esi + 0x26]
	sar dx, 0xA
	mov ecx, list
.loop:
	cmp byte [ecx + rule.result], 0x0
	je .continue
	cmp dx, -0x1
	jne .else
	cmp byte [ecx + rule.subject_type], 0x4
	je .slot
.continue:
	add ecx, rule_size
	cmp ecx, list_end
	jne .loop
	mov byte [process], 0x0
	mov eax, dword [esi]
	mov ecx, dword [esi - 0x4]
	jmp 0x487969
.else:
	cmp byte [ecx + rule.subject_type], 0x3
	jne .continue
.mesh:
	mov ax, word [ecx + rule.subject + 0x2]
	cmp ax, -0x1
	je .slot
	cmp ax, dx
	jne .continue
.slot:
	mov ax, word [ecx + rule.subject]
	cmp ax, -0x1
	je .found
	cmp ax, bx
	jne .continue
.found:
	mov dword [node], ecx
	mov byte [process], 0x1
	mov eax, dword [esi]
	mov ecx, dword [esi - 0x4]
	jmp 0x487969

ALIGN 16

; Path:		objects, statics

jmp_0x487C52:
	shl edi, 0x8
	or edi, ecx
	cmp byte [process], 0x0
	je 0x487C57
	pxor mm7, mm7
	movd mm0, edi
	punpcklbw mm0, mm7
	mov edx, dword [node]
	movd mm1, dword [edx + rule.colour]
	punpcklbw mm1, mm7
	movsx ecx, byte [edx + rule.blend_mode]
	call dword [0x4 * ecx + blend_table + 0x4]
	movd mm1, dword [edx + rule.colour + 0x4]
	punpcklbw mm1, mm7
	movsx ecx, byte [edx + rule.blend_mode + 0x1]
	call dword [0x4 * ecx + blend_table + 0x4]
	packuswb mm0, mm7
	movd edi, mm0
	jmp 0x487C57

ALIGN 16

; Path:		objects, statics

jmp_0x487CF2:
	shl edi, 0x8
	or edi, ecx
	cmp byte [process], 0x0
	je 0x487CF7
	pxor mm7, mm7
	movd mm0, edi
	punpcklbw mm0, mm7
	mov edx, dword [node]
	movd mm1, dword [edx + rule.colour]
	punpcklbw mm1, mm7
	movsx ecx, byte [edx + rule.blend_mode]
	call dword [0x4 * ecx + blend_table + 0x4]
	movd mm1, dword [edx + rule.colour + 0x4]
	punpcklbw mm1, mm7
	movsx ecx, byte [edx + rule.blend_mode + 0x1]
	call dword [0x4 * ecx + blend_table + 0x4]
	packuswb mm0, mm7
	movd edi, mm0
	jmp 0x487CF7

ALIGN 16

; Path:		objects, statics

jmp_0x487D92:
	shl edi, 0x8
	or edi, ecx
	cmp byte [process], 0x0
	je 0x487D97
	pxor mm7, mm7
	movd mm0, edi
	punpcklbw mm0, mm7
	mov edx, dword [node]
	movd mm1, dword [edx + rule.colour]
	punpcklbw mm1, mm7
	movsx ecx, byte [edx + rule.blend_mode]
	call dword [0x4 * ecx + blend_table + 0x4]
	movd mm1, dword [edx + rule.colour + 0x4]
	punpcklbw mm1, mm7
	movsx ecx, byte [edx + rule.blend_mode + 0x1]
	call dword [0x4 * ecx + blend_table + 0x4]
	packuswb mm0, mm7
	movd edi, mm0
	jmp 0x487D97

ALIGN 16

; Path:		objects, statics

jmp_0x487DB2:
	emms
	mov eax, 0xFF000000
	jmp 0x487DB7

ALIGN 16
