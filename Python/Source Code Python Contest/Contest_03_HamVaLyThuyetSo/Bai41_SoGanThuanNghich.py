
def is_almost_palindrome(n):
    rev = 0
    temp = n
    while temp != 0:
        digit = temp % 10
        rev = rev * 10 + digit
        temp //= 10
    return rev == n

def is_beautiful(n):
    last = n % 10
    temp = 0
    n //= 10
    while n >= 10:
        temp = temp * 10 + n % 10
        n //= 10
    first = n
    if ((last * 2 == first) or (first * 2 == last)) and is_almost_palindrome(temp) :
        return True
    return False
    

if __name__ == '__main__':
    n = int(input())
    if (is_beautiful(n)):
        print('YES')
    else:
        print('NO')