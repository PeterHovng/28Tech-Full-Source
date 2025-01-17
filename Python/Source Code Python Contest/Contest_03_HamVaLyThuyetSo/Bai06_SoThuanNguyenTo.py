import math

def isPrime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

def is_prime_digit_sum_prime(n):
    sum = 0
    while n != 0:
        digit = n % 10
        if digit != 2 and digit != 3 and digit != 5 and digit != 7:
            return False
        sum += digit
        n //= 10
    return isPrime(sum)

if __name__ == '__main__':
    a, b = map(int, input().split())
    cnt = 0
    for i in range(a, b + 1):
        if is_prime_digit_sum_prime(i) and isPrime(i):
            cnt += 1
    print(cnt)
    
'''
    - Chú ý nếu đặt thứ tự if chưa chuẩn sẽ dẫn đến trường hợp time limit
    Ví dụ như sau:
    if A and B and C and D:
    -> có 4 điều kiện
    - khi dùng toán tử and trong if như thế này => if sẽ check từng điều kiện 1 trong A, B, C, D
    - Nghĩa là A đúng thì mới check những điều kiện còn lại vì trong if này toàn and 
    - Giả sửa A sai thì hàm if sẽ không check B, C, D và kết luận if này sai luôn => False
    
    - Vậy trong trường hợp ví dụ trên thì hàm kiểm tra số nguyên tố (isPrime) sẽ đúng nhiều hơn hàm check (is_prime_digit_sum_prime)
    nghĩa là trong đoạn từ a đến b có thể có nhiều số nguyên tố hơn số có tổng các chữ số là số nguyên tố
    => gọi hàm kiểm tra số nguyên tố trước thì lời gọi hàm sẽ nhiều hơn dẫn đến time limit
    => nên gọi hàm làm sao điều kiện thứ 1 trong 2 điều kiện sai nhiều hơn vì khi sai nhiều hơn sẽ không check điều kiện còn lại => giảm số lần gọi hàm => tốc độ sẽ nhanh hơn
'''