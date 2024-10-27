; Function:	0x448B10
; Description:	runs a game cycle

; Path:		rooms, caustics, objects, statics

jmp_0x448B5C:
	mov esi, list
.loop:
	cmp byte [esi + rule.subject_type], 0x0
	je .continue
	movsx edi, byte [esi + rule.level]
	cmp edi, -0x1
	je .condition
	cmp edi, dword [0x7FD170]
	je .condition
	mov byte [esi + rule.result], 0x0
	jmp .continue
.condition:
	movsx edi, word [esi + rule.condition]
	cmp edi, -0x1
	jne .check
	mov byte [esi + rule.result], 0x1
	jmp .continue
.check:
%ifdef flep
	push edi
	push esp
	push 0xF
	push 0x0
	call 0x10002441
	add esp, 0x4
%elifdef trep_norel
	xor al, al
	call dword [0x4 * edi + 0x812F44]
%elifdef trep_reloc
	xor al, al
	call dword [0x4 * edi + 0xC12F44]
%endif
	mov byte [esi + rule.result], al
.continue:
	add esi, rule_size
	cmp esi, list_end
	jne .loop
	mov esi, 0x80
	jmp 0x448B61

ALIGN 16

; Function:	0x451440
; Description:	(calls 0x448B10)

; Path:		rooms, caustics, objects, statics

jmp_0x451C92:
	mov ecx, list
.loop:
	cmp byte [ecx + rule.subject_type], 0x0
	je .continue
	movsx eax, byte [ecx + rule.level]
	cmp eax, -0x1
	je .condition
	cmp eax, dword [0x7FD170]
	je .condition
	mov byte [ecx + rule.result], 0x0
	jmp .continue
.condition:
	cmp word [ecx + rule.condition], -0x1
	sete al
	mov byte [ecx + rule.result], al
.continue:
	add ecx, rule_size
	cmp ecx, list_end
	jne .loop
	mov eax, dword [0x4BF528]
	jmp 0x451C97

ALIGN 16

; Function:	0x451CF0
; Description:	(calls 0x448B10)

; Path:		rooms, caustics, objects, statics

jmp_0x45202C:
	mov ecx, list
.loop:
	cmp byte [ecx + rule.subject_type], 0x0
	je .continue
	movsx eax, byte [ecx + rule.level]
	cmp eax, -0x1
	je .condition
	cmp eax, dword [0x7FD170]
	je .condition
	mov byte [ecx + rule.result], 0x0
	jmp .continue
.condition:
	cmp word [ecx + rule.condition], -0x1
	sete al
	mov byte [ecx + rule.result], al
.continue:
	add ecx, rule_size
	cmp ecx, list_end
	jne .loop
	mov byte [0x80DFE0], bl
	jmp 0x452032

ALIGN 16
