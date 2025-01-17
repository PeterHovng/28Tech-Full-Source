k2, k3, k5, k6 = map(int, input().split())
k256 = min(k2, k5, k6)
k32 = min(k3, k2 - k256)
tong_so_k256 = k256 * 256
tong_so_k32 = k32 * 32
print(tong_so_k256 + tong_so_k32 )