"""  
- Ma trận (mảng 2 chiều trong python):
    + thường dùng nested list để xử lý
    + mỗi list con dùng để lưu 1 dòng trong mảng 2 chiều
    + Tạo mảng 2 chiều
    
    # Cách 1: Nhập từ bàn phím
        n, m = map(int, input().split())
        a = []
        for i in range(n):
            # mỗi dòng là 1 list
            nested_lst = list(map(int, input().split()))
            # thêm 1 dòng vào ma trận
            a.append(nested_lst) # [[1, 2, 3], [4, 5, 6]]
        print(a)
        
    # Cách 2: dùng list comprehesion tạo ma trận mặc định toàn không
        n, m = map(int, input().split())
        # Tạo ra ma trận có n dòng và m cột toàn 0 bằng list comprehension
        a = [[0 for j in range(m)] for i in range(n)]
        print(a) # [[0, 0], [0, 0], [0, 0]]
    # Cách 3: tạo ma trận bằng list comprehension để tạo ra ma trận từ 1-> n
        # Tạo ma trận 3x3 với các giá trị từ 1 đến 9
        matrix = [[j + i*3 + 1 for j in range(3)] for i in range(3)]
        print(matrix)
        # Kết quả: [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

        
    + Duyệt ma trận
        for i in range(n):
        # a[i] => dòng thứ i và mỗi phần tử a[i] là các cột j
        for j in range(m):
            print(a[i][j], end = ' ')
        print()
    
    + truy cập vào mảng 2 chiều thông qua chỉ số bắt đầu từ 0
    
    + Các bài toán trên mảng 2 chiều:
        a. Tìm phần tử lớn nhất, phần tử nhỏ nhất trong ma trận
            a = [[1,2,3,4], [23, 56, 12, 3], [2, 1, 0, -2], [-32, 1, 3, 5]]
            min_val, max_val = 10**18, -10**18
            # duyệt qua mỗi hàng và trong mỗi hàng tìm ra trong mỗi cột phần tử nhỏ nhất và bé nhất
            # Cách 1: dùng for each không cần chỉ số và n chỉ cần matrix là được
            for rows in a:
                min_val = min(min_val, min(rows))    
                max_val = max(max_val, max(rows))    
            print(min_val, max_val)
            
            print()
            
                # Cách 2: dùng chỉ số phải có số hàng, số cột, matrix
            n, m = 4, 4
            min_val, max_val = 10**18, -10**18
            a = [[1,2,3,4], [23, 56, 12, 3], [2, 1, 0, -2], [-32, 1, 3, 5]]
            for i in range(n):
                for j in range(m):
                    min_val = min(min_val, a[i][j])
                    max_val = max(max_val, a[i][j])
            print(min_val, max_val)
            
        b. flatten (trải đều) mảng 2 chiều thành mảng 1 chiều
            - dùng list comprehension
                a = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
                flat_list = [x for small_list in a for x in small_list]
                # các bước thực hiện:
                    # B1: for small_list in a - lấy từng list con trong a
                    # B2: for x in small_list - lấy ra từng phần tử trong list con và tạo ra phần tử trong list mới
                    
                Cách khác dễ hiểu hơn:
                list_converted = [a[row][col] for row in range(len(a)) for col in range(len(a))]
        
        b.c/ combine columns with zip() and *:  zip(*matrix)
            VD:
                col_merge = [x for x in zip(*matrix)]
            
        c. tính tổng từng hàng của ma trận
            mat = [[1, 2, 3], [4, 2, 4], [5, 6, 7]]
            # Cach1: dùng cách thông thường duyệt qua chỉ số
            for i in range(len(mat)):
                print(f'Tong tren hang {i} =', sum(mat[i]))
    
                # output:
                # Tong tren hang 0 = 6
                # Tong tren hang 1 = 10
                # Tong tren hang 2 = 18
                
            # Cách 2: dùng list comprehension
            sum_row = [sum(row) for row in mat]
            for i in range(len(sum_row)):
                print(f'Tong tren hang {i} =', sum_row[i])
                
                # output:
                # Tong tren hang 0 = 6
                # Tong tren hang 1 = 10
                # Tong tren hang 2 = 18
                
        
        d/ tính tổng cột của ma trận:
            # Cách 1: dùng chỉ số ưu tiên duyệt cột trước và duyệt hàng sau
            mat = [ [1, 2, 3], 
                    [4, 2, 4], 
                    [5, 6, 7]]
            # tính ra tổng cột
            for j in range(3):
                sum_col = 0
                for i in range(3):
                    sum_col += mat[i][j]
                print(f'Tong cua cot {j} =', sum_col)
            
            # output:
            # Tong cua cot 0 = 10
            # Tong cua cot 1 = 10
            # Tong cua cot 2 = 14
            
        
        e/ Tạo ma trận chuyển vị
            mat = [[1, 2, 3], [4, 2, 4], [5, 6, 7]]
            mat_t = [
                [row[i] for row in mat] for i in range(len(mat[0]))
            ]  # len(mat[0]) : là đang đếm số cột

            for row in mat_t:
                print(row)
            # output:
            # [1, 4, 5]
            # [2, 2, 6]
            # [3, 4, 7]

            # Cách hoạt động:
            # B1: for i in range(len(mat[0])) - là duyệt vòng for ngoài
            # vì sao là range(len(mat[0])) thay vì range(len(mat))
            # vì trường hợp ma trận không vuông Đảm bảo lặp qua tất cả các cột, số lượng cột có thể khác với số lượng hàng
            # B2: [row[i] for row in mat]
            # duyệt qua từng hàng trong ma trận và lấy từng row[i]
            # ví dụ

            # Chạy từng bước:
            # Khi i = 0:
            # row[i] với i = 0:
            # row = [1, 2, 3] => row[0] = 1
            # row = [4, 2, 4] => row[0] = 4
            # row = [5, 6, 7] => row[0] = 5
            # Kết quả: [1, 4, 5]

            # Khi i = 1:
            # row[i] với i = 1:
            # row = [1, 2, 3] => row[1] = 2
            # row = [4, 2, 4] => row[1] = 2
            # row = [5, 6, 7] => row[1] = 6
            # Kết quả: [2, 2, 6]

            # Khi i = 2:
            # row[i] với i = 2:
            # row = [1, 2, 3] => row[2] = 3
            # row = [4, 2, 4] => row[2] = 4
            # row = [5, 6, 7] => row[2] = 7
            # Kết quả: [3, 4, 7]

            # mat_t = [[1, 4, 5], [2, 2, 6], [3, 4, 7]]
"""

