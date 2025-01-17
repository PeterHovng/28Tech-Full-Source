if __name__ == '__main__':
    s = input()
    words = s.split()
    set_rev_words = set()
    rev_words = []
    
    for word in words:
        if word == word[::-1] and word not in set_rev_words:
            rev_words.append(word)
            set_rev_words.add(word)
    
    sorted_rev_words = sorted(rev_words, key=lambda x: len(x))
    print(' '.join(sorted_rev_words))
