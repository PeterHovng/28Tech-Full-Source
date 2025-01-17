# Cac ham pho bien trong python
'''
    - De su dung cac ham toan hoc trong module => import module math
            Cach 1: import math
    - De nam cac ham, gia tri module cung cap => in ra bang cau lenh print(help(math))
    - de su dung ham => math.name_math_function()
         Cach 2: from math import *
    - * dai dien cho all cac math function
    - thi chi can dung name_math_functon
    
        CAC HAM THUONG DUNG
        # Cac ham thuoc math module
    1/ sqrt (square root): tinh can bac 2 => gia tri tra ve la float
    sqrt(n) = float number
    sqrt(36) => 6.0
    
    2/ isqrt (integer square root): tinh can bac 2 => gia tri tra ve la int
    isqrt(n) = int number
    isqrt(36) => 6
    
    3/ pow (power): ham mu 
    pow(a, b) => float number : a^b
    pow(2, 10) => 2^10 = 1024.0
    - can bac 3 => pow(n, 1/3) => n^(1/3) : can bac 3 cua n
    
    4/ ceil (celing): ham lam tron len so nguyen gan nhat =>  lay phan nguyen
    ceil(2.3) => 3
    ceil(3.7) => 4
    
    5/ floor: ham lam tron xuong so nguyen gan nhat => chi lay phan nguyen
    floor(2.4) => 2
    floor(3.7) => 3
    
    6/ factorial: ham giai thua => tra ve gia tri giai thua cua so n
    factorial(n) => n!
    
    7/ gcd(a, b): greatest common divisor: Uoc chung lon nhat
    gcd(100, 450) = 50
    
    8/ comb(n, k)   : Tinh to hop chap k cua n
    - Cth: nCk = n! / [k! * (n - k)!]
    comb(10, 2) => 10C2 = 45
    
    9/ fabs: gia tri tuyet doi => gia tri tra ve la so thuc floa
    fabs(-5) => 5.0
        # ham built-in function
    
    1/ abs : gia tri tuyet doi => gia tri tra ve la so nguyen int
    abs(-50) = 50
    
    2/ round(n): n is float number => ham lam tron
    - gia tri lam tron phu thuoc vo so thap phan khi xet voi so 0.5
    + >= 0.5 => Lam tron lon
    + < 0.5 => Lam tron xuong
    vi du: 
    round(2.5) => 3
    round(2.4) => 2
    
    3/ max: tra ve gia tri lon nhat khi so sanh giua nhieu so
    max(1, 4, 6, 7, 3) = 7
    
    4/ min: tra ve gia tri nho nhat khi so sanh giua nhieu so
    min(3, 0, 4, 6, 9, -1) = -1
    
    5/ sum: tra ve gia tri tong cac phan tu xet
    sum([10, 1, 4, 5]) = 20
'''
