if __name__ == '__main__':
    n, m, p = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a[p:p] = b
    for x in a:
        print(x, end = ' ')