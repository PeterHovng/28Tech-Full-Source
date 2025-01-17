# SỐ thuận nghịch, số đối xứng: the palindrome : 111111, 124421, 1, 44, 6, 131
# công thức: res = res * 10 + n % 10, n = n // 10

import math

def isPalinNum(n):
    rev = 0
    temp = n
    while temp != 0 :
        digit = temp % 10
        rev = rev * 10 + digit
        temp = temp // 10
    return rev == n

if __name__ == '__main__':
    n = int(input('Enter n: '))
    if isPalinNum(n):
        print(n, 'is the palindrome number')
    else:
        print(n, 'is not the palindrome number') 
