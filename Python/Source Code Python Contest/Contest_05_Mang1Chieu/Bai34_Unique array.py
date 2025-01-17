if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    new_arr = []
    new_arr.append(a[0])
    for i in range(1, n):
        if a[i] != a[i - 1]:
            new_arr.append(a[i])
    for x in new_arr:
        print(x, end = ' ')