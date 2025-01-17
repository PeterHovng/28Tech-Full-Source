""" 
Lý thuyết về tuple:
    - Là một collection có thứ tự trong python
    
    - Tính chất:
        + Các phần tử có thứ tự
        + truy cập các phần tử tử trong tuple thông qua chỉ số (chỉ số âm và chỉ số dương)
        + Có thể chứa các phần tử ở mọi loại object: int, float, string, tuple ,list,...
        + Không thể thay đổi => Không thêm, Không xóa, Không sửa   
        
    - Khởi tạo tuple:
        + đưa các phần tử vào trong dấu ngoặc '()'
        + có thể tạo thông qua constructor tuple()
        
        VD: bằng dấu '()"
            a = (1, 2, 3)
            print(type(a)) # <class 'tuple'>
            
        VD: bằng constructor
            s = "28tech"
            a = tuple(s)
            print(a) # ('2', '8', 't', 'e', 'c', 'h')
            
            c = tuple([1,2,3])
            print(c) # (1, 2, 3)
            
    - Nested tuple
        + Có thể chứa mọi object trong tuple
        VD:
            a = ("28tech", (1,2,3), [1,2,3])
            print(a)
            
    - Tuple unpacking:
        + Khi unpacking thì số lượng biến = với lại số lương phần tử bên trong tuple
        + trường hợp unpacking không đủ phần tử => có thể sử dụng toán tử *
        
        VD:
            a = ("28tech", "python", [1,2,3], ("12", "32"))
            x, *y = a
            print(x, y, sep = '\n')
            # x = 28tech
            # y = ['python', [1, 2, 3], ('12', '32')]
            
    - Truy cập các phần tử trong tuple
        + Tương tự như list thông qua chỉ số tính từ 0
        + Hỗ trợ cả chỉ số âm như list
        
    - Cách duyệt tuple:
        VD:
        a = ("c++", "python", "java")
        # duyệt theo chỉ số
        for item in range(len(a)):
            print(a[item], end = ' ')
        print()
        # Duyệt theo for each
        for item in a:
            print(item, end = ' ')
            
    - Kiểm tra phần tử trong tuple bằng toán tử 'in':
        VD:
        a = ('fd', 4, [1,3,4])
        if [1,3,4] in a:
            print('found')
        else:
            print('Not found')
            
    - Thay đổi tuple:
        + typle không thể thay đổi giá trị
        + Nếu item trong tuple là object có thể thay đổi giá trị => vẫn thay đổi bình thường
        + dù tuple không thể thay đổi => Vẫn có thể xóa luôn cả tuple được
        
        VD (Không thay đổi được):
            a = (1, 2, 3, 4)
            a[1] = 3 # Lỗi vì tuple không thể thay đổi
            # TypeError: 'tuple' object does not 
            support item assignmen
        
        VD (Thay đổi được object có thể thay đổi trong tuple)
            a = ('28tech', [1,2,3], "java", 5)
            a[1][0] = 100
            print(a) # ('28tech', [100, 2, 3], 'java', 5)
            # TH trên thì có thể thay đổi object là list trong tuple ở phần tử a[1]
            
    - Có thể nối tuple thông qua toán tử '+' || Nhân tuple lên
        VD: (nối 2 tuple)
            a = (1, 2, 3)
            b = (1, [2,3,4])
            c = a + b
            print(c) # (1, 2, 3, 1, [2, 3, 4])
            
        VD: (Nhân đôi tuple)   
            a = (1, 2, 3)
            b = a * 3
            print(b) # (1, 2, 3, 1, 2, 3, 1, 2, 3)
            
    - Sắp xếp tuple:
        + Cách 1: dùng hàm built-in sorted sau đó convert ngược lại tuple
            VD:
                a = (2, 5, 1, 4, 3)
                a = tuple(sorted(a)) # hàm sorted này sẽ trả về list -> ép kiểu về tuple
                print(a) # (1, 2, 3, 4, 5)
        
        + Cách 2: convert typle sang list rồi dùng sort list
            VD:
                a = (2, 4, 5, 1, 3)
                b = list(a)
                b.sort()
                a = tuple(b)
                print(a) # (1, 2, 3, 4, 5)
                
    - Hàm count() và index():
        + hàm count() trong tuple:
            _ để số phần xuất hiện của 1 phần tử
            
        + hàm index() trong tuple:
            _ trả về chỉ số đầu tiên của một phần tử trong tuple
            _ sẽ gây lỗi nếu phần tử đó ko có trong tuple như trong list
        
        + LƯU Ý:
            _ khi dùng hàm index() => phải đảm bảo giá trị cần kiểm tra phải có trong tuple
            _ Ngược lại => error
            
            VD:
                a = (1, 2, 4, 5, 2, 4)
                print(a.count(4)) # 2
                print(a.index(2)) # vị trí 1 là xuất hiện đầu tiên
"""












