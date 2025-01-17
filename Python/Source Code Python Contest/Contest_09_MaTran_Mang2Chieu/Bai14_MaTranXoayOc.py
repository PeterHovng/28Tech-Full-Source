def spiral_matrix(n):
    res = [[0] * n for i in range(n)]
    ele = 1
    s_row, e_row, s_col, e_col = 0, n - 1, 0, n - 1

    while ele <= n * n:
        # xay dung dong tren cung
        for i in range(s_col, e_col + 1):
            res[s_row][i] = ele
            ele += 1
        s_row += 1

        # xay dung cot ben phai
        for i in range(s_row, e_row + 1):
            res[i][e_col] = ele
            ele += 1
        e_col -= 1

        # Xay dung dong duoi cung
        for i in range(e_col, s_col - 1, -1):
            res[e_row][i] = ele
            ele += 1
        e_row -= 1

        # Xay dung cot ben trai
        for i in range(e_row, s_row - 1, -1):
            res[i][s_col] = ele
            ele += 1
        s_col += 1

    return res


if __name__ == "__main__":
    n = int(input())
    spiral_matrix = spiral_matrix(n)
    for row in spiral_matrix:
        print(" ".join(map(str, row)))
