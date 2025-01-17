def GCD(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def coprime(a, b):
    for i in range(a, b):
        for j in range(i + 1, b + 1):
            if GCD(i, j) == 1:
                print('(', i, ',', j, ')', sep = '')

if __name__ == '__main__':
    a, b = map(int, input().split())
    coprime(a, b)