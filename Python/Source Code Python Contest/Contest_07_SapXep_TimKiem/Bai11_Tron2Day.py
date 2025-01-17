

if __name__ == '__main__':
    n, m = map(int, input().split())
    b = list(map(int, input().split()))
    c = list(map(int, input().split()))
    a = []
    i, j = 0, 0
    while i < n and j < m:
        if b[i] <= c[j]:
            a.append('b' + str(i + 1))
            i += 1
        else:
            a.append('c' + str(j + 1))
            j += 1
    while i < n:
        a.append('b' + str(i + 1))
        i += 1
    
    while j < m:
        a.append('c' + str(j + 1))
        j += 1
    
    for x in a:
        print(x, end = ' ')
        