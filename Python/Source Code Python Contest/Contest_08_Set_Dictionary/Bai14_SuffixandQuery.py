if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    Q = int(input())
    
    # Cách 2: tạo trước mảng F là tính ra được từ vị trí l đến cuối dãy sẽ có bao nhiêu phần tử khác nhau bằng set tại mỗi vị trí - duyệt ngược lại từ cuối mảng để cập nhật số lượng tại mỗi vị trí
    F = [0] * n 
    s = set()
    for i in range(n - 1, -1, -1):
        s.add(a[i])
        F[i] = len(s)
    
    for _ in range(Q):
        L = int(input())
        # Cách 1: ở mỗi truy vấn mới tìm ra số phần tử khác nhau O(n^2)
        # L => n - 1
        """ s = set(a[L:])
        print(len(s)) """
        
        # Cách 2: dùng mảng có sẵn để lưu và mỗi truy vấn chỉ mấy O(1) cho việc lấy ra số lượng phần tử khác nhau
        print(F[L])
