'''
    - Cong thuc to hop chap 2: C(n, 2) = n * (n - 1) // 2
    - Cong thuc to hop chap k: C(n, k) = n! / (k! *(n - k)!)
    => C(n, 2) = n!/ (2! * (n - 2)!)
    tu = n! = n * (n - 1) * (n - 2)!
    mau = 2 * (n - 2)
    => rut gon con lai: n * (n - 1) // 2
'''
n = int(input())
so_cach = n * (n - 1) // 2
print(so_cach)