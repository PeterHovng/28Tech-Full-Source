n = int(input())
# condition 1
if n % 2 == 0:
    print('YES')
else: print('NO')
# condition 2
if n % 3 == 0 and n % 5 == 0:
    print('YES')
else: print('NO')
# condition 3
if n % 3 == 0 and n % 7 != 0:
    print('YES')
else:  print('NO')
# condition 4
if n % 3 == 0 or n % 7 == 0:
    print('YES')
else: print('NO')
# condition 5
if n > 30 and n < 50:
    print('YES')
else: print('NO')
# condition 6
if n >= 30 and (n % 2 == 0 or n % 3 == 0 or n % 5 == 0):
    print('YES')
else: print('NO')
# condition 7
don_vi = n % 10
if n >= 10 and n <= 99:
    if don_vi == 2 or don_vi == 3 or don_vi == 5 or don_vi == 7 :
        print('YES')
    else:
        print('NO')
else: print('NO')
# condition 8
if  n <= 100 and n % 23 == 0:
    print('YES')
else: print('NO')
# condition 9
if  n < 10 or n > 20: 
    print('YES')
else: print('NO')
# condition 10
if don_vi % 3 == 0:
    print('YES')
else:  print('NO')

