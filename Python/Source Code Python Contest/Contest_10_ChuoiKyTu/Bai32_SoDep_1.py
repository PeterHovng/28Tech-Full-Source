from math import *


def is_prime(n):
    if n < 2:
        return False
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            return False
    return True


def is_beauty(n: str):
    sum_of_digits = sum(int(digit) for digit in n)
    set_prime = {2,3,5,7}
    for digit in n:
        if int(digit) not in set_prime:
            return False
    return is_prime(sum_of_digits)


if __name__ == "__main__":
    n = input()
    if is_beauty(n):
        print("YES")
    else:
        print("NO")
