def combine_max_digit_string1(s: str) -> str:
    current_num = ""
    numbers = []

    for char in s:
        if char.isdigit():
            current_num += char
        else:
            if current_num:
                numbers.append(str(int(current_num)))  # Loại bỏ số 0 đứng đầu
                current_num = ""

    # Xử lý số cuối cùng nếu có
    if current_num:
        numbers.append(str(int(current_num)))

    # Sắp xếp các số theo quy tắc ghép để tạo số lớn nhất
    numbers.sort(key=lambda x: x * 10, reverse=True)

    # Ghép các số lại
    max_digit_str = "".join(numbers)

    return max_digit_str


# Cách 2:
from functools import cmp_to_key


def comp(a, b):
    ab = a + b
    ba = b + a
    if ab > ba:
        return -1
    else:
        return 1


def combine_max_digit_string2(s: str) -> str:
    string_num = ""
    for char in s:
        if char.isalpha():
            string_num += " "
        else:
            string_num += char

    list_num = list(map(int, string_num.split()))
    converted_list_num = list(map(str, list_num))

    # sort to find the largest num
    converted_list_num.sort(key=cmp_to_key(comp))
    return (''.join(converted_list_num))


if __name__ == "__main__":
    s = input()
    # max_digit_string_num = combine_max_digit_string1(s)
    # print(max_digit_string_num)
    max_digit_string_num2 = combine_max_digit_string2(s)
    print(max_digit_string_num2)
