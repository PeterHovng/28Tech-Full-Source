if __name__ == '__main__':
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    count_pair = 0
    a.sort()
    b.sort()
    i, end = 0, len(b) - 1
    for x in a:
        if x > b[i]:
            count_pair += 1
            i += 1
            if i > end:
                break
    print(count_pair)
    
"""  
    # Ca1ch 2 dùng 2 con trỏ
    i, j = 0, 0 # i là nam, j là nữa
    while i < n and j < m:
        if a[i] > b[j]
            count_pair += 1
            i += 1
            j += 1
        else:
            i += 1
    print(count_pair)
"""
    