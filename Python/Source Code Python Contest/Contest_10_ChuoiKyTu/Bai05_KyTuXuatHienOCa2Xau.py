def intersection_two_strings(s1, s2):
    # Chuyển đổi xâu thành tập hợp các ký tự và tìm giao điểm
    intersect_set = set(s1) & set(s2)
    # Trả về danh sách đã sắp xếp
    return ''.join(sorted(intersect_set))

def union_two_strings(s1, s2):
    # Chuyển đổi xâu thành tập hợp các ký tự và tìm hợp nhất
    union_set = set(s1) | set(s2)
    # Trả về danh sách đã sắp xếp
    return ''.join(sorted(union_set))

if __name__ == '__main__':
    s1 = input()
    s2 = input()
    
    # Tìm các ký tự xuất hiện ở cả hai xâu
    intersection_chars = intersection_two_strings(s1, s2)
    print(intersection_chars)
    
    # Tìm các ký tự xuất hiện ở ít nhất một trong hai xâu
    union_chars = union_two_strings(s1, s2)
    print(union_chars)
