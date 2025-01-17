if __name__ == '__main__':
    n = int(input())
    s = input().split()
    
    d = {}
    for x in s:
        if x in d:
            d[x] += 1
        else:
            d[x] = 1
            
    a = list(d.items())
    a.sort(key = lambda args: args[0])
    
    # In ra kí tự có từ điển nhỏ nhất và tần suất xuất hiện của nó
    print(a[0][0], a[0][1])
    print()
    
    # In ra kí tự có từ điển lớn nhất và tần suất xuất hiện của nó
    print(a[len(a) - 1][0], a[len(a) - 1][1])
    print()
    
    # In ra các kí tự xuất hiện trong N kí tự đã cho theo thứ tự từ điển tăng dần kèm tần suất của nó
    for key, val in a:
        print(key, val)
    print()
    
    # In ra các kí tự xuất hiện trong N kí tự đã cho theo thứ tự từ điển giảm dần kèm tần suất của nó
    a.sort(reverse = True)
    for key, val in a:
        print(key, val)