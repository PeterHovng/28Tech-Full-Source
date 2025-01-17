def check_even_digits(n):
    if n < 10:
        if n % 2 != 0:
            return False
        else:
            return True
    digit = n % 10
    if digit % 2 != 0:
        return False
    return check_even_digits(n // 10)
    
if __name__ == '__main__':
    n = int(input())
    if (check_even_digits(n)):
        print('YES')
    else:
        print('NO')