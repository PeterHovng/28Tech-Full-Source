def find_elements_in_all_rows(a, n):
    cnt = [0] * 10**6
    for i in range(n):
        for j in range(n):
            if i == 0:
                cnt[a[i][j]] = 1
            else:
                if cnt[a[i][j]] == i:
                    cnt[a[i][j]] = i + 1

    checked = False
    lst_ele_in_rows = []
    for i in range(len(cnt)):
        if cnt[i] == n:
            lst_ele_in_rows.append(i)
            checked = True

    return lst_ele_in_rows, checked


if __name__ == "__main__":
    n = int(input())
    matrix = []
    for _ in range(n):
        row = list(map(int, input().split()))
        matrix.append(row)

    list_ele_in_all_rows, checked = find_elements_in_all_rows(matrix, n)
    if checked:
        print(" ".join(map(str, list_ele_in_all_rows)))
    else:
        print("NOT FOUND")
