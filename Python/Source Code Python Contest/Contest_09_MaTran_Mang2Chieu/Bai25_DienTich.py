"""  # Đây là lời giải của bài
def enter_matrix(a: list, rows):
    for row in range(rows):
        col = list(map(int, input().split()))
        a.append(col)


def flood_fill(a, i, j, rows, cols):
    path = [[-1, 0], [0, -1], [0, 1], [1, 0]]
    a[i][j] = 0
    count = 1
    for x, y in path:
        i1 = i + x
        j1 = j + y
        if i1 >= 0 and i1 < rows and j1 >= 0 and j1 < cols and a[i1][j1] == 1:
            count += flood_fill(a, i1, j1, rows, cols)
    return count


def count_same_islands(matrx, rows, cols):
    max_count = 0
    for row in range(rows):
        for col in range(cols):
            if matrix[row][col] == 1:
                count = flood_fill(matrix, row, col, rows, cols)
                max_count = max(max_count, count)
    return max_count


if __name__ == "__main__":
    n, m = map(int, input().split())
    matrix = []
    enter_matrix(matrix, n)

    result = count_same_islands(matrix, n, m)

    print(result)
"""


# Đây là giải thích cho sự cách thức hoạt động
def enter_matrix(a: list, rows):
    for _ in range(rows):
        col = list(map(int, input().split()))
        a.append(col)

def flood_fill(a, i, j, rows, cols, mark):
    path = [[-1, 0], [0, -1], [0, 1], [1, 0]]
    a[i][j] = mark
    count = 1
    for x, y in path:
        i1 = i + x
        j1 = j + y
        if i1 >= 0 and i1 < rows and j1 >= 0 and j1 < cols and a[i1][j1] == 1:
            count += flood_fill(a, i1, j1, rows, cols, mark)
    return count

def count_and_mark_islands(matrix, rows, cols):
    max_count = 0
    mark = 2  # Bắt đầu đánh dấu từ số 2 (số 1 đã được sử dụng)
    for row in range(rows):
        for col in range(cols):
            if matrix[row][col] == 1:
                count = flood_fill(matrix, row, col, rows, cols, mark)
                max_count = max(max_count, count)
                mark += 1  # Chuyển sang đánh dấu vùng tiếp theo
    return max_count

if __name__ == "__main__":
    n, m = map(int, input().split())
    matrix = []
    enter_matrix(matrix, n)

    result = count_and_mark_islands(matrix, n, m)
    print()
    # In ra ma trận đã biến đổi
    for row in matrix:
        print(' '.join(map(str, row)))

    print("Dien tich vung lon nhat:", result)
