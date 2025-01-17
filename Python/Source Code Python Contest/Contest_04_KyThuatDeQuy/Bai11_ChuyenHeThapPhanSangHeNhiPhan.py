def dec_convert_to_binary(n):
    if n != 0:
        dec_convert_to_binary(n // 2)
        print(n % 2, end = '')
    

if __name__ == '__main__':
    n = int(input())
    if n == 0:
        print('0')
    else:
        dec_convert_to_binary(n)