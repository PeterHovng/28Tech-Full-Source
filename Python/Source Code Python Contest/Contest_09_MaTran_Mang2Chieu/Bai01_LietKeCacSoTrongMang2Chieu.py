from math import*

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, isqrt(num) + 1):
        if num % i == 0:
            return False
    return True


def sieve(limit):
    prime = [True] * (limit + 1)
    prime[0], prime[1] = False, False
    for p in range(2, isqrt(limit) + 1):
        if prime[p]:
            for multi in range(p * p, limit + 1, p):
                prime[multi] = False
    return prime

if __name__ == '__main__':
    n, m = map(int, input().split())
    matrix = []
    for row in range(n):
        col = list(map(int, input().split()))
        matrix.append(col)
    
    time_limit = 10**9 + 1
    prime_num = sieve(time_limit)
    
    # # Cách 1: duyệt qua từng index => O(n^2) => TLE
    for i in range(n):
        for j in range(m):
            if is_prime(matrix[i][j]):
                print(matrix[i][j], end = ' ')
        print()
    
    # Cách 2: duyệt dùng list comprehension => O(n^2) => TLE
    for row in matrix:
        prime_col = [x for x in row if prime_num[x]]
        for x in prime_col:
            print(x, end = ' ')
        print()

    # Cách 3:
    """ 
    from math import isqrt

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, isqrt(num) + 1):
        if num % i == 0:
            return False
    return True

def sieve(limit):
    prime = [True] * (limit + 1)
    prime[0], prime[1] = False, False
    for p in range(2, isqrt(limit) + 1):
        if prime[p]:
            for multiple in range(p * p, limit + 1, p):
                prime[multiple] = False
    return prime

if __name__ == '__main__':
    n, m = map(int, input().split())
    matrix = []
    for _ in range(n):
        col = list(map(int, input().split()))
        matrix.append(col)
    
    # Giới hạn số nguyên tố cho sieve
    limit = 10**6
    prime_flags = sieve(limit)
    
    for row in matrix:
        prime_numbers = []
        for x in row:
            if x <= limit:
                if prime_flags[x]:
                    prime_numbers.append(x)
            else:
                if is_prime(x):
                    prime_numbers.append(x)
        
        # In số nguyên tố trong hàng hiện tại
        print(' '.join(map(str, prime_numbers)))
    """