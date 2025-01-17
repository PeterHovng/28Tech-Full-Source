def add_element(a, x):
    a.append(x)

def remove_element(a, x):
    a.remove(x)
    
def check_element(a, x):
    if x in a:
        print('YES')
    else:
        print('NO')
        
if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    Q = int(input())
    for _ in Q:
        opt, x = map(int, input().split())
        if opt == 1:
            add_element(a, x)
        elif opt == 2:
            if x in a:
                remove_element(a, x)
        else:
            check_element(a, x)

"""  
    # Cách 2 dùng dict phù hợp với chủ đề này hơn thay vì dùng list
    d = {}
    for x in a:
        if x in d:
            d[x] += 1
        else:
            d[x] = 1
    q = int(input())
    for _ in range(q):
        opt, x = map(int, input().split())
        if opt == 1:
            if x in d:
                d[x] += 1
            else:
                d[x] = 1
        elif x == 2:
            if x in d:
                d[x] -= 1
                if d[x] == 0:
                d.pop(x)
        else:
            if x in d:
                print('YES')
            else:
                print('NO')
"""