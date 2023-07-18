NOP

@0x4000
D = A
@0
NOP
M = D

@0xffff
D = A
@1
NOP
M = D

(LOOP)

@1
NOP
D = M

@0
NOP
A = M
NOP
M = D
D = A + 1

@0
NOP
M = D

GOTO LOOP