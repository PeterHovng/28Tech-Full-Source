""" 
    # Cách đếm nhanh gọn hơn để đếm tần suất trong list bằng Counter
    - thêm vào thư viện như sau:
        from collections import Counter
        - nếu ép sang list thì sẽ chuyển thành list các key
            => nếu ép sang list các items thì mỗi phần tử trong list sẽ là tuple (key, value)
        - phải ép thành dict rồi làm bình thường
        - Thứ tự xuất hiện của key trong counter sẽ là thứ tự xuất hiện trong list ban đầu
"""
from collections import Counter

if __name__ == "__main__":
    a = [1, 2, 3, 4, 4, 5, 6, 7, 7, 2, 4, 5, 6, 2, 4, 6, 2, 5, 0, 9, 5, 3]
    b = Counter(a)
    print(b) # Counter({2: 4, 4: 4, 5: 4, 6: 3, 3: 2, 7: 2, 1: 1, 0: 1, 9: 1})
    c = list(b.items())
    print(c) # [(1, 1), (2, 4), (3, 2), (4, 4), (5, 4), (6, 3), (7, 2), (0, 1), (9, 1)]
    d = dict(b.items()) 
    print(d) # # {1: 1, 2: 4, 3: 2, 4: 4, 5: 4, 6: 3, 7: 2, 0: 1, 9: 1}
    e = list(b) 
    print(e) # [1, 2, 3, 4, 5, 6, 7, 0, 9
