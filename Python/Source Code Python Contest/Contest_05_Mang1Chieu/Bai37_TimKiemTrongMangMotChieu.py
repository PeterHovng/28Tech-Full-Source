if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    tests = int(input())
    freq = [0] * 10**7
    for x in a:
        if freq[x] != 0:
            freq[x] += 1
        else:
            freq[x] = 1
    for case in range(tests):
        x = int(input())
        if freq[x] != 0:
            print('YES')
        else:
            print('NO')