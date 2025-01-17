d1, d2, d3 = map(int, input().split())
# cach 1: di toi store 1 roi quay ve nha xong toi store 2 roi quay ve nha
s1 = 2 * (d1 + d2)
# cach 2: di toi store 1 roi qua store 2 roi quay ve nha theo duong nhu di toi store 1
s2 = 2 * (d1 + d3)
# cach 3: di toi store 2 roi qua store 1 roi quay ve nha theo duong nhu di toi store 2
s3 = 2 * (d2 + d3)
# cach 4: di toi store 2 roi qua store 1 roi ve nha
s4 = d2 + d3 + d1
s_min = min(s1, s2, s3, s4)
print(s_min)