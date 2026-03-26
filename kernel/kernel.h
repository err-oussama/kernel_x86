#ifndef KERNEL_H
# define KERNEL_H

# define VGA_BLACK 0x0
# define VGA_BLUE 0x1
# define VGA_GREEN 0x2
# define VGA_CYAN 0x3
# define VGA_RED 0x4
# define VGA_MAGENTA 0x5
# define VGA_BROWN 0x6
# define VGA_LIGHT_GRAY 0x7
# define VGA_DARK_GRAY 0x8
# define VGA_LIGHT_BLUE 0x9
# define VGA_LIGHT_GREEN 0xA
# define VGA_LIGHT_CYAN 0xB
# define VGA_LIGHT_RED 0xC
# define VGA_LIGHT_MAGENTA 0xD
# define VGA_YELLOW 0xE
# define VGA_WHITE 0xF


/*
#############################################################
# 					GDT 									#
#############################################################
*/ 
typedef struct __attribute__((packed)){
	unsigned short	limit_low;
	unsigned short	base_low;
	unsigned char	base_middle;
	unsigned char	access_byte;
	unsigned char	limi_high_and_flag;
	unsigned char	base_address_high;
}gdt;

typedef struct __attribute__((packed)){
	unsigned short limit;
	unsigned int base;

} gdt_addresses;

void set_gdt(void *gdt_ptr);
gdt_addresses *get_gdt(void *gdt_ptr);





/*
#############################################################
# 					PRINT 									#
#############################################################
 */
void 	put_nbr(long n);
void 	print(char *str, int fg, int bg);
void 	print_erro(char *str);
void 	print_warn(char *str);
void 	print_info(char *str);
#endif
