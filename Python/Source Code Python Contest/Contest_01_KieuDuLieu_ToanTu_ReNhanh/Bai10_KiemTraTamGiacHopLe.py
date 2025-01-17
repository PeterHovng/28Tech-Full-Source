a, b, c = map(int, input().split())
if a > 0 and b > 0 and c > 0:
    if a + b > c and a + c > b and b + c > a:
        print('YES')
    else: print('NO')
else: print('NO')
# cach 2: if a <= 0 or b <= 0 or c <= 0 or a + b <= c or a + c <= b or b + c <= a