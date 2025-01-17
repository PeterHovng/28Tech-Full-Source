'''
    CÁC HỆ ĐẾM PHỔ BIẾN TRONG LẬP TRÌNH PYTHON:
    1/ Hệ đếm nhị phân (base 2)
    2/ Hệ 16
    3/ Hệ 8
    
    - Hệ đếm nhị phân (base 2):
    --------------------------
    
    + Được coi là ngôn ngữ máy tính, các câu lệnh, giá trị đều được chuyển thành bit 0 1
    - Với số nhị phân K bit, có thể biểu diễn được 2^K giá trị khác nhau
    - Việc nắm vững hệ nhị phân giúp hiểu rõ hơn về cách máy tính lưu trữ dữ liệu, là kỹ năng cơ bản bắt buộc phải nắm vững
    
    - CHUYỂN HỆ THẬP PHÂN SANG HỆ NHỊ PHÂN:
        + Chia số đó cho 2 và ghi lại số dư trong quá trình chia
        + Khi thương = 0 -> ta biểu diễn được số nhị phân bằng cách ghi ngược lại các giá trị dư
        
        VD: 37
        37 / 2 = 18 dư 1
        18 / 2 = 9 dư 0
        9 / 2 = 4 dư 1
        4 / 2 = 2 dư 0
        2 / 2 = 1 dư 0
        1 / 2 = 0 dư 1
        => 37 = 100101
        
    - HỆ 16:
    --------
    - Hệ 16 được sử dụng rất nhiều trong lập trình, đặc biệt là trong việc biểu diễn màu sắc, địa chỉ bộ nhớ, ...
    
    - sử dụng 16 kí tự để biểu diễn số gồm: 10 chữ số từ 0 -> 9 và 6 kí tự từ A -> F
    - Các số 16 thường dc biểu diễn bằng cách thêm tiền tố 0x
    Dạng:
    0 1 2 3 4 5 6 7 8 9 A  B  C  D  E  F
    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
    
    - CHUYỂN HỆ 10 SANG HỆ 16:
    --------------------------
    
    - Chia số đó cho 16 và ghi lại số dư trong quá trình chia
    - Khi thương = 0 -> ta biểu diễn được số nhị phân bằng cách ghi ngược lại các giá trị dư
    - Tuy nhiên, khi chuyển từ hệ 10 sang hệ 16, ta cần chú ý đến việc chuyển các giá trị dư từ 10 -> 15 thành A -> F
    VD1:
    37
    37 / 16 = 2 dư 5
    2 / 16 = 0 dư 2
    => 37 = 25
    VD2:
    255
    255 / 16 = 15 dư 15
    15 / 16 = 0 dư 15
    => 255 = FF
    
    - CHUYỂN HỆ 16 SANG HỆ 10:
    --------------------------
    
    - Để chuyển từ hệ 16 sang hệ 10, ta chỉ cần nhân các giá trị của các chữ số với 16 mũ i, với i là vị trí của chữ số đó
    
    - Xét từ bit cuối cùng tương ứng với 16^0, bit thứ 2 tương ứng với 16^1. Ta nhân bit ở vị trí k với 16^k, vị trí được đánh số 0 tính từ bên phải qua trái.
    - Chú ý: Khi bit hệ 16 ở dạng chữ cái (A-F) khi tính toán bạn cần chuyển sang thành các số 10-15 rồi mới tính
    vd:
    0x2A
    2 * 16^1 + 10 * 16^0 = 42
    VD:
    2FA = 2 * 16^2 + 15 * 16^1 + 10 * 16^0 = 762
    
    - HỆ 8:
    -------
    - Hệ 8 cũng được sử dụng trong lập trình, tuy nhiên ít phổ biến hơn hệ 16 và hệ 2
    - Hệ 8 được sử dụng trong việc biểu diễn địa chỉ bộ nhớ, ...
    - Sử dụng 8 kí tự để biểu diễn số gồm các chữ số từ 0 -> 7
    - Các số 8 thường dc biểu diễn bằng cách thêm tiền tố 0o
    Dạng:
    0 1 2 3 4 5 6 7
    
    - CHUYỂN HỆ 10 SANG HỆ 8:
    --------------------------
    
    - Chia số đó cho 8 và ghi lại số dư trong quá trình chia
    - Khi thương = 0 -> ta biểu diễn được số nhị phân bằng cách ghi ngược lại các giá trị dư
    VD:
    37
    37 / 8 = 4 dư 5
    4 / 8 = 0 dư 4
    => 37 = 45
    
    - CHUYỂN HỆ 8 SANG HỆ 10:
    --------------------------
    
    - Để chuyển từ hệ 8 sang hệ 10, ta chỉ cần nhân các giá trị của các chữ số với 8 mũ i, với i là vị trí của chữ số đó
    - Xét từ bit cuối cùng tương ứng với 8^0, bit thứ 2 tương ứng với 8^1. Ta nhân bit ở vị trí k với 8^k, vị trí được đánh số 0 tính từ bên phải qua trái.
    vd:
    0o52
    5 * 8^1 + 2 * 8^0 = 42
    VD:
    0o123 = 1 * 8^2 + 2 * 8^1 + 3 * 8^0 = 83
    
    
'''