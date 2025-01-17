"""
    Project: Random password generator
"""

import string
import random

LETTERS = string.ascii_letters
# print(LETTERS)  # abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ

NUMBERS = string.digits
# print(NUMBERS)  # 0123456789

PUNCTUATION = string.punctuation
# print(PUNCTUATION)  # \output: !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~


def get_password_length():
    password_length = input("how long do you want your password: ")
    return int(password_length)


def password_generator(length=8):
    printable = f"{LETTERS}{NUMBERS}{NUMBERS}"

    printable = list(printable)
    # sử dụng hàm radom để suffle: đảo trộn
    random.shuffle(printable)

    random_password = random.choices(printable, k=length)
    # chọn ngẫu nhiên xong nối lấy với nhau thành 1 chuỗi dùng hàm join
    random_password = "".join(random_password)

    return random_password


def main():
    password_length = get_password_length()
    password = password_generator(password_length)
    print(password)


if __name__ == "__main__":
    main()
