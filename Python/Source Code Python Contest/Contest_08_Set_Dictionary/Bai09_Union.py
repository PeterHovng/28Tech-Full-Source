if __name__ == '__main__':
    n,m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    Uninon = list(set(a) | set(b)) # Uninon = a.uninon(b)
    Uninon.sort(reverse= True)
    for x in Uninon:
        print(x, end = ' ')
    