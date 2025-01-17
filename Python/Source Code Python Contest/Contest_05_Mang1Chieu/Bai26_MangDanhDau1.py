if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    marked = [0] * 10000001
    for x in a:
        marked[x] = 1
    cnt = 0
    for x in a:
        if marked[x] == 1:
            cnt += 1 
            marked[x] = 0
    print(cnt)