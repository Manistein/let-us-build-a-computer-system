NOP

(label1)
D = -1
@0
NOP
M = D

@label2
D;JNE

(label2)
@2
D = A
@0
NOP
M = D

D = 0
@label1
D;JNE

(label3)
@3
D = A
@0
NOP
M = D

D = -1
@label2
D;JNE