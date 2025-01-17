from math import*

def is_prime(n):
    if n < 2: return False
    for i in range(2, isqrt(n) + 1):
        if n % i == 0: return False
    return True

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    prime_num, sum_prime = 0, 0
    for x in a:
        if is_prime(x):
            prime_num += 1
            sum_prime += x
    average = sum_prime / prime_num
    print('%.3f' % average)
    # print('{:.3f}'.format(average))