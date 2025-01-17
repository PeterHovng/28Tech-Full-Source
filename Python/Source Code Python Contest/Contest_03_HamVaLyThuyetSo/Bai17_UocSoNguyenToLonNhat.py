from math import *

def solve(n):
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            ans = i
            while n % i == 0:
                n //= i
    if n > 1:
        ans = n
    return ans

if __name__ == '__main__':
    test_case = int(input())
    for i in range(test_case):
        n = int(input())
        print(solve(n))