def bin_search(a, l, r, x):
    pos = -1
    while l <= r:
        m = l + (r - l) // 2
        if a[m] == x:
            return m
        elif a[m] < x:
            l = m + 1
        else:
            r = m - 1
    return pos


if __name__ == "__main__":
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    checked = False
    for xi in a:
        target = x + xi
        pos = bin_search(a, 0, n - 1, target)
        if pos != -1:
            checked = True
            break
    if checked:
        print(1)
    else:
        print(-1)
