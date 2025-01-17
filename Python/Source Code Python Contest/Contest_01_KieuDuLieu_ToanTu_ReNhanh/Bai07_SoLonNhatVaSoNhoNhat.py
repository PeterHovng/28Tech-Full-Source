a, b = map(int,input().split())
# so thu 1: so lon nhat <= a
'''
    Cach 1: a // b * b
'''
# so thu 2: so be nhat >=
'''
    Cach 1: (a + b - 1) // b * b
    Cach 2: xai if else
    if a % b:
        num2 = a
    else:
        num2 = (a // b + 1) * b
'''
num1 = a // b * b
num2 = (a + b - 1) // b * b
print(num1, num2, sep = '\n')