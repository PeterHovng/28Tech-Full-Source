from math import*

def min_space_of_pair(n, a):
    min_val = 10**18
    for i in range(n - 1):
        for j in range(i + 1, n):
            min_val = min(min_val, abs(a[i] - a[j]))
    return min_val

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    ans = min_space_of_pair(n, a)
    print(ans)