#!/usr/bin/python3

def nextPrime(x):
    x+=2
    if all(x % y != 0 for y in range(2,x)):
        return x
    else:
        return nextPrime(x)

def primeFactor(n,f):
    print(n,f)
    if f==n:
        return f
    elif n % f == 0:
        return primeFactor(n/f,f)
    else:
        return primeFactor(n,nextPrime(f))

print(primeFactor(600851475143,3))
