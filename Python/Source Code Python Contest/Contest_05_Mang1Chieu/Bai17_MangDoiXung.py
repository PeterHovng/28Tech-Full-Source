def is_palinedrome(a):
    l, r = 0, len(a) - 1
    while l <= r:
        if a[l] != a[r]:
            return False
        l += 1
        r -= 1
    return True

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    # if is_palinedrome(a):
    #     print('YES')
    # else:
    #     print('NO')
    b = a[:]
    a.reverse()
    if (a == b):
        print('YES')
    else:
        print('NO')