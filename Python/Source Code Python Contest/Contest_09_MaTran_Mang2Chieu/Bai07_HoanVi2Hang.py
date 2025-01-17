def swap_row(matrix, first_row, second_row):
    matrix[first_row], matrix[second_row] = matrix[second_row], matrix[first_row]


if __name__ == "__main__":
    n = int(input())
    matrix = []
    for row in range(n):
        cols = list(map(int, input().split()))
        matrix.append(cols)
    
    u, v = map(int, input().split())
    u -= 1
    v -= 1
    
    # swap row u and row v
    swap_row(matrix, u, v)
    
    for row in matrix:
        print(' '.join(map(str, row)))