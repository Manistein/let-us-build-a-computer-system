NOP

(label1)
D = 1
@0
NOP
M = D

D = 0
@label3
D;JGE

(label2)
@2
D = A
@0
NOP
M = D

D = -1
@label1
D;JGE

(label3)
@3
D = A
@0
NOP
M = D

D = 1
@label2
D;JGE