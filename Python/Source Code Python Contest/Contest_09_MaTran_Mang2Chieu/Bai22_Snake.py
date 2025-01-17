def convert_to_snake_matrix(a, n):
    # Cách 1: dùng list đảo ngược bình thường
    for i in range(n):
        if i % 2 != 0:
            a[i] = a[i][::-1]
    return a

    # Cách 2: dùng ham reversed
    # for i in range(n):
    #     if i % 2 != 0:
    #         a[i] = list(reversed(a[i]))
    # return a
    

if __name__ == '__main__':
    n = int(input())
    matrix = []
    
    for row in range(n):
        col = list(map(int, input().split()))
        matrix.append(col)
        
    snake_matrix = convert_to_snake_matrix(matrix, n)
    
    for row in snake_matrix:
        print(' '.join(map(str, row)))
        