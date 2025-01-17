from collections import Counter

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    
    print('Cach 1:')
    # Cách 1: mảng tần suất
    cnt = [0] * 1001
    for x in a:
        cnt[x] += 1
    for x in a:
        if cnt[x] != 0:
            print(x, cnt[x], sep = ' ')
            cnt[x] = 0
            
    print('Cach 2:')
    # Cách 2: dùng dictionary
    d = {}
    for x in a:
        if x in d:
            d[x] += 1
        else:
            d[x] = 1
    freq_arr = list(d.items())
    for val, freq in freq_arr:
        print(val, freq)
        
    print('Cach 3:')
    # Cách 3: dùng Counter từ : from collections import Counter
    freq_array = list(Counter(a).items())
    for val, freq in freq_array:
        print(val, freq)
    
    