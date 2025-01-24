# Makefile for C project targeting RV32
ARCH_FLAGS = -march=rv32i -mabi=ilp32
CC = riscv64-unknown-elf-gcc
LD = riscv64-unknown-elf-ld
OBJCOPY = riscv64-unknown-elf-objcopy
OBJDUMP = riscv64-unknown-elf-objdump

# Include libgcc for runtime support
LIBGCC = $(shell $(CC) $(ARCH_FLAGS) -print-libgcc-file-name)

all: program.hex program.asm

program.hex: program.bin
	xxd -p -c 8 program.bin | tr -d '\n' | sed 's/\(........\)/\1\n/g' > program.hex

program.bin: program.elf
	$(OBJCOPY) -O binary program.elf program.bin

program.elf: start.o program.o
	$(LD) -m elf32lriscv -Ttext=0x0 -o program.elf start.o program.o $(LIBGCC)

start.o: start.S
	$(CC) $(ARCH_FLAGS) -c start.S -o start.o

program.o: program.c
	$(CC) $(ARCH_FLAGS) -c program.c -o program.o

program.asm: program.o
	$(OBJDUMP) -d program.o > program.asm

clean:
	rm -f start.o program.o program.elf program.bin program.hex program.asm
