global get_cs;
global is64bit;

section .text

is64bit:
	mov eax, 0;
	dec eax 
	ret

get_cs:
	xor eax, eax 
	mov ax, cs
	ret
