def bin_search_first_pos(a, l, r, x):
    pos = -1
    while l <= r:
        m = l + (r - l) // 2
        if a[m] == x:
            pos = m
            r = m - 1
        elif a[m] < x:
            l = m + 1
        else:
            r = m - 1
    return pos


def bin_search_end_pos(a, l, r, x):
    pos = -1
    while l <= r:
        m = l + (r - l) // 2
        if a[m] == x:
            pos = m
            l = m + 1
        elif a[m] < x:
            l = m + 1
        else:
            r = m - 1
    return pos


if __name__ == "__main__":
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    count_pair = 0
    for i in range(n):
        target = k - a[i]
        first_pos = bin_search_first_pos(a, i + 1, n - 1, target)
        end_pos = bin_search_end_pos(a, i + 1, n - 1, target)
        if first_pos != -1:
            count_pair += end_pos - first_pos + 1
    print(count_pair)
