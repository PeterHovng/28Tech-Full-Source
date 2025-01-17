def find_max_same_sub_str(s):
    max_len, sub_len = 1, 1
    max_sub_str, sub_str = s[0], s[0]
        
    for i in range(1, len(s)):
        if s[i] != s[i - 1]:
            if sub_len > max_len:
                max_len = sub_len
                max_sub_str = sub_str
            elif sub_len == max_len:
                max_sub_str = max(max_sub_str, sub_str)
            sub_str = s[i]
            sub_len = 1
        else:
            sub_len += 1
            sub_str += s[i]

    # xử lý kí tự cuối
    if sub_len > max_len:
        max_len = sub_len
        max_sub_str = sub_str
    elif sub_len == max_len:
        max_sub_str = max(max_sub_str, sub_str)
    return max_sub_str


if __name__ == "__main__":
    s = input()
    maximum_same_sub_string = find_max_same_sub_str(s)
    print(maximum_same_sub_string)
