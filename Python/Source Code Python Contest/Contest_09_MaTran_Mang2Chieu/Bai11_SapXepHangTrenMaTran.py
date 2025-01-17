if  __name__ == '__main__':
    n = int(input())
    matrix = []
    for row in range(n):
        col = list(map(int, input().split()))
        matrix.append(col)
        
    for row in matrix:
        row.sort()
    
    for row in matrix:
        print(' '.join(map(str, row)))
    
    
        