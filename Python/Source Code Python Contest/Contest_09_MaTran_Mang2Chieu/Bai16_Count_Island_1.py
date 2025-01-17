# Định nghĩa các hướng di chuyển (hình dấu cộng)
path = [[-1, 0], [0, -1], [0, 1], [1, 0]]

# Kỹ thuật loang (flood fill hoặc DFS)
def loang(a, i, j, n, m):
    # Đánh dấu ô (i, j) thành 0 => kỹ thuật đệ quy
    a[i][j] = 0  # Đã duyệt qua

    # Duyệt các ô liền kề
    for x, y in path:
        i1 = i + x
        j1 = j + y
        if i1 >= 0 and i1 < n and j1 >= 0 and j1 < m and a[i1][j1] == 1:
            loang(a, i1, j1, n, m)

def count_islands(a, n, m):
    count_island = 0
    
    for i in range(n):
        for j in range(m):
            if a[i][j] == 1: # Sẽ là 1 miền island
                count_island += 1
                loang(a, i, j, n, m) # Mỗi lần đếm xong 1 miền => loang để đánh dấu tất cả các ô chung miền thành 0

    return count_island

if __name__ == "__main__":
    n, m = map(int, input().split())
    a = []
    for row in range(n):
        col = list(map(int, input().split()))
        a.append(col)
    
    print(count_islands(a, n, m))



"""  # Cach trinh bay ngan gon
n, m = 0, 0
a = []

# duyet cac o lien ke (hinh dau cong) gom 4 huong: tren, duoi, trai, phai
path = [[-1, 0], [0, -1], [0, 1], [1, 0]] 


# Ky thuat loang (flood fill hoac DFS)
def loang(i, j):
    # ki thuat loang -> danh dau o (i, j) thanh 0 => ki thuat de quy
    a[i][j] = 0  # da duyet qua

    # duyet cac o lien ke
    for x, y in path:
        i1 = i + x
        j1 = j + y
        if i1 >= 0 and i1 < n and j1 >= 0 and j1 < m and a[i1][j1] == 1:
            loang(i1, j1)


if __name__ == "__main__":
    n, m = map(int, input().split())
    for row in range(n):
        col = list(map(int, input().split()))
        a.append(col)
    count_island = 0
    
    for i in range(n):
        for j in range(m):
            if a[i][j] == 1: # se la 1 mien island
                count_island += 1
                loang(i, j) # moi lan dem xong 1 mien => loang de danh dau tat cac cac o chung mien thanh 0
                
    print(count_island)
    
    
"""