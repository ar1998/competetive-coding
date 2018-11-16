import math

N = int(input())

R = math.factorial(N) + (2**N - N)   # n! + (2^n - n) 

print(R)
