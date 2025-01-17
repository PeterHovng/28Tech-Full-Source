from math import*

def is_prime(n):
    if n < 2: return False
    for i in range(2, isqrt(n) + 1):
        if n % i == 0: return False
    return True

def is_palindrome(n):
    rev, tmp = 0, n
    while n != 0:
        rev = rev * 10 + n % 10
        n //= 10
    return rev == tmp

def is_square_num(n):
    square_root = isqrt(n)
    return square_root * square_root == n
    
def sum_of_prime_digit(n):
    sum = 0
    while n != 0:
        sum += n % 10
        n //= 10
    return is_prime(sum)

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    snt, palin, square, sum_prime_digit = 0, 0, 0, 0
    for x in a:
        if is_prime(x):
            snt += 1
        if is_palindrome(x):
            palin += 1
        if is_square_num(x):
            square += 1
        if sum_of_prime_digit(x):
            sum_prime_digit += 1
    print(snt, palin, square, sum_prime_digit, sep = '\n')