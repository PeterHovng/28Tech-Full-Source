if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))
    new_array = [x for x in a if x != 28]
    if len(new_array) == 0:
        print('EMPTY')
    else:
        for x in new_array:
            print(x, end = ' ')
    
    # Cách 2 thay vì dùng list comprehesion
    """ 
    while 28 in a:
        a.remove(28)
    for x in a:
        print(x, end = ' ') 
    """
    