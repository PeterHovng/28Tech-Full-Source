def digits_from_right(n):
    if n == 0:
        return
    digit = n % 10
    print(digit, end = ' ')
    digits_from_right(n // 10)

def digits_from_left(n):
    if n == 0:
        return
    digits_from_left(n // 10)
    digit = n % 10
    print(digit, end = ' ')

if __name__ == '__main__':
    n = int(input())
    digits_from_left(n)
    print()
    digits_from_right(n)