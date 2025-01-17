def is_beaty(n: str):
    pass
    reversed_num = n[::-1]
    if reversed_num != n:
        return False
    checked = False
    for digit in n:
        if int(digit) == 6:
            checked = True
            break
    return checked

if __name__ == '__main__':
    n = input()
    if is_beaty(n):
        print('YES')
    else:
        print('NO')