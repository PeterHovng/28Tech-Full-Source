""" 
    - Dùng kĩ thuật loang theo đường đi của quân mã
"""


def enter_matrix(rows):
    matrix = []
    for row in range(rows):
        col = list(map(int, input().split()))
        matrix.append(col)
    return matrix


adj_path = [[-2, -1], [-2, 1], [-1, -2], [-1, 2], [1, -2], [1, 2], [2, -1], [2, 1]]


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
    rows = int(input())
    s, t, u, v = map(int, input().split())
    s, t, u, v = s - 1, t - 1, u - 1, v - 1
    matrix = enter_matrix(rows)
    # Thực hiện thuật toán flood fill từ ô (s, t)
    flood_fill(matrix, s, t, rows, rows)

    # Kiểm tra nếu ô (u, v) đã được đánh dấu
    if matrix[u][v] == 0:
        print("YES")
    else:
        print("NO")
