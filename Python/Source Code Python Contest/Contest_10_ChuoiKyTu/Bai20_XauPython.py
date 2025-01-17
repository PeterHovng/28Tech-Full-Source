if __name__ == '__main__':
    s = input()
    target = "python"
    index = 0
    for char in s:
        if char == target[index]:
            index += 1
        if  index == len(target):
            break
    if index == len(target):
        print("YES")
    else:
        print("NO")