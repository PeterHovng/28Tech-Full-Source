"""
    - Unpacking:
        + Kỹ thuật giúp tách một tuple, list, iterable,.. thành các biến rời rạc
        + Khi unpacking 
            => Chú ý số lượng phần tử ở bên trái '=' phải bằng số lượng phần tử của iterable bên phải '='
    
        Unpacking với list
    vd:
        a = [1, 2, 3]
        x, y, z = a # gán lần lượt cho x,y,z là các phần tử cho x,y,z (lưu ý là số lượng phần tử của iterable a phải bằng số lượng phần tử được gán)
        print(x,y,z) # 1 2 3
        
        Unpacking với tuple (trường hợp chỉ lấy phần tử cần thiết, có thể dùng biến có tên _ dể bỏ đi những biến không cần thiết)>:
    VD:
        data = ("CR&", "ManUTD", "1983", "BDN")
        name, club, _, _ = data
        print(name, club) # CR& ManUTD
        
        Unpacking với string
    VD:
        s = "CR7"
        a, b, c = s
        print(a, b, c) # C R 7
        
        Unpacking với range
    VD:
        a, b, c = range(0, 5, 2)
        print(a, b, c) # 0 2 4
            
        Unpacking với set  (Đối với set việc unpacking -> dẫn đến 1 thứ tự bất kì vì set không có thứ tự như các iterable ví dụ trên)
    VD:
        my_set = {2, 3, 4}
        a, b, c = my_set
        print(a, b, c) # 2 3 4
        
        Unpacking với for
    VD:
        a = ((1, "one"), (2, "two"), (3, "three"))
        for x, y in a:
            print(x, '->', y)  
            # 1 -> one
            # 2 -> two
            # 3 -> three
            
        Unpacking với toán tử *
        (Trong trường hợp iterable bên phải dấu '=' có quá nhiều phần tử, trong khi đó bạn lại chỉ muốn lấy ra một vài phần tử, khi đó dùng toán tử *)
    VD:
        s = {"hai", "ba", "bon", "nam"}
        a, b, *c = s
        print(a, b) # hai ba
        print(c)  # ['nam', 'bon']
        
"""








