if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    ans = a[0]
    for i in range(0, n - 1):
        if b[i] == 1:
            ans += a[i + 1]
        else:
            ans -= a[i + 1]
    print(ans)