"""
    Kĩ thuật cửa sổ trượt: (Sliding window):
        Đề bài: Cho mảng A gồm n phần tử và số nguyên K
        Nhiệm vụ là tính tổng của mọi dãy con liên tiếp cỡ K của mảng A[]
        VD: A = 3, 8, 4, 9, 12, 27
            k = 3
            
"""

from math import*

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    k = int(input())
    # Làm cách bình thường O(n^2)
    for i in range(n - k + 1):
        # chỉ số bắt đầu
        sum_val = 0
        for j in range(i, i + k):
            sum_val += a[j]
        print(sum_val)
        
    # Kỷ thuật cửa sổ vì dạy con hiện tại và dãy con tiếp theo chỉ chênh lệch 1 phần tử thôi
    # Kỹ thuật này dựa vào kết quả của cửa số đằng trước và tính toán ra cửa số tiếp theo
    # Cửa số đầu tiên
    sum_sliding_window = sum(a[:k])
    print(sum_sliding_window, end = ' ')
    # duyệt từ cửa số thứ 2 và bắt đầu từ chỉ số 1
    for i in range(1, n - k + 1):  
        sum_sliding_window = sum_sliding_window - a[i - 1] + a[i + k - 1] # O(n)
        print(sum_sliding_window, end = ' ')