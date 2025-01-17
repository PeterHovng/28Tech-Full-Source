if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(n):
        ans = -1
        for j in range(i + 1, n):
            if a[j] > a[i]:
                ans = a[j]
                break
        print(ans, end = ' ')
                