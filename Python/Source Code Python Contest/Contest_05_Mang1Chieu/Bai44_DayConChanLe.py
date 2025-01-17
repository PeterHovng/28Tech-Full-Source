def count_even_odd_subarrays(n, a):
    # Khởi tạo dictionary để đếm số lần xuất hiện của mỗi giá trị diff
    prefix_counts = {0: 1}  # diff = 0 xuất hiện một lần ban đầu
    count_even = count_odd = 0  # Biến đếm số lượng số chẵn và số lẻ
    result = 0  # Biến đếm số lượng dãy con thỏa mãn điều kiện

    for i in range(n):
        if a[i] % 2 == 0:
            count_even += 1  # Tăng số lượng số chẵn nếu a[i] là số chẵn
        else:
            count_odd += 1  # Tăng số lượng số lẻ nếu a[i] là số lẻ
        
        diff = count_even - count_odd  # Tính sự khác biệt giữa số chẵn và số lẻ
        
        if diff in prefix_counts:
            result += prefix_counts[diff]  # Thêm số lần xuất hiện của diff vào result
            prefix_counts[diff] += 1  # Tăng giá trị của diff trong prefix_counts
        else:
            prefix_counts[diff] = 1  # Khởi tạo diff với giá trị 1 nếu chưa tồn tại

    return result

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    result = count_even_odd_subarrays(n, a)
    print(result)
