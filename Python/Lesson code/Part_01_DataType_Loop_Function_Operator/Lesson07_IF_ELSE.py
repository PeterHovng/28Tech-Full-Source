# Cau truc re nhanh (if - else)
'''
    1/ Cau lenh if : dung kiem tra dieu kien
    - Cac cau lenh ben trong if PHAI THUT LE so voi if
    - Co nhieu cau lenh trong if => CUNG THUT LE NHU V
    - CU PHAP: 
        if condition:
            #code
    exampe:
    if 50 < 100:
        print('YES')
        print('50 is smaller than 10')
    -----------------------------------------------------------    
    - co the ket hop cac toan tu logic and, or, not
    - Neu sai if => cau lenh se khong dc thuc thi
    - Neu condition = True => code ben trong condition se chay
    - Neu condition = False => code ben trong condition se bi bo qua
    - condition: thuong la cac phep so sanh de kiem tra dieu kien va cung co the ket hop nhieu dieu kien qua cac toan tu logic
    - neu trong condition co 2 toan tu and va or => thi nen xem xet lai do uu tien neu de o ngoai khong => khong chay
    
    exampe 2:
    # Kiem tra xem n co nam trong doan [50, 100]
n = 61
if (n >= 50) and (n <= 100):
    print('YES', end = '\n')
    print(n, 'is between [50, 100]', sep = ' ', end = '!\n')
print(sep = '\n')
# Kiem tra xem n la so le hoac so chan
if n % 2 == 0:
    print(n, 'is even number' ,end = '|\n')
if n % 2 != 0:
    print(n, 'is the odd numebr', end = '!\n')    
-------------------------------------------------------------
    
    2/ Cau lenh else
    - Cu phap
    if condition:
        # code if condition is True
    else:
        # code if condition is False

    Example:
    # Kiem tra n chia het cho 3 hoac 5
n = 30
if (n % 3 == 0) or (n % 5 == 0):
    print('YES', end = '!\n')
    print(n)
else:
    print('NO', end = '!\n')
    print(n)
    
    3/ Cau lenh elif
    - su dung duoi if de bo sung them kieu kien de kiem tra
    - Cu phap
    
    if condition1: 
        #code1
    elif condition2:
        #code2:
    ..........
    elif conditionN:
        #codeN
    else:
        #codeElse
        
    4/ Shorthand if
    - Su dung cau lenh if tren 1 dong
    - Cu phap
        + 1 lenh if
    if condition: #code1    
        + n menh de trong 1 if => ngan cach nhau boi dau ';' => khong khuyen khich nhieu cau lenh tren 1 dong
    if condition: #code1; #code2; #code3...; #codeN
    
    5/ Toan tu 3 ngoi
    - Cu phap:
    variable = True stament if conditon else False stament
    
    example:
a, b = 5, 10
res = 'YES' if a > b else 'NO'
print(res)

    6/ if long nhau
    - Khi dieu kien trong if qua phuc tap => dung if long nhau (nested if) => de kiem tra tung dieu kien
    
    
'''
# Kiem tra xem N co nam trong doan tu [20, 30] va chia het it nhat cho 1 so 2, 3, 5, 7 hay khong
n = 25
    # Cach 1
if n >= 20 and n <= 30 and (n % 2 == 0 or n % 3 == 0 or n % 5 == 0  or n % 7 == 0):
    print('YES')
else:
    print('NO')
print(sep = '\n')
    # Cach 2
if n >= 20 and n <= 30:
    if n % 2 == 0 or n % 3 == 0 or n % 5 == 0  or n % 7 == 0:
        print('YES')
    else:
        print('NO')
else:
    print('NO')
    
    # toan tu 3 ngoi so sanh a > b thi gan c = a nguoc lai c = b
a, b = 1, 2
c = a if a> b else b