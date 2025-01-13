.section .text
    .globl _start        # Declare _start as a global symbol
_start:
code:
    li x1, 0
    li x2, 0x4000
loop:
    addi x1, x1, 1
    sw x1, 0(x2)
    j loop
