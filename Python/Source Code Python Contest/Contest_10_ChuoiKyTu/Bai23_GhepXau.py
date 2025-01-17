"""  
    # Nếu sắp xếp giảm dần rồi in ra như thế này là sai
    words.sort(reverse=True)
    print(''.join(words))
    VD:
    s = bca bc
    # nếu sắp xếp xong giảm dần:    bcabc
    # lời giải đúng:                bcbca
    
    => phải dùng cmp_to_key làm cho tiêu chí sắp xếp giữa 2 từ với nhau => từ nào có từ điển lớn hơn sắp xếp trước
    """

from functools import cmp_to_key

def cmp(a, b):
    ab = a + b
    ba = b + a
    return (ab < ba) - (ab > ba)

    """  # Cách 2
    if ab > ba:
        return -1
    else:
        return 1
    """


if __name__ == "__main__":
    n = int(input())
    words = input().split()
    words.sort(key= cmp_to_key(cmp))
    print("".join(words))
