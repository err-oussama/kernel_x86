#ifndef PRINT_H
#define PRINT_H

#include "vga_print.h"

#define uint8 unsigned char
#define uint32 unsigned int
#define uint16 unsigned short

void kprint(char *str);
void kprint_wrn(char *str);
void kprint_err(char *str);
void kprint_dec(long n);
void kprint_hex(unsigned long n);
void kprint_bin(unsigned long n);
void kprint_byt(unsigned char byte);

void kmemory_dump_bin(void *ptr, unsigned long size);
void kmemory_dump_hex(void *ptr, unsigned long size);

#endif
