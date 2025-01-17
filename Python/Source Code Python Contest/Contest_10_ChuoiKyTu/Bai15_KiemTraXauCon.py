if __name__ == "__main__":
    s = input()
    t = input()
    if t in s: # hoặc dùng s.find(t) != -1
        print("YES")
    else:
        print("NO")
