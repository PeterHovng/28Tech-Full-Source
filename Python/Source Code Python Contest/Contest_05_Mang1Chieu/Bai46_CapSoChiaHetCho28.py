# Cách 1 dùng mảng đếm tần suất O(N) && ta sử dụng kỹ thuật đếm số dư modulo.

def count_pairs_divisible_by_28(n, a):
    # Khởi tạo mảng đếm số dư
    count = [0] * 28
    
    # Đếm số lượng phần tử cho mỗi dư
    for num in a:
        remainder = num % 28
        count[remainder] += 1
    
    # Tính số lượng cặp
    result = 0
    
    # Xử lý cặp có dư là 0 công thức tính tổ hợp chập 2
    result += (count[0] * (count[0] - 1)) // 2 
    
    # Xử lý cặp có dư từ 1 đến 13: Đối với cặp phần tử có dư i và 28 - i, tổng của chúng sẽ chia hết cho 28
    # Bạn tính số cặp giữa các phần tử có dư i và 28 - i bằng cách nhân số lượng phần tử có dư i với số lượng phần tử có dư 28 - i
    for i in range(1, 14):
        result += count[i] * count[28 - i]
    
    # Xử lý dư 14 (dư 14 cộng với dư 14 sẽ là dư 28, chia hết cho 28)
    result += (count[14] * (count[14] - 1)) // 2
    
    return result

if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    print(count_pairs_divisible_by_28(n, a))
    
""" 
    # Cách 2 thông thường hay dùng 2 for O(N^2) sẽ bị TLE vì chỉ cho time limit là 1s và n lên tới 10^6
def count_pairs_divisible_by_28(n, a):
    count = 0
    for i in range(n):
        for j in range(i + 1, n):
            if (a[i] + a[j]) % 28 == 0:
                count += 1
    return count

if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    print(count_pairs_divisible_by_28(n, a))

"""
