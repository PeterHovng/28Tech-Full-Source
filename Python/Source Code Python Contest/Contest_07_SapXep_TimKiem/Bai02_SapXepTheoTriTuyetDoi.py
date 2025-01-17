if __name__=='__main__':
    n = int(input())
    a = list(map(int, input().split()))
    a.sort(key=abs)
    # Thao tác với lambda a.sort(key = lambda x : abs(x))
    for x in a:
        print(x, end = ' ')