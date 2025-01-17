from math import*
# Prefix sum
# Cho mảng A[] có nhiều N phần tử yêu cầu truy vấn tổng các phần tử chỉ có chỉ số từ l đến chỉ số r của mảng
"""
    Mảng a: 3 8 4 9 12 17
    Mảng prefix: 
    F[0] = a[0]
    F[i] = F[i - 1] + a[i]
    F[i]: là tổng các phần tử từ chỉ số 0 -> chỉ số i
    - LƯU Ý:
        + Khi left = 0 => sum[l : r] = F[right]
        + trường hợp còn lại sum[l : r] = F[right] - F[left - 1]
"""
if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    l = 3
    r = 5
    print(sum(a[l : r + 1]))
    # Áp dụng kĩ thuật prefix sum
    F = [0] * n
    F[0] = a[0]
    for i in range(n):
        F[i] = F[i - 1] + a[i]
    print(F[r] - F[l - 1])