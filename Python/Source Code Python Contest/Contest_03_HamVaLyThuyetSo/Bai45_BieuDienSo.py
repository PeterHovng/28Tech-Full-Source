def check_num(n):
    for i in range(0, n // 111 + 1):
        if (n - i * 111)  % 11 == 0:
            return True
    return False

if __name__ == '__main__':
    n = int(input())
    if (check_num(n)):
        print('YES')
    else:
        print('NO')
        
'''
    Giải thích:
    - Những số lớn hơn 2 số 11 và 111 đều có thể biểu diễn dưới dạng 2 số 11 và 111 => chỉ cần xem xét số x có thể biểu diễn sang 2 số 11 và 111 hay ko
    Vd:
    1111 = 11 * 100 + 11
    11111 = 111 * 100 + 11
    => Thay vì biểu diễn x dưới tổng các số 1, 11, 111, 1111, ... 
    => mình có phương trình 11 * a + 111 * b = x
    => kiểm tra pt đó có nghiệm nghiệm ko âm hay không là được bằng các thế số thử hoặc giải bằng pt euclid mở rộng
    
        Ý tưởng:
    - Nếu giải trong toán học => tối thiểu cần 2 pt => áp dụng giải thuật Euclid mở rộng để giải
    - Nếu trong lập trình => thử nghiệm bằng for
        B1: Thử từng nghiệm x => nghiệm y xem có thỏa mãn hay không
        B2: ax + by = n
        => Câu hỏi đặt ra khi điều kiện (x, y) cặp nghiệm nguyên không âm thì chúng ta thử nghiệm x chạy tới đâu?
        => tức là [x tối thiểu >= 0, y >= 0] và x tối đa chạy -> ?
            - x tối đa trong pt ax + by = n có thể nhận được là bằng n // a khi by = 0
        => thử các giá trị x chạy từ [0, n // a]
        - với mỗi lượng nghiệm x => tính được nghiệm y = (n - ax) // b
        => điều kiện tồn tại y nguyên khi n - ax chia hết cho b   
    
    => chỉ cần duyệt từ 0 -> n // 111 + 1) rồi kiểm tra lượng còn lại với điều kiện  (n - i * 111)  % 11 == 0 => tồn tại cả a và b nguyên không âm

'''