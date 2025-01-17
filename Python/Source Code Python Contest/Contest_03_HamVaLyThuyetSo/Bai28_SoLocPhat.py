def lucky_number(n):
    while n != 0:
        digit = n % 10
        if digit != 0 and digit != 6 and digit != 8:
            return False
        n //= 10
    return True

if __name__ == '__main__':
    n = int(input())
    if lucky_number(n):
        print(1)
    else:
        print(0)