def format_number(N):
    # Chuyển số N thành chuỗi
    N_str = str(N)
    
    # Đảm bảo N có độ dài 6 ký tự, thêm '0' vào đầu nếu không đủ
    result_with_zeros = N_str.zfill(6)
    
    # Đảm bảo N có độ dài 6 ký tự, thêm '#' vào đầu nếu không đủ
    result_with_hashes = N_str.rjust(6, '#')
    
    # In kết quả
    print(result_with_zeros)
    print(result_with_hashes)

# Đọc số N từ đầu vào
N = int(input())

# Gọi hàm để in ra kết quả
format_number(N)
