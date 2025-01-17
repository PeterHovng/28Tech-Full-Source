'''
    Ly thuyet:
    2   8   32  128
    d = 4 => cong sai = 4
    => u_(n + 1) = d * u_n
'''
a, b, c, d = map(int, input().split())
if b % a == 0:
    q = b // a
    if b * q == c and c * q == d:
        print('YES')
    else:
        print('NO')
else:
    # khong the tao thanh cap so nhan duoc
    print('NO')
