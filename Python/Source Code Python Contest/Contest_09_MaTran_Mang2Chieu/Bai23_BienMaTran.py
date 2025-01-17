def convert_to_boundary_matrix(a, n):
    boundary_path = []
    for i in range(n):
        for j in range(n):
            if i == 0 or i == n - 1 or j == 0 or j == n - 1:
                boundary_path.append(a[i][j])
    return boundary_path


if __name__ == "__main__":
    n = int(input())
    matrix = []

    for row in range(n):
        col = list(map(int, input().split()))
        matrix.append(col)

    boundary_path = convert_to_boundary_matrix(matrix, n)
    print(" ".join(map(str, boundary_path)))
