n = int(input())
cnt = 0
while n != 0:
    digit = n % 10
    if digit == 2 or digit == 3 or digit == 5 or digit == 7:
        cnt += 1
    n //= 10
print(cnt)