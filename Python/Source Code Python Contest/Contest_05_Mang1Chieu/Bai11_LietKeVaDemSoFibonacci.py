Fibo = [0] * 100

def initFibo():
    Fibo[0] = 0
    Fibo[1] = 1
    for i in range(2, 100):
        Fibo[i] = Fibo[i - 1] + Fibo[i - 2]
    
if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    initFibo()
    checked = False
    for x in a:
        if x in Fibo:
            print(x, end = ' ')
            checked = True
    if not checked:
        print('NONE')