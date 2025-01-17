def bin_search_first_pos(a, n, x):
    l, r = 0, n - 1
    pos = -1
    while l <= r:
        m = l + (r - l) // 2
        if a[m] == x:
            pos = m
            r = m - 1
        elif a[m] < x:
            l = m + 1
        else:
            r = m - 1
    return pos

def bin_search_last_pos(a, n, x):
    l, r = 0, n - 1
    pos = -1
    while l <= r:
        m = l + (r - l) // 2
        if a[m] == x:
            pos = m
            l = m + 1
        elif a[m] < x:
            l = m + 1
        else:
            r = m - 1
    return pos

def bin_search_first_bigger_than_equal(a, n, x):
    l, r = 0, n - 1
    pos = -1
    while l <= r:
        m = l + (r - l) // 2
        if a[m] >= x:
            pos = m
            r = m - 1
        else:
            l = m + 1
    return pos

def bin_search_first_bigger_than(a, n, x):
    l, r = 0, n - 1
    pos = -1
    while l <= r:
        m = l + (r - l) // 2
        if a[m] > x:
            pos = m
            r = m - 1
        else:
            l = m + 1
    return pos

if __name__ == "__main__":
    n, x = map(int, input().split())
    a = list(map(int, input().split()))

    # vị trí đầu tiên xuất hiện phần tử x trong mảng, nếu không tồn tại X in ra -1.
    first_pos = bin_search_first_pos(a, n, x)
    print(first_pos)
    
    # vị trí đầu tiên xuất hiện phần tử x trong mảng, nếu không tồn tại X in ra -1.
    end_pos = bin_search_last_pos(a, n, x)
    print(end_pos)
    
    # vị trí xuất hiện đầu tiên của phần tử >= X trong mảng, nếu không tồn tại phần tử >=X in ra -1.
    bigger_equal_than = bin_search_first_bigger_than_equal(a, n, x)
    print(bigger_equal_than)
    
    # vị trí xuất hiện đầu tiên của phần tử > X trong mảng, nếu không tồn tại phần tử >X in ra -1.
    bigger_equal = bin_search_first_bigger_than(a, n, x)
    print(bigger_equal)
    
    # Tìm số lần xuất hiện của phần tử X trong mảng sử dụng kết quả của hàm 1 và 2.
    freq = 0
    if first_pos != -1:
        freq = end_pos - first_pos + 1
    print(freq)