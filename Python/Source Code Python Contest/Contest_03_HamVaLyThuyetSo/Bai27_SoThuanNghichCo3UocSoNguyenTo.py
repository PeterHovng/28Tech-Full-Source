from math import isqrt

def is_palindrome(n):
    temp = n
    rev = 0
    while temp != 0:
        digit = temp % 10
        rev = rev * 10 + digit
        temp //= 10
    return rev == n

def count_prime_of_divisors(n):
    cnt = 0
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            cnt += 1
            while n % i == 0:
                n //= i
    if n > 1:
        cnt += 1
    return cnt >= 3

def is_beautiful_num(n):
    if is_palindrome(n) and count_prime_of_divisors(n):
        return True
    return False

if __name__ == '__main__':
    a, b = map(int, input().split())
    checked = False
    for i in range(a, b + 1):
        if is_beautiful_num(i):
            checked = True
            print(i, end = ' ')
    if not checked:
        print(-1)
        
'''
    _ nếu gặp các bài toán liên quan tới ước số nguyên tố
    => thì đừng đi đếm ước và kiểm tra từng ước ấy có phải là số nguyên tố hay không vì điều này dễ dẫn đến time limit
    ==> HÃY LUÔN NHỚ LIÊN QUAN TỚI ƯỚC SỐ NGUYÊN TỐ => DÙNG TỚI HÀM PHÂN TÍCH THỪA SỐ NGUYÊN TỐ ĐỂ GIẢI QUYẾT
'''