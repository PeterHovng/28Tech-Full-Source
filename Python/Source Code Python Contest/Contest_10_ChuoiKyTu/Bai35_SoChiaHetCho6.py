def is_divisible_by_6(n: str):
    # Số đó phải chia hết cho 2 (tức là chữ số cuối cùng phải là số chẵn).
    if int(n[-1]) % 2 != 0:
        return False
    
    # Số đó phải chia hết cho 3 (tức là tổng các chữ số của nó phải chia hết cho 3).
    sum_of_digits = sum(int(digit) for digit in n)
    if sum_of_digits % 3 != 0:
        return False
    return True

if __name__ == '__main__':
    n = input()
    
    # Cách 1: trong python vì python xử lý số int lớn được
    # checked = True
    # if int(n) % 2 != 0 or int(n) % 3 != 0:
    #     checked = False
    # if checked:
    #     print('YES')
    # else:
    #     print('NO')
        
    # Cách 2: chuẩn
    if is_divisible_by_6(n):
        print('YES')
    else:
        print('NO')