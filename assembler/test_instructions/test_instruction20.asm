NOP

(label1)
D = -1
@0
NOP
M = D

@label2
D;JLT

(label2)
@2
D = A
@0
NOP
M = D

D = 1
@label1
D;JLT

(label3)
@3
D = A
@0
NOP
M = D

D = -1
@label2
D;JLT