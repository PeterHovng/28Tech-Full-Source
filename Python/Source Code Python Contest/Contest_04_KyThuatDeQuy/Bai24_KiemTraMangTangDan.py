def mang_tang_dan(arr, n):
    if n == 1:
        return True
    else:
        if arr[n - 1] <= arr[n - 2]:
            return False
        else:
            return mang_tang_dan(arr, n - 1)
    
if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    if mang_tang_dan(arr, n):
        print('YES')
    else:
        print('NO')
