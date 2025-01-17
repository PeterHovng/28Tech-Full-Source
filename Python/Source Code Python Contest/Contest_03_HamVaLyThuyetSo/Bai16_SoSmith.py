import math
''' Cách 1:
def isPrime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

def sum_of_digits(n):
    sum = 0
    while n != 0:
        digit = n % 10
        sum += digit
        n //= 10
    return sum

def sum_of_prime_factors(n):
    sum2 = 0
    for i in range(2,math.isqrt(n) + 1):
        if n % i == 0:
            while(n % i == 0):
                sum2 += sum_of_digits(i)
                n //= i
    if n > 1:
        sum2 += sum_of_digits(n)
    return sum2
            

def isSmith(n):
    if sum_of_digits(n) == sum_of_prime_factors(n) and not isPrime(n):
        return True
    return False
'''

# Cách 2: tối ưu code hơn
def sum_of_digits(n):
    sum = 0
    while n != 0:
        digit = n % 10
        sum += digit
        n //= 10
    return sum

def isSmith(n):
    sum_digits = sum_of_digits(n)
    sum_of_prime_factors = 0
    temp = n
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            while n % i == 0:
                sum_of_prime_factors += sum_of_digits(i)
                n //= i
    if temp == n: # xét trường hợp là số nguyên tố vì sau khi chia tìm ước nếu không có ước nào mà n vẫn như ban đầu => n là số nguyên tố
        return False   
    if n > 1: 
        sum_of_prime_factors += sum_of_digits(n)
    return sum_digits == sum_of_prime_factors

if __name__ == '__main__':
    n = int(input())
    if isSmith(n):
        print('YES')
    else:
        print('NO')
    