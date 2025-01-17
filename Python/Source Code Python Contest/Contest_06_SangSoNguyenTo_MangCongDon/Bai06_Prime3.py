from math import*

prime = [True] * (10**6 + 1)

def sieve():
    prime[0], prime[1] = False, False
    for i in range(2, isqrt(10**6) + 1):
        # Kiểm tra i là số nguyên tố => loại bỏ bội của i
        if prime[i]:
            # Duyệt bội từ i * i chứ đừng 2*i vì đã bị loại bởi các bội trước đó rồi
            for j in range(i * i, 10**6 + 1, i):
                prime[j] = False
                
if __name__ == '__main__':
    sieve()
    F = [0] * (10**6 + 1)
    F[0], F[1] = 0, 0
    F[2] = 2
    
    for i in range(3, 10**6 + 1):
        if prime[i]:
            F[i] = F[i - 1] * i
        else:
            F[i] = F[i - 1]
        F[i] %= (10**9 + 7)
        
    t = int(input())
    for i in range(t):
        n = int(input())
        print(F[n])