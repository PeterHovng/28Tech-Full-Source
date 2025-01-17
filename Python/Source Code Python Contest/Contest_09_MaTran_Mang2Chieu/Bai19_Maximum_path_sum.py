def enter_matrix(rows):
    matrix = []
    for _ in range(rows):
        row = list(map(int, input().split()))
        matrix.append(row)
    return matrix

def maximun_path_sum(a, rows, cols):
    # Sự dụng phương pháp Dynamic-programming
    
    # Tạo ma trận F với kích thước tương tự như ma trận a, khởi tạo tất cả giá trị bằng 0
    F = [[0 for _ in range(cols)] for _ in range(rows)]

    for i in range(rows):
        for j in range(cols):
            if i == 0 and j == 0: # bài toán con nhỏ nhất
                F[0][0] = a[0][0]
            elif i == 0:
                F[i][j] = F[i][j - 1] + a[i][j]
            elif j == 0:
                F[i][j] = F[i - 1][j] + a[i][j]
            else:
                F[i][j] = max(F[i][j - 1], F[i - 1][j]) + a[i][j]
                
    return F[rows - 1][cols - 1]
    
if __name__ == '__main__':
    n, m = map(int, input().split())
    matrix = enter_matrix(n)    
    max_path_sum = maximun_path_sum(matrix, n, m)
    print(max_path_sum)
    