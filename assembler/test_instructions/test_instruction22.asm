NOP

(label1)
D = -1
@0
NOP
M = D

@label2
D;JLE

@16384
NOP
M = -1

(label2)
@2
D = A
@0
NOP
M = D

D = 1
@label1
D;JLE

(label3)
@3
D = A
@0
NOP
M = D

D = 0 
@label2
D;JLE