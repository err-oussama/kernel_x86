#ifndef VGA_PRINT_H 
# define VGA_PRINT_H

void	vga_print_base(unsigned long n, char *base, int base_len);
void 	vga_print_str(char *str, int fg, int bg);

void 	vga_print_dec(long n);
void	vga_print_hex(unsigned long n);
void 	vga_print(char *str);
void 	vga_print_err(char *str);
void 	vga_print_warn(char *str);
void 	vga_print_bin(char *ptr, unsigned int e);

#endif
