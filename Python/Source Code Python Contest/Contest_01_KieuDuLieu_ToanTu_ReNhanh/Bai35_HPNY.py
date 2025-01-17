h, m = map(int, input().split())
so_phut_con_lai = 0
so_phut_mot_ngay = 24 * 60
so_phut_con_lai = so_phut_mot_ngay - (h * 60 + m)
print(so_phut_con_lai)