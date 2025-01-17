from math import*

F = [0] * (10** 6 + 1)

def init():
    F[0] = 0
    F[1] = 0
    F[2] = 1
    for i in range(3, 10**6 + 1):
        F[i] = F[i - 1] + F[i - 2] + F[i - 3]
        F[i] %= (10**9 + 7)
        
if __name__ == '__main__':
    init()
    t = int(input())
    for i in range(t):
        n = int(input())
        print(F[n]) # O(1)