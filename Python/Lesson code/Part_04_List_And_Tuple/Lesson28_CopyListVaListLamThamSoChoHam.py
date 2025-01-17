# nghĩa là a và b cùng địa chỉ của list => b thay đổi các phần tử trong đó a sẽ bị ảnh hưởng
# nên b phải dùng hàm copy()
# nên khi gọi 1 hàm hay thao tác trên 1 list thì đều sẽ bị thay đổi => nên tạo 1 list copy để thao tác mà ko bị ảnh hưởng bởi list đầu

def change_array(arr): # khi truyền tham số là list => truyền chính cả địa chỉ của list đố => thao tác trực tiếp trên list
    a[0] = 100

a = [1, 2, 3, 4]
print(a)
change_array(a)
print(a)

