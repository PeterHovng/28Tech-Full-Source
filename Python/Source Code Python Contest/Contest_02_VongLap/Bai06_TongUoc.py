from math import isqrt
n = int(input())
sum = 0
for i in range(1, isqrt(n) + 1):
    j = n // i
    if n % i == 0:
        sum += i
        if i != j:
            sum += j
print(sum)

'''
Cach 2:
sum = 0
for i in range(1, isqrt(n) + 1):
    j = n // i
    if n % i == 0:
        sum += (i + j)
        if (i == j):
            sum -= i
print(sum)
'''

'''
GIA SU:
n = a.b
-> kiem tra xem a co < sqrt(n) hay khong
- neu a <= b vi a.b = n => it nhat co 1 truong hop a.b = n
- voi dieu kien tren:
    + neu a > sqrt(n)
    + neu b > sqrt(n)
    => a.b > n => vo ly => SAI
=> chung minh duoc rang a < sqrt(n) va b > sqrt(n)

GIAI THICH CACH GIAI TOI UU:
duyet tu 1 -> sqrt(n) => tối ưu thời gian
ví dụ n = 60
co cac uoc la:
i   j = n // i
1   60
2   30
3   20
4   15
5   12
6   10
=> duyet tu 1 -> sqrt(60) => 1 2 3 4 5 6
sum += (i + j)
TRUONG HOP DAC BIET LA KHI I == J
ví du
n = 16
i   j = n // i
1   16
2   8
3   5
4   4
=> duyet tu 1 -> sqrt(16) => 1 2 3 4
sum += (i + j)
=> lúc này vô tình cộng 2 lần 4
=> phai kiem tra dieu kien i != j
de loai khi i la so chinh phuong
'''