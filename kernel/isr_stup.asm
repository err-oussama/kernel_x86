extern dived_error_handler

section .text 

%macro ISR_STUB 1

global isr_%1

isr_%1:
	pusha
	call %1
	popa
	iret

%endmacro


ISR_STUB dived_error_handler
