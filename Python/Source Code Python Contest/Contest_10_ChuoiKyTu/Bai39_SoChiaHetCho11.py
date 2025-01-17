def is_divisble_by_11(n: str):
    sum_of_odd_digit = sum(int(n[i]) for i in range(len(n)) if i % 2 != 0)
    sum_of_even_digit = sum(int(n[i]) for i in range(len(n)) if i % 2 == 0)
    return abs(sum_of_even_digit - sum_of_odd_digit) % 11 == 0

if __name__ == "__main__":
    n = input()
    if is_divisble_by_11(n):
        print("YES")
    else:
        print("NO")
