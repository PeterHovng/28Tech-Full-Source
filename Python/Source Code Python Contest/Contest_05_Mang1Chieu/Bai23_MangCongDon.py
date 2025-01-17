if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    F = [0] * (n)
    F[0] = a[0]
    for i in range(1, n):
        F[i] = F[i - 1] + a[i]
    for x in F:
        print(x, end = ' ')