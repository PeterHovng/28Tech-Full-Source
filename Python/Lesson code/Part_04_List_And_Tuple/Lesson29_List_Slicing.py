'''
    - Là 1 kỹ thuật truy cập vào 1 khoảng các phần tử trong list thông qua toán tử
    
    - Cú pháp: 
        List[start : stop : step]
        + step ko chỉ rõ thì mặc định là 1
    - giá trị trả về là 1 list mới có khoảng từ start và kết thúc là (stop - 1)
    - ko lấy tại idx stop mà lấy tại idx stop - 1
    - Nếu ko có chỉ số start => mặc định là từ đầu list
    - Nếu ko có chỉ số stop => mặc định là chạy tới cuối list
        VD:
            a = [10, 20, 30, 40, 50]
            b = a[2 : 5 : 1] # có đầy đủ chỉ số
            print(b) # [30, 40, 50]
            c = [: 2] # không có chỉ số đầu => mặc định lấy từ đầu list (0) và step mặc định là nếu không có
            print(c) # [10, 20, 30]
            d = [3 : ] # không có chỉ số cuối => mặc định cắt đến cuối list là sẽ lấy phần tử cuối cùng trong list
            print(d) # [40, 50]
            e = [: 6 : 2] # từ vị trí bắt đầu đến cuối list và bước nhảy là 2
            print(e) # [10, 30, 50]
    
    - Có thể kết hợp list slicing giữ chỉ số âm và chỉ số dương cũng được hoặc chỉ số âm bình thường
    
    - để lật ngược list: dùng cú pháp [::-1]
    thì bỏ trống start và stop và để step bằng - 1
        VD:
            a = [1, 2, 3, 4]
            b = a[::-1]
            print(a) # [1, 2, 3, 4]
            print(b) # [4, 3, 2, 1]
    
    Cũng có thể dùng hàm reverse nhưng lại thay đổi trên a nên phải tạo ra list copy của a là b xong dùng reverse sẽ lâu
    => ưu tiên dùng cách trên
    
    - có thể thay đổi (thêm, xóa) 1 loạt các ptu trong list bằng list slicing bằng các gắn cho các iterable
        VD:
            a = [10, 20, 30, 40, 50, 60, 70]
            print(a) # [10, 20, 30, 40, 50, 60, 70]
            a[3: 6] = [100] # thay các iterable từ [3, 5] thành iterable[100]
            print(a) # [10, 20, 30, 100, 70]
            a[2 : 5] = [1, 2, 3] # thay các iterable từ [2, 4] thành 1 list mới là [1,2 ,3]
            print(a) # [10, 20, 1, 2, 3]
    
    - cách thêm vào đầu list và cuối cú pháp:
        + thêm đầu: a[:0] = [list]
        + thêm cuối: a[len(a):] = [list]
        VD:
            a = ['x', 'y', 'z']
            print(a) # ['x', 'y', 'z']
            a[:0] = [1, 2, 3] # chèn list mới vào đầu list cũ
            print(a) # [1, 2, 3, 'x', 'y', 'z']
            a[len(a):] = [6, 7, 8] # chèn list mới vào sau list cũ
            print(a) # [1, 2, 3, 'x', 'y', 'z', 6, 7, 8]
    
    - Cách tạo list copy thay vì dùng hàm copy(): listb = lista[:] 
    => nội dung chỉ giống nhau còn list_a và list_b là 2 đối tượng khác nhau
        VD:
        a = [1, 2, 3, 4, 5]
        b = a[:]
        print(b) # [1, 2, 3, 4, 5]
        print(a == b) # True
        print(b is a) # False
    
    => tóm lại list slicing dùng nhiều để copy 1 list và lật ngược 1 list
''' 







