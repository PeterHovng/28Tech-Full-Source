if __name__ == "__main__":
    s = input()
    words = s.split()

    freq_words = {}
    for word in words:
        if word in freq_words:
            freq_words[word] += 1
        else:
            freq_words[word] = 1

    min_freq, max_freq = 10**18, 0
    min_word, max_word = " ", " "

    for word, freq in sorted(freq_words.items()):
        if freq >= max_freq:
            max_word, max_freq = word, freq

        if freq <= min_freq:
            min_word, min_freq = word, freq

    print(max_word, max_freq)
    print(min_word, min_freq)
