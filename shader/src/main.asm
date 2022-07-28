[MAP ALL]
CPU PENTIUM
BITS 32

STRUC rule
	.condition: resw 1
	.level: resb 1
	.result: resb 1
	.subject: resw 2
	.subject_type: resb 1
	.blend_mode: resb 2
	.operation: resb 1
	.colour: resd 2
ENDSTRUC

%ifdef flep
ORG 0x8161A0
%elifdef trep_norel
ORG 0x84A2D0
%elifdef trep_reloc
ORG 0xC4A2D0
%endif
SECTALIGN 16

SECTION .text

%include "transform.asm"
%include "begin.asm"
%include "entity.asm"
%include "worker.asm"

text_end:

ABSOLUTE text_end

target: resw 2
temporary: resw 1
process: resb 2
node: resd 1
list: resb 64 * rule_size
list_end:
