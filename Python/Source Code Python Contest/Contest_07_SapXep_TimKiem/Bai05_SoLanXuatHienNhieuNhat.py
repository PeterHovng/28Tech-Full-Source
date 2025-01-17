if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    freq, max_freq = 1, 1
    min_val = a[0]
    for i in range(1, n):
        if a[i] == a[i - 1]:
            freq += 1
        else:
            if freq > max_freq:
                max_freq = freq
                min_val = a[i - 1]
            elif freq == max_freq:
                min_val = min(min_val, a[i - 1])
            freq = 1
            
    if freq > max_freq:
        max_freq = freq
        min_val = a[n - 1]
    elif freq == max_freq:
        min_val = min(min_val, a[n - 1])
    print(min_val, max_freq)
