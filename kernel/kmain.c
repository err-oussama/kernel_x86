void	kmain(void)
{
	volatile unsigned short	*vga;

	vga = (unsigned short *)0xB8000;
	vga[0] = ((4 << 4 | 1) << 8) | 'E';
	vga[1] = (0x0F << 8) | 'R';
	while (1)
		;
}
