if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    # Cách này dùng mảng đánh dấu
    cnt = [0] * 1001
    for x in a:
        if not cnt[x]:
            print(x, end = ' ')
            cnt[x] = 1
    
"""
    Cách duyệt trâu: 2 for O(N^2)
    for i in range(n):
        checked = True
        for j in range(i):
            if a[i] == a[j]:
                checked = False
                break
        if checked:
            print(a[i], end = ' ')
""" 