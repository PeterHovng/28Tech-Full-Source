import math
def is_fibo(n):
    if n == 1:
        return True
    else:
        f1, f2 = 1, 1
        for i in range(2, 92 + 1):
            fn = f1 + f2
            if fn == n:
                return fn
            f2, f1 = f1, fn
    return False

def sum_of_digits(n):
    sum = 0
    while n != 0:
        digit = n % 10
        sum += digit
        n //= 10
    return sum

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True
                
if __name__ == '__main__':
    n = int(input())
    for i in range(0, n):
        if is_fibo(sum_of_digits(i)) and is_prime(i):
            print(i, end = ' ')