if __name__ == '__main__':
    n, x, k = map(int, input().split())
    a = list(map(int, input().split()))
    # dùng list slicing
    # a[k - 1 : k - 1] = [x]
    # # dùng hàm insert trong list
    # for x in a:
    #     print(x, end = ' ')
    a.insert(k - 1, x)
    print()
    for x in a:
        print(x, end = ' ')