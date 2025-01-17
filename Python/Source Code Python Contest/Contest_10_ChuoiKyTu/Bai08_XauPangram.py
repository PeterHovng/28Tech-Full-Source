import string


def is_pangram(s): # Cách 1: phải import hàm string
    s = s.lower()
    char_set = set(s)
    alphabet_set = set(string.ascii_lowercase)
    return char_set == alphabet_set

def check_pangram(s): # Cách 2: không cần import hàm string
    pangram = set([char.lower() for char in s if char.isalpha()])
    return len(pangram) == 26

if __name__ == "__main__":
    s = input()
    if check_pangram(s):
    # if is_pangram(s):
        print("YES")
    else:
        print("NO")
