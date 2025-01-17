if __name__ == '__main__':
    n = input()
    sum_of_digits = sum(int(char) for char in n)
    print(sum_of_digits)