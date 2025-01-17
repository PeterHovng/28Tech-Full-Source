def converted_transpose_matrix(matrix):
    rows = cols = len(matrix)
    for row in range(rows):
        for col in range(row):
            matrix[row][col], matrix[col][row] = matrix[col][row], matrix[row][col]
    return matrix


def rotate_matrix_90_cloclwise(matrix):
    rows = len(matrix)
    cols = len(matrix[0])

    # create the result matrix full [0] with row and col are exchange
    rotated_matrix = [[0] * rows for row in range(cols)]

    # rotated matrix
    for row in range(rows):
        for col in range(cols):
            rotated_matrix[col][rows - 1 - row] = matrix[row][col]
    return rotated_matrix


def rotate_matrix_180_deg(matrix):
    # reverse the row in matrix
    reversed_matrix = matrix[::-1]

    # reverse the element of each row in matrix
    rotated_matrix = [row[::-1] for row in reversed_matrix]
    return rotated_matrix


if __name__ == "__main__":
    n = int(input())
    matrix = []
    for row in range(n):
        col = list(map(int, input().split()))
        matrix.append(col)

    origin_matrix = [row[:] for row in matrix]
    matrix_t = converted_transpose_matrix(origin_matrix)

    print("Pattern 1:")
    for row in matrix_t:
        print(" ".join(map(str, row)))

    origin_matrix = [row[:] for row in matrix]

    # rotate the matrix 180 degree has two solution: first is rotated the matrix 90 degree twice,
    """ 
    rotated_matrix = rotate_matrix_90_cloclwise(origin_matrix)
    rotated_matrix = rotate_matrix_90_cloclwise(rotated_matrix)
    """

    # rotate the matrix 180 degree has two solution: second is rotate is 180 dirctedly
    rotated_matrix = rotate_matrix_180_deg(origin_matrix)

    print("Pattern 2:")
    for row in rotated_matrix:
        print(" ".join(map(str, row)))

    rotated_matrix = rotate_matrix_90_cloclwise(rotated_matrix)

    print("Pattern 3:")
    for row in rotated_matrix:
        print(" ".join(map(str, row)))

    matrix_t = converted_transpose_matrix(rotated_matrix)

    print("Pattern 4:")
    for row in matrix_t:
        print(" ".join(map(str, row)))


""" 
    - Có thể dùng 2 for để in thay vì dùng hàm join chuyển sang str các hàng
"""
