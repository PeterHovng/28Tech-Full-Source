def binary_search(arr, left, right, x):
    if left > right:
        return False
    else:
        mid = left + (right - left) // 2
        if arr[mid] == x:
            return True
        elif arr[mid] > x:
            return binary_search(arr, left, mid - 1, x)
        else:
            return binary_search(arr, mid + 1, right, x)
    
if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    x = int(input())
    arr.sort()
    if binary_search(arr, 0, n - 1, x):
        print(1)
    else:
        print(0)