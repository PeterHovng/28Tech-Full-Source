if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    min_val, max_val = min(a), max(a)
    size = max_val - min_val + 1
    the_least_num_added = size - len(set(a))
    print(the_least_num_added)

"""  
    # Cách 2:
    min_val, max_val = min(a), max(a)
    cnt = [0] * (10**6 + 1)
    for x in a:
        cnt[x] = 1
    the_least_num_added = 0
    for i in range(min_val, max_val + 1):
        if cnt[i] == 0:
            the_least_num_added += 1
    print(the_least_num_added)
"""