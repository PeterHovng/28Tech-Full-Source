class Person:
    def __init__(self, name, birth, address) -> None:
        self._name = name
        self._birth = birth
        self._address = address
        self._convert_name()
        self._convert_birth()

    def _convert_name(self):
        self._name = ' '.join(word.capitalize() for word in self._name.split())

    def _convert_birth(self):
        if self._birth[1] == "/":
            self._birth = "0" + self._birth
        if self._birth[4] == "/":
            self._birth = self._birth[0:3] + "0" + self._birth[3:]

    def __str__(self):
        return f"{self._name} {self._birth} {self._address}"


class Student(Person):
    def __init__(self, id_code, name, birth, address, gpa, id_class):
        Person.__init__(self, name, birth, address)
        self.__id_code = f"{id_code:04d}"
        self.__gpa = gpa
        self.__id_class = id_class

    def __str__(self):
        return f"{self.__id_code} {Person.__str__(self)} {self.__id_class} {self.__gpa:.2f}"


def input_students(id_code):
    name = input()
    birth = input()
    address = input()
    id_class = input()
    gpa = float(input())
    return Student(id_code, name, birth, address, gpa, id_class)


def main():
    number_of_students = int(input())
    list_students = []

    for i in range(1, number_of_students + 1):
        student = input_students(i)
        list_students.append(student)

    for student in list_students:
        print(student)


if __name__ == "__main__":
    main()


"""  
# Cách 2:
class Person:
    def __init__(self) -> None:
        self._name = ""
        self._birth = ""
        self._address = ""
    
    def _convert_name(self):
        self._name = ' '.join(word.capitalize() for word in self._name.split())
    
    def _convert_birth(self):
        if self._birth[1] == '/':
            self._birth = '0' + self._birth
        if self._birth[4] == '/':
            self._birth = self._birth[0:3] + '0' + self._birth[3:]
            
    def input_person_info(self):
        self._name = input()
        self._birth = input()
        self._address = input()
        self._convert_birth()
        self._convert_name()
        
    def __str__(self):
        return f"{self._name} {self._birth} {self._address}"
    
            
class Student(Person):
    def __init__(self, id_student) -> None:
        super().__init__()
        self.__id_student = f"{id_student:04d}"
        self.__gpa = 0.0
        self.__id_class = ""
        
    def input_students(self):
        super().input_person_info()
        self.__id_class = input()
        self.__gpa = float(input())
        
    def __str__(self):
        return f"{self.__id_student} {Person.__str__(self)} {self.__id_class} {self.__gpa:.2f}"

def main():
    list_students = []
    number_of_students = int(input())
    
    for i in range(1, number_of_students + 1):
        student = Student(i)
        student.input_students()
        list_students.append(student)
        
    for student in list_students:
        print(student)
        
if __name__ == "__main__":
    main()

"""

"""  
Ưu điểm và nhược điểm

Cách 1:
Ưu điểm:

Phương thức _convert_name và _convert_birth được gọi tự động trong __init__, đảm bảo rằng dữ liệu được chuẩn hóa ngay khi khởi tạo.
Dễ dàng bảo trì và mở rộng vì tất cả các thuộc tính và chuyển đổi được quản lý trong __init__.
Cấu trúc mã rõ ràng và dễ hiểu hơn, vì không cần phải nhớ gọi các phương thức chuyển đổi riêng biệt sau khi nhập dữ liệu.

Nhược điểm:

Có thể cần phải điều chỉnh phương thức __init__ nếu có sự thay đổi trong yêu cầu nhập liệu hoặc cấu trúc lớp.

Cách 2:
Ưu điểm:

Có thể linh hoạt hơn trong việc nhập dữ liệu, vì phương thức nhập liệu có thể tùy chỉnh dễ dàng.

Nhược điểm:

Cần phải gọi phương thức chuyển đổi sau khi nhập dữ liệu, dễ quên và gây lỗi.
Có thể cần cập nhật nhiều phần nếu cấu trúc của lớp thay đổi.


Kết luận
Cách 1 là phương pháp thông dụng và được ưa chuộng hơn trong thực tế vì tính rõ ràng và dễ bảo trì. Bằng cách thực hiện các chuyển đổi ngay khi khởi tạo, bạn đảm bảo rằng mọi đối tượng của lớp đều có dữ liệu được chuẩn hóa mà không cần phải gọi các phương thức bổ sung sau đó.

"""