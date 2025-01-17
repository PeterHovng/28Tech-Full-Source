def count_char(s):
    alpha, numberic, special = 0, 0, 0
    for x in s:
        if x.isalpha():
            alpha += 1
        elif x.isalnum():
            numberic += 1
        else:
            special += 1
    return [alpha, numberic, special]


def main():
    s = input()
    alpha, numberic, special = count_char(s)
    print(alpha, numberic, special)


if __name__ == "__main__":
    main()
