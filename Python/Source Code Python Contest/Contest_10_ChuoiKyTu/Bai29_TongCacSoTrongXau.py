# Cách 1
def sum_of_digit_char(s: str):
    sum_digit_char = 0
    current_num = ""
    
    for char in s:
        if not char.isdigit():
            if current_num:
                num = int(current_num)
                sum_digit_char += num
                sum_digit_char
            current_num = ""
        else:
            current_num += char
            
    if current_num:
        num = int(current_num)
        sum_digit_char += num
        
    return sum_digit_char

# Cách 2:
def sum_of_digit_char2(s: str): 
    str_num = ''
    for x in s:
        if x.isalpha():
            str_num += ' '
        else:
            str_num += x
    return sum(list(map(int, str_num.split())))

if __name__ == '__main__':
    s = input()
    sum_digit_char = sum_of_digit_char(s)
    print(sum_digit_char)