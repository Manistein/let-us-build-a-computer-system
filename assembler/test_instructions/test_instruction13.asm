NOP

@100
D = D - A
D = -D

@1
NOP
M = 1 

(LOOP)
@1
NOP
D = D - M

@0
NOP
M = D

@16384
NOP
M = D

GOTO LOOP