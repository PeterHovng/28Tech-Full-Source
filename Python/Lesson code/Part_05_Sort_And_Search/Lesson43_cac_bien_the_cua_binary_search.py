""" 
    # biến thể 1:
        + Tìm vị trí đầu tiên của phần tử có giá trị x trong mảng tăng dần O(logN)
            def first_pos(a, l, r, x):
                res = -1
                while l <= r:
                    m = (l + r) / 2
                    if a[m] == x:
                        res = m # cập nhật vị trí
                        r = m - 1
                    elif a[m] < x:
                        l = m + 1
                    else:
                        r = m - 1
                return res
                
        + Tìm vị trí cuối cùng của phần tử có giá trị x trong mảng tăng dần O(logN)
                def last_pos(a, l, r, x):
                res = -1
                while l <= r:
                    m = (l + r) / 2
                    if a[m] == x:
                        res = m # cập nhật vị trí
                        l = m + 1
                    elif a[m] < x:
                        l = m + 1
                    else:
                        r = m - 1
                return res
            
        + Tìm vị trí đầu tiên của phần tử có giá trị >= x trong mảng tăng dần O(logN)
                def first_pos_bigger_to_equal(a, l, r, x):
                res = -1
                while l <= r:
                    m = (l + r) / 2
                    if a[m] >= x:
                        res = m # cập nhật vị trí
                        r = m - 1
                    else:
                        l = m + 1
                return res
        + Tìm vị trí đầu tiên của phần tử có giá trị > x trong mảng tăng dần O(logN)
                def first_pos_bigger_to(a, l, r, x):
                res = -1
                while l <= r:
                    m = (l + r) / 2
                    if a[m] > x:
                        res = m # cập nhật vị trí
                        r = m - 1
                    else:
                        l = m + 1
                return res
"""



if __name__ == '__main__':
    a = [1, 3, 5, 6, 8, 13, 5]
    