#include "stdafx.h"
#include "flep.h"

bool check;
BYTE reference[0x100000];

__declspec(dllexport naked) void manage(void) {
	__asm {
		cmp BYTE PTR [check], 0h
		jne error
		mov BYTE PTR [check], 1h
		call patch
		add esp, 8h
		mov eax, 4A6DB1h
		jmp eax
	error:
		call kill
	}
}

void patch(void) {
	HANDLE file;
	DWORD bytes, protection;
	SIZE_T number;

	file = CreateFile("patches.bin", GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (file != INVALID_HANDLE_VALUE) {
		SetFilePointer(file, 0x1000, NULL, FILE_BEGIN);
		ReadFile(file, reference, 0xA6000, &bytes, NULL);
		WriteProcessMemory(GetCurrentProcess(), (LPVOID) 0x401000, reference, 0xA6000, &number);
		FlushInstructionCache(GetCurrentProcess(), (LPVOID) 0x401000, 0xA6000);
		SetFilePointer(file, 0xAB000, NULL, FILE_BEGIN);
		ReadFile(file, reference, 0x15000, &bytes, NULL);
		WriteProcessMemory(GetCurrentProcess(), (LPVOID) 0x4AB000, reference, 0x15000, &number);
		SetFilePointer(file, 0xC4000, NULL, FILE_BEGIN);
		ReadFile(file, reference, 0x100000, &bytes, NULL);
		VirtualProtect((LPVOID) 0x814000, 0x100000, PAGE_EXECUTE_READWRITE, &protection);
		WriteProcessMemory(GetCurrentProcess(), (LPVOID) 0x814000, reference, 0x100000, &number);
		FlushInstructionCache(GetCurrentProcess(), (LPVOID) 0x814000, 0x100000);
		CloseHandle(file);
	}
}

void kill(void) {
	MessageBox(NULL, "ERROR: missing library patches.bin. This program cann't work without this library.", "TRNG Engine", MB_OK);
	TerminateProcess(GetCurrentProcess(), 0);
}
