if __name__ == "__main__":
    n, s = map(int, input().split())
    MMORPG = []
    for i in range(n):
        rank = list(map(int, input().split()))
        MMORPG.append(rank)
    MMORPG.sort(key=lambda x: (x[0], -x[1]))
    
    cnt = 0
    for power, bonus in MMORPG:
        if s > power:
            s += bonus
            cnt += 1
        else:
            break
    if cnt == len(MMORPG):
        print('YES')
    else:
        print('NO')
    