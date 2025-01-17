'''
    - SỐ lập phương: (Perfect Cube)
    - Dạng : x^3
    - Ví dụ: 1, 8, 27, 64, 125, 216, 343, 512, 729, 1000, ...
    
    Kiểm tra 1 số lập phương
    - Bước 1: nhập vào 1 số nguyên dương n
    - Bước 2: dùng hàm cbrt() để lấy căn bậc 3
        VD: 27 => cbrt(27) = 3
    - Bước 3: kiểm tra xem nếu mà cbrt(n) * cbrt(n) * cbrt(n) == n => n là số lập phương
'''

import math

def is_perfect_cube(n):
    cube_root = round(math.pow(n, 1/3))
    return cube_root ** 3 == n  
    # return cube_root ** 3 == n or ((cube_root + 1) ** 3 == n) or ((cube_root - 1) ** 3 == n)  # Cách viết thứ 2

if __name__ == '__main__':
    n = int(input('Enter a number: '))  
    if (is_perfect_cube(n)):
        print(n, 'is a perfect cube')
    else:
        print(n, 'is not a perfect cube')