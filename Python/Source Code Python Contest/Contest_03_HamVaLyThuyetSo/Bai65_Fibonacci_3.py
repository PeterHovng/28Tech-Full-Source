def fibo3(n):
    f1, f2 = 1, 0
    for i in range(2, 92 + 1):
        fn = f1 + f2
        if fn >= n:
            return fn
        f1, f2 = f2, fn
    return -1

if __name__ == '__main__':
    n = int(input())
    print(fibo3(n))