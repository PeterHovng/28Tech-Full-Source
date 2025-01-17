if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    check = False
    for i in range(n):
        if i % 2 == 0 and a[i] % 2 == 0:
            print(a[i], end = ' ')
            check = True
    if not check:
        print('NONE')
        