n = int(input())
    # 1
for i in range(1, n + 1):
    print(i, end = ' ')
print()
    # 2
for i in range(n, -1, -1):
    print(i, end = ' ')
print()
    # 3
for i in range(0, n + 1, 2):
    print(i, end = ' ')
print()
    # 4
for i in range(1, n + 1, 2):
    print(i, end = ' ')
print()
    # 5
for i in range(0,n, 4):
    print(i, end = ' ')
print()
    # 6
for i in range(0, n):
    char = chr(97 + i)
    print(char, end = ' ')
print()
    # 7
for i in range(122 - n + 1, 123):
    print(chr(i), end = ' ')
print()