from math import*

def is_prime(n):
    if n < 2: return False
    for i in range(2, isqrt(n) + 1):
        if n % i == 0: return False
    return True

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(n):
        left = 0
        for j in range(i):
            left += a[j]
        right = 0
        for j in range(i + 1, n):
            right += a[j]
        if is_prime(right) and is_prime(left):
            print(i, end = ' ')