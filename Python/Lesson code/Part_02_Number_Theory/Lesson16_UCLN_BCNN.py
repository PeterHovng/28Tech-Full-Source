# UCLN: ước chung lớn , BCNN: bội chung nhỏ nhất
'''
    - Thuật toán tìm ước chung lớn nhất => Thuật toán Euclid
    - gcd(a, b) = 
    {
        a, nếu b = 0 => thì dừng
        gcd(b, a % b), nếu b != 0 => thì tiếp tục chia đến khi b = 0    
    }
    Cách hiểu đơn giản: a, b -> b, a % b
    
    ví dụ:
    gcd(18, 15)
->  gcd(15, 18 % 15) = gcd(15, 3)
->  gcd(3, 15 % 3) = gcd(3, 0)
->  ước chung lớn nhất của 18 và 15 là 3
'''

import math

def gcd(a, b):
    while(b != 0):
        # Đổi a, b = b, a % b
        #print('greatest common divisor step by sep:')
        a, b = b, a % b
        #print(a, b)
    # sau vòng while thì b = 0 => gcd(a, b) = a
    return a


def lcm(a, b):
    return a * b // gcd(a, b)

if __name__ == '__main__':
    x, y, z = map(int, input('Enter x and y and z: ').split())
    print('greatest common divisor of', x, 'and', y, 'is' ,gcd(x, y))
    print('least common multiple of', x, 'and', y, 'is' ,lcm(x, y))
    print('greatest common divisor of', x, 'and', y, 'and', z, 'is' ,gcd(gcd(x, y), z))
    print('least common multiple of', x, 'and', y, 'and', z, 'is' ,lcm(lcm(x, y), z))