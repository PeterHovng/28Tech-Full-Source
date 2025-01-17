def sum_sub_array(a, k):
    for i in range(n - k + 1):
        sum_val = 0
        for j in range(i, i + k):
            sum_val += a[j]
        print(sum_val, end = ' ')

def sum_sliding_window(a, k):
    sum_val = sum(a[:k])
    print(sum_val, end = ' ')
    for i in range(1, n - k + 1):
        sum_val = sum_val - a[i - 1] + a[i + k - 1]
        print(sum_val, end = ' ')
    

if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    k = 2
    while k <= 4:
        # Cách 1 đơn giản O(N^2)
        #sum_sub_array(a, k)
        # Cách 2 sliding window O(N)
        sum_sliding_window(a, k)
        k += 1
        print()
    
        
