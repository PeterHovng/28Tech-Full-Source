def sum1(n):
    if n == 0:
        return 0
    return n + sum1(n - 1)


if __name__ == '__main__':
    n = (int(input()))
    print(sum1(n))