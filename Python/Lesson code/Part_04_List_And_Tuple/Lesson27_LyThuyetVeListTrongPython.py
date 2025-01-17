'''
    - List là 1 cấu trúc mảng như các ngôn ngữ lập trình khác những các phần tử trong list trong python thì có thể có các kiểu dữ liệu khác nhau
    - Các tính chất của list:
        + Các phần tử có thứ tự
        + Truy cập thông qua chỉ só
        + có thể chứa các object thuộc các kiểu dữ liệu khác nhau thậm chí là 1 list khác
        + Lists are changable (mutable): có thể thay đổi giá trị, thêm, xóa các phần tử cũng được hỗ trợ
    
    VD:
    # list rỗng
        b = []
        print(b)

        # list các số nguyên
        a = [1, 2, 3, 4]
        print(type(a))
        print(a)

        # list các gồm hỗn hợp các object
        c = [1, 2, 1.43, "Python"]
        print(c)
        
    - List là CONSTRUCTOR:
        + có thể dùng hàm khởi tạo - list() để biến đổi các object => list
        + sử dụng các constructor list để tạo ra các phần tử thông qua các iterable
            VD:
            s = "28tech"
            a = list(s)
            print(a) # ['2', '8', 't', 'e', 'c', 'h']
            
            b = list(100) # wrong vì không có thể duyệt qua iterable được
            b = list(range(10))
            print(b) #[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

    - Truy cập thông qua chỉ số: O(1)
        + positive (0 -> n - 1): như bao array bình thường
        + negative (-1 => -n): ĐẶC BIỆT: TRUY CẬP TỪ VỊ TRÍ CUỐI LIST VỀ ĐẦU 
    => iterable của list sẽ chạy từ [-n, -1] & 
                                    [0 , n - 1]
            VD: a = [1, 2, 3, 4]
                print(a[1]) # 2
                print(a[-1]) # 4
    
    - để đếm số phần tử trong list: 
        + dùng hàm len()
        
    - Các cách DUYỆT LIST:
        1/ THÔNG QUA CHỈ SỐ
        VD: 
            a = [2, 1, 3, 4]
            for i in range(len(a)):
                print(a[i], end = ' ') # 2 1 3 4

        # duyệt ngược theo chỉ số âm
            a = [1, 2, "python", 4.6]
            for i in range(-1, len(a) * -1 - 1, -1):
                print(a[i], end = ' ') # 4.6 python 2 1 
            
        2/ DUYỆT BẰNG FOR-EACH
        VD:
            a = [1, 2, 3, 4, "python", 3.5]
            for item in a:
                print(item, end = ' ') # 1 2 3 4 python 3.5 
    
    - Có thể thay đổi phần tử thông qua chỉ số (index) trong list
    
    - để thêm phần tử vào list dùng hàm:
        + append(idx): thêm phần tử mới vào vị trí cuối list
        VD:
            a = [1, 2, 3, 4]
            a.append(5)
            print(a) #[1, 2, 3, 4, 5]
            
        + insert(idx, value type): chèn value vào vị trí bất kì trong list
        VD1:
            a = [1, 2, 3, 4]
            a.insert(2, 100)
            print(a) # [1, 2, 100, 3, 4]
        
        VD2:
            a = [1, 2, 3, 4]
            a.insert(6, 100) # [1, 2, 3, 4, 100] nếu vị trí chèn vượt quá [n - 1] => chèn vào vị trí [n]
            print(a) 
        VD3: 
            a.insert(-6, 100) # [100, 1, 2, 3, 4, 100] nếu vị trí chèn vượt quá [-n] => chèn vào vị trí [-n - 1]
            print(a)
        
    - Để xóa list:
        + pop(index): Xóa phần tử thông qua chỉ số index trong list
        VD:
            a = [1, 2, 3, 4]
            a.pop(3) # [1, 2, 3]
            print(a)    
            
        + pop(): nếu không có giá trị => mặc định xóa phần tử cuối [n - 1]
        VD: 
            a = [1, 2, 3, 4, 6, 8]
            a.pop() #  [1, 2, 3, 4, 6]
            print(a)
        
        + hàm pop sẽ trả về phần tử đã xóa khỏi list
        VD:
            a = [1, 2, 3, 4, 5, 6]
            b = a.pop(2) # giá trị vừa pop được trả về và gán cho biến b
            print(a) # [1, 2, 4, 5, 6]
            print(b) # 3
        
        + del arr[idx]: xóa thông qua chỉ số
        VD:
            a = [1, 2, 3, 4]
            del a[1] # xóa phần tử thứ nhất nếu không lấy phần tử xóa đó
            print(a) # [1, 3, 4]
        
        + remove(value of var): 
            _ phải kiểm tra có tồn tại value trong list hay không => nếu KHÔNG TỒN TẠI => BÁO LỖI
            _ Xóa phần tử thông qua giá trị của phần tử
            _ nếu trong list có nhiều phần tử cùng giá trị => sẽ xóa phần tử đầu tiên mang giá trị x cần xóa
            
            VD1: các phần tử riêng biệt
                a = [1, 2, 3, 4]
                a.remove(2) # xóa thông qua giá trị 2 có trong list
                print(a) # [1, 3, 4]
                a.remove(5) # ValueError: list.remove(x): x not in list => Gây lỗi vì giá trị x không có trong list
                print(a)
                
            VD2: có nhiều phần tử trùng lặp
                a = [1, 2, 4, 1 , 4, 2]
                a.remove(1) # chỉ xóa phần tử đầu tiên có giá trị x xuất hiện trong list
                print(a) # [2, 4, 1, 4, 2]
                a.remove(4)
                print(a) # [2, 1, 4, 2]
        
        
        + clear(): để xóa mọi phần tử trong list
            VD:
                a = [1, 2, 3, 4]
                a.clear()
                print(a) # []
        
        
    - Sao chép list:
        + Giúp nhân bản nội dung của 1 list ban đầu
        VD:
            a = [1, 2, 3]
            b = 2 * a
            print(b) # [1, 2, 3, 1, 2, 3]
            
        VD: tạo 1 mảng có 10 phần tử = 0
            a = [0] * 10
            print(a) # [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
        
    - Tìm kiếm phần tử trong list:
        + dùng toán tử in: là dùng linear search O(N): duyệt qua từng phần tử trong list để kiểm tra (LƯU Ý ĐỘ PHỨC TẠP)
        VD:
            a = ["python", "C++", 54]
            if "C++" in a:
                print('YES')
            else:
                print('NO')
        
    - Nối list 1 vào list 2:
        + extend(): s1.extend(s2)
        + dùng toán tử cộng '+' giữa 2 list: s1 += s2
        VD:
            a = [1, 2, 3, 4]
            b = [9, 3, 4]
            a += b # dùng toán tử += để nối vào
            print(a) # [1, 2, 3, 4, 9, 3, 4]
            b.extend(a) # dùng hàm extend
            print(b) # [9, 3, 4, 1, 2, 3, 4, 9, 3, 4]
        
    - Các phương thức của list:
        + Hàm copy(): tạo 1 list mới có nội dung như list ban đầu nhưng không phải list ban đầu => bản sao của list ban đầu
            VD:
                a = [1, 2, 3, 4]
                b = a
                print(a is b) # True
                c = a.copy() 
                print(c) #[1, 2, 3, 4]
                print(c == a) # True
                print(c is a) # False
                
        + hàm count(value var): trả về số lần xuất hiện phần tử trong list => tần suất của phần tử đó
            VD:
                a = [1, 2 ,3, 4, 1, 2, 4]
                print(a.count(1)) # 2
                print(a.count(4)) # 2
                print(a.count(3)) # 1
                
        + hàm index(): trả về chỉ số đầu tiên của 1 phần tử trong list: lưu ý trong list phải có phần tử đó mới dùng hàm index được ko thì báo lỗi
            VD:
                a = [1, 2 ,3, 4, 1, 2, 4]
                print(a.index(2)) # 1 đây là vị trí đầu tiên xuất hiện giá trị 2
                print(a.index(4)) # 3
                
        + hàm reverse(): để lật ngược 1 list: O(N)
            VD:
                a = [1, 2, 3, 4]
                print(a) # [1, 2, 3, 4]
                a.reverse()
                print(a) # [4, 3, 2, 1]
                
        + hàm sort(): sắp xếp các phần tử: O(N logN) được cài đặc bởi thuật toán Tim sort
            VD:
                a = [5, 1, 2 ,4, 3]
                a.sort()
                print(a) # [1, 2, 3, 4, 5]
                
    - một số hàm built-in python:
        all()       Trả về True nếu mọi phần tử trong list đều là True
        any()       Trả về True nếu có ít nhất 1 phần tử trong list là True
        max()       Trả về phần tử lớn nhất trong list
        min()       Trả về phần tử nhỏ nhất trong list
        sorted()    Trả về list đã sắp xếp của list ban đầu
        sum()       Trả về tổng các phần tử trong listsoprotection.com

''' 



