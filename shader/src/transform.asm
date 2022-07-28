blend_table:
	dd void
	dd void
	dd multiply
	dd screen
	dd darken
	dd lighten
	dd difference

ALIGN 16

void:
	ret

ALIGN 16

multiply:
	pmullw mm0, mm1
	psrlw mm0, 0x8
	ret

ALIGN 16

screen:
	movq mm2, mm1
	pmullw mm2, mm0
	psrlw mm2, 0x8
	paddw mm0, mm1
	psubw mm0, mm2
	ret

ALIGN 16

darken:
	movq mm2, mm1
	pcmpgtw mm2, mm0
	pand mm0, mm2
	pandn mm2, mm1
	por mm0, mm2
	ret

ALIGN 16

lighten:
	movq mm2, mm0
	pcmpgtw mm2, mm1
	pand mm0, mm2
	pandn mm2, mm1
	por mm0, mm2
	ret

ALIGN 16

difference:
	movq mm2, mm0
	psubusw mm0, mm1
	psubusw mm1, mm2
	por mm0, mm1
	ret

ALIGN 16

operation_table:
	dd cast
	dd cast
	dd addition
	dd subtraction

ALIGN 16

cast:
	psraw mm0, 0x1
	ret

ALIGN 16

addition:
	paddw mm0, mm1
	psraw mm0, 0x1
	ret

ALIGN 16

subtraction:
	psubw mm0, mm1
	psraw mm0, 0x1
	ret

ALIGN 16
