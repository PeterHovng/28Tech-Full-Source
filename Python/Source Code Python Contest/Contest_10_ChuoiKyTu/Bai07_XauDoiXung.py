if __name__ == '__main__':
    s = input()
    palin_string = ''.join(reversed(s))
    if palin_string == s:
        print('YES')
    else:
        print('NO')