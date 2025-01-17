def print_opposite_sign(a, n):
    if a[0] * a[1] < 0:
        print(a[0], end = ' ')
    for i in range(1, n - 1):
        if a[i] * a[i - 1] < 0 or a[i] * a[i + 1] < 0:
            print(a[i], end = ' ')
    if a[n - 1] * a[n - 2] < 0:
        print(a[n - 1])

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    print_opposite_sign(a, n)