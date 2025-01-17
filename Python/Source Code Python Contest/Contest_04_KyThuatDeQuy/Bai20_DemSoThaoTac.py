def count_step(n):
    if n == 1:
        return 0
    tt1, tt2, tt3 = 10 ** 9, 10 ** 9, 10 ** 9
    if n % 2 == 0:
        tt1 =  1 + count_step(n // 2)
    if n % 3 == 0:
        tt2 = 1 + count_step(n // 3)
    if (n > 1):
        tt3 = 1 + count_step(n - 1)
    return min(tt1, tt2, tt3)
    
if __name__ == '__main__':
    n = int(input())
    res = count_step(n)
    print(res)
    