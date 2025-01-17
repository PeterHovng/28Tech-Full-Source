import math
def count_odd_divisors(n):
    return math.isqrt(n) ** 2 == n
if __name__ == '__main__':

    n = int(input())
    if count_odd_divisors(n):
        print('YES')
    else:
        print('NO')
'''
    Giải thích:
    bình thường cách tính ước của 1 số => duyệt i từ 2 đên isqrt(n)
    - tạo 1 biến đếm
    tới đây thì theo cách làm tối ưu như sau:
    n = 30 => i sẽ duyệt tới isqrt(30) = 5
    isqrt(n)    n // i
    1           30
    2           15   
    3           10
    5           6
    
    - tới đây bạn luôn thấy ước của chúng luôn đi theo cặp (1, 30), (2, 15), (3, 10), (5, 6)
    nghĩa là ước luôn là số chẵn nhưng có 1 trường hợp đặc biệt là nếu n là số chính phương nên khi bạn đếm ước thông thường bạn hay kiểm tra nếu i != n // i để tránh lặp lại ước của số chính phương ấy
    - để mình ví dụ minh họa cho bạn hiểu về trường hợp đặc biệt này mỗi khi bạn cần đếm số lượng ước của n 1 cách tối ưu
    Vd: n = 16 => i duyệt tới isqrt(16) = 4
    isqrt(n)    n // i
    1           16
    2           8   
    4           4
    - tới đây bạn có thấy ước số 4 bị lặp lại 1 lần dẫn đếm nếu bạn đếm ước mà quên trường hợp này sẽ bị sai => dẫn đến số lượng ước của n này sẽ không đi theo cặp nữa => ước số sẽ bị lẻ
    
    CÁCH 2: có thể chậm hơn 1 chút nhưng vẫn nhanh hơn cách bạn đếm ước rồi kiểm tra số lượng ước là số lẻ hay chẵn
    - Đó là bạn dùng định lý tính ước số thông qua hàm phân tích thừa số nguyên tố
    - Số n khi được phân tích thừa số nguyên tố sẽ có dạng:
    n = p1^e1 * p2^e2 * ... * pk^ek
    => công thức tính ước số của n:
    d(n) = (e1 + 1) * (e2 + 1) * ... * (ek + 1)
    vậy ta chỉ cần kiểm tra xem d(n) này có phải là số lẻ hay không
    
    tốc độ này chạy nhanh hơn thay vì bạn duyệt đếm ước từ 1 đến n với độ phức tạp là O(n) còn cách 2 này tuy chậm hơn so với phương pháp kiểm tra số chính phương nhưng tốc độ chạy sẽ là O(sqrt(n)) nhanh hơn cách duyệt thông thường
'''
