MOD = 1000000007
def binPow(a, b):
    if b == 0:
        return 1
    res = binPow(a, b // 2)
    if b % 2 == 0:
        return ((res % MOD) * (res % MOD)) % MOD
    else:
        return (((((res % MOD) * (res % MOD)) % MOD) % MOD) * (a % MOD)) % MOD

if __name__ == '__main__':
    a, b = map(int, input().split())
    print(binPow(a, b))