if __name__ == '__main__':
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    if  x in a:
        a.remove(x)
        # a.pop(a.index(x))
        for item in a:
            print(item, end = ' ')
    else:
        print('NOT FOUND')
        