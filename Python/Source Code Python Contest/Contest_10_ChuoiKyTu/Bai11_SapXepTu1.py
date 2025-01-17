if __name__ == '__main__':
    s = input()
    sorted_s1 = sorted(s.split())
    print(' '.join(sorted_s1))
    sorted_s2 = sorted(s.split(), key=lambda x : (len(x), x))
    print(' '.join(sorted_s2))
    