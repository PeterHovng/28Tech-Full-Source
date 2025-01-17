if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    max_val1, max_val2 = -10**18, -10**18
    for x in a:
        if x > max_val1:
            max_val2 = max_val1
            max_val1 = x
        elif x > max_val2:
            max_val2 = x
    print(max_val1, max_val2)