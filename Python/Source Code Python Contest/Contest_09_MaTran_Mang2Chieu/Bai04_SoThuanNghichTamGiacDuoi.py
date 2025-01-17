def is_reversed_num(n):
    rev, tmp = 0, n
    while tmp > 0:
        rev = rev * 10 + tmp % 10
        tmp //= 10
    return rev == n


if __name__ == "__main__":
    n = int(input())
    matrix = []
    for i in range(n):
        col = list(map(int, input().split()))
        matrix.append(col)
    count_rev_num = 0
    for i in range(n):
        for j in range(i + 1):
            if is_reversed_num(matrix[i][j]):
                count_rev_num += 1
    print(count_rev_num)
