if __name__ == "__main__":
    n, l = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    min_d = max(a[0] - 0, l - a[-1])
    for i in range(1, n):
        min_d = max(min_d, (a[i] - a[i - 1]) / 2)
    print('{:.10f}'.format(min_d))
    # print('%.10f' % min_d)
