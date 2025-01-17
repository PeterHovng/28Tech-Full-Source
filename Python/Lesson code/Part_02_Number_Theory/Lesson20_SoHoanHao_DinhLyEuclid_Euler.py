# Số hoàn hảo(perfect number): có tổng các ước (trừ chính nó) bằng nó
'''
    VD: 28 = 1 + 2 + 4 + 7 + 14 = 28
    -> chỉ cần duyệt từ 1 ->  căn bậc 2 của n để tìm các ước
'''
# Định lý Euclid-euler
'''
    - phát biểu:
    + nếu p(prime) là số nguyên tố thì 2^p - 1: cũng là số nguyên tố
    => (2^p - 1) * 2^(p - 1) là số fibonacci thứ p
    + xong so sánh xem nếu số fibonacci thứ p = n thì n là số hoàn hảo  
    
    - Cách duyệt:
    nếu duyệt trong giới hạn: 0<=n<= 9.10^18 => 9.10^18 rơi vào khoảng 2^63 hoặc 2^64
    - thì duyệt p từ đâu tới đâu để sinh ra số hoàn hảo từ 0 -> 9.10^18
    => p duyệt từ [0, 31 hoặc 32] vì tích là rơi vào khoảng 2^2p
    => duyệt các số nguyên tố p từ [1, 31]
    
    - Nếu duyệt tới 10^9, 10^10 => dùng hàm isPerfectNum
    - Nếu duyệt tới 10^18 => dùng hàm isPerfectNumAdvanced
    
'''

import math

def isPefectNum(n):
    sum = 1
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            sum += i
            if i != n // i:
                sum += n // i
    return sum == n

def isPrime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

# the advanced function to check the perfect number by using the Euclid-euler theorem
def isPerfectNumAdvanced(n):
    for p in range(2, 32 + 1):
        if isPrime(p):
            if isPrime(2**p - 1):
                # thỏa mản 2 điều kiện trên => tìm được số hoàn hảo xong kiểm tra với n
                fibo_num = (2**p - 1) * 2**(p - 1)
                print('So fibonacci thu :', fibo_num)
                if fibo_num == n:
                    return True
    return False


if __name__ == '__main__':
    n = int(input('Enter a number: '))
    if (isPefectNum(n)):
        print(n, 'is a perfect number')
    else:
        print(n, 'is not a perfect number')        
