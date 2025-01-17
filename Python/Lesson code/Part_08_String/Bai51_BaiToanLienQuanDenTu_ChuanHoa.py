""" 
    # dạng 2: tác từ và sắp xếp,...
        + Bài toán tách theo nhiều kí tự khác nhau => gọi là delimiter
"""


if __name__ == '__main__':
    s = "3442,432fds,aaad.fdsa?fdsa"
    # bước 1 là thay thế các kí tự khác thành dấu khoảng cách
    delim = ',.?'
    for x in delim:
        s = s.replace(x, ' ')
    print(s.split()) # 3442 432fds aaad fdsa fdsa
