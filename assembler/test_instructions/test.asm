(START)
D = D + 1
@0

// RAM[A] = D
M = D

// write to the screen
@16384 // 0x7fff
M=D

@0
D =M

GOTO START