import math

def pos_of_prime_divisors(n, k):
    cnt = 0
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            while n % i == 0:
                cnt += 1
                if cnt == k:
                    return i
                n //= i
                
    if n > 1:
        cnt += 1
        if cnt == k:
            return n
    return -1

if __name__ == '__main__':
    n, k = map(int, input().split())
    print(pos_of_prime_divisors(n, k))