
def maxDigit(n):
    if n < 10:
        return n
    digit = maxDigit(n // 10)
    lc = n % 10
    if digit > lc:
        lc = digit
    return lc

def minDigit(n):
    if n < 10:
        return n
    digit = minDigit(n // 10)
    lc = n % 10
    if digit < lc:
        lc = digit
    return lc

if __name__ == '__main__':
    n = int(input())
    min, max = minDigit(n), maxDigit(n)
    print(max, min)
    