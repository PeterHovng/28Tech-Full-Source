'''
    # Phân tích thừa số nguyên tố: (Prime factorization)
    # 30 = 2 x 3 x 5
    # 60 = 2 x 2 x 3 x 5
    n = 60 => 60 : 2 = 30 => 30 : 2 = 15 => 15 : 3 = 5 => 5 : 5 = 1
    => 60 = 2 x 2 x 3 x 5
    - Cách bước thưc hiện:
        + Bước 1: duyệt i: 2 -> isqrt(n)
        + Bước 2: kiểm tra xem nếu i là thừa số nguyên tố thì kiểm tra xem nếu n vẫn chia hết cho i => dùng vòng lặp while để in ra i và cứ chia tiếp i để khi nào không chia hết cho i nữa => mới tăng i lên
        + Bước 3: in ra kết quả các thừa số nguyên tố của n
    - Độ phức tạp: O(sqrt(n))
    
    - LÝ THUYẾT TOÁN HỌC - ĐỊNH LÝ HAY:
        + Nếu bạn có phân tích thừa số nguyên tố của một số => có thể biết được số ước của n
        + Dạng: 
            n = p1^e1 * p2^e2 * ... * pk^ek
        => Số lượng ước n: d(n) = (e1 + 1) * (e2 + 1) * ... * (ek + 1)
        + Ví dụ: n = 60 = 2^2 * 3^1 * 5^1
        => d(60) = (2 + 1) * (1 + 1) * (1 + 1) = 3 * 2 * 2 = 12
        => SỐ ƯỚC CỦA 60: 12
        + Ví dụ: n = 72 = 2^3 * 3^2
        => d(72) = (3 + 1) * (2 + 1) = 4 * 3 = 12
        => SỐ ƯỚC CỦA 72: 12
        
    - CHẠY TAY CÁCH PHÂN TÍCH THỪA SỐ NGUYÊN TỐ:
        + n = 60
        + i: 2 -> isqrt(60) = 7 => i: 2 -> 7 
        + loop 1: i = 2
            60 % 2 == 0:
                print(2, end = ' ')
                n = 60 // 2 = 30
            30 % 2 == 0:
                print(2, end = ' ')
                n = 30 // 2 = 15
            15 % 2 != 0 => tăng i lên
        + loop 2: i = 3
            15 % 3 == 0:
                print(3, end = ' ')
                n = 15 // 3 = 5
            5 % 3 != 0 => tăng i lên
        + loop 3: i = 4
            5 % 4 != 0 => tăng i lên
        + loop 4: i = 5
            5 % 5 == 0:
                print(5, end = ' ')
                n = 5 // 5 = 1
            1 % 5 != 0 => tăng i lên
        + loop 5: i = 6
            1 % 6 != 0 => tăng i lên
        + loop 6: i = 7
            1 % 7 != 0 => tăng i lên
        + lopp 7: i = 8 > isqrt(60) => dừng vòng lặp.

'''
import math

def phan_tich_thua_so_ngto(n):
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            # i: là thừa số nguyến tố
            # Nếu n còn chia hết cho i => i vẫn còn là thừa số nguyên tố => dùng while đến khi nào không chia hết thì dừng và tăng i lên
            while n % i == 0:
                print(i, end = ' ')
                n //= i
    # sau vòng for này kiểm tra n đã bằng 1 hay chưa => QUAN TRỌNG
    # nếu phần tích xong for rồi mà n = 1 => n đã phân tích thừa số nguyên tố hết rồi
    # nếu phân tích xong for rồi mà n > 1 => n là số nguyên tố
    if n > 1:
        print(n, end = ' ')

if __name__ == '__main__':
    n = int(input('Enter a number: '))
    print('Prime factorization of', n, 'is:', end = ' ')
    phan_tich_thua_so_ngto(n)