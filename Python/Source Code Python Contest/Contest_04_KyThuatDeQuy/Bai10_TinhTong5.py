def sum5(n):
    if n == 1:
        return 1
    return 1 / n + sum5(n - 1)

if __name__ == '__main__':
    n = int(input())
    sum = sum5(n)
    print('%.3f' % sum)