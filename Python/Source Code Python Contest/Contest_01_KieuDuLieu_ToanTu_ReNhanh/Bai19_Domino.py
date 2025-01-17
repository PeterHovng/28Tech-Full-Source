'''
    - hcn kich thuong: m x n
    - domino kich thuoc: 2 x 1
    - co the xoay domino
    - tim so thanh domino co the dat vao hcn can thiet:
    - dieu kien dat:
    1. moi domino gom 2 hv
    2. khong co 2 domino nao chong len nhau
    3. moi domino nam hoan toan ben trong co the cham len canh
'''
# m, n la kich thuoc hinh chu nhat.
m, n = map(int, input().split())
if n % 2 == 0:
    domino = n // 2 * m
    print(domino)
else:
    domino = (n - 1) // 2 * m + m // 2
    print(domino)