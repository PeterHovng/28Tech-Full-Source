from math import*
# stable
"""  
    1. sort() của list:
        - Được cài đặt bằng thuật toán tim sort
            + best: O(n)
            + average: O(nlogn)
            + worst: O(nlogn)
            + space O(n)
        - có tính ổn định (stable)
        - Sự kết hợp giữa merge sort và insertion sort
        - mặc định sort -> tăng dần:
            + về số 
            + thứ tự từ điển của xâu kí tự
        - cú pháp:
            sort(key = ..., reverse = ...)
            + key: hàm được sử dụng để làm tiêu chí sắp xếp 
            + Nếu reverse = True => sắp xếp theo thứ tự ngược
        - Hàm này không trả về giá trị nào mà thay đổi list
        VD:
            a = [3, -1, 5, 4, -2]
            a.sort()
            print(a)
            # sort(key = ..., reverse = ...)
            a.sort(reverse = True) # khi reverse = True => sắp xếp giảm dần
            print(a)
            # hàm key là sắp xếp theo yêu cầu bài toán bằng 1 hàm
            a.sort(key = abs) # sắp xếp theo tiêu chí trị tuyệt đối tăng dần
            print(a)
            
            VD2:
                def sum_digits(n):
                    sum = 0
                    while n != 0:
                        digit = n % 10
                        sum += digit
                        n //= 10
                    return sum

                if __name__ == '__main__':
                    b = [134, 221, 344, 234, 232, 1654]
                    # sắp xếp theo tổng chứ số tăng dần
                    b.sort(key = sum_digits)
                    print(b)
                    # Câu hỏi đặt ra là thứ phần tử có cùng chữ số => vì thuật toán sử dụng là tim sort -> tính stable
                    # nghĩa là khi sắp xếp các phần tử có cùng tiêu chí => giữ nguyên vị trí tương đối giữa các phần tử đó (nghĩa là phần tử nào đứng trước - đứng sau theo mảng ban đầu)
                    
        - sort với lamda
            + VD:
                b = [-134, 221, -344, 234, 232, -1654]
                b.sort(key = lambda x : abs(x))
                print(b) # [-134, 221, 232, 234, -344, -1654]
                
            + VD2:
                a = [['28tech', 5000], ['HOANG VAN THU', 200], [['28tech'], 400]]
                a.sort(key = lambda x : x[1]) # này là sắp xếp theo tiêu chí phần tử thứ 2 tăng dần trong list
                print(a)
                a.sort(key = lambda x : -x[1]) # này là sắp xếp theo tiêu chí phần tử thứ 2 giảm dần trong list
                print(a)
                a.sort(key = lambda x : x[0]) # TypeError: '<' not supported between instances of 'list' and 'str
                print(a)
                
        - kết hợp hàm sort với itemgetter() và attrgetter() từ module operator
        VD:
            from operator import itemgetter

            if __name__ == '__main__':
                a = [['28tech', 5000], ['HOANG VAN THU', 200], ['28tech', 400]]
                a.sort(key = itemgetter(1)) # phải import operator như sau: from operator import itemgetter
                print(a) # [['HOANG VAN THU', 200], ['28tech', 400], ['28tech', 5000]]
                # sắp xếp với nhiều tiêu chí
                a.sort(key = itemgetter(0, 1)) # sắp xếp tăng dần theo tiêu chí phần tử đầu, phần tử thứ hai
                print(a) # [['28tech', 400], ['28tech', 5000], ['HOANG VAN THU', 200]]
                
    - có thể sort list, tuple, range, str,.. bằng hàm built-in sorted
        + hàm này không làm thay đổi iterable mà bạn truyền vào làm đối số
        + trả về 1 list khác đã được sắp xếp tương ứng với iterable truyền vào
        + cách sử dụng không khác gì với hàm sort ở tham số key và reverse
"""

if __name__ == '__main__':
    a = (1, 5, 2, 3, 6)
    b = sorted(a)
    print(a)
    print(b)