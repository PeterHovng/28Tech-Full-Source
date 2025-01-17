import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

def golbach_conjecture(n):
    for i in range(2, n // 2 + 1):
        if is_prime(i) and is_prime(n - i):
            print(i, n - i)
    
    
if __name__ == '__main__':
    n = int(input())
    for _ in range(0, n):
        x = int(input())
        golbach_conjecture(x)