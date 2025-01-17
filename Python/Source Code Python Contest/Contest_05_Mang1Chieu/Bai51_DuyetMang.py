

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    
    # duyệt mảng tử trái sang phải
    for x in a:
        print(x, end = ' ')
    print()
    
    # duyệt mảng từ phải sang trái:
    b = a[::-1]
    for x in b:
        print(x, end = ' ')
    print()
    
    # In ra những phần tử ở chỉ số chẵn
    for i in range(n):
        if i % 2 == 0:
            print(a[i], end = ' ')
    print()
    
    # In ra những phần tử ở chỉ số lẻ
    for i in range(n):
        if i % 2 != 0:
            print(a[i], end = ' ')
    print()
    
    """ 
        Tính tổng của N - 1 cặp phần tử đứng cạnh nhau và in ra kết quả (Vòng for này bạn sẽ tính tổng của A[i] và A[i + 1] thì sẽ duyệt i từ 0 tới N - 2, còn nếu tính tổng A[i] và A[i - 1] thì duyệt i từ 1 tới N - 1). Một lưu ý khi duyệt các cặp phần tử đứng cạnh nhau trong mảng là phần tử ở chỉ số i = 0 nếu bạn cố truy cập vào A[i - 1] sẽ truy cập vào chỉ số -1 ko hợp lệ trong mảng có rủi ro về giá trị rác cũng như lỗi runtime. Tương tự khi duyệt i = N - 1 nếu cố truy cập vào A[i + 1] sẽ truy cập vào A[N] là chỉ số ko hợp lệ trong mảng. Đối với C++ thì bạn có thể truy cập vào chỉ số không hợp lệ trong mảng nhưng đây là một lỗi mà bạn cần tự kiểm soát
    """
    # Tính tổng của N - 1 cặp phần tử đứng cạnh nhau và in ra kết quả 
    for i in range(n - 1):
        print(a[i] + a[i + 1], end = ' ')
                    