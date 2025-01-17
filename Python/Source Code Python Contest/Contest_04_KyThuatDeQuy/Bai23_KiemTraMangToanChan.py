def check_all_even_element(arr, n):
    if n >= 1:
        if arr[n - 1] % 2 != 0:
            return False
        else:
            return check_all_even_element(arr, n - 1)
    else:
        return True
        
if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    if check_all_even_element(arr, n):
        print('YES')
    else:
        print('NO')