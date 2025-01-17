def fibo_spiral_matrix(n):
    Fibo = [0] * 100
    Fibo[0] = 0
    Fibo[1] = 1
    for i in range(2, 100):
        Fibo[i] = Fibo[i - 2] + Fibo[i - 1]

    res = [[0] * n for i in range(n)]
    idx = 0
    s_row, e_row, s_col, e_col = 0, n - 1, 0, n - 1

    while idx < n * n:
        # xay dung dong tren cung
        for i in range(s_col, e_col + 1):
            res[s_col][i] = Fibo[idx]
            idx += 1
        s_row += 1

        # xay dung cot ben phai
        for i in range(s_row, e_row + 1):
            res[i][e_col] = Fibo[idx]
            idx += 1
        e_col -= 1

        # Xay dung dong duoi cung
        for i in range(e_col, s_col - 1, -1):
            res[e_row][i] = Fibo[idx]
            idx += 1
        e_row -= 1

        # Xay dung cot ben trai
        for i in range(e_row, s_row - 1, -1):
            res[i][s_col] = Fibo[idx]
            idx += 1
        s_col += 1

    return res


if __name__ == "__main__":
    n = int(input())
    fibo_spiral_matrix = fibo_spiral_matrix(n)
    for row in fibo_spiral_matrix:
        print(" ".join(map(str, row)))
