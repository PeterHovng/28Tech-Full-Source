def convert_str(s):
    upper_str = [x.upper() for x in s]
    lower_str = [x.lower() for x in s]

    return [upper_str, lower_str]


def main():
    s = input()
    upper_string, lower_string = convert_str(s)
    print(''.join(upper_string))
    print(''.join(lower_string))


if __name__ == "__main__":
    main()
