; Function:	0x471820
; Description:	(called from 0x471D40 and 0x471F80)

; Path:		room

jmp_0x47184F:
jmp_0x47186C:
	push eax
	cmp byte [active], 0x0
	je .normal
	mov eax, dword [esp + 0x8]
	cmp dword [0x4 * eax + channel], 0x0
	je .normal
	mov dword [referrer], ecx
.normal:
	push ecx
	call dword [edx + 0x40]
	ret

ALIGN 16

; Function:	0x471B30
; Description:	creates the sound buffers

; Path:		direct, room

jmp_0x471B4A:
	mov byte [status], 0x0
	mov eax, dword [0x7F7584]
	mov ecx, dword [0x7F70F0]
	lea edx, [0x8 * ecx + eax]
.loop:
	movsx ecx, word [eax]
	cmp ecx, -0x1
	je .continue
	movzx edi, word [eax + 0x6]
	shr edi, 0x2
	and edi, 0xF
	add ecx, edi
	cmp dword [esp + 0x34], ecx
	jge .continue
	xor edx, edx
	movzx edi, word [eax + 0x6]
	test edi, 0x1000
	setz dl
	mov byte [status], dl
	test dl, dl
	jz .return
	and edi, 0x3
	cmp edi, 0x3
	je .return
	mov edi, dword [esi + 0x28]
	lea eax, [esi + edi + 0x2C]
	mov ecx, dword [0x52A96C]
	shl ecx, 0x1
	add edi, ecx
	mov dword [esi + 0x28], edi
	add ecx, eax
.add:
	mov byte [eax], 0x0
	inc eax
	cmp eax, ecx
	jne .add
	mov eax, dword [0x7538D1]
	mov cl, byte [esi + 0x24]
	jmp 0x471B50
.continue:
	add eax, 0x8
	cmp eax, edx
	jne .loop
.return:
	mov eax, dword [0x7538D1]
	mov cl, byte [esi + 0x24]
	mov edi, dword [esi + 0x28]
	jmp 0x471B50

ALIGN 16

; Path:		room

jmp_0x471C4D:
	call 0x48F8A0
	test eax, eax
	jnz 0x471C52
	cmp byte [active], al
	je 0x471C52
	cmp byte [status], al
	je 0x471C52
	mov esi, dword [0x52A97C]
	mov ecx, dword [esi + 0x28]
	mov edi, dword [esp + 0x38]
	mov dword [0x4 * edi + count], ecx
	push ecx
	call 0x49DCD6
	add esp, 0x4
	mov dword [0x4 * edi + pointer], eax
	test eax, eax
	jz 0x471C52
	mov ecx, dword [esi + 0x28]
	add esi, 0x2C
	mov edi, eax
	rep movsb
	jmp 0x471C52

ALIGN 16

; Function:	0x471C80
; Description:	stops the sound buffers

; Path:		room

jmp_0x471CB0:
	call 0x48F8A0
	cmp byte [active], 0x0
	je 0x471CB5
	mov edi, dword [esp + 0x10]
	mov edx, dword [0x4 * edi + channel]
	test edx, edx
	jz 0x471CB5
	mov eax, dword [edx]
	push eax
	mov ecx, dword [eax]
	call dword [ecx + 0x48]
	push eax
	call 0x48F8A0
	add esp, 0x4
	mov dword [0x4 * edi + channel], 0x0
	jmp 0x471CB5

ALIGN 16

; Function:	0x471D40
; Description:	plays the sound buffers

; Path:		room

jmp_0x471E0F:
	test eax, eax
	jnz .return
	cmp byte [active], al
	je .return
	cmp dword [0x4 * edi + pointer], eax
	je .return
	sub esp, 0x8
	shl edi, 0x7
	add edi, sample
.loop:
	cmp dword [edi], eax
	je .new
	push esp
	mov ecx, dword [edi]
	push ecx
	mov eax, dword [ecx]
	call dword [eax + 0x24]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .next
	test dword [esp], 0x1
	jz .continue
.next:
	add edi, 0x4
	mov edx, dword [esp + 0x18]
	inc edx
	shl edx, 0x7
	add edx, sample
	cmp edi, edx
	jne .loop
	jmp .cleanup
.new:
	sub esp, buffer_size
	mov dword [esp + buffer.length], buffer_size
	mov dword [esp + buffer.flags], 0x2E8
	mov edx, dword [esp + 0x18 + buffer_size]
	mov ecx, dword [0x4 * edx + count]
	mov dword [esp + buffer.bytes], ecx
	mov dword [esp + buffer.reserved], eax
	mov dword [esp + buffer.format], 0x52A968
	mov dword [esp + buffer.algorithm + guid.data1], eax
	mov dword [esp + buffer.algorithm + guid.data2], eax
	mov dword [esp + buffer.algorithm + guid.data4], eax
	mov dword [esp + buffer.algorithm + guid.data4 + 0x4], eax
	lea ecx, [esp]
	push eax
	push edi
	push ecx
	mov eax, dword [0x7538D1]
	push eax
	mov edx, dword [eax]
	call dword [edx + 0xC]
	add esp, buffer_size
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .cleanup
	push esp
	push interface_direct_sound_buffer8
	mov ecx, dword [edi]
	push ecx
	mov edx, dword [ecx]
	call dword [edx]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .abort
	mov eax, dword [edi]
	push eax
	mov ecx, dword [eax]
	call dword [ecx + 0x8]
	mov edx, dword [esp]
	mov dword [edi], edx
	lea ecx, [esp + 0x4]
	lea eax, [esp]
	push 0x0
	push 0x0
	push 0x0
	push ecx
	push eax
	mov eax, dword [esp + 0x2C]
	mov ecx, dword [0x4 * eax + count]
	push ecx
	push 0x0
	push edx
	mov eax, dword [edx]
	call dword [eax + 0x2C]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .abort
	mov edx, esi
	mov eax, dword [esp + 0x18]
	mov esi, dword [0x4 * eax + pointer]
	mov ecx, dword [esp + 0x4]
	mov eax, edi
	mov edi, dword [esp]
	rep movsb
	mov esi, edx
	mov edi, eax
	mov eax, dword [esp + 0x4]
	mov edx, dword [esp]
	push ecx
	push ecx
	push eax
	push edx
	mov eax, dword [edi]
	push eax
	mov ecx, dword [eax]
	call dword [ecx + 0x4C]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .abort
	sub esp, effect_size
	mov dword [esp + effect.length], effect_size
	mov dword [esp + effect.flags], 0x2
	mov ecx, dword [effect_direct_sound_reverb + guid.data1]
	mov dword [esp + effect.class + guid.data1], ecx
	mov ecx, dword [effect_direct_sound_reverb + guid.data2]
	mov dword [esp + effect.class + guid.data2], ecx
	mov ecx, dword [effect_direct_sound_reverb + guid.data4]
	mov dword [esp + effect.class + guid.data4], ecx
	mov ecx, dword [effect_direct_sound_reverb + guid.data4 + 0x4]
	mov dword [esp + effect.class + guid.data4 + 0x4], ecx
	mov dword [esp + effect.reserved1], eax
	mov dword [esp + effect.reserved2], eax
	lea ecx, [esp]
	push eax
	push ecx
	push 0x1
	mov eax, dword [edi]
	push eax
	mov ecx, dword [eax]
	call dword [ecx + 0x54]
	add esp, effect_size
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .abort
	lea edx, [edi - sample + object]
	push edx
	push interface_direct_sound_reverb
	push eax
	push effect_direct_sound_reverb
	mov edx, dword [edi]
	push edx
	mov ecx, dword [edx]
	call dword [ecx + 0x5C]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .abort
	push eax
	mov ecx, dword [edi - sample + object]
	push ecx
	mov edx, dword [ecx]
	call dword [edx + 0x1C]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .error
.continue:
	cmp byte [0x4BF2A0], al
	jne .preset
	movsx ecx, word [0x7FE70C]
	imul ecx, ecx, 0x94
	add ecx, dword [0x533934]
	movzx edx, byte [ecx + 0x34]
	movsx eax, byte [edx + type]
.preset:
	mov byte [esi + current], al
	test eax, eax
	jz .stop
	jl .standard
	sub eax, 0x1
	imul eax, eax, reverb_size
	add eax, custom
	push eax
	mov edx, dword [edi - sample + object]
	push edx
	mov ecx, dword [edx]
	call dword [ecx + 0xC]
	jmp .check
.standard:
	neg eax
	sub eax, 0x1
	push eax
	mov edx, dword [edi - sample + object]
	push edx
	mov ecx, dword [edx]
	call dword [ecx + 0x14]
.check:
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .cleanup
.stop:
	mov eax, dword [edi]
	push eax
	mov ecx, dword [eax]
	call dword [ecx + 0x48]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .cleanup
	push eax
	mov ecx, dword [edi]
	push ecx
	mov edx, dword [ecx]
	call dword [edx + 0x34]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .cleanup
	mov eax, dword [esp + 0x1C]
	push eax
	mov ecx, dword [edi]
	push ecx
	mov edx, dword [ecx]
	call dword [edx + 0x3C]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .cleanup
	fild dword [esp + 0x20]
	fmul dword [0x4A730C]
	fimul dword [0x52A96C]
	call 0x49DA5C
	cmp eax, 0x64
	jae .above
	mov eax, 0x64
	jmp .frequency
.above:
	cmp eax, 0x186A0
	jbe .frequency
	mov eax, 0x186A0
.frequency:
	push eax
	mov edx, dword [edi]
	push edx
	mov ecx, dword [edx]
	call dword [ecx + 0x44]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .cleanup
	mov eax, dword [esp + 0x24]
	cmp eax, 0x4000
	jle .below
	neg eax
	add eax, 0x8000
	jmp .pan
.below:
	cmp eax, -0x4000
	jge .pan
	neg eax
	sub eax, 0x8000
.pan:
	sar eax, 0x4
	push eax
	mov edx, dword [edi]
	push edx
	mov ecx, dword [edx]
	call dword [ecx + 0x40]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .cleanup
	cmp byte [esi + current], al
	jz .finish
	mov edx, dword [esp + 0x28]
	push edx
	push eax
	push eax
	mov edx, dword [edi]
	push edx
	mov eax, dword [edx]
	call dword [eax + 0x30]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .cleanup
.finish:
	mov dword [0x4 * esi + channel], edi
	jmp .cleanup
.error:
	mov ecx, dword [edi - sample + object]
	mov dword [edi - sample + object], 0x0
	push ecx
	mov edx, dword [ecx]
	call dword [edx + 0x8]
.abort:
	mov eax, dword [edi]
	mov dword [edi], 0x0
	push eax
	mov edx, dword [eax]
	call dword [edx + 0x8]
.cleanup:
	add esp, 0x8
.return:
	mov eax, esi
	pop edi
	pop esi
	pop ecx
	ret

ALIGN 16

; Function:	0x471F10
; Description:	releases the sound buffers

; Path:		room

jmp_0x471F50:
	cmp byte [active], 0x0
	je .return
	mov esi, pointer
.loop:
	mov eax, dword [esi]
	test eax, eax
	jz .continue
	mov dword [esi], 0x0
	push eax
	call 0x49E22D
	add esp, 0x4
.continue:
	add esi, 0x4
	cmp esi, pointer_end
	jne .loop
	mov esi, sample
.repeat:
	cmp dword [esi], 0x0
	je .skip
	mov eax, dword [esi - sample + object]
	mov dword [esi - sample + object], 0x0
	push eax
	mov edx, dword [eax]
	call dword [edx + 0x8]
	mov edx, dword [esi]
	mov dword [esi], 0x0
	push edx
	mov eax, dword [edx]
	call dword [eax + 0x8]
.skip:
	add esi, 0x4
	cmp esi, sample_end
	jne .repeat
.return:
	pop esi
	ret

ALIGN 16

; Function:	0x471F80
; Description:	updates the volume and pan of the sound buffers

; Path:		room

jmp_0x471FAB:
	call 0x471820
	cmp byte [active], 0x0
	je 0x471FB0
	mov eax, dword [esp + 0x1C]
	mov esi, dword [0x4 * eax + channel]
	test esi, esi
	jz 0x471FB0
	cmp byte [0x4BF2A0], 0x0
	jne .menu
	movsx eax, word [0x7FE70C]
	imul eax, eax, 0x94
	add eax, dword [0x533934]
	movzx ecx, byte [eax + 0x34]
	movsx eax, byte [ecx + type]
	jmp .change
.menu:
	xor eax, eax
.change:
	mov ecx, dword [esp + 0x1C]
	movsx edx, byte [ecx + current]
	cmp eax, edx
	je .volume
	mov byte [ecx + current], al
	test eax, eax
	jnz .update
	mov edx, dword [esi]
	push edx
	mov ecx, dword [edx]
	call dword [ecx + 0x48]
	jmp .check
.update:
	test edx, edx
	jnz .continue
	sub esp, 0x4
	lea ecx, [esp]
	push edx
	push ecx
	mov ecx, dword [referrer]
	push ecx
	mov eax, dword [ecx]
	call dword [eax + 0x10]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .cleanup
	mov ecx, dword [esp]
	push ecx
	mov edx, dword [esi]
	push edx
	mov eax, dword [edx]
	call dword [eax + 0x34]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .cleanup
	push esp
	mov eax, dword [referrer]
	push eax
	mov edx, dword [eax]
	call dword [edx + 0x24]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .cleanup
	xor edx, edx
	test dword [esp], 0x4
	setnz dl
	push edx
	push eax
	push eax
	mov ecx, dword [esi]
	push ecx
	mov eax, dword [ecx]
	call dword [eax + 0x30]
	push eax
	call 0x48F8A0
	add esp, 0x4
	test eax, eax
	jnz .cleanup
	add esp, 0x4
.continue:
	mov edx, dword [esp + 0x1C]
	movsx eax, byte [edx + current]
	test eax, eax
	jl .standard
	sub eax, 0x1
	imul eax, eax, reverb_size
	add eax, custom
	push eax
	mov eax, dword [esi - sample + object]
	push eax
	mov ecx, dword [eax]
	call dword [ecx + 0xC]
	jmp .check
.standard:
	neg eax
	sub eax, 0x1
	push eax
	mov eax, dword [esi - sample + object]
	push eax
	mov ecx, dword [eax]
	call dword [ecx + 0x14]
.check:
	push eax
	call 0x48F8A0
.cleanup:
	add esp, 0x4
.volume:
	movzx ecx, word [esp + 0x24]
	push ecx
	call 0x471E20
	add esp, 0x4
	push eax
	mov edx, dword [esi]
	push edx
	mov ecx, dword [edx]
	call dword [ecx + 0x3C]
	push eax
	call 0x48F8A0
	add esp, 0x4
	mov eax, dword [esp + 0x20]
	cmp eax, 0x4000
	jle .below
	neg eax
	add eax, 0x8000
	jmp .pan
.below:
	cmp eax, -0x4000
	jge .pan
	neg eax
	sub eax, 0x8000
.pan:
	sar eax, 0x4
	push eax
	mov ecx, dword [esi]
	push ecx
	mov edx, dword [ecx]
	call dword [edx + 0x40]
	push eax
	call 0x48F8A0
	add esp, 0x4
	jmp 0x471FB0

ALIGN 16

; Function:	0x471FC0
; Description:	updates the frequency of the sound buffers

; Path:		room

jmp_0x471FC9:
	cmp byte [active], 0x0
	je 0x4717D0
	mov ecx, dword [esp + 0x4]
	cmp dword [0x4 * ecx + channel], 0x0
	je 0x4717D0
	fild dword [esp + 0x8]
	fmul dword [0x4A730C]
	fimul dword [0x52A96C]
	call 0x49DA5C
	cmp eax, 0x64
	jae .above
	mov eax, 0x64
	jmp .frequency
.above:
	cmp eax, 0x186A0
	jbe .frequency
	mov eax, 0x186A0
.frequency:
	push eax
	mov edx, dword [esp + 0x8]
	mov eax, dword [0x4 * edx + channel]
	mov ecx, dword [eax]
	push ecx
	mov eax, dword [ecx]
	call dword [eax + 0x44]
	push eax
	call 0x48F8A0
	add esp, 0x4
	jmp 0x4717D0

ALIGN 16
