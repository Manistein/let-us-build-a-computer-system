AMD = 0

(LOOP)
@0
0  // nop, wait to sync data
D = M
D = D + 1

@0
M = D
@16384
M = D

@10
D = D - A

@LOOP
D;JLT

@0
0;JMP