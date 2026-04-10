#include "kernel.h"

void	kmain(void)
{
	char * a  = "                                ";
	printb(a, 10);
	
	int b = -1;
	print("\n");
	printb((char *)&b, 4);


	while (1)
		;
}
