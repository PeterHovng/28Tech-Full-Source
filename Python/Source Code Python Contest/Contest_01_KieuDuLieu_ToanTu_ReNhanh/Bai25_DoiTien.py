n = int(input())
ans = 0
# cach 1:
ans += n // 100
n %= 100
ans += n // 20
n %= 20
ans += n // 10
n %= 10
ans += n // 5
n %= 5
ans += n
print(ans)



'''
Cach 2:
if n % 100 == 0:
    so_to = n // 100
else:
    so_to = n // 100
    so_to_con_lai = n % 100
    if so_to_con_lai % 20 == 0:
        so_to += so_to_con_lai // 20
    else:
        so_to += so_to_con_lai // 20
        so_to_con_lai = so_to_con_lai % 20
        if so_to_con_lai % 10 == 0:
            so_to += so_to_con_lai // 10
        else:
            so_to += so_to_con_lai // 10
            so_to_con_lai = so_to_con_lai % 10
            if so_to_con_lai % 5 == 0:
                so_to += so_to_con_lai // 5
            else:
                so_to += so_to_con_lai // 5
                so_to_con_lai = so_to_con_lai % 5
                so_to += so_to_con_lai * (1 if so_to_con_lai > 0 else -1)
print(so_to)
'''