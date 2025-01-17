if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    mod = 10**9 + 7
    sum, multi = 0, 1
    for x in a:
        sum += x 
        sum %= mod
        multi *= x
        multi %= mod
    print(sum, multi, sep = '\n')