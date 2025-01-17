def print_subarray_sums(n, a):
    result = []
    for i in range(n):
        sum_val = 0
        for j in range(i, n):
            sum_val += a[j]
            result.append(sum_val)
    print(' '.join(map(str, result)))

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    print_subarray_sums(n, a)
