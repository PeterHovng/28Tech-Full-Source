if __name__ == "__main__":
    s = input()

    count_sub_str = len(s)
    """ 
    # Cách 1: làm thông thường O(N^2)
    for i in range(s):
        for j in range(i + 1, len(s)):
            if s[i] == s[j]:
                count_sub_str += 1
    print(count_sub_str)    
    """
    
    # Cách 2: dùng tổ hợp chập 2 => chọn ra 2 cách trong số tần suất của kí tự O(N)
    """  
    Gợi ý : Muốn có 1 xâu con có đầu cuối giống nhau thì cần 2 ký tự giống nhau 
    => Đếm tần suất mỗi ký tự trong xâu 
    => Tính tổ hợp chập 2 của tần suất sẽ tìm được số xâu con có đầu cuối giống nhau. 
    VD xâu có 5 chữ a thì sẽ có tổ hợp chập 2 của 5 cách chọn 2 kí tự a giống nhau trong 5 kí tự không xét tới thứ tự, 
        mỗi cách chọn chính là 1 xâu con có đầu cuối giống nhau
    """
    cnt = [0] * 256
    for char in s:
        cnt[ord(char)] += 1
    for i in range(256):
        if cnt[i] != 0:
            count_sub_str += (cnt[i]) * (cnt[i] - 1) // 2
    print(count_sub_str)