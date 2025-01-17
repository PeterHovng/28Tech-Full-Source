import math

# cách 2:
def prime_factorization(n):
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            exponent = 0
            while n % i == 0:
                exponent += 1
                n //= i
            print(i, exponent, sep = '^', end = '')
            if n != 1:
                print(' * ', end = '')
    if n > 1:
        print(n, 1, sep = '^')

if __name__ == '__main__':
    n = int(input())
    prime_factorization(n)
    
""" 
import math

def prime_factorization(n):
    first = True  # Biến kiểm tra nếu đây là phần tử đầu tiên
    
    # Kiểm tra các số từ 2 đến sqrt(n) để tìm các thừa số nguyên tố
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            exponent = 0
            while n % i == 0:
                exponent += 1
                n //= i
            if not first:
                print(' * ', end='')
            print(f"{i}^{exponent}", end='')
            first = False
    
    # Nếu còn lại một số lớn hơn 1, nó là một số nguyên tố
    if n > 1:
        if not first:
            print(' * ', end='')
        print(f"{n}^1", end='')
    
    print()  # Kết thúc dòng

if __name__ == '__main__':
    n = int(input())
    prime_factorization(n)

"""