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
    count = 0
    for i in range(2, 10**6 + 1):
        if prime[i]:
            count += 1
        F[i] = count
    t = int(input())
    for i in range(t):
        n = int(input())
        print(F[n]) # O(1)