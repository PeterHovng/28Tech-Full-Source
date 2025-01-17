if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    min_val, max_val = min(a), max(a)
    print(min_val)
    for i in range(n):
        if a[i] == min_val:
            print(i, end = ' ')
    print()
    print(max_val)
    for i in range(n - 1, -1, -1):
        if a[i] == max_val:
            print(i, end = ' ')