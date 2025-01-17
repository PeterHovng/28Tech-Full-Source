if __name__=='__main__':
    n = int(input())
    a = list(map(int, input().split()))
    Q = int(input())
    
    # Cách 1 dùng set
    s = set(a)
    for _ in range(Q):
        x = int(input())
        if x in s:
            print('YES')
        else:
            print('NO')
            
    # Cách 2 dùng dictionary
    d = {}
    for x in a:
        d[x] = 1
    # key = list(d) # lúc này list chỉ còn lại các key thôi vì khi chuyển qua list từ dict chỉ lưu các key
    
    # Cách 3 dùng dictionary comprehesion
    # d_comp = {x : 1 for x in a}
    
    for _ in range(Q):
        x = int(input())
        if x in d:
            print('YES')
        else:
            print('NO')
    
    # print(key) # output: [1, 2, 3, 4]
    
    