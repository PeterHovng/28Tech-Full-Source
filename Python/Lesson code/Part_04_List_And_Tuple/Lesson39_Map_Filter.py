""" 
    Lý thuyết về map và filter:
    1/ map:
        - một hàm có sẵn
        - có chức năng apply 1 hàm có sẵn cho mọi phần tử trong iterable (list, tuple, str,..)
        - Cú pháp: map(function, iterable,..)
            + function: Hàm sử dụng để apply các phần tử trong iterable
            + iterable: list, tuple, str,..
            + Giá trị trả về (value return): 1 đối tượng thuộc lớp map => nên ép kiểu sang list để sử dụng
            
        VD: cho các phần tử trong list a thành trị tuyệt đối
        - Cách 1: List comprehesion
        VD:
            a = [1, -3, 4, -5, -6, 2]
            a = [abs(x) for x in a] # [1, 3, 4, 5, 6, 2]
            print(a)
        
        - Cách 2: dùng map (có thể áp dụng hàm built-in hoặc hàm tự định nghĩa)
        VD:
            a = [1, -3, 4, -5, -6, 2]
            a = list(map(abs, a)) # [1, 3, 4, 5, 6, 2], phần đầu của map là funct để áp dụng với các phần tử trong iterable
            a = list(map(lamba x : x ** 2, a))
            print(a)
            
    - Đọc mảng số nguyên tử input và chuyển thành list
        VD:
            a = list(map(int, input().split()))
    
    - TH hàm apply trong map ngắn gọn: => có thể thay thế bằng lambda
        VD:
            def square(n):
                return n ** 2
            if __name__ == '__main__':
                a = [1, 2, 3, 5]
                b = list(map(square, a))
                print(b)
                c = list(map(lambda x : x ** 2, a))
                print(c)
                
    - Có thể áp dụng map với nhiều iterable được
        VD:
            def add(a, b):
                return a + b

            if __name__ == '__main__':
                a = [1,2,3,4]
                b = [2,3,4,5]
                c = list(map(add, a, b)) # [3, 5, 7, 9]
                print(c) 
    
    - Có thể áp dụng map với nhiều iterable dùng lambda
        VD:
            if __name__ == '__main__':
                a = [1,2, 3,4]
                b = [3, 4, 5,6]
                c = list(map(lambda x, y : x + y, a, b))
                print(c) # [4, 6, 8, 10]
                
    2/ filter():
        - dùng để tích xuất các phần tử trong 1 iterable 
        khi apply 1 function với phần tử => hàm trả về giá trị True
        - Cú pháp: filter(function, iterable)
            + function: hàm được apply với các phần tử trong iterable
            + iterable: list, tuple, str,..
            + Giá trị trả về (value return): trả về lớp đối tượng filter => nên ép sang list hoặc tuple
            
        - VD1 (Lọc ra các số chẵn trong list):
            def even(n):
                return n % 2 == 0

            if __name__ == '__main__':
                a = [1, 2, 3, 4, 5]
                b = list(filter(even, a))
                print(b) # [2, 4]
            
        - VD2: (áp dụng filter với lại lambda)
            if __name__ == '__main__':
            a = [ 1, 2, 3, 4, 5, 3]
            b = list(filter(lambda x : x < 3, a))
            print(b) # [1, 2]
"""


