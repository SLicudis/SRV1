
program.o:     file format elf32-littleriscv


Disassembly of section .text:

00000000 <out>:
   0:	fd010113          	addi	sp,sp,-48
   4:	02812623          	sw	s0,44(sp)
   8:	03010413          	addi	s0,sp,48
   c:	fca42e23          	sw	a0,-36(s0)
  10:	fdc42783          	lw	a5,-36(s0)
  14:	fef42623          	sw	a5,-20(s0)
  18:	fdc42783          	lw	a5,-36(s0)
  1c:	00004337          	lui	t1,0x4
  20:	00f32023          	sw	a5,0(t1) # 4000 <.L4+0x3f60>
  24:	00000013          	nop
  28:	02c12403          	lw	s0,44(sp)
  2c:	03010113          	addi	sp,sp,48
  30:	00008067          	ret

00000034 <end_loop>:
  34:	ff010113          	addi	sp,sp,-16
  38:	00812623          	sw	s0,12(sp)
  3c:	01010413          	addi	s0,sp,16

00000040 <loop>:
  40:	0000006f          	j	40 <loop>
  44:	00000013          	nop
  48:	00c12403          	lw	s0,12(sp)
  4c:	01010113          	addi	sp,sp,16
  50:	00008067          	ret

00000054 <main>:
  54:	fe010113          	addi	sp,sp,-32
  58:	00112e23          	sw	ra,28(sp)
  5c:	00812c23          	sw	s0,24(sp)
  60:	02010413          	addi	s0,sp,32
  64:	00100793          	li	a5,1
  68:	fef42623          	sw	a5,-20(s0)
  6c:	fe042423          	sw	zero,-24(s0)
  70:	0300006f          	j	a0 <.L4>

00000074 <.L5>:
  74:	fec42703          	lw	a4,-20(s0)
  78:	00070793          	mv	a5,a4
  7c:	00179793          	slli	a5,a5,0x1
  80:	00e787b3          	add	a5,a5,a4
  84:	fef42623          	sw	a5,-20(s0)
  88:	fec42503          	lw	a0,-20(s0)
  8c:	00000097          	auipc	ra,0x0
  90:	000080e7          	jalr	ra # 8c <.L5+0x18>
  94:	fe842783          	lw	a5,-24(s0)
  98:	00178793          	addi	a5,a5,1
  9c:	fef42423          	sw	a5,-24(s0)

000000a0 <.L4>:
  a0:	fe842703          	lw	a4,-24(s0)
  a4:	00900793          	li	a5,9
  a8:	fce7d6e3          	bge	a5,a4,74 <.L5>
  ac:	00000097          	auipc	ra,0x0
  b0:	000080e7          	jalr	ra # ac <.L4+0xc>
  b4:	00000013          	nop
  b8:	01c12083          	lw	ra,28(sp)
  bc:	01812403          	lw	s0,24(sp)
  c0:	02010113          	addi	sp,sp,32
  c4:	00008067          	ret
