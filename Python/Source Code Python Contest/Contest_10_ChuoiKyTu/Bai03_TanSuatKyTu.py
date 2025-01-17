def dict_char_freq(s):
    d = {}
    for x in s:
        if x in d:
            d[x] += 1
        else:
            d[x] = 1
    return d


def main():
    s = input()
    char_freq = dict_char_freq(s)

    sorted_char_freq = list(char_freq.items())
    sorted_char_freq.sort()
    
    for val, freq in sorted_char_freq:
        print(val, freq)
        
    print()
    
    for x in s:
        if char_freq[x] != 0:
            print(x, char_freq[x])
            char_freq[x] = 0


if __name__ == "__main__":
    main()
