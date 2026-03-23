all:
	nasm -f elf32 boot/boot.asm -o boot.o
	gcc -m32 -ffreestanding -c kernel/kmain.c -o kmain.o
	ld -m elf_i386 -T linker.ld -o kernel.bin boot.o kmain.o

run: all
	qemu-system-x86_64 -kernel kernel.bin

clean:
	rm -f *.o *.bin *.iso


