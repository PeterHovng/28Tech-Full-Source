if __name__ == "__main__":
    n, x = list(map(int, input().split()))
    p = list(map(int, input().split()))
    p.sort(reverse=True)
    min_boats = 0
    l, r = 0, n - 1
    while l <= r:
        if p[l] + p[r] <= x:
            min_boats += 1
            l += 1
            r -= 1
        else:
            min_boats += 1
            l += 1
    print(min_boats)
