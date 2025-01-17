# Luyện tập viết hàm gồm 13 bài

from math import *

#1 kiểm n có phải số nguyên tố hay không, in ra 1 nếu đúng, 0 nếu sai
def isPrime(n):
    if n < 2:
        return 0
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            return 0
    return 1

#2 in tổng chữ số của n
def sum_of_digits(n):
    sum = 0
    while(n != 0):
        digit = n % 10
        sum += digit
        n //= 10
    return sum

#3 in tổng chữ số chẵn của n
def sum_of_even_digits(n):
    sum_even = 0
    while(n != 0):
        digit = n % 10
        if digit % 2 == 0:
            sum_even += digit
        n //= 10
    return sum_even

#4 in ra tổng chữ số n là số nguyên tố
def sum_of_prime_digits(n):
    sum_prime = 0
    while n != 0:
        digit = n % 10
        if digit == 2 or digit == 3 or digit == 5 or digit == 7:
            sum_prime += digit
        n //= 10
    return sum_prime

#5 in ra chữ số lật ngược của n
def palin_num(n):
    rev = 0
    temp = n
    while(temp != 0):
        digit = temp % 10
        rev = rev * 10 + digit
        temp //= 10
    return rev

#6 In ra số lượng ước của n là số nguyên tố (làm tương tự như phân tích thừa số nguyên tố) vì ước nguyên tố là thừa số nguyên tố
def count_of_prime_divisors(n):
    cnt = 0
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            cnt += 1
            while(n % i == 0):
                n //= i
    if n > 1:
        cnt += 1
    return cnt             

#7 in ra ước số nguyên tố lơn nhất của n (làm tương tự như phân tích thừa số nguyên tố)
def max_prime_divisor(n):
    res = -1
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            res = i
            while n % i == 0:
                n //= i
    if n > 1:
        res = n
    return res

#8 Kiểm tra nếu hàm tồn tại ít nhất 1 chữ số 6, nếu đúng in ra 1, sai in ra 0
def has_digit(n):
    while n != 0:
        digit = n % 10
        if digit == 6:
            return 1
        n //= 10
    return 0

#9 Kiểm tra nếu tổng chữ số của n chia hết cho 8, nếu đúng in ra 1, sai in ra 0
def is_sum_of_digits_divisible_by_eight(n):
    sum = 0
    while n != 0:
        digit = n % 10
        sum += digit
        n //= 10
    if sum % 8 == 0:
        return 1
    else:
        return 0

#10 Tính tổng giai thừa các chữ số của n
def sum_of_factorial_digits(n):
    sum = 0
    while n != 0:
        digit = n % 10
        sum += factorial(digit)
        n //= 10
    return sum

#11 Kiểm tra xem n có phải chỉ được tạo bới 1 số hay không? ví dụ 222, 333, 99999, nếu đúng in ra 1, sai in ra 0
def is_product_of_single_number(n):
    flag = n % 10
    while(n != 0):
        digit = n % 10
        if digit != flag:
            return 0
        n //= 10
    return 1

#12 Kiểm tra xem n có phải có chữ số tận cùng là lớn nhất hay không, tức là không có chữ số nào của n lớn hơn chữ số hàng đơn vị của nó, nếu đúng in ra 1, sai in ra 0
def is_largest_last_digit(n):
    flag = n % 10
    while(n != 0):
        digit = n % 10
        if digit > flag:
            return 0
        n //= 10
    return 1

#13 In tổng lũy thừa chữ số của n với số mũ là số chữ số. ví dụ: 123 = 1^3 + 2^3 + 3^3
def print_digit_power_sum(n):
    temp = n
    cnt = 0
    while(n != 0):
        cnt += 1
        n //= 10
        sum = 0
    while temp != 0:
        digit = temp % 10
        sum += digit ** cnt
        temp //= 10
    return sum

if __name__ == '__main__':
    n = int(input('Enter n: '))
    print(isPrime(n))
    print(sum_of_digits(n))
    print(sum_of_even_digits(n))
    print(sum_of_prime_digits(n))
    print(palin_num(n))
    print(count_of_prime_divisors(n))
    print(max_prime_divisor(n))
    print(has_digit(n))
    print(is_sum_of_digits_divisible_by_eight(n))
    print(sum_of_factorial_digits(n))
    print(is_product_of_single_number(n))
    print(is_largest_last_digit(n))
    print(print_digit_power_sum(n))
    