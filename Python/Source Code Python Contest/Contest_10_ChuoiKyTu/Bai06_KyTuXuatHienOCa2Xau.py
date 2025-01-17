def difference_two_strings(s1, s2):
    differ_set = set(s1) - set(s2)
    return ''.join(sorted(differ_set))

if __name__ == '__main__':
    s1 = input()
    s2 = input()
    difference_s1 = difference_two_strings(s1, s2)
    difference_s2 = difference_two_strings(s2, s1)
    print(difference_s1, difference_s2, sep = '\n')
    
