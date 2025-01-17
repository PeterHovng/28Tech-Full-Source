if __name__ == "__main__":
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    symmetric_diff = list(set(a) ^ set(b)) # list(set(a).symmetric_difference(set(b)))
    symmetric_diff.sort()
    for x in symmetric_diff:
        print(x, end = ' ') 