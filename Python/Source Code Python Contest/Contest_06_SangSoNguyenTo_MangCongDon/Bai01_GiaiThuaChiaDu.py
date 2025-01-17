from math import*

F = [0] * (10** 6 + 1)

def init():
    F[0] = 1
    for i in range(1, 10**6 + 1):
        F[i] = F[i - 1] * i
        F[i] %= (10**9 + 7)
        
if __name__ == '__main__':
    init()
    t = int(input())
    for i in range(t):
        n = int(input())
        print(F[n]) # O(1)