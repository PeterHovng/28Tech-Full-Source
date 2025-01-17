def count_of_digits(n):
    if n < 10:
        return 1
    return 1 + count_of_digits(n // 10)
    
if __name__ == '__main__':
    n = int(input())
    print(count_of_digits(n))