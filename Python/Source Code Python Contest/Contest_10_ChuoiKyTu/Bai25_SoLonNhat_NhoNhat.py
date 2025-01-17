if __name__ == "__main__":
    m, s = map(int, input().split())
    max_num, min_num = [0] * m, [0] * m
    if s > 9 * m or (s == 0 and m > 1):
        print("NOT FOUND")
    else:
        tmp = s
        for i in range(m):
            if s >= 9:
                max_num[i] = 9
                s -= 9
            else:
                max_num[i] = s
                s = 0

        tmp -= 1  # để dành 1 đơn vị cho chữ số đầu tiên
        for i in range(m - 1, 0, -1):
            if tmp >= 9:
                min_num[i] = 9
                tmp -= 9
            else:
                min_num[i] = tmp
                tmp = 0
        min_num[0] = tmp + 1
        print("".join(map(str, min_num)))
        print("".join(map(str, max_num)))
