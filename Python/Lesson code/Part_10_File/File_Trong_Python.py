"""  
    - Lý thuyết về file trong python:
    1. Hàm open():
        + Để thao tác với file -> mở file lên -> cần tên file và mode mở
        + mode:
            1. r - đọc file
            2. w - ghi file
            3. a - Mở file để ghi tiếp vào CUỐI FILE (appen)
            4. x - tạo file
        + Có thể chỉ rõ đang làm việc với file text hay file nhị phân bằng cách:
            _ thêm "t" (file text) hoặc "b" (file nhị phần) vào 
            CUỐI MODE mở file
        
        VD: f = open("input.txt", "r")
        
        + TH mở file:
            _ File nằm chung thư mục với file .py
    
    2. Đọc file
        + Sau khi mở file => sử dụng hàm read() => để đọc toàn bộ thông tin trong file text
        + Đọc số lượng kí tự mong muốn trong file 
            _ f.read(n)
        + Đọc từng dòng trong file bằng hàm readline (nếu ko có gì như ví dụ => chỉ đọc 1 dòng)
            _ f.readline()
        + Đọc mọi dòng trong file
        
    3. Sau khi đọc file, nên đóng file bằng hàm close():
        + f = open("input.txt", "r")
        print(f.read())
        f.close()
        
    4. Tạo và ghi File
        + Khi mở file với mode "w" và "a" sẽ tạo file mới nếu file chưa tồn tại và làm việc với file cũ nếu nó đã tồn tại
        VD:
            f = open("input.txt", "w")
            f.write("C++")
            f.close()
            f1 = open("input.txt", "r")
            print(f1.read())
            f1.close()
            
    5. Tạo file mới với mode "x", nếu file có tên, đã tồn tại sẽ gây ra lỗi
        => FileExistsError:
        File exists: "file.txt"
    
    6. Để xóa file ta sự dụng hàm remove() của module os
    VD:
        import os
        os.remove("input.txt")
        
    VD: Kiêm tra file tồn tại:
    import os
    if os.path.exists("input.txt"):
        print("Found")
    else:
        print("Not found)
"""

f = open("input.txt", "r")
print(f.read())

