'''
    Phạm vi của biến: (scope of varible)
    - trong python có 3 phạm vị:
    1/ Local scope
        - chỉ được hiểu trong phạm vị của 1 hàm và khi thoát khỏi 1 hàm thì bộ nhớ của biến trong hàm sẽ được thu hồi
        
        
    2/ Global scope
        - được khai bảo bên ngoài tất cả các hàm và được hiểu bên trong các hàm
        - để định nghĩa lại 1 biến local trong hàm theo biến global thì dùng từ khóa global <ten bien> trước biến đó

        - để định nghĩa 1 biến trong hàm là global ta thêm từ khóa global trước biến đó
        - LƯU ý: không được gán bất kì giá trị nào cho biến trước khi khai bái global
        ví dụ:
        
        x = 1000

    def print_num():
        x = 100 # ở đây vì ta gán x = 100 thì chương trình hiểu đây là biến cục bộ
        print(x)
        global x # when you declared tu key global for variable => now x is global and it is not local now 
        => điều này dẫn dễ không thể gán cho x hiểu rằng đây biến toàn cục trong chương trình được
        x = 500 # local
        print(x)
        
    if __name__ == '__main__':
        print(x)
        print_num()
        print(x) # global

    3/ Enclosing scope
        - Khi tronhg 1 hàm có hàm khác 
        - Sử dụng keyword nonlocal để tránh python tạo ra 1 biến khác cùng tên trong hàm inner
        VD:
        
        ## Đây là ví dụ khi không có keyword nonlocal thì OS sẽ tự tạo ra 1 biến khác cùng tên
        def outter():
        x = 100
        def inner():
            x = 101
            print(x)
        inner() # x = 101
        print(x) # x = 100

        if __name__ == '__main__':
            outter()

        ## Đây là khi dùng keyword nonlocal thì biến x sẽ cùng 1 biến duy nhất nên x sẽ bị thay đổi theo 
        
        def outter():
        x = 100
        def inner():
            nonlocal x
            x = 101
            print(x)
        inner() # x = 101
        print(x) # x = 101

        if __name__ == '__main__':
            outter()
        
        ## trường hợp x thuộc trong 1 if - else, for, while thì sau khi các khối lệnh đó kết thúc thì x ở bên ngoài vẫn sử dụng biến x trong khối trên một các bình thường
        
    ==> LEGB RULE: local < enclosing < global < built
'''

def outter():
    x = 100
    def inner():
        nonlocal x
        x = 101
        print(x)
    inner() # x = 101
    print(x) # x = 100

if __name__ == '__main__':
    outter()