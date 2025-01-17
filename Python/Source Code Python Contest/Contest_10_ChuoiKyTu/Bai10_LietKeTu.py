if __name__ == '__main__':
    s = input()
    
    words = s.split()
    set_word = set(words)
    increase_str = sorted(set_word)
    
    print(' '.join(increase_str))
    
    for word in words:
        if word in set_word:
            print(word, end = ' ')
            set_word.discard(word)
            