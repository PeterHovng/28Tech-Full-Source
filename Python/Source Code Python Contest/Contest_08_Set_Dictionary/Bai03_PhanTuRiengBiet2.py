from collections import Counter

if __name__=='__main__':
    n = int(input())
    a = list(map(int, input().split()))

    # Cách 1: dictionary
    """ 
    d = {}
    for x in a:
        if x in d:
            d[x] += 1
        else:
            d[x] = 1
    
    for x in a:
        if d[x] != 0:
            print(x, end = ' ')
            d[x] = 0 """
    """  
        # Có thể dùng theo dict như thế này
    d = {}
    for x in a:
        if x not in d:
            print(x, end = ' ')
            d.add(x)
            d[x] = 1
    """
    
    # Cách 2: dùng Counter từ from collections import Counter
    """ dict_counter = list(Counter(a))
    for x in dict_counter:
        print(x, end = ' ') """
    
    # Cách 3: dùng set
    s = set()
    for x in a:
        if x not in s:
            print(x, end = ' ')
            s.add(x)
    
    