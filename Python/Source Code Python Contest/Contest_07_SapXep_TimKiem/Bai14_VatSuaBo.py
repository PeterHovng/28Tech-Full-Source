if __name__ == "__main__":
    n = int(input())
    cows = list(map(int, input().split()))
    cows.sort(reverse=True)
    max_cow_milk = 0
    for i in range(n):
        if cows[i] > i:
            max_cow_milk += cows[i]
        else:
            break
    print(max_cow_milk)
