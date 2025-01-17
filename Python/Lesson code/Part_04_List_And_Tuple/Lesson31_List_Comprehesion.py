"""
    - Comprehesion:
        + 1 cách nhanh chóng tạo 1 CTDL từ iterable
        + có thể kết hợp với điều kiện và vòng lặp => rút gọn cú pháp
        + List comprehension => code 1 ca1cg Pythonic hơn
    
    - Cú pháp: [Experssion for var in iterable]
        + Expression: biểu thức thực hiện mỗi khi vòng lặp thực thi
        + var: 1 biến là 1 item trong iterable
        + iterable: collections chứa các object(list, tuple, str..) là những gì có thể duyệt qua được
        
    VD:
        a = [1, 2, 3, 4, 5, 6, 7, 8]
        # Them 1 list loc cac phan tu chan ra list b
        # Cach thong thuong
        b = []
        for x in a:
            if x % 2 == 0:
                b.append(x)
        print(b) [2, 4, 6, 8]
        # list C là list comprehesion
        c = [var + 3 for var in a]
        print(c) [4, 5, 6, 7, 8, 9, 10, 11]
        
        
        # Tao list tu range
        a = [x ** 2 for x in range(5)]
        print(a) # [0, 1, 4, 9, 16]
        
        # Tao list tu str:
        s = "28tech"
        a = [x for x in s]
        print(a) # ['2', '8', 't', 'e', 'c', 'h']
        
        # Tao cac list la tong cac chu so cua tung iterable theo cach thong thuong
        
        def sum_digit(n):
        sum = 0
        while n != 0:
            sum += n % 10
            n //= 10
        return sum

        a = [1, 233, 30, 4, 99, 192, 13, 123]
        b = []
        for x in a:
            b.append(sum_digit(x))   
        print(b) # [1, 8, 3, 4, 18, 12, 4, 6]
        
        Thay vì duyệt dòng for each a và b.append
        => dùng list comprehension như sau
        a = [1, 233, 30, 4, 99, 192, 13, 123]
        b = [sum_digit(x) for x in a] # Đây là kĩ thuật du2g list comprehesion
        print(b) # [1, 8, 3, 4, 18, 12, 4, 6]
        
    - Dạng 2: kết hợp list và if
    - Cú pháp: [expression for var in iterable if_clause]
    VD:
        a = [1, 3, -4, 5, -6]
        b = [x for x in a if x >= 0]
        print(b) # [1, 3, 5]
        
        n = 10
        a = [x for x in range(n) if x % 2 == 0]
        print(a) # [0, 2, 4, 6, 8]
        
    VD2:
        from math import*

        def is_prime(n):
            if n < 2: return False
            for i in range(2, isqrt(n) + 1):
                if n % i == 0: return False
            return True

        a = [2, -245, 7, 13, 4]
        b = [x for x in a if is_prime(x)]
        print(b) # [2, 7, 13]
        
    - Dạng 3: nested List comprehesion
        + bên trong list comprehesion có thể có 1 list comprehesion khác
        + Cú pháp:
            [expresion for var in iterable]
                |
        _____________________________
        [expresion for var in iterable for var in iterable]
            
    VD: Thao tác flaten
        a = [[1,2,3], [4,5], [6,7,8]]
        # Đưa mọi phần tử trong nested list thành một list  (Thao tác flaten)
        b = [x for small_list in a for x in small_list]
        print(b) # [1, 2, 3, 4, 5, 6, 7, 8]
        
    => Học list comprehension => CỐ gắng lọc ra dữ liệu nhanh hơn => Cố gắng dùng nhiều list comprehesion
"""

