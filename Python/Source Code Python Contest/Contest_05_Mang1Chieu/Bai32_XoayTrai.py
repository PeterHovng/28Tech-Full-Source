if __name__ == '__main__':
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    # Calculate effective rotations needed
    k = k % n
    
    # Rotate the array using slicing
    rotated_a = a[k:] + a[:k]
    
    for x in rotated_a:
        print(x, end = ' ')
