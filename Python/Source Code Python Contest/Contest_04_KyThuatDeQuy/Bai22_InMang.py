def in_mang_nguoc(arr, n):
    if n >= 1:
        print(arr[n - 1], end = ' ')
        in_mang_nguoc(arr, n - 1)

def in_mang_thuan(arr, n):
    if n >= 1:
        in_mang_thuan(arr, n - 1)
        print(arr[n - 1], end = ' ')
        

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    in_mang_thuan(arr, n)
    print()
    in_mang_nguoc(arr, n)
    