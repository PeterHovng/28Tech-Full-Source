import math

def is_prime(n) :
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0 :
            return False
    return True

# Định lý Euclid-Euler
def is_perfet_num(n):
    for p in range(2, 32 + 1):
        if is_prime(p) and is_prime(2**p - 1):
            fibo_num = (2**p - 1) * (2 ** (p - 1))
            if fibo_num == n:
                return True
    return False

if __name__ == '__main__':
    n = int(input())
    if is_perfet_num(n):
        print('YES')
    else:
        print('NO')
