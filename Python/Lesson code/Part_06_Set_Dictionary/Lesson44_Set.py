""" 
    - Lý thuyết về set trong python:
        + Là tập hợp các phần tử duy nhất không có thứ tự
        + sử dung để tính toán các phép toán liên quan đến tập hợp
        + Được cài đặt bằng hash-table(bảng băm)
        
    - Tính chất set:
        + sets are unorderd: các phần tử không có thứ tự
        + set item are unique: các phần tử là độc nhất (chỉ có 1)
        + sets are unindexed: không thể truy cập thông qua chỉ số
        + sets are changeable: set có thể thay đổi
        
    - Tạo set:
        + mỗi phần tử trong set cách nhau bơi dấu ','
        + Đặt trong dấu {}
        + nếu trong có các phần tử trùng nhau => sẽ tự loại bỏ phần tử bị trùng
        + Không thể lưu các phần tử có thể bị thay đổi giá trị (mutable) như list
        + Tạo set rỗng phải bằng constructor: my_set = set()
            => vì sao không tạo my_set = {} vì đây là tạo ra dictionary rỗng => nên sai
            
            VD:
                a = {[1,2], 1, 4} # TypeError: unhashable type: 'list' because the obejct in set must be immutable so all elements to be hashed
                print(a)
                
        + các object không thay đổi giá trị như (tuple, str, int,..) có thể làm phần tử của set vì chúng không thay đổi->có thể giá trị băm được cố định trong suốt vòng đời của nó
            VD:
                s = {1, "28tech", 2, 4, 1, 2, "fulhouse", (2, 4)}

        + có thể tạo set bằng set constructor từ các object như list, str, range,..
            VD:
                s = "28tech"
                t = set(s) # {'2', 'h', '8', 't', 'e', 'c'}
                print(t)
                a = [1, 3, 4, 5, "python", (3,4)] # {1, 3, 4, 5, (3, 4), 'python'}
                b = set(a)
                print(b)
                
    - Thêm phần tử vào set:
        + có thể dùng hàm add để thêm từng phần tử vào set
        + nếu trong set đã có phần tử muốn thêm => thì sẽ không được thêm phần tử đó vô set => vì set không lưu giá trị trung
            VD:
                a = [1, 2, 4, 5]        
                s = set(a)
                print(s) # {1, 2, 4, 5}    
                s.add(1)
                s.add(2)
                s.add(7)
                print(s) # {1, 2, 4, 5, 7}
                
        + có thể thêm nhiều phần tử vào set bằng hàm update()
        + các object là đối số của hàm update() phải là iterable để hàm update iterate(duyệt) qua từng phần tử trong iterable chứ không thể truy cập thông qua phần tử cụ thể cố định như int
        
            VD:
                s = {1, 2, 3,("python", 12)}
                s.update([2,4,5, 6, "fdsa"])
                print(s)
                s.update(2,3,4) # TypeError: 'int' object is not iterable, you have the iterable as the argument of update function
                print(s)
    - Xóa phần tử khỏi set bằng các hàm:
        VD: s = {1, 2, 3, "28tech"}
        + remove()
            VD: 
                s.remove(3)
                print(s)
                # s.remove(7) Trying to remove an element that does not exist
            - vì hàm remove chỉ xóa phần tử tồn tại trong set -> nếu không tồn tại sẽ bị báo lỗi Keyerror 
        + discard()
            VD:
                s.discard(1) # cho dù trong set không có element = 1 những vẫn chạy được vì hàm discard không cần xác định xem trong set có tồn tại phần tử đó chưa
                print(s)
        + pop()
            VD:
                s.pop() # hàm pop là hàm xóa ngẫu nhiên phần tử trong set
                s = {1,2,3,4,5,6}
                s.pop()
                print(s) # {2, 3, 4, 5, 6}
                s.pop()
                print(s) # {3, 4, 5, 6}
                s.pop()
                print(s) # {4, 5, 6}
            + Lý giải cách hoạt động này rằng set trong python sẽ làm việc theo bằng băm và xử lý đụng động bằng hàm băng tuyến tính (linear probing) nên thông thường xóa phần tử ngẫu nhiên nhưng là phần tử có hash code đầu tiên trong array bucket nên mỗi lần xóa sẽ luôn xóa các bucket tiếp theo tính từ bucket trước đó và vị trí xóa đầu tiên luôn là bucket đầu trong hash table
        + clear()
            VD: s.clear() # hàm clear sẽ xóa toàn bộ phần tử trong set
                s = {1, 2, 3, 4}
                s.clear()
                print(s) # set()
            - còn nếu list rỗng sẽ là []
            - tuple rỗng sẽ là ()
            - set rỗng sẽ là set()
            
    - Duyệt set bằng for x và tìm kiếm bằng toán tử in và hàm len()
        + duyệt set bằng for x:
            VD:
                for x in s:
                print(x, end = ' ')
                
        + tìm kiếm phần tử trong set bằng toán tử 'in' độ phức tạp O(1) vì cài đặt bằng bảng băm
            vd:
                s = {1,3,4,5,6,7,8}
                if 3 in s:
                    print('\nfound')
                else:
                    print('\nnot found')
                # in ra found
        + hàm len trong set: cú pháp: len(s) trả về số phần tử trong set
            vd:
                s = {1,3,4,5,6,7,8}
                print(len(s)) # 7
                
    - Các phép toán trên tập hợp trong set
        + Hàm union() hoặc phép toán '|': tìm ra tập hợp các phần tử xuất hiện ở cả 1 trong 2 tập hợp (lấy hết các phần tử trong 2 tập hợp và trả về set)
        Vd:
            s = {"28tech", "abc", "python"}
            t = {"28tech", "amazon", "python"}
            u = s.union(t)
            v = s | t
            print(s) # {'python', '28tech', 'abc'}
            print(t) # {'amazon', 'python', '28tech'}
            print(u) # {'amazon', 'abc', 'python', '28tech'}
            print(v) # {'amazon', 'abc', 'python', '28tech'}
            
        + Hàm intersecction() hoặc là phép toán &: tìm ra tập hợp các phần tử giao ở 2 tập hợp (tìm ra phần tử chung của 2 tập hợp)
            VD:
                s = {"28tech", "abc", "python"}
                t = {"28tech", "amazon", "python"}
                u = s.intersection(t)
                v = s & t
                print(s) # {'abc', 'python', '28tech'}
                print(t) # {'abc', 'python', '28tech'}
                print(u) # {'python', '28tech'}
                print(v) # {'python', '28tech'}
        + Hàm difference() hoặc toán tử - là lấy phần tử thuộc tập hợp A chứ không thuộc tập hợp B (nghĩa là chỉ lấy phần tử của A mà không xuất hiện trong B)
            VD:
                s = {"28tech", "abc", "python"}
                t = {"28tech", "amazon", "python"}
                u = s.intersection(t)
                v = s & t
                print(s) # {'abc', 'python', '28tech'}
                print(t) # {'abc', 'python', '28tech'}
                print(u) # {'abc'}
                print(v) # {'abc'}
                
        + Hàm symmetric_difference() hoặc toán tử ^ (hội): lấy ra các phần tử thuộc 1 trong 2 tập hợp nhưng bỏ đi các phần tử thuộc cả 2 tập hợp (nghĩa là lấy ra các phần tử chỉ không cùng lúc thuộc 2 tâp hợp)
            VD:
                s = {"28tech", "abc", "python"}
                t = {"28tech", "amazon", "python"}
                u = s.symmetric_difference(t)
                v = s ^ t
                print(s) # {'abc', 'python', '28tech'}
                print(t) # {'python', 'amazon', '28tech'}
                print(u) # {'abc', 'amazon'}
                print(v) # {'abc', 'amazon'}
                
        + Hàm isdisjoint(): xác định xem 2 tập có phần tử chung nào không:
            + Nếu có ít nhất 1 phần tử chung => return False
            + Nếu không có phần tử chung nào => return True

            VD:
                s = {"28tech", "abc", "python"}
                t = {"28tech", "amazon", "python"}
                u = {"BKA", "UET", "HCMUS"}
                print(s.isdisjoint(t)) # return False
                print(s.isdisjoint(u)) # return True
        
        + Hàm issubset(): kiểm tra xem tập này có phải tập con của tập khác không:
            _ nghĩa là tập hợp gọi hàm này đang kiểm tra xem mình có phải tập con của hàm làm đối số cho hàm issubset(đối số) hay không
            _ Hàm này trả về True kho trong tập cha có tất cả các phần tử của tập hợp con
            _ hàm này trả về False nếu có ít nhất 1 phần tử không thuộc tập cha
            
            _ VD:
                s = {"28tech", "abc", "python"}
                t = {"28tech", "python"}
                u = {"BKA", "UET", "28tech"}
                print(t.issubset(s)) # True
                print(u.issubset(s)) # False
                
        + Hàm issuperset(): Kiểm tra xem tập này có phải tập cha của tập khác không:
            _ nghĩa là tập gọi tập hợp này kiểm tra xem tập đối số của hàm issuperset(đối số) có nằm tất cả trong hàm mình đang gọi hay không
            _
            VD:
                s = {"28tech", "abc", "python"}
                t = {"28tech", "python"}
                u = {"BKA", "UET", "28tech"}
                print(s.issuperset(t)) # True
                print(u.issuperset(t)) # False
        
    - CÁC LOẠI BÀI TẬP DÙNG SET:
        + bài tập liên quan đển giá trị khác nhau, tìm kiếm nhiều trong các truy vấn nhiều
            VD:
                
                
        + Đếm giá trị khác nhau trong mảng
            a = list(map(int, input().split()))
            s = set(a)
            print(len(s))
"""











