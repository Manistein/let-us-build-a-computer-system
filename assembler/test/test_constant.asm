AMD = 0

(LOOP)
@0
D = M
D = D + 1

@0
M = D
@16384
M = D

@10
D = D - A

@LOOP
D;JGE

@0
0;JMP