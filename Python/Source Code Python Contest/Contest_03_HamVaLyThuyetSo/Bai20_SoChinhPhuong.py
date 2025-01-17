import math

def is_perfect_square_num(n):
    square_root_n = math.isqrt(n)
    if square_root_n * square_root_n == n:
        return True
    return False

if __name__ == '__main__':
    n = int(input())
    if (is_perfect_square_num(n)):
        print('YES')
    else:
        print('NO')