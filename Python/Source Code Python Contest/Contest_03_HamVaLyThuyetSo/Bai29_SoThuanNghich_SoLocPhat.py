# code gọn hơn

def is_beautiful_num(n):
    sum = 0
    check = False
    temp = n
    rev = 0
    while temp != 0:
        digit = temp % 10
        sum += digit
        if digit == 6:
            check = True
        rev = rev * 10 + digit
        temp //= 10
    return check and (rev == n) and (sum % 10 == 8)

if __name__ == '__main__':
    a, b = map(int, input().split())
    for i in range(a, b + 1):
        if is_beautiful_num(i):
            print(i, end = ' ')
            
            
''' Code hơi dài bằng cách tách các hàm
def is_palindrome(n):
    temp = n
    rev = 0
    check = False
    while temp != 0:
        digit = temp % 10
        if digit == 6:
            check = True
        rev = rev * 10 + digit
        temp //= 10
    return (rev == n) and chek

def sum_of_digits(n):
    sum = 0
    while n != 0:
        sum += n % 10
        n //= 10
    return sum

def check_digit(n):
    while n != 0:
        digit = n % 10
        if digit == 6:
            return True
        n //= 10
    return False

if __name__ == '__main__':
    a, b = map(int, input().split())
    for i in range(a, b + 1):
        if is_palindrome(i) and sum_of_digits(i) % 10 == 8:
            print(i, end = ' ')
'''            