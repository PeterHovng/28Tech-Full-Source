# check prime number:
'''
    - prime number: a positive number that is greater than 1 and has no positive divisors other than 1 and itself
    - For example: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, ... are prime numbers
    - Notice: when you check bool function => you should have check the False statement first to conclude the function by return statement => to save time
'''
import math
def isPrime(n): # basic function of isPrime => to slow
    cnt = 0
    for i in range(1, n + 1):
        if n % i == 0:
            cnt += 1
    if cnt == 2:
        return True
    else:
        return False
    
def mid_advanced_isPrime(n):
    cnt = 0
    for i in range(1, math.isqrt(n) + 1):
        if n % i == 0:
            cnt += 1
            if i != n // i:
                cnt += 1
    if cnt == 2:
        return True
    else:
        return False

def best_advanced_isPrime(n):
    if n < 2: return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True
    
if __name__ == '__main__':
    n = int(input('Enter a number: '))
    if isPrime(n):
        print(n, 'is a prime number')
    else:
        print(n, 'is not a prime number')
    print('Prime numbers from 1 to', n, 'are:', end = ' ')
    for i in range(1, n + 1):
        if best_advanced_isPrime(i):
            print(i, end = ' ')
