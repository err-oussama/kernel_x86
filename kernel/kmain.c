#include "kernel.h"

void	kmain(void)
{
	print_erro("this is error\n");
	print_warn("this is warnning\n");
	print_info("this is info\n");
	put_nbr(99);
	print_info("\n");
	put_nbr(-99);
	segment_descriptor gdt_vector;
	gdtr_v gdt;
	gdt.base = (int) &gdt_vector;
	gdt.limit = 10;
	print_info("\n");
	put_nbr((int)&gdt);
	set_gdt(&gdt);
	gdtr_v tst;
	print_info("\n");
	put_nbr((int)get_gdt(&tst));
	while (1)
		;
}
