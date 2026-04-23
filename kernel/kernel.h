#ifndef KERNEL_H
#define KERNEL_H
#include "gdt.h"
#include "kprint.h"
#include "vga_print.h"

int get_cs();
int is64bit();
#endif
