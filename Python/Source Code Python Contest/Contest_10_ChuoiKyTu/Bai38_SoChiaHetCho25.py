def is_divisble_by_25(n: str):
    tens_digit = n[-2:]
    return tens_digit == "00" or int(tens_digit) % 25 == 0


if __name__ == "__main__":
    n = input()
    if is_divisble_by_25(n):
        print("YES")
    else:
        print("NO")
