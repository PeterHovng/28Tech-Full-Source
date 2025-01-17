if __name__ == '__main__':
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    plus, minus = k, n - 1 - k
    a[1:] = sorted(a[1:], reverse=True)
    max_expression = a[0]
    for i in range(1, n):
        if plus > 0:
            max_expression += a[i]
            plus -= 1
        else:
            max_expression -= a[i]
    print(max_expression)