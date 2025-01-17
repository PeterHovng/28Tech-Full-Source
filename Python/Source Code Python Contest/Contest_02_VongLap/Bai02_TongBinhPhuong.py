n = int(input())
sum = 0
for i in range(1, n + 1):
    sum += i ** 2
print(sum)
# cong thuc tong quat: sum = (n * (n + 1) * (2 * n + 1)) / 6