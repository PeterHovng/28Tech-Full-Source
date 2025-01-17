def fibo2(n):
    if n == 0 or n == 1:
        return True
    else:
        f1, f2 = 1, 0
        for i in range(2, 100):
            fn = f1 + f2
            if fn == n:
                return True
            f2, f1 = f1, fn
    return False
                
if __name__ == '__main__':
    n = int(input())
    if fibo2(n):
        print('YES')
    else:
        print('NO')

# vì số fibonacci tới cỡ 9*10^18 => cần check tới số fibonacci thứ 100