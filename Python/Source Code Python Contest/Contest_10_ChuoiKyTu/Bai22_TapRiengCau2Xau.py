if __name__ == '__main__':
    s = input()
    t = input()
    difference = sorted(set(s.lower().split()) - set(t.lower().split()))
    print(' '.join(difference))