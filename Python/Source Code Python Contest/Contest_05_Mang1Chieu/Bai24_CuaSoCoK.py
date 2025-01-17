if __name__ == '__main__':
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    for i in range(n - k + 1): # Cách 1: O(n^2)
        sum_val = 0
        for j in range(i, i + k):
            sum_val += a[j]
        print(sum_val, end = ' ')
        # Có thể thay thể cả dòng for trên bằng list slicing O(n^2): print(sum([a[i : i + k]], end = ' '))
        
    # Cách 2 dùng sliding window O(n)
    # sum_val = sum(a[:k])
    # print(sum_val, end = ' ')
    # for i in range(1, n - k + 1):
    #     sum_val = sum_val - a[i - 1] + a[i + k - 1]
    #     print(sum_val, end = ' ')