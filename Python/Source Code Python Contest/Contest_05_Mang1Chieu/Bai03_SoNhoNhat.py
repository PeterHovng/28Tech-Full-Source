if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    """ Cách 1
    cnt = [0] * 10000001
    for x in a:
        cnt[x] += 1
    min_val = min(a)
    print(cnt[min_val])
    """
    
    """Cách 2
    min_val = min(a)
    print(a.count(min_val))
    """
    
    """Cách 3
    min_val = min(a)
    cnt = 0
    for x in a:
        if x == min_val: 
            cnt += 1
    print(cnt)
    """