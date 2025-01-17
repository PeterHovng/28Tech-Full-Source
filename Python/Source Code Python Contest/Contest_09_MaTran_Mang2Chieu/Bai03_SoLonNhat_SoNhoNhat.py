def print_positions_equal_to_value(mat, row, col, val):
    for i in range(row):
        for j in range(col):
            if mat[i][j] == val:
                print(i + 1, j + 1)

if __name__ == '__main__':
    n, m = map(int, input().split())
    mat = []
    for i in range(n):
        col_ele = list(map(int, input().split()))
        mat.append(col_ele)
    min_val, max_val = 10**18, -10**18
    
    for row in mat:
        min_val = min(min_val, min(row))
        max_val = max(max_val, max(row))
    
    print(min_val)
    print_positions_equal_to_value(mat,n,m,min_val)
    print(max_val)
    print_positions_equal_to_value(mat,n,m,max_val)