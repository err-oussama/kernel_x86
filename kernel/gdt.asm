extern set_gdt;


set_gdt:
	mov eax, [esp + 4];
	lgdt [eax];
	ret 

get_gdt:
	mov eax, [esp + 4]
	sgdt [eax];
	mov eax, [eax];
	ret;
