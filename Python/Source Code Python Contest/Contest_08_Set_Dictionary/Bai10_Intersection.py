if __name__ == "__main__":
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    # Tạo tập hợp từ mảng b để kiểm tra nhanh sự tồn tại
    set_b = set(b)
    
    # Tạo tập hợp từ mảng a để giữ phần tử xuất hiện trong a và b
    intersection = set()
    
    # Duyệt qua mảng a để kiểm tra sự tồn tại trong set_b
    for x in a:
        if x in set_b:
            intersection.add(x)
    
    # In kết quả theo thứ tự xuất hiện trong mảng a
    for x in a:
        if x in intersection:
            print(x, end=' ')
            # Xóa khỏi tập hợp để không in phần tử trùng lặp
            intersection.remove(x)

"""  
    # Cách 2: dùng trực tiếp intersetion
    s1 = set(a)
    s2 = set(b)
    s3 = list(s1.intersection(s2))
    for x in a:
        if x in s3:
        print(x, end = ' ')
        s3.remove(x)
"""