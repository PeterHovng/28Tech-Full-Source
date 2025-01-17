# Hàm, *args và **kwargs trong Python

# Phần 1: Required Parameter  & Default Parameter:
"""  
    - Có 2 làm tham số (parameter):
        +  Default Parameter: tham số mặc định
        + Required Parameter: tham số bắt buộc
    
    VD:
        def print_name(name, greeting): # biến nam ở đây là: tham số (parameter) - tham số của hàm
        print(f'{name}, {greeting}')
        # name và greeting là 2 tham số băt buộc (required parameter)
        
        def print_name1(name, greeting = "hello word 2"): # biến nam ở đây là: tham số (parameter) - tham số của hàm
            print(f'{name}, {greeting}')
            # greeting ở đây là tham số mặc định

        def main():
            pass
            
            # Là một câu lệnh hợp lệ trong Python có nghĩa là không làm gì cả. Nó được sử dụng để biểu thị rằng hàm main chưa có nội dung, nhưng hàm vẫn được định nghĩa hợp lệ.
    
            # Sử dụng pass rất hữu ích khi bạn đang phát triển mã và muốn định nghĩa cấu trúc trước khi viết chi tiết nội dung. Nó giúp mã của bạn chạy mà không bị lỗi cú pháp do thiếu khối mã cần thiết.
            
            # function call: gọi hàm
            print_name("IT_Bui", "Hello word") # 'IT_Bui' ở đây là biến: đối số (argument)
            # nếu trong print_name function có 2 tham số bắt buộc => trong lời gọi hàm cũng phải có 2 đối số tương ứng
            
            print_name1("IT_Bui2")
            # nếu hàm print_name1 chỉ cung cấp 1 đối số thôi => name thì hàm vẫn chạy bth
            # nếu ban muốn cung cấp cho tham số mặc định => bạn ghi đề lên (override) tham số mặc định bắng các cung cúng đối số vào vị trí của tham số mặc định
            print_name1("IT_Bui3", "hello override")

        if __name__ == "__main__":
            main()
"""

# Phần 2: Các loại arguments
"""  
    - có 2 loại arguments:
        1. Position arguments: biến vị trí
            + cung cấp input theo vị trí => nếu thay đổi vị trí -> input sẽ khác
        2. Keyword arguments: biến từ khóa
            + gán trực tiếp biến bằng giá trị nào trong lời gọi hàm cho từng đối số -> cho dù đổi vị trí => vẫn ko sao             
            
        VD:
            def IT_bui(a, b, c):
        print(a, b, c)


        def main():
            # position arguments:
            IT_bui(1, 2, 3)
            # Keyword arguments:
            IT_bui(c=2, a="hello", b="IT")


        if __name__ == "__main__":
            main()
"""

# Phần 3: tham số với độ dài thay đổi (varible-length Parameter) = *args; **kwargs
"""  
    1. if you mark a parameter with one asterisk (*), you can pass any number of position argument to your function
        => (Typically called *args)
        - *args: là list
    VD:
        def varibleLengthArgExample(a,b, *args):
        print("Required arguments:", end = ' ')
        print(a, b)
        # vì *args: là tiếp nhận dưới dạng list => dùng for each để in ra
        print('List of *arg:', end = ' ')
        for arg in args:
            print(arg, end = ' ')
        def main():
        
        # *args:
        varibleLengthArgExample('a', 'b', 'Hello', 1,2,3,4) => 'a', 'b': required argument; 'Hello', 1,2,3,4: *args dưới dạng list
        
    2. If you mark a parameter with two asterisks (**), you can pass any number of keyword arguments to your function
        => typically called **kwargs (Keyarguments)
        - **kwargs: là dictionary
        VD:
           def varibleLengthArgExample(a,b, *args, **kwargs): # có thể đặt tên khác cho args hoặc là kwargs miễn là có đủ dấu (*) và (**) để nhận biết 
                print("Required arguments:", end = ' ')
                print(a, b)
                # vì *args: là tiếp nhận dưới dạng list => dùng for each để in ra
                print('List of *arg:', end = ' ')
                for arg in args:
                    print(arg, end = ' ')
                
                # vì **kwargs: là dict => dùng for loop như duyệt dict bình thường
                print("\n**kwargs is dictionary:")
                for key, value in kwargs.items():
                    print(key, value, sep = ' is ')
                
            def main():
                # *args:
                # varibleLengthArgExample('a', 'b', 'Hello', 1,2,3,4)
                
                # **kwargs:
                varibleLengthArgExample('a', 'b', 'Hello', 1, size="up size", age=19) # size="up size", age=19 are Keyword arguments
                
    => Consulution:
        - có *args hoặc là **kwargs hay không đều không có lỗi => funcion vẫn chạy bình thường
"""

