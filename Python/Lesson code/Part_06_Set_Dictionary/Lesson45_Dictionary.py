""" 
    - Dictionary trong python như là map trong C++
    - 1 cấu trúc dữ liệu thuộc dạng associative array hay là hashmap
    - Mỗi phần tữ sẽ là một ánh xạ từ 1 khóa (key) sang 1 giá trị tương ứng
    - Mỗi key là duy nhất
    
    - Tạo dict (Using Curly Braces):
        + Tạo dict, ban liệt kê các cặp key-value phân cách nhau bởi dấu phải và đặt trong dấu {}
        + Mỗi cặp key-value rằng key và value sẽ phân cách dấu ':'
        VD:
            infor = {
                'name' : '28tech', 'job' : 'dev', 'salary' : 500,  'web' : '28tech.com.vn', 'city' : 'HCM' 
            }
        
    - Tạo dict() bằng constructor
        + Bạn có thể tạo ra dict bằng convert (chuyển) cặp 2 giá trị thành 1 item của dict, khi đó giá trị thứ nhất làm key, giá trị thứ 2 làm value
        VD:
            a = [['name', '28tech'], ['job', 'dev'], ('web', '28tech.com.vn')]
            b = dict(a)
            print(b) # {'name': '28tech', 'job': 'dev', 'web': '28tech.com.vn'}
        
    - dict() Constructor with Keyword Arguments
        VD:
            person = dict(name="Alice", age=30, city="New York")
    - Using a List of Tuples
        VD: 
            person = dict([("name", "Alice"), ("age", 30), ("city", "New York")])

            
    - Tạo dict() bằng hàm zip():
        VD:
            a = ['name', 'job', 'web']
            b = ['28tech', 'dev', '28tech.com.vn']
            c = dict(zip(a, b))
            print(c) # {'name': '28tech', 'job': 'dev', 'web': '28tech.com.vn'}
    
    - Tạo dict() bằng hàm fromkeys(key, defaultValue)
        VD:
            a = ['a', 'b', 'c']
            defaultValue = 0
            b = dict.fromkeys(a, defaultValue)
            print(b) # {'a': 0, 'b': 0, 'c': 0}
        
        VD:
            keys = ["name", "age", "city"]
            person = dict.fromkeys(keys, "unknown") 
            
    2/ Các tính chất quan trọng của dict
        - key trong dict là duy nhất:
            + dict không chứa 2 key giống nhau
            
            + TH gán nhiều value cho cùng 1 key => dict giữ lại value cuối cho key
                VD:
                    a = {
                        'name' : '28tech', 
                        'job' : 'dev', 
                        'name' : '27tech'
                    }
                    print(a) # {'name': '27tech', 'job': 'dev'}
                
        - key phải là object không thể thay đổi (immutable)
            + key: chọn object như tuple, str, int,..
            + value : có thể bất kì object nào

            + VD (key là immutable object):
                a = {(1, 2) : 'abc', 'name' : '28tech', 3 : 4}
                print(a) # {(1, 2): 'abc', 'name': '28tech', 3: 4}
                
            + VD (key mutable object):
                a = {[1, 2] : 'abc', 'name' : '28tech', 3 : 4}
                print(a) # TypeError: unhashable type: 'list'
                
    3/ Truy cập phần tử:
        - truy cập value thông qua key: dict[key]
            + nếu key không có trong dict =>> gây ra lỗi: KeyError
            VD:
                infor = {
                    'name' : '28tech',
                    'job' : 'AI engineer',
                    'salary' : 500,
                }

                print(infor['job']) # AI engineer
                print(infor['web']) # KeyError: 'web'
                
            + để tránh gây ra lỗi KeyError nếu key không có trong dict => dùng hàm get():
                + Nếu có key trong dict => trả về value của key
                + Nếu không key trong dict => trả về None
                VD:
                    infor = {
                        "name": "28tech",
                        "job": "dev",
                        "salary": 500,
                        "web": "28tech.com.vn",
                        "city": "HCM",
                    }
                    print(infor.get('name')) # 28tech
                    print(infor.get('school')) # None

    4/ Lấy các key, value trong dict thông qua các phương thức:
    # trả về iterable object khi dùng phương thức này lấy ra
    Ta có dict như:
        infor = {
            1 : 'string',
            'name' : 'Khoi',
            (1, 2) : 'tuple'
        }
        
        - keys(): lấy ra các key trong dict
            VD: a = infor.keys() 
                    # dict_keys([1, 'name', (1, 2)])
                    <class 'dict_keys'> , type(a)
                    
                a = list(infor.keys())
                    # [1, 'name', (1, 2)]
                
        - values(): lấy ra các value tương ứng có trong dict
            VD: b = infor.values() 
                    # dict_values(['string', 'Khoi', 'tuple'])
                    <class 'dict_values'> , type(b)
                    
                b = list(infor.values())
                    # ['string', 'Khoi', 'tuple']
                    
                    
        - items(): Lấy ra các cặp (key, value) cho vào tuple
            VD: c = infor.items() 
                    # dict_items([(1, 'string'), ('name', 'Khoi'), ((1, 2), 'tuple')])
                    # <class 'dict_items'> , type(c)
                    
                c = list(infor.items())
                    # [(1, 'string'), ('name', 'Khoi'), ((1, 2), 'tuple')]
                    
    5/ Duyệt dict():
        # TA CÓ 1 DICTIONARY NHƯ SAU:
            infor = {
                "name": "28tech",
                "job": "dev",
                "salary": 500,
                "web": "28tech.com.vn",
                "city": "HCM"
            }

        - duyệt mặc định (duyệt các key):
            VD:
                for key in infor:
                print(key, end = ' ') # name job salary web city 
                
        - duyệt mặc định (duyệt key và truy cập vào value thông dict[key])
            VD:
                for key in infor: # for key in infor.keys(): # là như nhau 
                print(key, infor[key])
            # output:
                # job dev
                # salary 500
                # web 28tech.com.vn
                # city HCM
                    
        - duyệt qua các cặp key, value thông qua hàm dict.items() thay vì duyệt qua các key và truy cập bằng dict[key] (HAY DÙNG CÁCH NÀY HƠN)
            + lấy các cặp item(key, value) => unpacking cho các cặp iterator(key, value)
            VD:
                for (key, value) in infor.items():
                print(key, value)
            # output:
                # name 28tech
                # job dev
                # salary 500
                # web 28tech.com.vn
                # city HCM

        - duyệt qua các value bằng hàm dict.values()
            VD:
                for x in infor.values()
                    print(x)
            # output:
                # 28tech
                # dev
                # 500
                # 28tech.com.vn
                # HCM
                
    6/ THÊM VÀ SỬA DICT:
        - CÚ PHÁP: dict[key] = value
        - Nếu key đã nằm trong dict => cập nhất value mới cho key đó
        # TA CÓ DICTIONARY SAU:
            infor = {
                'name' : 'khoi',
                age : 19
            }
        # ta thực hiện thêm vào dict cặp (key, value)
            print(infor)
            infor['job'] = 'student'
            print(infor)
        # output:
            # {'name': 'khoi', 'age': 19}
            # {'name': 'khoi', 'age': 19, 'job': 'student'}
            
        # ta thực hiện thay đổi value thông qua dict[key]
            print(infor)
            infor['job'] = 'student'
            print(infor)
            infor['job'] = 'AI engineer'
            print(infor)        
        # output:
            # {'name': 'khoi', 'age': 19}
            # {'name': 'khoi', 'age': 19, 'job': 'student'}
            # {'name': 'khoi', 'age': 19, 'job': 'AI engineer'}
        
        - XÓA PHẦN TỬ:
            # ta thực hiện xóa thương qua key bằng hàm pop():
                + CÚ PHÁP: dict.pop(key)
                + hàm pop sau khi xóa key khỏi dict
                + giá trị của hàm là value của key bị xóa
                + Nếu sử dụng hàm pop với key không tồn tại trong dict => lỗi KeyError
                + Nếu cung cấp tham số ''
                    => Hàm trả về giá trị mặc định nếu khóa không tồn tại trong dict mà không sinh ra lỗi KeyError
                    - Cú pháp: dict.pop(key, '')
            VD:
                print(infor)
                value = infor.pop('age')
                print(value)
                print(infor)
            # output:
                {'name': 'khoi', 'age': 19}
                19
                {'name': 'khoi'}
            VD (trường hợp khóa key không tồn tại trong list và dùng giá trị mặc định ('') để tránh gây ra lỗi)

                value = infor.pop('address', '')  # Khóa 'address' không tồn tại, trả về 'default_value'
                print(value)  # Output: default_value
                print(infor)  # Output: {'name': 'khoi', 'age': 19}

                
            # ta thực hiện xóa phần tử có khóa chỉ định bằng hàm del
                + CÚ PHÁP: del dict[key]
                + Không có giá trị trả về
                + Nếu không có key trong dict => Lỗi KeyError
                + Phạm vị sử dụng: ngoài việc xóa phần tử, còn xóa được biến, phần tử trong list
            VD:
                print(infor)
                del infor['age']
                print(infor)
            # output:
                {'name': 'khoi', 'age': 19}
                {'name': 'khoi'}
                
            # ta thực hiện xóa phần tử ngẫu nhiên bằng hàm popitem():
                - Cú pháp: (key, value) = dict.popitem()
                - giá trị trả về sẽ là cặp (key, value) ngẫu nhiên
                - từ Python 3.7 popitem() => xóa item cuối cùng khi được thêm vào dict: remove arbitrary pair
            VD:
                print(infor)
                a = infor.popitem()
                print(a)
                print(infor)
            # output:
                {'name': 'khoi', 'age': 19}
                ('age', 19)
                {'name': 'khoi'}
                
            # ta sử dụng hàm clear để xóa mọi phần tử trong dict
            VD:
                infor.clear() # {}
                
    7/ Kiểm tra sự tồn tại của key, value
        - có thể sử dụng toán tự 'in' để kiểm tra sự tồn tại của 1 key hoặc value nào đó trong dict
            VD:
            # này là kiểm tra key trong dict
                if 'name' in infor: print('YES')
                else: print('NO')
                
            # này là kiểm tra value trong dict
                if 'khoi' in infor.values(): print('YES')
                else: print('NO')
                
        - có thể dùng cấu trúc "try" và "except: để kiểm tra xem key có tron value và xử lý ngoại lệ key không có trong dict như sau:
        - là sẽ không bị báo lỗi KeyError nữa vì đã xử lý ngoại lệ
            VD:
                my_dict = {'a': 1, 'b': 2, 'c': 3}

                try:
                    value = my_dict['d']  # cố gắng truy cập key 'd' không tồn tại
                    print(value)
                except KeyError:
                    print("Key not found") # Key not found

                
    8/ trộn 2 dict bằng hàm update()
        VD:
            a = {
                'name' = '28tech',
                age = 19
            }
            b = {
                'web' = 'IT',
                'salary' = 100
            }
            a.update(b)
            for (key, value) in a.items():
                print(key, value)
            # output:
                name 28tech
                age 19
                web IT
                salary 100
                
    9/ dict comprehension:
        - tương tự như list comprehesion, dict comprehesion giúp tạo ra dict:
            + cách gọn nhẹ
            + code chuẩn pythonic hơn
        - Cú pháp: 
            {key : value for var in iterable}
            # VD:
                s = ["28tech", "PyThon", "JaVA", "C++"]
                d = {x.lower(): x.upper() for x in s}
                print(d)
                for (key, val) in d.items():
                    print(key, val)
            # output:
                {'28tech': '28TECH', 'python': 'PYTHON', 'java': 'JAVA', 'c++': 'C++'}
                28tech 28TECH
                python PYTHON
                java JAVA
                c++ C++
                
                
            VD2:
            # lấy ra key và xuất ra value của key
                s = {'job' : 'dev', 'name' : '28tech', 'web' : '28tech', 'salary' : 500}
                selected = ['name', 'job']
                d = {x : s[x] for x in selected}
                print(d)
            # output:
                {'name': '28tech', 'job': 'dev'}
            
            # VD3:
            # tạo ra dict 
                # cách 1 thông thường
                a = [1, 2, 3, 4]
                d1 = dict({})
                for x in a:
                d1[x] = x ** 2
                # Cách 2: dict comprehension
                d2 = {x : x ** 2 for x in a}
                print(d1)
                print(d2)
            # output:
                {1: 1, 2: 4, 3: 9, 4: 16}
                {1: 1, 2: 4, 3: 9, 4: 16'}
                
            # VD4:
                s = 'abc'
                d = {x : x * 3 for x in s}
                print(d)
            # output:
                'a': 'aaa', 'b': 'bbb', 'c': 'ccc'}
    
    10/ Bài tập liên quan đến dictionary:
        - Bài tập liên quan để mảng đánh dấu
        - giá trị khác nhau trong mảng
        - tìm kiếm nhanh O(1)
        - đếm số lượng khác nhau trong mảng
        - dữ liệu: âm, số lớn, dữ liệu khác nhau đều được
        - tần suất
        
            # Bài 1: Đếm tần suất xuất hiện của từng phần tử trong dictionary 
            # in ra giá trị và tần suất của phần tử theo thứ tự xuất hiện trong mảng
            
            VD:
                if __name__ == '__main__':
                a = [1, 2, 1, 3, 1, 4, 2, 5, 6, 5, 2, 9, 0]
                # bình thường dùng mảng đánh dấu, bây giờ sẽ dùng dict
                d = {} # tạo dict rỗng
                for x in a:
                    if x in d:
                        d[x] += 1
                    else:
                        d[x] = 1
                for val, freq in d.items():
                    print(val, freq)
                # output:
                    1 3
                    2 3
                    3 1
                    4 1
                    5 2
                    6 1
                    9 1
                    0 1
                    
                # in ra giá trị và tần suất của phần tử theo thứ tự từ bé đến lớn trong mảng
            VD:
                if __name__ == '__main__':
                a = [1, 2, 1, 3, 1, 4, 2, 5, 6, 5, 2, 9, 0]
                # bình thường dùng mảng đánh dấu, bây giờ sẽ dùng dict
                d = {} # tạo dict rỗng
                for x in a:
                    if x in d:
                        d[x] += 1
                    else:
                        d[x] = 1
                # in ra giá trị và tần suất của phần tử theo thứ tự từ bé đến lớn trong mảng
                # chuyển các item trong dict sang list và các iterable trong list là tuple
                # thành phần đầu tiên của iterable là tuple sẽ là key và thành phần thứ hai sẽ là value
                b = list(d.items())
                # sắp xếp các key theo thứ tự tăng dần trong list bằng hàm sort kết hợp với lamda
                b.sort(key = lambda x : x[0])
                print(b)
                t = b[0]
                print(type(t))
                    # thao tác với tuple thông qua chỉ số bắt đầu từ 0 như list 
                for x in b:
                    print(x[0], x[1])
                
            # output:
                [(0, 1), (1, 3), (2, 3), (3, 1), (4, 1), (5, 2), (6, 1), (9, 1)]
                <class 'tuple'>
                0 1
                1 3
                2 3
                3 1
                4 1
                5 2
                6 1
                9 1
"""

my_dict = {"a": 1, "b": 2, "c": 3}

try:
    value = my_dict["d"]
    print(value)
except KeyError:
    print("Key not found")