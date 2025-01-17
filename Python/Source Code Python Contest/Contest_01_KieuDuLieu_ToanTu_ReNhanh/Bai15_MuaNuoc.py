'''
    - chai 1 lit va chai 2 lit
    - chai loai 1: a burles
    - chai loai 2: b burles
    => muc tieu chi it tien nhat
    => nhiem vu tim ra so tien toi thieu can mua de dc n lit nuoc
    
    - goi y:
    B1: kiem tra chai nao re hon: xet gia tien 1 lit
    B2: uu tien mua chai re hon
        Neu chai 1 lit re hon => mua toan bo n chai 1 lit
        Neu chai 2 lit re hon => chia 2 truong hop tai buoc 3
    B3: neu n lit nuoc chan => mua mua n / 2 chai 2 lit
        neu n le => mua n / 2 chai 2 lit + 1 chai 1 lit vi khong dc mua thua
'''
# n: lit, a: gia chai 1 lit, b: gia chai 2 lit
n, a, b = map(int, input().split())
if a <= (b / 2):
    price_1 = n * a
    print(price_1)
else:
    if n % 2 == 0:
        price_2 = (n // 2) * b
        print(price_2)
    else:
        price_2 = (n - 1) // 2 * b + a
        print(price_2)
    