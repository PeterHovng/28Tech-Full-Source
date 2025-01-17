path = [
    [-1, -1], [-1, 0], [-1, 1],
    [0, -1], [0, 1],
    [1, -1], [1, 0], [1, 1]
]

def flood_fill(a, i, j, n, m):
    a[i][j] = 0
    # duyet nhung dinh lien ke (8 o lien ke)
    for x, y in path:
        i1 = i + x
        j1 = j + y
        if i1 >= 0 and i1 < n and j1 >= 0 and j1 < m and a[i1][j1] == 1:
            flood_fill(a, i1, j1, n, m)

def count_island(mat, n, m):
    cnt = 0
    for i in range(n):
        for j in range(m):
            if mat[i][j] == 1:
                cnt += 1
                flood_fill(mat, i, j, n, m)
    return cnt

if __name__ == '__main__':
    n, m = map(int, input().split())
    matrix = []
    for row in range(n):
        col = list(map(int, input().split()))
        matrix.append(col)
    
    count_island = count_island(matrix, n, m)
    print(count_island)