if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    # dùng list slicing
    b = a[::-1]
    for x in b:
        print(x, end = ' ')