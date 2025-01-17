# Nhap  du lieu tu ban phim trong python bang map function and input function

'''
    - Cu phap: input(prompt)
    => Gia tri tra ve cua ham input nay se la 1 xau ki tu o dang str => Can chu y ep kieu
        + prompt: doi so thuong la 1 chuoi, cau dan duoc hien thi truoc khi nhap
        VD:
        n = (input('Nhap so: ')
        print(type(n), n, sep = '\n')
        => gia tri tra ve sau khi nhap cua bien n se la class str
        => de muon tra thanh class int -> ep kieu int bang ham int()
        VD:
        n = int(input('Nhap so: '))
        print(type(n), n, sep = '\n')
    
    - Nhap du lieu voi ham input voi nhieu so tren 1 dong
    B1: Nhap cac dong bang ham input
    B2: Dung ham split de tach cac tu trong xau ra => luc nay cac tu van o dang class str
    B3: Dung map (anh xa) de ep kieu cac xau duoc tach ra khi su dung ham split sang int hoac float , etc
    
    VD: Nhap tren 2 dong:
        
        
'''
# B1: Nhap
s = input('Nhap 3 so: ') # 100 200 300

# B2: Tach cac so bang ham split()
a = s.split()
print(a) # Ket qua: ['100', '200', '300'] => a tach ra thanh 3 tu dang chuoi ki tu str

# B3: Su dung ham map de ep kieu cac thanh phan trong list => sang kieu du lieu mong muon
x, y, z = map(int, a) # => Luc nay 3 tu chuoi ki tu duoc chuyen thanh 3 bien so nguyen int la 100 200 300
print(x, y, z) #Ket qua: 100 200 300
print(x + y + z) # Ket qua: 600

# Gia su khong dung ham map thi khi gan cho x, y ,z thi in ra se tro thanh
x, y, z = a
print(x + y + z) # Ket qua: 100200300 Vì phep toan nay la cong xau voi nhau

    # Cac gop lai thanh 1 dong nhap cac phan tu
x, y, z = map(int, input('Nhap 3 so nguyen: ').split())
print(x, y, z , type(x), type(y), type(z), sep = '\n', end = '\n')
print(x + y + z)
a, b = map(int, input('prompt:').split())
