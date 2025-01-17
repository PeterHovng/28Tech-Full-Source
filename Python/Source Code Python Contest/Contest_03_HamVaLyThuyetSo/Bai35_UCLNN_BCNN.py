def GCD(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def LCM(a, b):
    return a * b //  GCD(a, b)

if __name__ == '__main__':
    a, b = map(int, input().split())
    UCLN = GCD(a, b)
    BCNN = LCM(a, b)
    print(UCLN, BCNN)