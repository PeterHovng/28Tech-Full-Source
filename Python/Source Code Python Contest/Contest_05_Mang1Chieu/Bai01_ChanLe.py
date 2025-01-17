if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    odd, even, sum_odd, sum_even = 0, 0, 0, 0
    for x in a:
        if x % 2 == 0:
            even += 1
            sum_even += x
        else:
            odd += 1
            sum_odd += x
    print(even, odd, sum_even, sum_odd, sep = '\n')