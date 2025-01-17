char = input()
if char.isalpha():
    if char.isupper():
        new_char = char.lower()
        print(new_char)
    else:
        new_char = char.upper()
        print(new_char)
else:
    print(char)