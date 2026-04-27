global lidtr
global sidtr
global call_int


section .text

lidtr:
	mov eax, [ebp + 4]
	lidt [eax]
	ret


sidtr:
	mov eax, [ebp + 4]
	sidt [eax]
	ret



call_isr:
	pusha
	call [exp - 4]
	popa
	iret
