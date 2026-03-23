void	kmain(void)
{
	volatile unsigned short	*vga;

	vga = (unsigned short *)0xB8000;
	vga[0] = ((0x4 << 4 | 1) << 8) | 'O';
	vga[1] = ((0x4 << 4 | 1) << 8) | 'U';
	vga[2] = ((0x4 << 4 | 1) << 8) | 'S';
	vga[3] = ((0x4 << 4 | 1) << 8) | 'S';
	vga[4] = ((0x4 << 4 | 1) << 8) | 'A';
	vga[5] = ((0x4 << 4 | 1) << 8) | 'M';
	vga[6] = ((0x4 << 4 | 1) << 8) | 'A';
	while (1)
		;
}
