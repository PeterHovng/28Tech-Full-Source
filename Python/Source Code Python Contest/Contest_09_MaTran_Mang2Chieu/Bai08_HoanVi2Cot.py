""" def swap_col(matrix, first_col, second_col):
    for row in range(len(matrix)):
        matrix[row][first_col], matrix[row][second_col] = (
            matrix[row][second_col],
            matrix[row][first_col],
        )


if __name__ == "__main__":
    n = int(input())
    matrix = []
    for row in range(n):
        cols = list(map(int, input().split()))
        matrix.append(cols)

    u, v = map(int, input().split())
    u -= 1
    v -= 1

    # swap two col of matrix
    swap_col(matrix, u, v)

    for row in matrix:
        print(" ".join(map(str, row))) """

# another way: use list comprehension
def swap_columns(matrix, first_col, second_col):
    # Swap the elements in the specified columns using list comprehension
    matrix = [[row[second_col] if i == first_col else row[first_col] if i == second_col else row[i] for i in range(len(row))] for row in matrix]
    return matrix

if __name__ == "__main__":
    # Read matrix size
    n = int(input())
    matrix = []

    # Read matrix rows
    for _ in range(n):
        row = list(map(int, input().split()))
        matrix.append(row)

    # Read column indices to swap
    u, v = map(int, input().split())
    u -= 1
    v -= 1

    # Swap the columns
    matrix = swap_columns(matrix, u, v)

    # Print the modified matrix
    for row in matrix:
        print(" ".join(map(str, row)))


