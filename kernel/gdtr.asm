
global lgdtr;
global sgdtr;

lgdtr:
	mov eax, [esp + 4];
	lgdt [eax];
	re
sgdtr:
	mov eax, [esp + 4]
	sgdt [eax];
	ret;
