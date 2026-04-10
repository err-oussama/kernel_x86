#include "kernel.h"
#include "vga_print.h"
void kprint(char *str)
{
	vga_print(str);
}
void kprint_warn(char *str)
{
	vga_print_warn(str);
}
void kprint_err(char *str)
{
	vga_print_err(str);
}

void kprint_dec(long n )
{
	vga_print_dec(n);
}
void kprint_hex(unsigned long n )
{
	vga_print_hex(n);
}

void kprint_bin(char *ptr, unsigned long size)
{
	vga_print_bin(ptr, size);
}

