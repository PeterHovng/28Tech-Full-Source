if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    freq = [0] * 10000001
    for x in a:
        freq[x] += 1
    min_val, max_val = min(a), max(a)
    for i in range(len(freq)):
        if freq[i] != 0:
            print(i, freq[i])            