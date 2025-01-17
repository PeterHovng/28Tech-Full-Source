import math
def is_beautiful_num(n):
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            cnt = 0
            while n % i == 0:
                cnt += 1
                n //= i
            if cnt >= 2:
                return True
    return False

if __name__ == '__main__':
    a, b = map(int, input().split())
    for i in range(a, b + 1):
        if is_beautiful_num(i):
            print(i, end = ' ')

'''
    Giải thích:
    - liên quan tới ước của số nguyên tố => nên phân tích thừa số nguyên tố đó
    - khi chia hết cho số nguyên tố đó đồng thời cũng phải chia hết cho bình phương của số nguyên tố đó
    => trong phân tích thừa số chỉ cần tồn tại ít nhất 1 số nguyên tố có mũ lớn hơn hoặc bằng 2 là được
    nghĩa là khi đó nếu n chia cho snt i => n cx phải chia hết cho i^2 thì chỉ cần duyệt thừa số ngto và có mũ ít nhất là 2 không thì bỏ qua tăng tiếp tục vòng lặp for
    ở d
'''

"""  
import math

def check(n):
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            cnt = 0
            while n % i == 0:
                cnt += 1
                n //= i
            if cnt >= 2:
                return True
    return False

if __name__ == '__main__':
    a, b = map(int, input().split())
    results = [i for i in range(a, b + 1) if check(i)]
    print(' '.join(map(str, results)))

"""