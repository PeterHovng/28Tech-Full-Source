import math

''' Hàm này nộp bài sẽ bị time limit vì khi cho 1 số quá lớn thì sẽ không thể chạy hết
def isPhenicNum(n):
    cnt = 0
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            exponent = 0
            while(n % i == 0):
                exponent += 1
                n //= i
            if exponent >= 2:
                return False
            cnt += 1
    if n > 1:
        return cnt == 3
'''

# tận dùng vòng while để giảm vòng lặp xuống vì biến n giảm dần theo thời gian
def isPhenicNumAdvanced(n):
    cnt = 0
    i = 2
    while i <= math.isqrt(n):
        if n % i == 0:
            exponent = 0
            while n % i == 0 :
                exponent += 1
                n //= i
            if exponent >= 2 :
                return False
            cnt += 1
        i += 1
    if n > 1:
        cnt += 1
    return cnt == 3

if __name__ == '__main__':
    n = int(input())
    if isPhenicNumAdvanced(n):
        print(1)
    else:
        print(0)