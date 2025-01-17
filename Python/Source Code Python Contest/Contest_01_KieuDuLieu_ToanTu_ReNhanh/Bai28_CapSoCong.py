'''
    tong cac phan tu cua cap so cong: s(n) = (u1 + un) * n // 2 khi biet n phan tu, u1 và cong sai d
    
    => cong thuc: s(n) = (u1 + un) * n // 2 = (2 * u1 + (n - 1) * d) * n // 2
'''
n, u1, d = map(int, input().split())
sum = 0
u_n = u1 + (n - 1) * d
sum = n * (u1 + u_n) // 2
print(sum)