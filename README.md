# SRV1
The "Slicudis RISC-V 1" is an RV32I core written by Slicudis on System Verilog. It features a 4-stage pipeline (Fetch, decode, execute and writeback) with BTB branch prediction (64 entries).

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


Test program: (Fibonacci sequence)
```
setup:
li x1, 1
li x2, 0

loop:
add x3, x1, x2
mv x2, x1
mv x1, x3
j loop
```
