a1, a2, a3, b1, b2, b3 = map(int, input().split())
n = int(input())
tongCup = a1 + a2 + a3
tongHuyChuong = b1 + b2 + b3
so_ke = 0
so_ke_cup = 0
so_ke_huy_chuong = 0

if tongCup % 5 == 0:
    so_ke_cup = tongCup // 5
else:
    so_ke_cup = tongCup // 5 + 1
if tongHuyChuong % 10 == 0:
    so_ke_huy_chuong = tongHuyChuong // 10
else:
    so_ke_huy_chuong = tongHuyChuong // 10 + 1
so_ke = so_ke_cup + so_ke_huy_chuong
if so_ke <= n:
    print('YES')
else:
    print('NO')