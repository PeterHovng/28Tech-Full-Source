a, b, c, n = map(int, input().split())
tong_xu = a + b + c + n
so_xu_moi_nguoi = tong_xu // 3
if tong_xu % 3 == 0:
    if so_xu_moi_nguoi >= a and so_xu_moi_nguoi >= b and so_xu_moi_nguoi >= c:
        print('YES')
    else:
        print('NO')
else:
    print('NO')