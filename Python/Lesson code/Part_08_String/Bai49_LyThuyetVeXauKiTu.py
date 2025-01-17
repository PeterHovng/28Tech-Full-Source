""" 
    - Tạo string bằng dấu nháy '' hoặc dấu ""
        + có thể lồng nhau giữa dấu ' " 
        + vậy sao đống giữa các dấu này được:
            - dùng Escaping Backslash \
        + VD:
            # my_string = 'I\'m Khoi , "AI engineer"'
            # print(my_string) # I'm Khoi , "AI engineer"
            # my_string = "My's career is"computer sciece"" 
            # invalid syntax chỗ báo lỗi muốn in ra "computer science vì trước đó đã bị đóng bởi dấu "
            # vậy phải dùng Escaping Backslash \ như sau: \"computer sciece\"
            my_string = "My's career is \"computer sciece\"" 
            print(my_string) # My's career is "computer sciece"
        
        - Ngoài ra Escapaing Backslash còn có thể ngắt dòng dài
        VD:

        
    - nếu muốn tạo string nhiều dòng => tạo ra trong 3 dấu """ """
    - có thể chuyển các onject sang string bằng constructor str()
    - Các tính chất của string:
        + ordered
        + immutable
        + text presentation
        
    VD:
        s = [1,2,3]
        a = str(s)
        print(a) # [1, 2, 3]
        print(type(a)) # <class 'str'>
        
    - Truy cập các kí tự thông qua chỉ số:
        + bắt đầu từ chỉ số 0
        + có hỗ trợ chỉ số âm như trong list
        + có thể sử dụng string slicing như list
            VD:
            s = '28tech'
        print(s[:3])
        print(s[1:4])
        print(s[::-1])
        print(s)
        
    - duyệt xâu bằng 2 cách:
        + for i in range(len(s))
        + for each
    VD:
        s = 'AI engineer'
        # duyệt bằng range()
        for i in range(len(s)):
            print(s[i], end = ' ')
        print()

        # duyệt bằng for each
        for c in s:
            print(c, end = ' ')

    - string is immutable:
        + có thể truy cập string thông qua index
        + vì string là immutable => không thể thay đổi các kí tự bằng các gán giá trị hoặt xâu khác

        VD:
            s = "123432"
            s[0] = "3"
            print(s) # TypeError: 'str' object does not support item assignment
            
    - Nối xâu:
        + bằng toán tử '+'
        
    - Nhân bản xâu:
        + bằng toán tử '*'
        
    - hàm replace()
        + thay thể xâu cũ thành xâu mới
        + cú pháp: str.replace(old, new, count)
        LƯU Ý:
            _ Các hàm xử lý của string => KHÔNG THAY ĐỔI STRING chính nó mà = TRẢ VỀ XÂU TƯƠNG ỨNG
        VD:
            s = "xau nay la xay chinh"
            place_str = s.replace("chinh", "thay the")
            print(s, place_str, sep = '\n') 
            # xau nay la xay chinh
            # xau nay la xay thay the
        VD2:
            s = "Hello, World! Hello again!"
            print(s.replace("Hello", "Hi"))  # "Hi, World! Hi again!"
            print(s.replace("Hello", "Hi", 1))  # "Hi, World! Hello again!"


    - hàm split():
        + tách các từ trong xâu:
        + nếu không có tham số cho hàm split() => tách theo dấu cách, nếu có tham số => tách theo kí tự tham số
        + Cú pháp: str.split(separator, maxsplit)
            _ separator: ký tự phân tách, mặc định là khoảng cách
            _ maxsplit: số lần tách tối đa, mặc định là -1 => không giới hạn
        
        VD:
            s = " fdsa fds ss sa"
            a = s.split()
            print(a) # ['fdsa', 'fds', 'ss', 'sa']
            s = "rew,rew,qewr"
            b = s.split(',')
            print(b) # ['rew', 'rew', 'qewr']        
        
        VD:
            s = "fdsa fds ss sa"
            a = s.split()
            print(a)  # ['fdsa', 'fds', 'ss', 'sa']

            s = "rew,rew,qewr"
            b = s.split(',')
            print(b)  # ['rew', 'rew', 'qewr']

            s = "one,two,three,four"
            c = s.split(',', 2) # chỉ tách 2 lần dấu ,
            print(c)  # ['one', 'two', 'three,four']

    - hàm join():
        + kết hợp các từ rời rạc => thành 1 xâu và phân tách bởi kí tự cho trước
        + Cú pháp: separator.join(iterable)
        
        VD:
            s = "543,543,fsa,fdsa"
            t = ' '.join(s.split(','))
            print(s,t, sep = '\n')
            # output:
            # s: 543,543,fsa,fdsa
            # t: 543 543 fsa fdsa
        VD2:
            s = "543,543,fsa,fdsa"
            t = ' '.join(s.split(','))
            print(t)  # "543 543 fsa fdsa"

            words = ['Hello', 'world', 'this', 'is', 'Python']
            sentence = ' '.join(words)
            print(sentence)  # "Hello world this is Python"

            
        - hàm strip():
            + loại bỏ khoảng trắng hoặc các ký tự xác định ở đầu và cuối xâu
            + cú pháp: str.strip([chars])
                + chars: chuỗi các kí tự tùy ý cần loại bỏ
                + nếu không có tham số chars -> mặc định là loại bỏ khoảng trắng
                
            VD:
                s = "   Hello, World!   "
                print(s.strip())  # "Hello, World!"

                s = "---Hello, World!---"
                print(s.strip('-'))  # "Hello, World!"


    - Các hàm case conversion (chuyển đổi):
        + upper(): chuyển kí tự in thường sang in hoa
            VD:
            s = "nguyen van anh"
            upper_str = s.upper()
            print(upper_str) # NGUYEN VAN ANH            
        
        + lower(): chuyển kí tự in hoa sang in thường
            VD:
            s = "NGUYEN VAN ANH"
            lower_str = s.lower()
            print(lower_str) # nguyen van anh
            
        + capitalize(): viết hóa chữ các đầu của xâu
            VD:
            s = "nguyen van anh"
            capitalize_str = s.capitalize()
            print(capitalize_str)  # Nguyen van anh
                    
        + swapcase(): chuyển đổi giữa hoa và thường
            VD:
            s = "Nguyen Van Nam"
            swap_type_str = s.swapcase()
            print(swap_type_str) # nGUYEN vAN nAM

        + title(): viết hoa chữ các đầu của từng từ, các từ còn lại viết thường
            VD:
            s = "nguyen van anh"
            new_name = s.title()
            print(s)
            print(new_name) # Nguyen Van Anh

    - kiểm tra xâu con bằng 2 cách:
        1/ dùng toán tử in => trả về True hoặc là False
        2/ dùng hàm find() 
            + nếu xâu con có tồn tại => trả về index nhỏ nhất (lần đầu tiên tìm thấy)
            + nếu không tồn tại => trả về -1
    
        VD:
            name = "khoi, nam, khang, quan"
            sub_str = "khoi"
            # use fine fuct to check the sub string 
            print(name.find(sub_str)) # index: 0
            print(name.find("tuan")) # index: -1
            if "khang" in name:
                print('found')
            else:
                print('not found')
            # the answer is: found
        VD:
            s = "Hello, World!"
            print(s.find("World"))  # 7
            print(s.find("World", 0, 5))  # -1 (Không tìm thấy trong khoảng từ 0 đến 5)
    
        - Hàm startswith() 
        Cú pháp:

            string.startswith(prefix, start, end)
            prefix: Chuỗi con cần kiểm tra ở đầu xâu.
            start: (Tùy chọn) Vị trí bắt đầu kiểm tra. Mặc định là 0.
            end: (Tùy chọn) Vị trí kết thúc kiểm tra. Mặc định là độ dài của xâu.
        - Hàm endswith()
        Cú pháp:
            string.endswith(suffix, start, end)
            suffix: Chuỗi con cần kiểm tra ở cuối xâu.
            start: (Tùy chọn) Vị trí bắt đầu kiểm tra. Mặc định là 0.
            end: (Tùy chọn) Vị trí kết thúc kiểm tra. Mặc định là độ dài của xâu.

        VD:
            s = "Hello, World!"
        print(s.startswith("Hello"))  # True
        print(s.endswith("World!"))  # True
        print(s.startswith("World", 7))  # True


    - Cách nhúng biến vào trong xâu:
        + có 3 cách:
        Cách 1: % string formatting
            + %s: xâu kí tự
            + %d: số nguyên
            + %f: số thực
            + "%s %d %f" % (variable type string, variable type int, variable type = float)
            VD:
                my_name = "My name is %s and I am %d" % ("khoi", 19)
                print(my_name) # My name is khoi and I am 19
            
            + ưu điểm: đơn giản và dễ hiểu
            + nhược điểm: khó đọc khi cón nhiều biến và không linh hoạt
        
        Cách 2: dùng str.fomat()
            + ở mỗi vị trí chèn thì ghi chỉ số tạo mỗi lần chèn thứ mấy: bắt đầu từ 0: và vị trí chèn đặt trong {index}
            + vì vị trí index tương ứng trong tham số của hàm format(0,1,2,3,..,len(s)-1)
            VD:
                my_name = "My name is {0} and I am {2}".format('Khoi', 12, 19)
                print(my_name) # My name is Khoi and I am 19
            
            + ưu điểm: Linh hoạt hơn so với % string formatting, cho phép định dạng chi tiết hơn
            + nhược điểm: Cú pháp dài hơn và khó đọc hơn khi có nhiều biến.
            
        Cách 3: f-string: (phổ biến nhất và hiệu quả và dễ đọc, dễ viết)
            + trước sring có kí tự f và trong string muốn nhúng biến vào đầu thì đặt biến trong {}
            + tempalate: s = f'{var} is {var}'
            VD:
                name = 'Khoi'
                age = 19
                intro_myself = f'My name is {name} and I am {age} years old.'
                print(intro_myself) # My name is Khoi and I am 19 years old.            
            
            + ưu điểm: Dễ đọc, dễ viết, và là cách hiệu quả nhất. Hỗ trợ định dạng mạnh mẽ.
            + nhược điểm: Chỉ có sẵn từ Python 3.6 trở lên.
            
            => Trong thực tế, f-string được ưa chuộng hơn vì tính tiện dụng và hiệu quả. Nó giúp code ngắn gọn và dễ hiểu hơn nhiều so với các phương pháp khác.
            
        - Hàm count()
            Cú pháp: string.count(sub, start, end)

            sub: Chuỗi con cần đếm số lần xuất hiện.
            start: (Tùy chọn) Vị trí bắt đầu tìm kiếm. Mặc định là 0.
            end: (Tùy chọn) Vị trí kết thúc tìm kiếm. Mặc định là độ dài của xâu.
        
        VD:
            s = "Hello, World! Hello again!"
            print(s.count("Hello"))  # 2
            print(s.count("Hello", 0, 12))  # 1 (Chỉ đếm trong khoảng từ 0 đến 12)

"""     

s = "Toi ra muon tro thanh 1 ky su ve tri tue nhan tao trong tuong lai \
vi toi dam me ve AI"
print(s)