def count_pair_of_sum(n, a, k):
    cnt = 0
    for i in range(n - 1):
        for j in range(i + 1, n):
            if a[i] + a[j] == k:
                cnt += 1
    return cnt

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    k = int(input())
    ans = count_pair_of_sum(n, a, k)
    print(ans)