coin = int(input())
so_chai_bia = coin // 28
vo_chai = so_chai_bia
# doi thuong
while(vo_chai >= 3):
    so_chai_moi = vo_chai // 3
    so_chai_bia += so_chai_moi
    vo_chai = vo_chai % 3 + so_chai_moi
print(so_chai_bia)