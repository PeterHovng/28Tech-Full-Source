'''
Bien va kieu du lieu
    1/ Bien
- trong python ko can khai bao bien vi bien se tu dong tao va xac dinh kieu du lieu tu dong (dynamic typing) khi ban gan gia tri cho no
- Bien (varible) la vung chua de luu tru du lieu phuc vu bai toan
- de biet kieu du lieu cua bien => dung ham type()
- dat ten bien la khong co dau cach
- khong dc bat dau bang so
- va ten bien khong chua cac ki tu dac biet nhu # @...
- Ten bien trong python phan biet hoa thuong (case sentitive)
    
    2/ Kieu du lieu
- kieu du lieu so: 
    1. so nguyen: (integer)
        * so nguyen int khong gioi han ve gia tri so nguyen => co the luu gia tri so nguyen lon
        * so nguyen thuong o dang co so 10 => cung co the in ra o he co so 2, 8, 16
    Tien to         Y nghia         Co so
    0b / 0B         Binary          2
    0o / 0O         Octal           8
    0x / 0X         Hexadecimal     16
            
    2. so thuc dau phay dong: (floating-point numbers)
        * la so am, duong kem theo phan thap phan
        * trong python, so thuc sap xi 1.8*10^308 => cac gia tri lon hon gia tri nay thi dc mo ta boi chuoi inf (infinity)
        * trong python gia tri thuc nho nhat co the luu la 5.0*10^-324 => cac gia tri nho hon so nay dc coi la 0
        * in ra do chinh xac sau dau phay:
        vi du a = 28.0412323
        - Co 3 cach
            + print('%.2f' % a) => remember
            + print(round(a, 2)) => kha nguyen hiem do co lam tron
            + print('{:.2f}'.format(a)) => remember
            
        
    3. so phuc (complex numbers)
        * gom phan thuc va ao
        - thuc (real part)
        - ao (imaginary part): di kem voi j
        => co the in ra phan thuc: value.real
        => co the in ra phan ao: value.imag
        
    4. kieu du lieu dung sai: boolean
        * Kieu bool chi luu 2 gia tri True va False
        * CHU Y: CAC GIA TRI XAC DINH LA True trong python la (xau khac rong, cac so khac 0)
        
    5. kieu du lieu xau (string) : str
        * Xau ki tu trong python dc dat trong nhay don hoac nhay kep ren 1 dong
        * trong truong hop xau co nhieu dong t dat giua 3 nhay kep
        * chi co clss str thoi ko co kieu du lieu 1 ki tu nhu nhung ngon ngu lap trinh khac
    3/ Ep kieu
        - de chi dinh kieu du lieu trong bien nao => ep kieu
        - qua trinh casting trong python dc hoan thanh 
        - Cac kieu ep kieu
            + int()
            + float()
            + complex()
            + bool()
            + str()
'''
    # bien
a = 100
A = 50
print(a, A)
dientich = 100
dienTich = 200
print(dientich, dienTich)
    # kieu du lieu so
a = 100
print(a, type(a))
    #kieu du lieu so thuc dau phay dong
b = 5.2
print(b, type(b))
    # kieu du lieu so phuc
c = 3 + 3j
print(c, type(c))
    # kieu du lieu so nguyen int => luu so nguyen dai
d = 10011312000000000000000434
print(d, type(d))
    # he co so 2
e = 0b1010
print(e, type(e))
    # he co so 8
f = 0o123
print(f, type(f))
    # he co so 16
g = 0x123
print(g, type(g))
    # so thuc
A = 3.5
print(A)
B = 3e5 # 3e5 : 3*10^5
print(B)
D = 1.9e308
print(D)
E = 5.4e-325
print(E)
F = 29.323554
print('Cach 1 lam tron:','%.2f' % F)
print('Cach 2 lam trong', '{:.2f}'.format (F))
    # so phuc
G = 3 + 5j
print(G.real)
print(G.imag)
    # kieu du lieu dung sai boolean
a = True
print(type(a))
b = False
print(type(b))

    # chu y kieu bool
a = 100
print(bool(a)) # => True
b = 0
print(bool(b)) # => False
c = '28tech'
print(bool(c)) # => True
d = ''
print(bool(d)) # => false

    # kieu du lieu xau (str)
s = '28tech'
t = """pyton 28tech
programming"""
print(s)
print(t)
print(type(s))

    # Ep kieu
s = '12443534'
a = int(s)
print(s, type(s))
print(a, type(a))
k = 20.23455
print('Vi du 2:')
print(int(k), type(k))

""""
    print('%.2f' % a) => remember
    + print(round(a, 2)) => kha nguyen hiem do co lam tron
    + print('{:.2f}'.format(a)) => remember
"""

a = 2.8
print('%.2f' % a) 
print('{:.2f}'.fomat(a))