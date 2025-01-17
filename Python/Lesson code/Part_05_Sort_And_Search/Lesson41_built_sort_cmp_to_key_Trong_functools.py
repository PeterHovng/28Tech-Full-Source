""" 
    - Xây dựng hàm so sánh cho hàm sort bằng cmp_to_key trong functools
    - Cú pháp: from functools import cmp_to_key
        + Hàm này thường dùng với hàm sort dùng để so sánh các phần tử trong list hoặc là tuple
        + sử dụng cmp_to_key để mà viết được hàm so sánh mạnh mẽ hơn => đêm hàm so sánh cho tham số cho hàm sort, sorted, min, max cũng được
        
    - VD:
        def cmp(a, b):
    if a < b:
        return -1 # nếu là đứng vị trí mong muốn giữa a và b => return -1
    else:
        return 1
    # 2 là return a - b cho tăng dần con giảm dần là b - a
        # - Quy luật trả về của hàm cmp này là gì ?
        #     + Nếu a là phần tử đứng trước, b là phần tử đứng sau, sau khi mình sắp xếp list
        #     + Nếu a và b đúng thứ tự mình mong muốn : trả về số âm (thường là -1),
        #         ngược lại là trả về số dương (thông thường là 1)
        #     + Còn ngắn gọn:
        #         _ tăng dần: return a - b
        #         _ giảm dần: return b - a

if __name__ == '__main__':
    a = [1, 4, 6, -2, 3, 10, -1]
    # a.sort() sắp xếp tăng dần 1 cách thông thường
    print(a)
    # dùng key = cmp_to_key(cmp): cmp là đối số -> truyền 1 hàm so sánh vào (compartion function)
    # hàm cmp này cho biết thứ tự sắp xép các phần tử trong list a như thế nào
    # hàm cmp sẽ trả về 3 giá trị -1 0 1
    a.sort(key = cmp_to_key(cmp))
    print(a)
"""

from math import*
from functools import cmp_to_key

def sum_digit(n):
    sum_val = 0
    while n != 0:
        sum_val += n % 10
        n //= 10
    return sum_val

# sắp xếp các phần tử trong mảng theo thứ tự tổng chữ số tăng dần, nếu 2 số cùng tổng thì số nhỏ hơn sẽ xếp trước
def cmp(a, b):
    sum_a, sum_b = sum_digit(a), sum_digit(b)
    if sum_a != sum_b:
        return sum_a - sum_b # tổng chữ số tăng dần
    else:
        return a - b # số nhỏ hơn sẽ xếp trước


if __name__ == '__main__':
    a = [30, 300000, 12, 21, 111, 9, 19, 10, 20, 39]
    print(a)
    a.sort(key = cmp_to_key(cmp))
    print(a)