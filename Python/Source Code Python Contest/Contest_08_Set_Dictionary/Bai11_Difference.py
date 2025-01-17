if __name__ == "__main__":
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    diff = list(set(a) - set(b)) # set(a).difference(set(b))    
    diff.sort()
    
    for x in diff:
        print(x, end = ' ') 