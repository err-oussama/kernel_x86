#include "kernel.h"
#include "vga_print.h"

/*

Video Graphics Array (VGA) -- Text Mode Memory layout
	in text mode, VGA maps a region of memory directly to the screen.
	You can think of it as a 2D grid(typically 80 columns x 25 rows),
	where each cell on screen corresponds to exactly 2 Byte in memory
	- Byte 1: Attribute byte: Controls color.
		>The upper 4 bits set the backgroud color
		>The lower 4 bits set the foregroud color
	- Byte 2: Charachter byte: an ASCII(or code page 437) value for
			the charachter to display in the cell


*/
int						g_row = 0;
int						g_col = 0;
volatile unsigned short	*vga = (unsigned short *)0xB8000;
void	vg_put_char(char c, int fg, int bg, int row, int col)
{
	vga[row * 80 + col] = ((bg << 4 | fg) << 8) | c;
}

void	vga_print_str(char *str, int fg, int bg)
{
	while (*str)
	{
		if (g_row >= 25)
			break;
		if (*str == '\n' || g_col >= 80)
		{
			g_col = 0;
			g_row++;
			if (*str == '\n')
			{
				str++;
				continue ;
			}
		}
		vga[g_row * 80 + g_col] = ((bg << 4 | fg) << 8) | *str++;
		g_col++;
	}
}


void vga_print_err(char *str)
{
	vga_print_str(str, VGA_BLACK, VGA_RED);
}
void vga_print_warn(char *str)
{
	vga_print_str(str, VGA_YELLOW, VGA_BLACK);
}


void vga_print(char *str)
{
	vga_print_str(str, VGA_WHITE, VGA_BLACK);
}

void vga_print_dec(long n)
{
	if (n < 0)
	{	vga_print("-");
		n = -n;
	}	
	vga_print_base(n, "0123456789", 10);
	
}

void vga_print_hex(unsigned long n)
{
	vga_print_base(n, "0123456789ABCDEF", 16);
}
void	vga_print_base(unsigned long n, char *base, int base_len)
{
	char	buff[40];
	int		i = 39;

	buff[i] = 0;
	if (n == 0)
		return (vga_print_str("0", VGA_WHITE, VGA_BLACK));
	while (n > 0)
	{
		buff[--i] = base[(n % base_len)];
		n /= base_len;
	}
	vga_print_str(&buff[i], VGA_WHITE, VGA_BLACK);
}

void vga_print_bin(char *ptr, unsigned int e)
{
	unsigned int i = -1;
	unsigned int j;
	char *c0;
	char *c1;

	while (++i < e)
	{
		if (!i || !(i % 4))
		{
			if (i)
				vga_print("\n");
			vga_print_dec((long)ptr + i);
		}
		j = 8;
		vga_print(" ");
		while (j--)
			(vga_print((ptr[i] &  (1 << j)) ? "1" : "0"));
	}
}








