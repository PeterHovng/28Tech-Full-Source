def sum_of_digits(n):
    sum_digit = 0
    while n > 0:
        digit = n % 10
        sum_digit += digit
        n //= 10
    return sum_digit


if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    a.sort(key = lambda x : (sum_of_digits(x), x))
    for x in a:
        print(x, end=" ")

"""  
    # Cách 2: dùng cmp_to_key
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
    for x in a:
        print(x, end=" ")
"""