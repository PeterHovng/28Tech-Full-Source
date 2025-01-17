"""
    Lambda là gì ?
    - 1 cách đơn giản để định nghĩa hàm
    - Được gọi dưới tên toán tự lambda hoặc hàm lambda
    - Dùng để định nghĩa một hàm vô danh và hàm không cần tên
    - Xây dựng hàm chỉ cần 1 câu lệnh duy nhất
    - Không có câu lênh return và mặc định sẽ trả về expression
    - Cú pháp: 
        lambda parameters : expresion
        
        VD:
            func = lambda x : x * 2
            print(func(2)) # 4
    
    - TÍNH CHẤT:
        + Không chứa các câu lênh: return, assest , pass, ..
        + Chỉ chứa 1 biểu thức duy nhất
        + IIFE: Immediately Invoked Function Expression: Biểu thức lambda có thể gọi ngay lập tức
        + Có thể có bao nhiêu tham số tùy ý, phân biệt các tham số bằng dấu phẩy ','
    
    - TRUYỀN ĐỐI SỐ TRONG LAMBA:
        Có 3 cách truyển:
            + truyến bình thường postional argument
            + truyền theo keyword argument
            + truyền theo default argument
    VD:
        res = (lambda x : x**2)(2) # dấu ngoặc ở ngoài cùng như là truyền tham số vào (tính chất IIFE)
        print(res) # 4
        VD:
            res = (lambda x, y, z : x + y + z)(10, 20, 30)
            print(res) # 60
            
    - ÁP DỤNG LAMBDA VỚI MAP VÀ FILTER Và IF-ELSE
        + MAP:
            - 
            - VD:
                a = [1, 2, 3, 4]
                b = list(map(lambda x : x ** 2, a))
                print(b) # [1, 4, 9, 16]
                
        + FILTER:
            - nếu các phần tử trong list thỏa mãn tính chất và trả về true => filter sẽ lọc ra các phần tử này
            - Áp dụng 1 function cho từng phần tử trong list
            - VD:
                a = [1, 2, 3, 4]
                b = list(filter(lambda x : x % 2 == 0, a))
                print(b) # [2, 4]
                
        + IF-ELSE:
            - có thể thay expresion bằng if else bằng toán tử 3 ngôi
            - VD:
                findMax = (lambda x, y : x if x > y else y)(10, 50)
                print(findMax) # 50
        
"""





