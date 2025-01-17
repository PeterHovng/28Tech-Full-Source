# tính tổng và đếm ước của số nguyên
import math 
def sum_divisor(n): # basic function of sum_divisor
    sum = 0
    for i in range(1, n + 1):
        if n % i == 0:
            sum += i
    return sum

def cnt_divisor(n): # basic function of cnt_divisor
    cnt = 0
    for i in range(1, n + 1):
        if n % i == 0:
            cnt += 1
    return cnt

# remember the advanced function of sum_divisor and cnt_divisor => iterate through the range from 1 to  square root of n
def advance_sum_divisor(n):
    sum = 0
    for i in range(1, math.isqrt(n) + 1):
        if n % i == 0:
            sum += i
            j = n // i
            if i != j:
                sum += j
    return sum

def advance_count_divisor(n):
    cnt = 0
    for i in range(1, math.isqrt(n) + 1):
        if n % i == 0:
            cnt += 1  
            j = n // i
            if i != j:
                cnt += 1
    return cnt
'''

    Another way to access advanced_sum_divisor
    def advanced_sum_divisor(n):
    sum = 0
    for i in range(1, math.isqrt(n) + 1):
        if n % i == 0:
            j = n // i
            sum += (i + j)
            if i == j:
                sum -= i
    return sum
    
    def advance_count_divisor(n):
    cnt = 0
    for i in range(1, math.isqrt(n) + 1):
        if n % i == 0:
            j = n // i
            cnt += 2
            if i == j:
                cnt -= 1
    return cnt
'''



if __name__ == '__main__':
    n = int(input('Enter a number: '))
    print('Sum of divisor of', n, 'is', sum_divisor(n))
    print('The number of divisor of', n, 'is', cnt_divisor(n))