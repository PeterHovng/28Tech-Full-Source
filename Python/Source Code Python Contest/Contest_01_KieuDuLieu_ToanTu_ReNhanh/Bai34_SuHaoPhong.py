c1, c2, c3, c4, c5 = map(int, input().split())
tong = c1 + c2 + c3 + c4 + c5
if tong % 5 == 0:
    b = tong // 5
    if b != 0:
        print(b)
    else:
        print('-1')
else:
    print('-1')