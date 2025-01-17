mod = 1000000007

def fibo(n):
    if n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        f1, f2 = 0, 1
        for i in range(3, n + 1):
            fn = (f1 % mod + f2 % mod) % mod
            f1, f2 = f2, fn
        return fn

if __name__ == '__main__':
    n = int(input())
    print(fibo(n))
