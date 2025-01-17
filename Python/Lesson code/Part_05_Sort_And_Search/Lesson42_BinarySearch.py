""" 
    - linear search: O(N): thường dùng bằng toán tự in hoặc range
    - binary search: O(logN): dùng trong list hoặc tuple đã sắp xếp
        + Tư tường:
            _B1: tìm kiếm trong đoạn [left, right] => tính mid = (left + right) / 2 ==> tối ưu là mid = left + (right - left) / 2 (lưu ý chia nguyên)
                _TH1: if a[mid] == x: return True
                _TH2: if a[mid] < x: tìm bên phải [mid + 1, right]
                _TH3: if a[mid] > x: tìm bên trái [right, mid + 1]
            _B2: tiếp tục lặp lại bước 1 cho đến khi left > right vì điều kiện lặp là left <= right
"""

def binary_search(a, l, r, x):
    while l <= r:
        m = (l + r) // 2
        # m = l + (r - l) / 2
        if a[m] == x:
            return True
        elif a[m] < x:
            l = m + 1
        else:
            r = m - 1
    return False

if __name__ == '__main__':
    a = [1, 3, 5, 6, 8, 13, 5]
    if binary_search(a, 0, len(a) - 1, 5):
        print('found')
    else:
        print('not found')