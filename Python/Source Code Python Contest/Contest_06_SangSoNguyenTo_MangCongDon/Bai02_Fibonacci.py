from math import*

F = [0] * (10** 6 + 1)

def init():
    F[0] = 0
    F[1] = 1
    for i in range(2, 10**6 + 1):
        F[i] = F[i - 1] + F[i - 2]
        F[i] %= (10**9 + 7)
        
if __name__ == '__main__':
    init()
    t = int(input())
    for i in range(t):
        n = int(input())
        print(F[n]) # O(1)