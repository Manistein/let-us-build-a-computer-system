NOP

(START)
@0x4000
D = A
@0
NOP
M = D

(LOOP)

@0
NOP
D = M
A = D
NOP
M = 1

D = D + 1
@0
NOP
M = D

@0x4400
D = A - D
@LOOP
D;JGT

GOTO START