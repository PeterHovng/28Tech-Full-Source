''' Cách này chưa được tối ưu
import math
def is_perfect_square_num(n):
    return math.isqrt(n) ** 2 == n

def count_perfect_square_in_range(a, b):
    cnt = 0
    current = math.isqrt(a)
    while current ** 2 <= b :
        if is_perfect_square_num(current ** 2):
            cnt += 1
        current += 1
    return cnt
    
    
if __name__ == '__main__':
    a, b = map(int, input().split())
    print(count_perfect_square_in_range(a, b))
'''

'''
    -chỉ cần duyệt từ căn bậc 2 của a đến căn bậc 2 của b là đủ và với điều kiện i^2 >= a => nếu i^2 < a thì a phải tăng lên 1 đơn vị => số lượng ước sẽ là isqrt(b) - isqrt(a) + 1
    - Giống như đếm có bao nhiêu chữ số tứ 1 đến n => số lượng sẽ bằng n - 1 + 1 = n
    LƯU Ý: Khi đếm số lượng số chính phương trong đoạn như thế này trong test case lớn => thì phải kiểm tra cả 2 cận
    VD: sqrt(10^14) xấp xỉ 10^7
    Nếu tính bằng hàm isqrt() => có thể ra k = 9999999.999999 sẽ nhỏ hơn 10^7 1 đơn vị
    => cách kiểm tra lấy số (k + 1) * (j + 1) = 10^14 => nếu k = 10^7 - 1 thì j = 10^7 - 1
'''
import math

if __name__ == '__main__':
    a, b = map(int, input().split())
    square_root_a = int(math.sqrt(a))
    square_root_b = int(math.sqrt(b))
    
    if square_root_a * square_root_a != a:
        square_root_a += 1
    
    count_of_perfect_square_nums = square_root_b - square_root_a + 1
    print(count_of_perfect_square_nums)

    
