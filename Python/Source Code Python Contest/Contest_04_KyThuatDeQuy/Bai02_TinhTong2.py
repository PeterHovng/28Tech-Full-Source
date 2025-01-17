
def sum2(n):
    if n == 1:
        return 1
    return n**2 + sum2(n - 1)

if __name__ == '__main__':
    n = int(input())
    print(sum2(n))
    