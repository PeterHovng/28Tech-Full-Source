if __name__ == '__main__':
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    # Calculate effective rotations needed
    k = k % n
    
    # Rotate the array using slicing
    rotated_a = a[-k:] + a[:-k]
    
    for x in rotated_a:
        print(x, end = ' ')
""" 
    Cách 2:
    if __name__ == '__main__':
    n, k = map(int, input().split())  # Read n (length of list) and k (number of rotations)
    a = list(map(int, input().split()))  # Read the list of integers
    
    # Calculate effective rotations needed
    k = k % n  # In case k is greater than n, this reduces unnecessary full rotations
    
    # Rotate the array using slicing with len(a) - k
    rotated_a = a[len(a) - k:] + a[:len(a) - k]  # Rotate the list to the right by k positions
    
    # Print the rotated list
    for x in rotated_a:
        print(x, end=' ')
"""