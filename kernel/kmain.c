#include "kernel.h"

void	kmain(void)
{
	print("oussama\nerrami", VGA_LIGHT_BLUE, VGA_LIGHT_CYAN);
	put_nbr(2222);
	print("oussama\nerrami", VGA_LIGHT_BLUE, VGA_LIGHT_CYAN);
	put_nbr(-2222);
	print("oussama\nerrami", VGA_LIGHT_BLUE, VGA_LIGHT_CYAN);
	put_nbr(0);
	print("oussama\nerrami", VGA_LIGHT_BLUE, VGA_LIGHT_CYAN);
	put_nbr(11111111);
	while (1)
		;
}
