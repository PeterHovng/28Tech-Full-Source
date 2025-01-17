def check_max_pos(a, i, j, rows, cols):
    adj_path = [[-1, -1], [-1, 0], [-1, 1], [0, -1], [0, 1], [1, -1], [1, 0], [1, 1]]
    for x, y in adj_path:
        i1 = i + x
        j1 = j + y
        if i1 >= 0 and i1 < rows and j1 >= 0 and j1 < cols:
            if a[i1][j1] >= a[i][j]:
                return False
    return True


def count_maximum_point(matrix, rows, cols):
    cnt = 0

    for row in range(rows):
        for col in range(cols):
            if check_max_pos(matrix, row, col, rows, cols):
                cnt += 1
    return cnt


if __name__ == "__main__":
    n, m = map(int, input().split())
    matrix = []
    for row in range(n):
        col = list(map(int, input().split()))
        matrix.append(col)

    count_max_point = count_maximum_point(matrix, n, m)
    print(count_max_point)
