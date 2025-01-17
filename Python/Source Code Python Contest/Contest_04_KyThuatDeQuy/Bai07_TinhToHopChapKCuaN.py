
def nCk(n, k):
    if k == 0 or k == n:
        return 1
    return nCk(n - 1, k - 1) + nCk(n - 1 , k)

if __name__ == '__main__':
    n, k = map(int, input().split())
    print(nCk(n, k))