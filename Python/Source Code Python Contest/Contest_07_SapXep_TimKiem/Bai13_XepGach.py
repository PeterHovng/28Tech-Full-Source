def max_height(n, a):
    cnt = 1
    hard = a[0]
    for i in range(1, n):
        if hard <= 0:
            break
        cnt += 1
        hard = min(hard - 1, a[i])
    return cnt

if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    a.sort(reverse=True)
    print(max_height(n, a))
