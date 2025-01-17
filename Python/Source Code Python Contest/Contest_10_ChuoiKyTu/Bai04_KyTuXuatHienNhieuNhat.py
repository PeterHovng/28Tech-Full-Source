from collections import Counter
from functools import cmp_to_key

def cmp1(a, b):
    if a[1] != b[1]:
        return b[1] - a[1]
    else:
        if a[0] > b[0]:
            return -1
        else:
            return 1

def cmp2(a, b):
    if a[1] != b[1]:
        return a[1] - b[1]
    else:
        if a[0] > b[0]:
            return -1
        else:
            return 1

def main():
    s = input()
    freq_lst = list(Counter(s).items())
    
    freq_lst.sort(key=cmp_to_key(cmp1))
    print(freq_lst[0][0], freq_lst[0][1])
    freq_lst.sort(key=cmp_to_key(cmp2))
    print(freq_lst[0][0], freq_lst[0][1])
    
if __name__ == "__main__":
    main()