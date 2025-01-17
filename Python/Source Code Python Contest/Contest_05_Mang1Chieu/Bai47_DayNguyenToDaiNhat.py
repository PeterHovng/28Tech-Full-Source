from math import *

# Cách 1
def sieve(limit):
    prime = [True] * (limit + 1)
    prime[0], prime[1] = False, False
    for i in range(2, isqrt(limit) + 1):
        if prime[i]:
            for j in range(i * i, limit + 1, i):
                prime[j] = False
    return prime


if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    limit = 10**6
    prime = sieve(limit)
    
    len, max_len = 0, 0
    sub_arr, max_sub_arr = [], []
    checked = False
    
    for x in a:
        if prime[x]:
            len += 1
            sub_arr.append(x)
            checked = True
        else:
            if len > max_len:
                max_len = len
                max_sub_arr = sub_arr[:]
            elif len == max_len:
                if sum(sub_arr) > sum(max_sub_arr):
                    max_sub_arr = sub_arr[:]
            # Reset for the next potential sequence
            len = 0
            sub_arr = []
            
    # Final check to handle the last sequence
    if len > max_len:
        max_len = len
        max_sub_arr = sub_arr[:]
    elif len == max_len:
        if sum(sub_arr) > sum(max_sub_arr):
            max_sub_arr = sub_arr[:]
    
    if checked:
        print(max_len)
        for x in max_sub_arr:
            print(x, end = ' ')
    else:
        print('NOT FOUND')

""" 
    # Cách 2 sẽ tối ưu hơn vì tính tổng phần tử trong quá trình a[i] là số nguyên tố và không cần lưu vào list
    from math import isqrt

# Tạo danh sách số nguyên tố
def sieve(limit):
    prime = [True] * (limit + 1)
    prime[0], prime[1] = False, False
    for i in range(2, isqrt(limit) + 1):
        if prime[i]:
            for j in range(i * i, limit + 1, i):
                prime[j] = False
    return prime

if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    limit = 10**6
    prime = sieve(limit)

    max_len = 0
    max_sum = 0
    best_start = -1
    
    current_start = None
    current_len = 0
    current_sum = 0

    for i, value in enumerate(a):
        if prime[value]:
            if current_start is None:
                current_start = i
            current_len += 1
            current_sum += value
        else:
            if current_len > max_len or (current_len == max_len and current_sum > max_sum):
                max_len = current_len
                max_sum = current_sum
                best_start = current_start
            current_start = None
            current_len = 0
            current_sum = 0

    # Final check for the last sequence
    if current_len > max_len or (current_len == max_len and current_sum > max_sum):
        max_len = current_len
        max_sum = current_sum
        best_start = current_start

    if max_len > 0:
        print(max_len)
        print(' '.join(map(str, a[best_start:best_start + max_len])))
    else:
        print('NOT FOUND')

"""