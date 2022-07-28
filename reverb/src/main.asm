[MAP ALL]
CPU PENTIUM
BITS 32

STRUC block
	.pointer: resd 1
	.length: resd 1
ENDSTRUC

STRUC element
	.sample: resd 1
	.object: resd 1
	.type: resb 1
	.padding: resb 3
ENDSTRUC

STRUC guid
	.data1: resd 1
	.data2: resw 1
	.data3: resw 1
	.data4: resb 8
ENDSTRUC

STRUC buffer
	.length: resd 1
	.flags: resd 1
	.bytes: resd 1
	.reserved: resd 1
	.format: resd 1
	.algorithm: resb guid_size
ENDSTRUC

STRUC effect
	.length: resd 1
	.flags: resd 1
	.class: resb guid_size
	.reserved1: resd 1
	.reserved2: resd 1
ENDSTRUC

STRUC reverb
	.room: resd 1
	.room_high_frequency: resd 1
	.rolloff: resd 1
	.decay: resd 1
	.decay_ratio: resd 1
	.reflections: resd 1
	.reflections_delay: resd 1
	.reverberation: resd 1
	.reverberation_delay: resd 1
	.diffusion: resd 1
	.density: resd 1
	.reference: resd 1
ENDSTRUC

ORG 0x818CE0
SECTALIGN 16

SECTION .text

%include "begin.asm"
%include "worker.asm"

text_end:

SECTION .data

interface_direct_sound_buffer8: ISTRUC guid
	AT guid.data1, dd 0x6825A449
	AT guid.data2, dw 0x7524
	AT guid.data3, dw 0x4D82
	AT guid.data4, db 0x92, 0x0F, 0x50, 0xE3, 0x6A, 0xB3, 0xAB, 0x1E
IEND
effect_direct_sound_reverb: ISTRUC guid
	AT guid.data1, dd 0xEF985E71
	AT guid.data2, dw 0xD5C7
	AT guid.data3, dw 0x42D4
	AT guid.data4, db 0xBA, 0x4D, 0x2D, 0x07, 0x3E, 0x2E, 0x96, 0xF4
IEND
interface_direct_sound_reverb: ISTRUC guid
	AT guid.data1, dd 0x4B166A6A
	AT guid.data2, dw 0x0D66
	AT guid.data3, dw 0x43F3
	AT guid.data4, db 0x80, 0xE3, 0xEE, 0x62, 0x80, 0xDE, 0xE1, 0xA4
IEND
dsound: db 'dsound.dll', 0x0
direct_sound_create: db 'DirectSoundCreate8', 0x0
ole32: db 'ole32.dll', 0x0
co_initialize_ex: db 'CoInitializeEx', 0x0
co_uninitialize: db 'CoUninitialize', 0x0

ALIGN 16, db 0x0

data_end:

ABSOLUTE data_end

pointer: resd 768
pointer_end:
count: resd 768
channel: resd 32
channel_end:
current: resb 32
sample: resd 24576
sample_end:
object: resd 24576
object_end:
referrer: resd 1
custom: resb 16 * reverb_size
type: resb 47
initialisation: resb 1
active: resb 1
status: resb 1
