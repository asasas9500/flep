; Function:	0x471920
; Description:	creates the sound device

; Path:		direct, room

jmp_0x47194E:
	cmp byte [initialisation], 0x0
	je .error
	push dsound
	call dword [0x4A7070]
	test eax, eax
	jz .error
	push direct_sound_create
	push eax
	call dword [0x4A711C]
	test eax, eax
	jz .error
	call eax
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .retry
	mov ecx, pointer
.loop:
	mov dword [ecx], eax
	add ecx, 0x4
	cmp ecx, pointer_end
	jne .loop
	mov ecx, channel
.repeat:
	mov dword [ecx], eax
	add ecx, 0x4
	cmp ecx, channel_end
	jne .repeat
	mov ecx, sample
.each:
	mov dword [ecx], eax
	add ecx, 0x4
	cmp ecx, sample_end
	jne .each
	mov byte [active], 0x1
	jmp 0x471953
.retry:
	push 0x0
	push 0x7538D1
	mov ecx, dword [0x754088]
	mov edx, dword [ecx + 0x24]
	mov eax, edx
	shl edx, 0x6
	add edx, eax
	mov eax, dword [ecx + 0xC]
	mov ecx, dword [0x2 * edx + eax + 0x6E]
	push ecx
.error:
	call 0x49DA4E
	mov byte [active], 0x0
	jmp 0x471953

ALIGN 16

; Function:	0x49F18B
; Description:	runs the application

; Path:		direct, room

jmp_0x49F266:
	push ole32
	call dword [0x4A7070]
	test eax, eax
	jz .error
	push co_initialize_ex
	push eax
	call dword [0x4A711C]
	test eax, eax
	jz .error
	push 0x0
	push 0x0
	call eax
	test eax, eax
	sete al
	mov byte [initialisation], al
	jmp .continue
.error:
	mov byte [initialisation], 0x0
.continue:
	call 0x48C720
	cmp byte [initialisation], 0x0
	je 0x49F26B
	push ole32
	call dword [0x4A7070]
	test eax, eax
	jz 0x49F26B
	push co_uninitialize
	push eax
	call dword [0x4A711C]
	test eax, eax
	jz 0x49F26B
	call eax
	jmp 0x49F26B

ALIGN 16
