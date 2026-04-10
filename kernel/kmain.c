#include "kernel.h"

void	kmain(void)
{
	char * a  = "                                   ";
	printb(a, 10);
	
	int b = 89898;
	print("\n");
	printb((char *)&b, 4);


	while (1)
		;
}
