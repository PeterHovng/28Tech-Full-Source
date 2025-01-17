if __name__ == "__main__":
    n, m = map(int, input().split())
    matrix = []
    for i in range(n):
        col = list(map(int, input().split()))
        matrix.append(col)

    for row in matrix:
        sum_row = 0
        sum_row = sum(row)
        print(sum_row, end=" ")

    print()

    for j in range(m):
        sum_col = 0
        for i in range(n):
            sum_col += matrix[i][j]
        print(sum_col, end=" ")
