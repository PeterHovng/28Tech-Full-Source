# Dạng 4: Mảng đánh dấu
    # + Các giá trị khác nhau trong mảng: Tìm số lượng khác nhau, liệt kê
    # + Bài toán liên quan đến tần suất 
    # Cho mảng A[] gồm n phần tử, đếm xem mỗi phần tử trong mảng xuất hiện bao nhiêu lần
    # LƯU Ý Chỉ áp dụng với những phần tử >= 0 và <= 10^7
    # Nếu các phần tử là số âm => truy cập vào chỉ số âm => trùng với chỉ số dương
"""
    input:
    8
    1 2 1 2 3 1 4 2
    output:
    1 3
    2 3
    3 1
    4 1    
"""


if __name__ == '__main__':
    a = [1, 2, 1, 2, 3, 1, 4, 2]
    cnt = [0] * 10000001
    for x in a:
        cnt[x] += 1
    l, r = min(a), max(a)
    for i in range(l, r + 1):
        print(i, cnt[i])
        
    
