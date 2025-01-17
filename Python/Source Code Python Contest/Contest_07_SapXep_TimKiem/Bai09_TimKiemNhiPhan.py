def bin_search(a, n, x):
    l, r = 0, n - 1
    while l <= r:
        m = l + (r - l) // 2
        if a[m] == x:
            return True
        elif a[m] < x:
            l = m + 1
        else:
            r = m - 1
    return False

if __name__=='__main__':
    n = int(input())
    a = list(map(int, input().split()))
    q = int(input())
    a.sort()
    while q > 0:
        x = int(input())
        if bin_search(a, n, x):
            print('YES')
        else:
            print('NO')
        q -= 1