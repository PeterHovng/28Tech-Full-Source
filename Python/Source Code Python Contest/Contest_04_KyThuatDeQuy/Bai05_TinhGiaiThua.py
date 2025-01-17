def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n - 1)

if __name__ == '__main__':
    n = int(input())
    print(factorial(n))