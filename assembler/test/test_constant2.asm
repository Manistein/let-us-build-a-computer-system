0

(LOOP)
@0

AMD = 1
@0
M = D
@16384
M = D

@0  // nop, wait to sync to vedio memory

AMD = 0
@0
M = D
@16384
M = D

@0

AMD = -1
@0
M = D
@16384
M = D

GOTO LOOP