n = int(input())
# hinh 1
cnt = 1;
for i in range(1, n + 1):
    for j in range(1, n + 1):
        print(cnt, end = ' ')
        cnt += 1
    print()
print()
# hinh 2
for i in range(1, n + 1):
    khoi_tao = i
    for j in range(1, n + 1):
        print(khoi_tao, end = ' ')
        khoi_tao += 1
    print()
print()
# hinh 3:
for i in range(1, n + 1):
    for j in range(1, n + 1):
        if j <= n - i:
            print('~', end = '')
        else:
            print(i, end = '')
    print()
print()
# hinh 4
for i in range(1, n + 1):
    khoitao = i
    kc = n - 1
    for j in range(i):
        print(khoitao, end = ' ')
        khoitao += kc
        kc -=1
    print()


'''
    Code anh khoi
    n = int(input())
# hinh 1
for i in range(1, n * n + 1):
    print(i, end = ' ')
    if i % n == 0:
        print()
print()
# hinh 2
for i in range(1, n + 1):
    for j in range(i, n + i):
        print(j, end = ' ')
    print()
print()
# hinh 3
for i in range(1, n + 1):
    for j in range(n - i):
        print('~', end = '')
    for j in range(i):
        print(i, end = '')
    print()
print()
'''