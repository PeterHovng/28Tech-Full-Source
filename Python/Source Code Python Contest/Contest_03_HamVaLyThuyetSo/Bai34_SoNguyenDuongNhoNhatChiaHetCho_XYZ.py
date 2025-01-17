import math
def LCM(a, b):
    return a * b // math.gcd(a, b)

if __name__ == '__main__':
    x, y, z, n = map(int, input().split())
    bcnn = LCM(LCM(x, y), z)
    # tìm số nhỏ nhất >= 10*(n - 1) chia hết cho bcnn
    temp = 10 ** (n - 1)
    ans = (temp + bcnn - 1) // bcnn * bcnn
    # kiểm tra 
    if ans < 10 ** n:
        print(ans)
    else:
        print(-1)
        
'''
    Ý tưởng là tìm bcnn của 3 số
    xong sẽ tìm số nhỏ nhất trong khoảng  [10^(n-1), 10^n) có thể chia hết cho bcnn và in ra. 
    công thức tìm số nhỏ nhất >= 10** (a - 1) chia hết cho bc
    min = 10** (a - 1)
        ans = (min + bc - 1) // bc * bc
    tới đây phải kiểm tra đáp án phải nhỏ hơn n chữ số là nhỏ hơn 10** a chữ số thì in ra
'''