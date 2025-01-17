# liên quan kiến thức của list
t = int(input())
a = list(map(int, input().split()))
sum = 0
for x in a:
    if x % 2 == 0:
        sum += x
print(sum)