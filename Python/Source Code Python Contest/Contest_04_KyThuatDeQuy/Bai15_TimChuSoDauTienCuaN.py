def the_first_digit(n):
    if n < 10:
        return n
    return the_first_digit(n // 10)
    
if __name__ == '__main__':
    n = int(input())
    print(the_first_digit(n))