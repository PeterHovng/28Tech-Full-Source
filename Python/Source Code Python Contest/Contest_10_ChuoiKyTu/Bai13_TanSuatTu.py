if __name__ == "__main__":
    s = input()
    words = s.split()
    freq_words = {}

    for word in words:
        if word in freq_words:
            freq_words[word] += 1
        else:
            freq_words[word] = 1

    sorted_freq_words = sorted(list(freq_words.items()))

    for word, freq in sorted_freq_words:
        print(word, freq)

    print()

    set_words = set()
    for word in words:
        if word not in set_words:
            print(word, freq_words[word])
            set_words.add(word)
