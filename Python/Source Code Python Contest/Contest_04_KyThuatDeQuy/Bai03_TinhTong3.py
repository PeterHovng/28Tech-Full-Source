def sum3(n):
    if n == 1:
        return 1
    return n**3 + sum3(n - 1)
    
if __name__ == '__main__':
    n = int(input())
    print(sum3(n))