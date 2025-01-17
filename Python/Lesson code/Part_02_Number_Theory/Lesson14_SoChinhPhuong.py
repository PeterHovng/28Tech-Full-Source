'''
    # Số chính phương (Perfect Square)
        + Dạng x^2
        + vd: 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, ...
        
    # Kiểm tra 1 số chính phương
    + Bước 1: nhập vào 1 số nguyên dương n
    + Bước 2: dùng hàm isqrt() để khai căn lấy phần nguyên
        VD: 18 => isqrt(18) = 4
    + Bước 3: kiểm tra xem nếu mà isqrt(n) * isqrt(n) == n => n là số chính phương
'''
import math

def is_perfect_square(n):
    square_root = math.isqrt(n)
    if (square_root * square_root == n):
        return True
    return False
    # return square_root * square_root == n   # Cách viết thứ 2

if __name__ == '__main__':
    n = int(input('Enter a number: '))
    if (is_perfect_square(n)):
        print(n, 'is a perfect square')
    else:
        print(n, 'is not a perfect square')