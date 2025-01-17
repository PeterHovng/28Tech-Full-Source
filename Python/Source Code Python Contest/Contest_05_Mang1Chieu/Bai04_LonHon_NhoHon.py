if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    x = int(input())
    smaller, bigger = 0, 0
    for i in a:
        if i > x: bigger += 1
        elif i < x: smaller += 1
    print(smaller, bigger, sep = '\n')