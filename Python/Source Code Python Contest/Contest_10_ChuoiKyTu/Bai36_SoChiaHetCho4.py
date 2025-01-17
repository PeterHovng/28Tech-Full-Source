def is_divible_by_4(n: str):
    if len(n) == 1:
        return int(n) % 4 == 0
    else:
        return int(n[-2:]) % 4 == 0 

if __name__ == "__main__":
    n = input()
    """ 
    Kiểm tra xem một số nguyên không âm N có chia hết cho 4 hay không, 
    số chia hết cho 4 là số có nhiều hơn 1 chữ số 
    mà có 2 chữ số tận cùng chia hết cho 4 
    hoặc là số có 1 chữ số chia hết cho 4.
    """
    if is_divible_by_4(n):
        print('YES')
    else:
        print('NO')