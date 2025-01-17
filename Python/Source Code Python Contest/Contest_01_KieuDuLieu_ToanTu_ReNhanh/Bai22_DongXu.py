'''
so luong xu co gia tri tu 1->n => so luong dong xu la n va chon ra so luong dong xu toi thieu de duoc tong co gia tri la s
input: 5 11
output: 3
=> 5 + 5 + 1 = 11
'''
n, s = map(int, input().split())
so_xu = 0
if s % n == 0:
    so_xu = s // n
else: # khi s khong chua het cho n => so du chay tu 0 -> n - 1 => chi can cong them 1 dong xu   
    so_xu = s // n + 1
print(so_xu)