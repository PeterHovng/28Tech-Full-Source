if __name__ == "__main__":
    n = int(input())
    shows = []
    
    for _ in range(n):
        start_time, end_time = map(int, input().split())
        shows.append([start_time, end_time])
        
    shows.sort(key=lambda x: x[1])
    
    max_attend = 1
    end_show = shows[0][1]
    
    for i in range(1, len(shows)):
        if shows[i][0] > end_show:
            max_attend += 1
            end_show = shows[i][1]
    print(max_attend)

"""  
    # Cách 2:
if __name__ == "__main__":
    n = int(input())
    shows = []
    
    # Nhập dữ liệu
    for _ in range(n):
        start_time, end_time = map(int, input().split())
        shows.append([start_time, end_time])
    
    # Sắp xếp theo ngày kết thúc của buổi diễn
    shows.sort(key=lambda x: x[1])
    
    # Khởi tạo số lượng đoàn tối đa có thể tham gia
    max_attend = 0
    end_show = 0
    
    # Xử lý các buổi diễn
    for show in shows:
        start_time, end_time = show
        if start_time > end_show:
            max_attend += 1
            end_show = end_time
    
    # In kết quả
    print(max_attend)

"""