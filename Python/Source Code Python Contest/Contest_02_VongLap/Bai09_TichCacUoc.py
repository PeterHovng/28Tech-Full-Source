from math import isqrt
n = int(input())
product = 1 # product la tich    
# cach 1: dung if else binh thuong
for i in range(1, n + 1):
    if n % i == 0:
        product *= i
print(product)

'''
# cach2: toan tu 3 ngoi
for i in range(1, isqrt(n) + 1):
    j = n // i
    if n % i == 0:
        product *= (i * j) if i != j else i
print(prodcut)
'''

''' 
#Cach 3: toi uu nhung xai if else binh thuong
for i in range(1, isqrt(n) + 1):
    j = n // i
    
    if n % i == 0:
        if i != j:
            product *= (i * j)
        else:
            product *= i
print(produc)
'''