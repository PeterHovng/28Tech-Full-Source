if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    freq = [0] * 10000001
    for x in a:
        freq[x] += 1
    for x in a:
        if freq[x] != 0:
            print(x, freq[x])
            freq[x] = 0