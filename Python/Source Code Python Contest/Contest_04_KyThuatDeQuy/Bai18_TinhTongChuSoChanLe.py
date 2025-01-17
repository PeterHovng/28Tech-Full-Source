
def sum_of_even_digit(n):
    if n < 10:
        if n % 2 == 0:
            return n
        else:
            return 0
    digit = n % 10
    if digit % 2 == 0:
        return digit + sum_of_even_digit(n // 10)
    return sum_of_even_digit(n // 10)

def sum_of_odd_digit(n):
    if n < 10:
        if n % 2 != 0:
            return n
        else:
            return 0
    digit = n % 10
    if digit % 2 != 0:
        return digit + sum_of_odd_digit(n // 10)
    return sum_of_odd_digit(n // 10)


if __name__ == '__main__':
    n = int(input())
    print(sum_of_even_digit(n))
    print(sum_of_odd_digit(n))