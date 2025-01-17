a, b, k = map(int, input().split())
left, right = 0, 0
if k % 2 == 0:
    left = k // 2
    right = k // 2
else:
    left = k // 2
    right = k // 2 + 1
print(right * a - left * b)
    