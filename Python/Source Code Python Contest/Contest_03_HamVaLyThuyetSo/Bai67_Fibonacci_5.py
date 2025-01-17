def is_fibo(n):
    if n == 1:
        return True
    else:
        f1, f2 = 1, 1
        for i in range(2, 100):
            fn = f1 + f2
            if fn == n:
                return True
            f2, f1 = f1, fn
    return False
                
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        if is_fibo(n):
            print('YES')
        else:
            print('NO')
    