def is_binary_divisble_by_5(binary_str):
    # C1: Chuyển đổi số nhị phân thành số thập phân bằng hàm có sẵn
    decimal_number = int(binary_str, 2)
    
    # C2: làm thông thường
    decimal_number2 = sum(2**i for i in range(len(binary_str)) if int(binary_str[-1 - i]) == 1)
    
    # C3: áp dụng bình thường và xài đồng dư
    length = len(binary_str)
    decimal_number3 = 0
    for i in range(length):
        bit = binary_str[length - 1 - i]  # Ký tự tại vị trí i tính từ bên phải
        if bit == '1':
            decimal_number3 += 2 ** i
    
    # Kiểm tra điều kiện chia hết cho 5
    last_digit = decimal_number2 % 10
    return last_digit % 5 == 0

if __name__ == "__main__":
    binary_num = input()
    if is_binary_divisble_by_5(binary_num):
        print("YES")
    else:
        print("NO")
