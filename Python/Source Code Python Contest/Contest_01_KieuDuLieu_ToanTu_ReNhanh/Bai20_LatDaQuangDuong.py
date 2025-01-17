'''
    - quảng trường hình chữ nhật: n x m
    - viên đá để lát: a x a
    - số viên đá cần thiết là bao nhiêu vì có thể che phủ
'''
n, m, a = map(int, input().split())
canh_vien_da = 0    # so lan canh hcn gap canh vien da
cot_vien_da = 0     # so lan cot hcn gap cot vien da
if n % a == 0:
    canh_vien_da = n // a
else:
    canh_vien_da = n // a + 1
if m % a == 0:
    cot_vien_da = m // a
else:
    cot_vien_da = m // a + 1
so_vien_da = canh_vien_da * cot_vien_da
print(so_vien_da)