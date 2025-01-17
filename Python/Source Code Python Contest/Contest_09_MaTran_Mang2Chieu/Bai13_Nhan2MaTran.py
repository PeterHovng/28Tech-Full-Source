def multi_two_matrix(a, b, n, m, p):
    res = [[0] * p for i in range(n)]

    for i in range(n):
        for j in range(p):
            for k in range(m):
                res[i][j] += a[i][k] * b[k][j]

    return res


if __name__ == "__main__":
    n, m, p = map(int, input().split())
    
    # Cach 1: nhap 2 ma tran theo cach thong thuong
    matrix_A = []
    matrix_B = []
    
    for i in range(n):
        col_A = list(map(int, input().split()))
        matrix_A.append(col_A)

    for i in range(m):
        col_B = list(map(int, input().split()))
        matrix_B.append(col_B)
        
    # Cach 2: nhap 2 ma tran ngan gon => de hieu hon
    a = [0] * n
    b = [0] * m
    
    for i in range(n):
        a[i] = list(map(int, input().split()))
        
    for i in range(n):
        b[i] = list(map(int, input().split()))
        
    # thuc hien nhan 2 ma tran
    
    multi_matrix = multi_two_matrix(matrix_A, matrix_B, n, m, p)

    for row in multi_matrix:
        print(" ".join(map(str, row)))
