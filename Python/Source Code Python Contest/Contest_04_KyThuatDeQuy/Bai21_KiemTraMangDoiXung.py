def KtDoiXung(a, left, right):
    # xét hết tất cả các cặp left right
    if left >= right:
        return True
    else:
        if a[left] != a[right]:
            return False
        else:
            return KtDoiXung(a, left + 1, right - 1)
    

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    if KtDoiXung(a, 0, n - 1):
        print('YES')
    else:
        print('NO')