#ifndef PRINT_H
# define PRINT_H

# include "vga_print.h"

void kprint(char *str);
void kprint_warn(char *str);
void kprint_err(char *str);
void kprint_dec(long n );
void kprint_hex(unsigned long n );
void kprint_bin(char *str, unsigned long size);

#endif
