def swap_primary_and_secondary_diagonals(matrix):
    length = len(matrix)

    for i in range(length):
        matrix[i][i], matrix[i][length - i - 1] = (
            matrix[i][length - i - 1],
            matrix[i][i],
        )


if __name__ == "__main__":
    n = int(input())
    matrix = []
    for row in range(n):
        col = list(map(int, input().split()))
        matrix.append(col)

    swap_primary_and_secondary_diagonals(matrix)
    for row in matrix:
        print(" ".join(map(str, row)))

"""  
- Đây là cách cách để hoán đổi đường chéo chính và đường chéo phụ
    1. Sử Dụng Đường Chéo Chính và Phụ: O(n) thời gian, O(1) không gian.
        def swap_primary_and_secondary_diagonals(matrix):
        size = len(matrix)
        for i in range(size):
            matrix[i][i], matrix[i][size - i - 1] = mcatrix[i][size - i - 1], matrix[i][i]
        return matrix

    2. Sử Dụng Ma Trận Phụ: O(n^2) thời gian, O(n^2) không gian.
        def swap_diagonals_with_copy(matrix):
        size = len(matrix)
        copy = [row[:] for row in matrix]
        
        for i in range(size):
            matrix[i][i] = copy[i][size - i - 1]
            matrix[i][size - i - 1] = copy[i][i]
        
        return matrix

    3.Tạo Ma Trận Mới: O(n^2) thời gian, O(n^2) không gian.
        def swap_diagonals_new_matrix(matrix):
        size = len(matrix)
        new_matrix = [[0] * size for _ in range(size)]
        
        for i in range(size):
            for j in range(size):
                if i == j:
                    new_matrix[i][j] = matrix[i][size - j - 1]
                elif i == size - j - 1:
                    new_matrix[i][j] = matrix[j][size - i - 1]
                else:
                    new_matrix[i][j] = matrix[i][j]
        
        return new_matrix

    4. Hàm Đảo Ngược Đường Chéo: O(n) thời gian cho mỗi hàm, O(1) không gian.
        def reverse_primary_diagonal(matrix):
        size = len(matrix)
        for i in range(size // 2):
            matrix[i][i], matrix[size - i - 1][size - i - 1] = matrix[size - i - 1][size - i - 1], matrix[i][i]
        return matrix

        def reverse_secondary_diagonal(matrix):
            size = len(matrix)
            for i in range(size // 2):
                matrix[i][size - i - 1], matrix[size - i - 1][i] = matrix[size - i - 1][i], matrix[i][size - i - 1]
            return matrix

        def swap_diagonals(matrix):
            matrix = reverse_primary_diagonal(matrix)
            matrix = reverse_secondary_diagonal(matrix)
            return matrix

    5. Đối Tượng Ma Trận: O(n) thời gian, O(1) không gian ngoài đối tượng ma trận.
        class Matrix:
            def __init__(self, data):
                self.data = data
                self.size = len(data)
            
            def swap_diagonals(self):
                for i in range(self.size):
                    self.data[i][i], self.data[i][self.size - i - 1] = self.data[i][self.size - i - 1], self.data[i][i]
                return self.data

            def create_matrix(data):
                return Matrix(data)

"""
