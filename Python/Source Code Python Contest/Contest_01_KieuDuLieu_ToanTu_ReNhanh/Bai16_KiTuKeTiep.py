# ham ord() để trả về mã ascii của kí tự
# ham chr() để trả về kí tự của mã ascii
char = input()
if char == 'z' or char == 'Z':
    print('a')
else:
    ascii = ord(char)
    new_char = chr(ascii + 1).lower()
    print(new_char)