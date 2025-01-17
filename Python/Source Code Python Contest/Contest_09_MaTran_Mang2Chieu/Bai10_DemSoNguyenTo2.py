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

    set_prime = set()
    for i in range(n):
        # Check the main diagonal
        if is_prime(matrix[i][i]):
            set_prime.add(matrix[i][i])
        
        # Check the anti-diagonal
        if is_prime(matrix[i][n - i - 1]):
            set_prime.add(matrix[i][n - i - 1])

    print(len(set_prime))
