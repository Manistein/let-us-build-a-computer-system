NOP

@100
NOP

D = A

@0
NOP
M = D

(LOOP)

@16384
NOP
M = D

@0
NOP
D = M
D = D - 1
M = D

GOTO LOOP