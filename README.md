# SRV1
The "Slicudis RISC-V 1" is an RV32I/E core written by Slicudis on System Verilog. It features a 5-stage pipeline (Fetch, decode, execute, memory and writeback).

Pinout:
- CLK: Clock input
- CLK_EN: Enable clock
- SYNC_RST: Reset the core

- INST_ADDRESS: Instruction address
- INST_IN: Instruction from the instruction memory
- INST_REQ: Request output from instruction memory

- DATA_IN: Data from the data memory
- DATA_OUT: Data to the data memory
- DATA_ADDRESS: Data memory address
- DATA_MASK: Byte masks to the data memory
- BUS_LOCK: Lock the data bus to access data memory / periferals
- MEMORY_MODE: Read from memory if low, write to memory if high

# How to generate an RV32E core instead of an RV32I core?
Set the "RV32E" parameter from "core.sv" to 1 if you want to generate an RV32E core.

# How does ECALL work?
SRV1 cores don't have CSRs. The ECALL instruction behaves like a jump instruction and will set the PC to a constant adress value (Specified by the ECALL_ADDRESS parameter from core.sv). EBREAK will behave like ECALL and jump to ECALL_ADDRESS.\
The return address won't be saved automatically and the caller will have to manually save it by pushing the PC onto the stack. The ECALL subroutine program will have to pop the address from the stack and jump back to the caller's code.


# Test program: (Counter)
```
setup:
li x1, 0
li x2, 0x4000
loop:
addi x1, x1, 1
sw x1, 0(x2)
j loop
```
