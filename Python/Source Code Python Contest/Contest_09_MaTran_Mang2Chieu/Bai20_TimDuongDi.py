def enter_matrix(rows):
    matrix = []
    for row in range(rows):
        col = list(
            map(int, input().split())
        )  # Nhập một dòng dữ liệu và chuyển thành danh sách các số nguyên
        matrix.append(col)  # Thêm dòng vào ma trận
    return matrix


adj_path = [[-1, 0], [0, -1], [1, 0], [0, 1]]


def flood_fill(a, i, j, rows, cols):
    # Định nghĩa các bước di chuyển (trên, dưới, trái, phải)
    a[i][j] = 0  # Đánh dấu ô hiện tại là đã được kiểm tra
    for x, y in adj_path:
        ith = i + x
        jth = j + y
        # Kiểm tra xem các chỉ số mới có nằm trong phạm vi ma trận và ô đó có giá trị là 1 không
        if ith >= 0 and ith < rows and jth >= 0 and jth < cols and a[ith][jth] == 1:
            flood_fill(a, ith, jth, rows, cols)


if __name__ == "__main__":
    # Nhập số hàng và số cột của ma trận
    rows, cols = map(int, input().split())

    # Nhập các tọa độ (s, t) và (u, v)
    s, t, u, v = map(int, input().split())
    s, t, u, v = (
        s - 1,
        t - 1,
        u - 1,
        v - 1,
    )  # Chuyển đổi từ chỉ số bắt đầu từ 1 sang chỉ số bắt đầu từ 0

    # Nhập ma trận từ người dùng
    matrix = enter_matrix(rows)

    # Thực hiện thuật toán flood fill từ ô (s, t)
    flood_fill(matrix, s, t, rows, cols)

    # Kiểm tra nếu ô (u, v) đã được đánh dấu
    if matrix[u][v] == 0:
        print("YES")
    else:
        print("NO")
