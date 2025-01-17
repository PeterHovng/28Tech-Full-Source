''' Cách này chạy rất là chậm vì b chạy tới 10^12 => dễ bị time limit
import math

def is_perfect_square_num(n):
    return math.isqrt(n) ** 2 == n

if __name__ == '__main__':
    a, b = map(int, input().split())
    for i in range(a, b + 1):
        if is_perfect_square_num(i):
            print(i, end = ' ')
'''
# cách 2: tối ưu hơn
'''
    theo yêu cầu đề bài thì ta cần kiểm tra số chính phương trong đoạn [a, b]
    => a <= i^2 <= b
    => isqrt(a) <= i <= isqrt(b)
    => xong mình in ra i^2
    Nghĩa là mình chỉ cần duyệt từ căn của a đến căn của b và in ra i bình phương là xong
    LƯU Ý:
    - cận dưới rất dễ bị sai vì thường sẽ làm tròn xuống
    ví dụ 10 -> isqrt(10) = 3 nghĩa là nếu tại cận a không phải số chính phương thì phải tăng a lên 1 đơn vị
    Đây là ví dụ
    + 10 100
    9 16 25 36 49 64 81 100 
    Ví điều kiện là i^2 >= a
'''
import math

if __name__ == '__main__':
    a, b = map(int, input().split())
    square_root_a, square_root_b = math.isqrt(a), math.isqrt(b) 
    if square_root_a ** 2 != a:
        square_root_a += 1
    for i in range(square_root_a, square_root_b + 1):
        print(i * i, end = ' ')