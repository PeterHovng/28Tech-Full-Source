# Tổ hợp chập k của n
'''
    - có hàm có sẵn: comb(n, k) = n! // (k! * (n - k)!)
    - Tự viết hàm tính tổ hợp chập k = n! / (k! * (n - k)!)
    # Lưu ý tổ hợp chập 2 của n => n! // (2! * (n - 2)!) = n * (n - 1) // 2
'''
import math

def calculate_combination(n, k):
    return math.factorial(n) // (math.factorial(k) * math.factorial(n - k))

if __name__ == '__main__':
    n, k = map(int, input('Enter n and k: ').split())
    print('combination off', n, 'and', k, 'is', calculate_combination(n, k))