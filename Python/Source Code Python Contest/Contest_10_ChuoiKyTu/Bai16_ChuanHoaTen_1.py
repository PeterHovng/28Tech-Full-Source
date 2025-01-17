if __name__ == '__main__':
    name = input()
    birth = input()
    
    # convert name
    converted_name = ' '.join(name.title().split())
    print(converted_name)
    
    # C1: convert date of birth
    converted_birth = list(birth)
    if converted_birth[1] == '/':
        converted_birth.insert(0, '0')
    if converted_birth[4] == '/':
        converted_birth.insert(3, '0')
    print(''.join(converted_birth))
    
    # C2 use list slicing
    if birth[1] == '/':
        birth = '0' + birth
    if birth[4] == '/':
        birth = birth[0:3] + '0' + birth[3:]
    print(birth)
    
        