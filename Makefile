# Compiler / Assembler / Linker
CC      := gcc
ASM     := nasm
LD      := ld

# Flags
CFLAGS := -m32 -ffreestanding -fno-stack-protector -nostdlib -nostdinc -c
ASFLAGS := -f elf32
LDFLAGS := -m elf_i386 -T linker.ld

# Files
ASM_SRC := $(wildcard boot/*.asm) $(wildcard kernel/*.asm)
ASM_OBJ := $(ASM_SRC:.asm=.o)

C_SRC   := $(wildcard kernel/*.c)
C_OBJ   := $(C_SRC:.c=.o)

TARGET  := kernel.bin

# Default target
all: $(TARGET)

# Link everything
$(TARGET): $(ASM_OBJ) $(C_OBJ)
	$(LD) $(LDFLAGS) -o $@ $^

# Compile C sources
kernel/%.o: kernel/%.c
	$(CC) $(CFLAGS) $< -o $@

kernel/%.o: kernel/%.asm 
	$(ASM) $(ASFLAGS) $< -o $@

# Assemble ASM sources
boot/%.o: boot/%.asm
	$(ASM) $(ASFLAGS) $< -o $@


# Running
run: $(TARGET) 
	qemu-system-x86_64 -kernel kernel.bin

# Clean
clean:
	rm -f $(ASM_OBJ) $(C_OBJ) $(TARGET)






