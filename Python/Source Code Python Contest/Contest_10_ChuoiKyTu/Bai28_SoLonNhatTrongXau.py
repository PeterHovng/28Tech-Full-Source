# Cách 1:
def find_largest_number(s: str):
    max_num = -1
    current_num = ""
    for char in s:
        if not char.isdigit():
            if current_num:
                num = int(current_num)
                max_num = max(max_num, num)
            current_num = ""
        else:
            current_num += char
            
    if current_num:
        num = int(current_num)
        max_num = max(max_num, num)
    return max_num

# Cách 2:
def find_largest_number2(s: str): 
    str_num = ''
    for x in s:
        if x.isalpha():
            str_num += ' '
        else:
            str_num += x
    return list(map(int, str_num.split()))

if __name__ == '__main__':
    s = input()
    maximium_number = find_largest_number(s)
    print(maximium_number)