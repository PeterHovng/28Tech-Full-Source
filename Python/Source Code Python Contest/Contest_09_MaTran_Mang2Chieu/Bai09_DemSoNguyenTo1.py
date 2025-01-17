from math import isqrt

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

if __name__ == "__main__":
    n = int(input())
    matrix = []
    for row in range(n):
        col = list(map(int, input().split()))
        matrix.append(col)

    cnt_prime = 0
    for i in range(n):
        # Check the main diagonal
        if is_prime(matrix[i][i]):
            cnt_prime += 1
        
        # Check the anti-diagonal
        if is_prime(matrix[i][n - i - 1]):
            cnt_prime += 1

    if n % 2 != 0:
        if is_prime(matrix[n // 2][n // 2]):
            cnt_prime -= 1
    print(cnt_prime)
