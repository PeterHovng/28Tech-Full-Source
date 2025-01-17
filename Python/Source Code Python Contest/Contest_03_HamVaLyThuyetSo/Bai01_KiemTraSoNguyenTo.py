import math

def isPrime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

if __name__ =='__main__':
    n = int(input())
    if isPrime(n):
        print('YES')
    else:
        print('NO')