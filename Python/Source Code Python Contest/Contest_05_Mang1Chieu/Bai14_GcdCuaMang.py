from math import*

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    ans = 0
    for x in a:
        ans = gcd(ans, x)
    print(ans)