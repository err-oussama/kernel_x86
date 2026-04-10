#include "kernel.h"

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
void	put_char(char c, int fg, int bg, int row, int col)
{
	vga[row * 80 + col] = ((bg << 4 | fg) << 8) | c;
}

void	put_str(char *str, int fg, int bg)
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


void printe(char *str)
{
	put_str(str, VGA_BLACK, VGA_RED);
}
void printw(char *str)
{
	put_str(str, VGA_YELLOW, VGA_BLACK);
}


void print(char *str)
{
	put_str(str, VGA_WHITE, VGA_BLACK);
}

void	put_nbr(long n)
{
	char	buff[30];
	int		i = 29;
	int		s = 0;

	buff[i] = 0;
	if (n == 0)
		return (put_str("0", VGA_WHITE, VGA_BLACK));
	if (n < 0)
	{
		s = 1;
		n = -n;
	}
	while (n > 0)
	{
		buff[--i] = (n % 10) + '0';
		n /= 10;
	}
	if (s == 1)
		buff[--i] = '-';
	put_str(&buff[i], VGA_WHITE, VGA_BLACK);
}

void printb(char *ptr, unsigned int e)
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
				print("\n");
			put_nbr((long)ptr + i);
		}
		j = 8;
		print(" ");
		while (j--)
			(print((ptr[i] &  (1 << j)) ? "1" : "0"));
	}
}








