char = input()
if char.isalpha():
    if char.isupper():
        print('UPPER')
    else:
        print('LOWER')
elif char.isdigit():
    print('DIGIT')
else:
    print('SPECIAL')