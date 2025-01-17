from math import *

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

def check_max_last_digit(n):
    check = n % 10
    while n != 0:
        digit = n % 10
        if digit > check:
            return False
        n //= 10
    return True

if __name__ == '__main__':
    n = int(input())
    cnt = 0
    for i in range(2, n + 1):
        if is_prime(i) and check_max_last_digit(i) :
            cnt += 1
            print(i, end = ' ')
    print('\n', cnt, sep = '')
    
# nên sử dụng kĩ thuật sàng số nguyên tố để tối ưu thòi gian thực hiện chương trình => tránh time limnit
"""  
import math

MAXN = int(1e7) + 1
t = [0] * MAXN

def sieve():
    t[0] = t[1] = 1
    for i in range(2, int(math.isqrt(MAXN)) + 1):
        if t[i] == 0:
            for j in range(i * i, MAXN, i):
                t[j] = 1

def check(n):
    s = str(n)
    Max = s[-1]
    for i in range(len(s) - 1):
        if Max < s[i]:
            return False
    return True

if __name__ == '__main__':
    sieve()
    n = int(input())
    ans = 0
    for i in range(2, n + 1):
        if t[i] == 0 and check(i):
            print(i, end=" ")
            ans += 1
    print()
    print(ans)

"""