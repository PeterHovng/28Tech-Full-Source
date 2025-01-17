# cách 1
n = int(input())
factorial = 1
sum = 0
for i in range(1, n + 1):
    factorial *= i
    sum += factorial
print(sum)

'''
- Giải thích cách 1:
    + tổng đó => S(n) = 1! + 2!  + 3!    + .........+ n!
    +            S(n) = 1  + 1*2 + 1*2*3 + ... + 1*2*3*..*n
    B1: duyệt 1 vòng lặp từ 1->n
    B2: qua mỗi i ta tính được giai thừa của i (gọi là factorial), rồi cho vào biến sum.
    B3: cứ tăng i lên thì ta lại có (i - 1)! * i = i! => giai thừa của i hiện tại xong t cộng i! vào sum.
    B3: cuối cùng in ra sum.

- Cách 2 dùng hàm
    import math
n = int(input())
sum = 0
for i in range(1, n + 1):
    sum += math.factorial(i)
print(sum)
'''