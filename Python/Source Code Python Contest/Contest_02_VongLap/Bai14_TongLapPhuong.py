n = int(input())
sum = 0
for i in range(1, n + 1, 1):
    sum += i ** 3
print(sum)
# cong thuc: sum = (n * (n + 1) / 2) ** 2 