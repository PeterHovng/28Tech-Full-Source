# Bài 1: Tần suất xuất hiện của các kí tự trong xâu


def main():
    s = '28tech 28tech fdsa fdsa saaadf'
    # dùng dictionary , counter , mảng đánh dấu
    
    # Cách 1: theo ascii mảng 256 kí tự và chuyển kí tự sang ascii
    cnt = [0] * 256
    for x in s:
        cnt[ord(x)] += 1
    for x in s:
        if cnt[ord(x)] != 0:
            print(x, cnt[ord(x)])
            cnt[ord(x)] = 0
            
    # Cách 2: giải bằng dictionary
    d = {}
    for x in s:
        if x in d:
            d[x] += 1
        else:
            d[x] = 1
    
    for val, freq in d.items():
        print(val, freq)
    print(sorted(d))
    for x in sorted(d):
        print(x, d[x])
    
    # cách 3: dùng couter: from collections import Counter

if __name__ == '__main__':
    main()