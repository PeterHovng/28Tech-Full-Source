n = int(input())
while(n > 9):
    sum = 0
    while(n != 0):
        digit = n % 10
        sum += digit
        n //= 10
    n = sum
print(n)
    