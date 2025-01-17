# Cách 1:

def find_increasing_subarrays(n, a):
    max_length = 0
    current_start = 0
    result_subarrays = []
    
    for i in range(1, n):
        if a[i] > a[i - 1]:
            continue
        else:
            current_length = i - current_start
            if current_length > max_length:
                max_length = current_length
                result_subarrays = [a[current_start:i]]
            elif current_length == max_length:
                result_subarrays.append(a[current_start:i])
            current_start = i
    
    # Check for the last subarray
    current_length = n - current_start
    if current_length > max_length:
        max_length = current_length
        result_subarrays = [a[current_start:]]
    elif current_length == max_length:
        result_subarrays.append(a[current_start:])

    return max_length, result_subarrays

if __name__ == '__main__':
    test_cases = int(input())
    for test_case in range(1, test_cases + 1):
        n = int(input())
        a = list(map(int, input().split()))
        max_length, result_subarrays = find_increasing_subarrays(n, a)
        
        print(f"Test #{test_case} :")
        print(max_length)
        for subarray in result_subarrays:
            print(' '.join(map(str, subarray)))

"""  
    # Cách code thứ 2:
def cases(test_case):
    n = int(input())
    a = list(map(int, input().split()))
    
    max_length = 0
    current_length = 1
    start_indices = [0]
    results = []
    
    for i in range(1, n):
        if a[i] > a[i - 1]:
            current_length += 1
        else:
            if current_length > max_length:
                max_length = current_length
                start_indices = [i - current_length]
            elif current_length == max_length:
                start_indices.append(i - current_length)
            current_length = 1
    
    # Final check for the last increasing subarray
    if current_length > max_length:
        max_length = current_length
        start_indices = [n - current_length]
    elif current_length == max_length:
        start_indices.append(n - current_length)
    
    for start in start_indices:
        results.append(a[start:start + max_length])
    
    print(f"Test #{test_case} :")
    print(max_length)
    for subarray in results:
        print(' '.join(map(str, subarray)))


if __name__ == '__main__':
    test = int(input())
    for i in range(1, test + 1):
        cases(i)

"""