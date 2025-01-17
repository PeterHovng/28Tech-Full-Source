n = int(input())
sum = 0
# cach 1
for i in range(3, n + 1, 3):
    sum += i
print(sum)

# cach 2:
'''
sum = 0
for i in range(1, n + 1):
    if i % 3 == 0
    sum += i
print(sum)
'''

# cach 3: nhanh hon
'''
    tong cac boi cua 3 khong qua n
    vi du n = 23
    3 + 6 + 9 + 12 + 15 + 18 + 21
=> dat bien i = 3
    3 *(1 + 2 + 3 + 4 + 5 + 6 + 7)
    3 * (n * (n + 1) / 2)
    => de duyet so lan => n // 3
for i in range(1, n // 3 + 1):
    sum += i * 3
print(sum)
'''