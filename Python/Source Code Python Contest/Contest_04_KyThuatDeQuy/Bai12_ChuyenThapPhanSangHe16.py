def dec_convert_to_hex(n):
    if n != 0:
        dec_convert_to_hex(n // 16)
        digit = n % 16
        if (digit < 10):
            print(digit, end = '')
        else:
            if (digit == 10):
                print('A', end = '')
            if (digit == 11):
                print('B', end = '')
            if (digit == 12):
                print('C', end = '')
            if (digit == 13):
                print('D', end = '')
            if (digit == 14):
                print('E', end = '')
            if (digit == 15):
                print('F', end = '')
                # cách 2 print(chr(digit + 55), end = '') 55 là cộng lại ra mã ascii bắt đầu từ A
    
if __name__ == '__main__':
    n = int(input())
    if n == 0:
        print('0')
    else:
        dec_convert_to_hex(n)