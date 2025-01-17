if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    cnt = 1
    for i in range(1, n):
        if a[i] != a[i - 1]:
            cnt += 1
    print(cnt)