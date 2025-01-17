if __name__=='__main__':
    n = int(input())
    a = list(map(int, input().split()))
    
    # Cách 1: set 
    s = set(a) # cách tạo set bằng constructor
    """ 
    # Cách tạo set thông thường
    s = {}
    for x in a:
        s.add(x)
    """
    print(len(s))    
    
    
    # Cách 2: dictionary
    d = {}
    for x in a:
        d[x] = 1
    print(len(d))
    
    # Cách 3: sort
    a.sort()
    cnt = 1
    for i in range(1, n):
        if a[i] != a[i - 1]:
            cnt += 1
    print(cnt)