#!/usr/bin/python3


efib = lambda x: 1 if x <= 1 else efib(x-2) + efib(x-1)
seq=[]
x=1
while efib(x)<4000000:
    seq.append(efib(x))
    x+=1
print(seq,sum([i for i in seq if i % 2 == 0]))
