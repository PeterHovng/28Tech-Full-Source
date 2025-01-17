if __name__=='__main__':
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    min_distance = 10**18
    for i in range(1, n):
        # Cách 1 sẽ nhanh hơn
        distance = a[i] - a[i - 1]
        if distance < min_distance:
            min_distance = distance
        # Cách 2: 
        # min_distance = min(min_distance,a[i] - a[i - 1])
    print(min_distance)
