def print_len_sub_arr(a):
    for x in a:
        print(x, end=" ")
    print()

if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))

    len_one_sub_arr = []
    len_zero_sub_arr = []

    count = 1
    for i in range(1, n):
        if a[i] == a[i-1]:
            count += 1
        else:
            if a[i-1] == 1:
                len_one_sub_arr.append(count)
            else:
                len_zero_sub_arr.append(count)
            count = 1

    # Adding the last segment
    if a[-1] == 1:
        len_one_sub_arr.append(count)
    else:
        len_zero_sub_arr.append(count)

    print_len_sub_arr(len_one_sub_arr)
    print_len_sub_arr(len_zero_sub_arr)
