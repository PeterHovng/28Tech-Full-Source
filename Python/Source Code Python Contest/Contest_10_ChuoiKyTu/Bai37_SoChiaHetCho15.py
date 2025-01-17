def is_divisble_by_15(n: str):
    # Số đó phải chia hết cho 5 (tức là chữ số cuối cùng của nó phải là 0 hoặc 5).
    last_digit = int(n[-1])
    divided_by_5 = {0, 5}
    if last_digit not in divided_by_5:
        return False
    
    # Số đó phải chia hết cho 3 (tức là tổng các chữ số của nó phải chia hết cho 3).
    sum_of_digits = sum(int(digit) for digit in n)
    return sum_of_digits % 3 == 0
    

if __name__ == '__main__':
    n = input()
    # 1 số chia hết cho 15 khi nó chia hết cho cả 3 và 5
    if is_divisble_by_15(n):
        print("YES")
    else:
        print("NO")