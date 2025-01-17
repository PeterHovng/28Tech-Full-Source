if __name__ == '__main__':
    n = int(input())
    a = input().split()  # Đọc danh sách ký tự

    target = '28tech'
    target_len = len(target)
    len = 0
    checked = False
    for i in range(0 , n, 2):
        if a[i] == target[len]:
            len += 1
            if len == target_len:
                checked = True
                break
    if checked:
        print('28TECH')
    else:
        print('HCET82')