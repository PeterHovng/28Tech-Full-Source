# Loop for in python
'''
1/ VÒNG LẶP FOR VÀ HÀM RANGE()
    + VÒNG LẶP FOR
    - Trong ngôn ngữ lập trình Python có chút
    khác so với các ngôn ngữ lập trình như
    C/C++, Java,...
    - Thay vì duyệt qua các giá trị số thì Python
    sẽ lặp trên các iterable (list, tuple, string,
    set...). Thứ tự duyệt sẽ theo thứ tự xuất
    hiện trong iterable. 
    => Để thực hiện vòng lặp
    for ta sử dụng built-in function là range().

    Cú pháp:
    <for var in iterable:>
    - var: biến dùng để duyệt
    - iterabe: là một tập của các đối tượng VD: list, tuple, string, etc. => cái mà ta muốn duyệt
    - Bên trong for các satement đều được thụt lề vào 1 khoảng cách (4 spaces) hoặc 1 tab
    - Trong for có thể có thêm else: nếu for kết thúc thì sẽ thực hiện else nếu cần
    - in : là toán tử membership (thuộc tính) kiểm tra xem var có thuộc iterable hay không => lấy ra mỗi phần tử trong iterable và gán cho var
    
    + HÀM RANGE()
    - Hàm range() sẽ sinh ra một dãy số -> tạo ra iterable và bạn sẽ sử dụng vòng for để duyệt qua từng số trong dãy đã sinh ra
    
    - Cú pháp: range(start, stop, step)
    + start: Giá trị bắt đầu của dãy số (mặc định là 0).
    stop: Giá trị cuối cùng của dãy số (cận này không được lấy).
    step: Bước nhảy của dãy số (mặc định là 1).
    
    VD1: duyệt các số từ 1 -> 50
# Bước 1: sinh ra range(dãy số) từ 1-> 50
# Bước 2: duyệt qua từng số trong dãy số bằng for
for i in range(1, 51):
    print(i, end = ' ')
    
    VD2: duyệt các số chẵn từ 1->50
    Cách 1:
for i in range(0, 51, 2):
print(i, end = ' ')

    Cách 2:
for i in range(51):
    if i % 2 == 0:
        print(i, end = ' ')
    
    VD3: Tinh tong S(n) = 1 + 2 + 3 + ... + n
n = int(input('Nhap n :'))
sum = 0
for i in range(1, n + 1):
    sum += i
print('Tong S(n) = ', sum)

# VD4 Tinh tong S(n) = 1^2 + 2^2 + 3^2 + ... + n^2
n = int(input('Nhap n: '))
sum = 0
for i in range(1, n + 1):
    sum += i **2
print(sum)

VD5: Tinh tong S(n) = 1^2 + 2^2 + 3^2 + ... + n^2
n = int(input('Nhap n: '))
sum = 0
for i in range(1, n + 1):
    sum += i **2
    print(i, '^2 = ',sum, sep ='')
print(sum)

VD6: Tinh giai thua cua n
n = int(input('Nhap n: '))
factorial = 1
for i in range(1, n + 1):
    factorial *= i
print(factorial)
    
    CHÚ Ý:
Tinh tong => khoi tao bien sum = 0
Tinh tich => khoi tao bien product = 1

VD7: 
for i in range(1, 7):
    print(i, sep = ' ')
    i += 1
# output: 1 2 3 4 5 6
# lý do: 
    + B1: tạo iterable là range từ 1->6
    loop 1: 
        - in ra i = 1
        - i += 1 => i = 2
    loop 2:
        - in lấy phần tử thứ 2 trong iterable là 2 gán cho i
        - in ra i = 2
        - i += 1 => i = 3
    ...
    loop 6:
        - in lấy phần tử thứ 6 trong iterable là 6 gán cho i
        - in ra i = 6
        - i += 1 => i = 7
        
    ==> Kết luận là trong vòng for không cần biết var thay đổi như thế nào trong khối lệnh trong for -> chỉ cần biết var lấy giá trị các phần tử từ iterable và thực hiện các câu lệnh trong for
    ví dụ:
    for var in iterable:
        print(var)
        var += 1 => var += 1 không thay đổi giá trị var vì khi lặp lại vòng for thì var sẽ lấy giá trị từ iterable chứ không phải giá trị của var trước đó
        
    3/ CÂU LỆNH BREAK VÀ CONTINUE
    - Câu lệnh break dùng để kết thúc vòng lặp ngay lập tức ngay khi gặp break => thực hiện tiếp các khối lệnh bên dưới vòng for => giống C và C++
    LƯU Ý: break thông thường sẽ đi kèm với điều kiện
    
    - Câu lệnh continue trong vòng lặp là bỏ qua lần lặp hiện tại à bắt đầu lại vòng lặp tiếp theo, bỏ qua các câu lệnh dưới continue v
    
    4/ VÒNG LẶP LỒNG NHAU (Nested loop)
    for i in range(3):
    for j in range(2):
        print(i, j)
        
    Output:
    0 0
    0 1
    1 0
    1 1
    2 0
    2 1
=> khi thực hiện 1 vòng for ngoài => thực hiện hết các vòng for bên trong cho tới khi trong iterable hết phần tử => mới lặp lặp vòng for mới bên ngoài => hiểu hôm nay như chúng ta duyệt ma trận trong C/ C++
=> Số lần lặp của 2 vòng for lồng nhau = tích số lần lặp của các vòng for bên trong với số lần lặp của vòng for con bên trong
=> với ví dụ trên thì thì số lần lặp là: 3 * 2 = 6 lần

KẾT THÚC BÀI LƯU Ý:
- hàm range(): có 3 tham số là start, stop, step và đặc biệt ko duyệt tới phần tử stop vì chỉ duyệt tới phần tử stop - 1
- hàm break, continue
- Nested loop: vòng lặp lồng nhau
'''

