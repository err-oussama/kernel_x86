#include "kernel.h"

void	kmain(void)
{
	gdt_entry f_gdt_entry; 
	gdt_register gdt;
	gdt_register test;

	printe("This is Error\n");
	printw("This is Warnning\n");
	print("This is normal text\n");

	gdt.base = 10000000;
	gdt.limit = 10;
	lgdtr(&gdt);
		
	sgdtr(&test);

	put_nbr(test.limit);
	print("\n");
	put_nbr(gdt.limit);

	while (1)
		;
}
