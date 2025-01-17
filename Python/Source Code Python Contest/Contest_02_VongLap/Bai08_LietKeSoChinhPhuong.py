from math import isqrt
n = int(input())
for i in range(1, isqrt(n) + 1):
    print(i * i, end = ' ')
'''
    GIAI THICH
    - So chinh phuong: p^2
1        4        9        16       25
1^2     2^2      3^2      4^2       5^2

=>  1 <= p^2 <= n
<=> 1 <= p <= sqrt(n)
=> duyet tu 1 den sqrt(n) va duyet qua phan tu nao thu in ra binh phuong (i^2) cua phan tu do => toi uu hon
'''