a, b, n = map(int, input().split())
check = False
for x in range(n // a + 1):
    temp = n - a * x
    if temp % b == 0:
        check = True
        break
if check == True:
    print('YES')
else:
    print('NO')
'''
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
'''