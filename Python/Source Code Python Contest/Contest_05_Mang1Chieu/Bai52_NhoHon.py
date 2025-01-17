if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(1, n - 1):
        if a[i] < a[i - 1] and a[i] < a[i + 1]:
            print(a[i], end = ' ')