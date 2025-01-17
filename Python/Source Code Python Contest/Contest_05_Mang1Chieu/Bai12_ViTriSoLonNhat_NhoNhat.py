if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    min_val, max_val = min(a), max(a)
    for i in range(-1, -n - 1, -1): # dùng chỉ số âm
    # for i in range(n - 1, -1, -1):
        if a[i] == min_val:
            print(n + i, end = ' ') # dùng chỉ số âm
            # print(i, end = ' ')
            break
    for i in range(n):
        if a[i] == max_val:
            print(i)
            break