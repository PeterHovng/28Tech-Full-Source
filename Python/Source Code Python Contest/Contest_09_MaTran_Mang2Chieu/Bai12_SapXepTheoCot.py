if __name__ == "__main__":
    n = int(input())
    matrix = []
    for row in range(n):
        col = list(map(int, input().split()))
        matrix.append(col)

    # Hướng giải: tạo ma trận chuyển vị => sort ma trận vị theo hàng => in ra theo cột ma trận chuyển vị

    matrix_T = []

    # Cách 1: tạo ma trận chuyển vị thông thường
    for i in range(n):
        for j in range(i):
            matrix_T[i][j], matrix_T[j][i] = matrix_T[j][i], matrix_T[i][j]

    # sort theo cột sau khi chuyển sang hàng:
    for row in matrix_T:
        row.sort()

    # In theo cột của ma trận chuyển vị
    for i in range(n):
        for j in range(n):
            print(matrix_T[j][i], end=" ")
        print()

    # Cách 2: combine columns with zip function and * operator => zip(*matrix)
    # => tạo ra ma trận chuyển vị bằng hàm zip (*matrix) => list comprehension
    # lưu ý: mỗi hàng sau khi chuyển vị sẽ được lưu mặc định bởi hàm zip => tuple
    matrix_T = [list(row) for row in zip(*matrix)]

    # sort theo cột sau khi chuyển sang hàng:
    for row in matrix_T:
        row.sort()

    # chuyển vị lại ma trận bằng hàm zip(*matrix_T) và in ra lại theo cách bình thường bằng hàm join cho string
    matrix_T = [list(row) for row in zip(*matrix_T)]
    for row in matrix_T:
        print(" ".join(map(str, row)))
