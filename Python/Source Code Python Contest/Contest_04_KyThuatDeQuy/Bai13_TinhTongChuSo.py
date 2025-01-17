def sum_of_digits(n):
    if n < 10:
        return n
    digit = n % 10
    return digit + sum_of_digits(n // 10)
    
if __name__ == '__main__':
    n = int(input())
    print(sum_of_digits(n))