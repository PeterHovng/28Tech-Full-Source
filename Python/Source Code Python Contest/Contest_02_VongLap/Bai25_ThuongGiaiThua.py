# S(n) = 1/0! + 1/1! + 1/2! + ... + 1/(n - 1)!
import math
n = int(input())
res = 0
for i in range(n):
    res += 1 / math.factorial(i)
print('%.4f' % res)