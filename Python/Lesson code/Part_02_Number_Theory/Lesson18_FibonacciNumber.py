# Fibonacci number: 0 1 1 2 3 5 8 13 21...
# fibo(n) = fibo(n - 1) + fibo(n - 2)
'''
    Các dạng bài toán:
    1/ kiểm tra 1 số có phải số fibonacci hay không?
    2/ In ra số fibonacci thứ n
    3/ In ra n số fibonacci đầu tiên
    .....
    
    Trong C/C++/Java: 0<= N <= 9.10^18
    
'''

import math

# in ra n số fibonacci đầu tiên
def fibo(n):
    if n == 1:
        print(0)
    elif n == 2:
        print('0 1')
    else:
        print('0 1', end  = ' ')
        fn1, fn2 = 1, 0
        for i in range(2, n): # duyệt i từ 2  -> n - 1
            fn = fn1 + fn2
            print(fn, end= ' ')
            # gán lại fn1 và fn2 để dịch chuyển vị trí fn1 và fn2 sang phải
            fn2, fn1 = fn1, fn
            
def checkFibo(n):
    if n == 0 or n == 1:
        return True
    f1, f2 = 1, 0
    for i in range(2, 93):
        fn = f1 + f2
        if fn == n:
            return True
        f2, f1 = f1, fn
    return False

def printFiboN(n):
    if n == 0 or n == 1:
        return n
    f1, f2 = 1, 0
    for i in range(2, n + 1):
        fn = f1 + f2
        f2, f1 = f1, fn
    return fn

if __name__ == '__main__':
    n = int(input('Enter n: '))
    print(n, 'fibonacci numbers firstly are:', end = ' ')
    fibo(n)
    print()
    if(checkFibo(n)):
        print(n, 'is the fibonacci number')
    else:
        print(n, 'is not the fibonacci number')
    print('the', n, 'th fibonacci number is:', printFiboN(n))