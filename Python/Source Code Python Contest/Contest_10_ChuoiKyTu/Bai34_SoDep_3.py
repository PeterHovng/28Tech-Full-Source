def is_beaty(n: str):
    checked_increased = True
    checked_decreased = True

    for i in range(len(n) - 1):
        if n[i] > n[i + 1]:
            checked_increased = False
        if n[i] < n[i + 1]:
            checked_decreased = False

    return checked_increased or checked_decreased


if __name__ == "__main__":
    n = input()
    if is_beaty(n):
        print("YES")
    else:
        print("NO")
