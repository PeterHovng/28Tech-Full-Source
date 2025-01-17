def sum4(n):
    if n == 1:
        return -1
    return (-1)**n * n + sum4(n - 1)

if __name__ == '__main__':
    n = int(input())
    print(sum4(n))