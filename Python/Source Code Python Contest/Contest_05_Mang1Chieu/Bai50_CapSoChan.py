if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    count_pair = 0
    
    # Cách 1: sẽ bị TLE  vì O(N^2)
    for i in range(n - 1):
        for j in range(i + 1, n):
            if (a[i] + a[j]) % 2 == 0:
                count_pair += 1
    print(count_pair) 
    
    
    # cách 2: dùng công thức tổng hợp để tìm ra số cặp => chọn ra 2 trong số tổng phần tử
    # có 2 cách để đếm: số cặp trong tập hợp số chẵn (chẵn + chẵn => chẵn) và số cặp trong tập hợp số lẽ (lẻ + lẻ = chẵn)
    count_even, count_odd = 0, 0
    for x in a:
        if x % 2 == 0:
            count_even += 1
        else:
            count_odd += 1
    count_pair = (count_even * (count_even - 1)) // 2 + (count_odd * (count_odd - 1)) // 2
    print(count_pair)
    
    # Cách 3: Không dùng tổ hợp mà có thể trực tiếp đếm số cặp bằng cách sử dụng một vòng lặp đơn giản hơn.
    count_even = 0
    count_odd = 0
    
    # Đếm số lượng số chẵn và số lẻ
    for num in a:
        if num % 2 == 0:
            count_even += 1
        else:
            count_odd += 1
    
    # Tính số cặp có thể tạo ra từ các số chẵn
    count_pair_even = 0
    for i in range(count_even):
        count_pair_even += i
    
    # Tính số cặp có thể tạo ra từ các số lẻ
    count_pair_odd = 0
    for i in range(count_odd):
        count_pair_odd += i
    
    # Tổng số cặp là tổng của hai giá trị trên
    count_pair = count_pair_even + count_pair_odd
    
    print(count_pair)