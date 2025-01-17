if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    d = {}
    for x in a:
        x = abs(x)
        while x != 0:
            digit = x % 10
            if digit in d:
                d[digit] += 1
            else:
                d[digit] = 1
            x //= 10
    b = list(d.items())
    b.sort(key = lambda x : x[0])
    for (val, freq) in b:
        print(val, freq)
            