"""  
    # Dạng 3: xử lý số nguyên tốt
    
"""

if __name__ == '__main__':
    #    n = 45646578965131579845646548
    # không nên dùng int để luu mặc dù trong python có thể xử lý => nên dùng string
    s = input()
    sum_digit = 0
    for x in s:
        sum_digit += int(x)
    print(sum_digit)