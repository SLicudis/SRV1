# Makefile for RV32
ARCH_FLAGS = -march=rv32i -mabi=ilp32

all: program.hex

program.hex: program.bin
	xxd -p -c 8 program.bin | tr -d '\n' | sed 's/\(........\)/\1\n/g' > program.hex

program.bin: program.elf
	riscv64-unknown-elf-objcopy -O binary program.elf program.bin

program.elf: program.o
	riscv64-unknown-elf-ld -m elf32lriscv -Ttext=0x0 -o program.elf program.o

program.o: program.S
	riscv64-unknown-elf-gcc $(ARCH_FLAGS) -c program.S -o program.o
