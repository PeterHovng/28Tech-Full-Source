import math
a, b = map(int, input().split())
ucln = math.factorial(min(a, b))
print(ucln)
'''
Giai thich:
ví du:
8! = 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1
4! =                 4 * 3 * 2 * 1
=> phần ước chung lớn nhất là phần chung của 2 phần => giai thừa của số nhỏ hơn
ko thể tính giai thừa của số xong tìm ước chung lớn nhất vì số giai thừa quá lớn (điều kiện của bài toán).
'''