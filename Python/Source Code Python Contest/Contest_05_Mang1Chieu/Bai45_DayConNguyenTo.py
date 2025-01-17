from math import*
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

if __name__=='__main__':
    n = int(input())
    a = list(map(int, input().split()))
    
    k, count = n, 0
    
    # Cách 1: dùng kĩ thuật sliding window nhưng phúc tạp hơn
    while k != 0:
        sum_val = sum(a[:k])
        if is_prime(sum_val):
            count += 1
        for i in range(1, n - k + 1):
            sum_val = sum_val - a[i - 1] + a[i + k -1]
            if is_prime(sum_val):
                count += 1
        k -= 1
        
    # Cách 2: tối ưu và đơn giản hơn vì chỉ cần duyệt qua tất cả dãy con tính tổng bình thường với O(N^2)
    """  
    # Duyệt qua tất cả các dãy con
    for start in range(n):
        sum_val = 0
        for end in range(start, n):
            sum_val += a[end]
            if is_prime(sum_val):
                count += 1
    """
    print(count)
    