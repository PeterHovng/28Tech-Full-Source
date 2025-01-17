import math
def is_beautiful_num(n):
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            cnt = 0
            while n % i == 0:
                cnt += 1
                n //= i
            # Khi gặp 1 thừa số nguyên tố có số 1 là 1 thì sai nghĩa là khi chia hết cho 1 snt thì cũng phải chia hết cho bình phương số nguyên tố ấy
            if cnt == 1:
                return False
    # thừa số nguyên tố cuối cùng này có mũ là 1        
    if n > 1: 
        return False
    return True

if __name__ == '__main__':
    a, b = map(int, input().split())
    for i in range(a, b + 1):
        if is_beautiful_num(i):
            print(i, end = ' ')
'''
    Bài này thì bắt buộc khi chia cho thừa số nguyên tố nào thì phải chia được cho bình phương của thừa số nguyên tố ấy nghĩa là trong phân tích thừa số nguyên tố chỉ cần tồn tại 1 thừa số nguyên tố có mũ là 1 thì sẽ sai => tất cả các thừa số phải có số mũ từ 2 trở lên
    
    Còn bài trước thì chỉ cần tồn tại 1 thừa số nguyên tố có mũ từ 2  trở lên là được
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
            if cnt < 2:
                return False
    if n != 1:
        return False
    return True

if __name__ == '__main__':
    a, b = map(int, input().split())
    results = [i for i in range(a, b + 1) if check(i)]
    print(' '.join(map(str, results)))

"""