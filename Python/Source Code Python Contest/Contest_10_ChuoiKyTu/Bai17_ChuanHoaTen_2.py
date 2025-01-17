if __name__ == '__main__':
    # fullname = input()
    # converted_fullname = fullname.title().split()
    # name = converted_fullname[-1].upper()
    # middle_name = converted_fullname[:-1]
    
    # converted_fullname_1 = ' '.join(middle_name) + ', ' + name    
    # print(converted_fullname_1)
    
    # converted_fullname_2 = name + ', ' + ' '.join(middle_name)
    # print(converted_fullname_2)
    
    # Cach2:
    s = input()
    a = s.split()
    a[-1] = a[-1].upper()
    for i in range(len(a) - 1):
        a[i] = a[i].title()
    for i in range(len(a) - 1):
        if i != len(a) - 2:
            print(a[i], end = ' ')
        else:
            print(a[i], end = ', ') 
    print(a[-1])
    
    print(a[-1], end = ', ')
    print(' '.join(a[0:-1]))