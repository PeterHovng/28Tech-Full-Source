# Lý thuyết đồng dư
'''
    - Xử lý số nguyên lớn:
    1/ (A + B) % C = ((A % C) + (B % C)) % C
    2/ (A - B) % C = ((A % C) - (B % C) + C) % C
    3/ (A * B) % C = ((A % C) * (B % C)) % C
    4/ (A / B) % C = ((A % C) + (B^-1 % C)) % C (tự tìm hiểu học thêm qua phương pháp nghịch đảo modulo)
    - Phép chia rất khó vì đồng tới lý thuyết của đồng dư
    vd:
    (7 + 9) % 4
    ((7 % 4) + (9 % 4)) % 4
    (   3    +    1    ) % 4 = 4 % 4 = 0 
    - 3 công thức đầu có thể áp dụng cho N số đều được
'''
# Bài toán mẫu áp dụng lý thuyết đồng dư
# Tính n! chia dư cho 10^9 + 7: 10^9 + 7 được gọi là số MOD
# hàm math.factorial vẫn tính được tới 1 triệu giai thừa nhưng chi phí tính toán rất là lớn và tốc độ rất lâu => áp dụng lý thuyết đồng dư

'''
    Chạy tay: n! % 10^9 + 7 => (1 * 2 * 3 *....* n) % 10^9 + 7
    res = 1
    res = (res * 1) % 10^9 + 7 = 1
    res = (res * 2) % 10^9 + 7 = 2
    res = (res * 3) % 10^9 + 7 = 6
    res = (res * 4) % 10^9 + 7 = 24
    res = (res * 5) % 10^9 + 7 = 120
    ...
    res = (res * n) % 10^9 + 7
    => tính tới đâu thì chia dư tới đó để không bị lớn vì khi chia dư cho mod thì số dư sẽ từ 0 -> mod - 1
'''
import math

def modulo(n):
    res = 1
    for i in range(1, n + 1):
        res *= i
        res %= (10**9 + 7)
    return res % (10**9 + 7)

def modulo_numbers(a, b, c):
    res = 1
    for i in range(b):
        res *= a
        res %= c
    return res

if __name__ == '__main__':
    n = int(input('Enter n: '))
    print(math.factorial(n) % (10**9 + 7))
    print(modulo(n))
    # tính a^b chia dư cho c
    a, b, c = map(int, input('Enter a and b and c: ').split())
    print(a, '^', b,'chia du cho', c, ':', modulo_numbers(a, b, c))