"""  
    1. lambda: hàm ẩn danh => lambda function = Annonymous Function\
        + lambda arguments: expression
        + A lambda function is a small (one line) annonymous function that is defined without a name
        Ex:
            # a lambda function that adds 69 to the input argument

            para_num = lambda num : num + 69
            print(para_num(1)) # 70

    - cách sử dụng lambda trong map, filter, reduct
        1. Custom sorting using a lambda function as ket parameter
            coordunate2D = [(6, 9), (9, 6), (-1, 3), (2, 10)]
            # sort this
            print(sorted(coordunate2D)) # orgin this will sort with the first key
            # output: [(-1, 3), (2, 10), (6, 9), (9, 6)]

            # sort with second key with lambda function
            print(sorted(coordunate2D, key=lambda point : point[1]))
            # output: [(-1, 3), (9, 6), (6, 9), (2, 10)]
        2. map(func, seq), transforms each element with the function
            - use lambda for map function and list comprehension
            EX:
                lst_keyword = ["name", "afd", "r32e"]
                print(lst_keyword)
                title_lst_keyword = list(map(lambda x : x.title(), lst_keyword))
                print(title_lst_keyword)

                # lambda use with list comprehension
                new_lst = [keyword.title() for keyword in lst_keyword]
                print(new_lst)

                # -> map and list comprehension is the same with lambda function
    
        3. filter (func, sep), return all element for which func evaluates to True.
        Ex:
            lst_number = [1,3,2,4,5,76,7]
            # lọc ra số lẻ => use filter
            odd_number = list(filter(lambda x : x % 2 != 0, lst_number))
            print(odd_number)

            # use list prehension as filter and lambda
            new_lst = [x for x in lst_number if x % 2 != 0]
            print(new_lst)
            
        4. use lambda for reduce function
        - reduce (func, seq), repeatedly applies the func to the elements and returns a single value
        - func take two arguments   
        - from funtools import reduce
            VD:
                from functools import reduce

                sequence = [1, 3, 4, 5, 8]
                # print(reduce(lambda a, b: a + b, sequence)) # 21: 1 + 3 = 4 + 4 = 8 + 5 = 13 + 8 = 21 => tổng các phần tử trong list

                # find maximum value in the list
                print(reduce(lambda a, b: a if a > b else b, sequence))
        
        
        - 1 số ứng dụng của hàm reduct
            1. Tính tổng hoặc tích của các phần tử:
            from functools import reduce

            numbers = [1, 2, 3, 4, 5]
            total = reduce(lambda a, b: a + b, numbers)
            product = reduce(lambda a, b: a * b, numbers)

            print(total)    # Output: 15
            print(product)  # Output: 120
            
            2. Ghép các chuỗi lại với nhau:
            words = ["Python", "is", "awesome"]
            sentence = reduce(lambda a, b: a + " " + b, words)
            print(sentence)  # Output: Python is awesome
            
            3. Tìm giá trị lớn nhất dựa trên một thuộc tính của đối tượng:
            from functools import reduce

            people = [{'name': 'Alice', 'age': 30}, {'name': 'Bob', 'age': 25}, {'name': 'Charlie', 'age': 35}]
            oldest = reduce(lambda a, b: a if a['age'] > b['age'] else b, people)
            print(oldest)  # Output: {'name': 'Charlie', 'age': 35}

        - độ phức tạp thời gian của hàm reduce trong Python phụ thuộc vào hàm được truyền vào reduce và kích thước của dữ liệu đầu vào.
            + Độ phức tạp tổng quát:
                - Nếu bạn sử dụng hàm reduce với một hàm không có độ phức tạp phụ thuộc vào kích thước của các tham số 
                (ví dụ: các phép tính toán cơ bản như cộng, trừ, so sánh), 
                thì độ phức tạp thời gian của reduce sẽ là O(n), với n là số lượng phần tử trong dãy số.
            VD:
                from functools import reduce
                sequence = [1, 2, 3, 4, 5]
                result = reduce(lambda a, b: a + b, sequence)  # Độ phức tạp là O(n)

            + Độ phức tạp của hàm bên trong
                - Nếu hàm được truyền vào reduce có độ phức tạp lớn hơn O(1) 
                (ví dụ: một hàm có độ phức tạp O(log n)), thì tổng độ phức tạp của reduce sẽ là O(n * T(f)), với T(f) là độ phức tạp của hàm được truyền vào.
            VD:
                from functools import reduce
                def complex_operation(a, b):
                    # Giả sử hàm này có độ phức tạp là O(log n)
                    return a + b  # Đây chỉ là ví dụ, thực tế hàm có thể phức tạp hơn

                sequence = [1, 2, 3, 4, 5]
                result = reduce(complex_operation, sequence)  # Độ phức tạp là O(n * log n)
                
            + Độ Phức Tạp Bộ Nhớ
                Hàm reduce không yêu cầu thêm bộ nhớ ngoài trừ bộ nhớ cần thiết để lưu trữ kết quả trung gian và đối số hiện tại, 
                vì vậy độ phức tạp bộ nhớ của reduce thường là O(1).

            + reduce: Độ phức tạp thời gian phụ thuộc vào hàm được truyền vào và kích thước của dữ liệu đầu vào. Nếu hàm được truyền vào có độ phức tạp là O(1), thì tổng độ phức tạp là O(n). Nếu hàm phức tạp hơn, tổng độ phức tạp sẽ là O(n * T(f)).
"""


