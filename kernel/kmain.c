#include "kernel.h"
#include "kprint.h"
void	kmain(void)
{
	char * a  = "                                ";
	kprint_bin(a, 10);
	
	int b = -1;
	kprint("\n");
	kprint_bin((char *)&b, 4);
	kprint("\n");
	for (int i = 0; i < 24; i++)
	{
		kprint_dec(i);
		kprint(" => ");
		kprint_hex(i);
		kprint("\n");
	}
		


	while (1)
		;
}
