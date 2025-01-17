""" 
    1. Cộng trừ 2 hai trận
        - điều kiện là 2 ma trận cùng kích thước n x m 
        - nghĩa là cùng số cột và cùng số hàng
        - Cộng 2 ma trận:
            n, m = 3, 3
            a = [[1,2,3], [4,5,6], [7,8,9]]
            b = [[7,8,9], [4,5,6], [1,2,3]]
            # xài list comprehension để tạo ra ma trận nền 3x3 các phần tử là 0
            c = [[0 for _ in range(m)] for _ in range(n)]
            
            for i in range(n):
                for j in range(m):
                    c[i][j] = a[i][j] + b[i][j]
            print(c) # [[8, 10, 12], [8, 10, 12], [8, 10, 12]]
            
        - trừ hai ma trận:
            n, m = 3, 3
            a = [[1,2,3], [4,5,6], [7,8,9]]
            b = [[7,8,9], [4,5,6], [1,2,3]]
            # xài list comprehension để tạo ra ma trận nền 3x3 các phần tử là 0
            c = [[0 for _ in range(m)] for _ in range(n)]
            
            for i in range(n):
                for j in range(m):
                    c[i][j] = a[i][j] - b[i][j]
            print(c) # [[-6, -6, -6], [0, 0, 0], [6, 6, 6]]
        
    2. Nhân 2 ma trận:
        - ma trận a cỡ n x m, ma trận b cỡ p x q
        - để 2 ma trận nhân nhau => số cột của ma trận a phải bằng số hàng ở ma trận b 
            => nghĩa là m = p
            c[n][q] = a[n][m] x b[p][q]
        - khi m = p -> ma trận tích a và b sẽ là ma trận c cỡ n x q
        - phần tử ở chỉ số (i,j) của ma trận c sẽ tính bằng nhân từng cặp phần tử ở hàng i ma trận a và phần tử cột j ở ma trận b
        VD:
            n, m, p = map(int, input().split())
            # nhập 2 ma trận a[n][m] và b[m][p]
            
            # phải khởi tạo trước ma trận a gồm n phần tử [0] và ma trận b gồm m phần tử [0]
            a, b = [0] * n, [0] * m
            
            # mỗi hàng i sẽ nhập các phần tử ở cột j
            for i in range(n):
                a[i] = list(map(int, input().split()))
            for i in range(m):
                b[i] = list(map(int, input().split()))
                
            # tạo mảng c các phần từ 0 cỡ c[n][p]
            c = [[0 for _ in range(n)] for _ in range(p)]
            
            # bắt đầu nhân 2 ma trận c[i][j] += a[i][k] * b[k][j]
            for i in range(n):
                for j in range(p):
                    for k in range(m):
                        c[i][j] += a[i][k] * b[k][j]
            print('Ma tran C:')          
            for i in range(n):
                for j in range(p):
                    print(c[i][j], end = ' ')
                print()
    
    2. Kỹ thuật duyệt các ô liền kề
    - việc thêm bớt các khoảng cách [-1,0,1] là sẽ tới được vị trí mong muốn
        adj_path = [
            [-1,-1], [-1,0], [-1,1],
            [0,-1] ,          [0,1],
            [1,-1] , [1,0],  [1,1]
        ]
        # duyệt 8 ô chung đỉnh với ô(i,j)
        for x in adj_path:
            i1, j1 = i + x[0], j + x[1]
            print(a[i1][j1], end = ' ') 
        # output: # 1 2 3 4 5 6 7 8 9
            
        Cách 2: khi biết rõ vị trí và muốn dùng cả vị trí để xét
            path = [
                [i-1,j-1] ,[i-1,j],  [i-1,j+1],
                [i,j-1]   ,[i,j],    [i,j+1],
                [i+1,j-1] ,[i+1,j],  [i+1,j+1]
            ]
            # duyệt 8 ô chung đỉnh với ô(i,j)
            for x in path:
                i1, j1 = x[0], x[1]
                print(a[i1][j1], end = ' ')
        # output: # 1 2 3 4 5 6 7 8 9
"""

if __name__ == '__main__':
    a = [
        [1,2,3],
        [4,5,6],
        [7,8,9]
    ]
    i, j = 1,1
    # đây là vị trí các ô kề với ô(i,j)
    path = [
        [i-1,j-1] ,[i-1,j],  [i-1,j+1],
        [i,j-1]   ,[i,j],    [i,j+1],
        [i+1,j-1] ,[i+1,j],  [i+1,j+1]
    ]
    adj_path = [
        [-1,-1], [-1,0], [-1,1],
        [0,-1] ,          [0,1],
        [1,-1] , [1,0],  [1,1]
    ]
    # duyệt 8 ô chung đỉnh với ô(i,j)
    for x in path:
        i1, j1 = x[0], x[1]
        print(a[i1][j1], end = ' ')