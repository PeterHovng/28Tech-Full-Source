# Cách 1
class Person:
    def __init__(self) -> None:
        self._id_code = ""
        self._name = ""
        self._birth = ""
        self._address = ""

    def set_name(self) -> None:
        # Chuyển tên thành chữ hoa chữ đầu và chữ thường các chữ còn lại
        self._name = " ".join(word.capitalize() for word in self._name.split())

    def set_birth(self) -> None:
        # Thêm số 0 vào trước ngày và tháng nếu chúng có một chữ số
        if self._birth[1] == "/":
            self._birth = "0" + self._birth
        if self._birth[4] == "/":
            self._birth = self._birth[0:3] + "0" + self._birth[3:]

    def input_info(self) -> None:
        # Nhập thông tin không bao gồm id_code
        self._name = input()
        self._birth = input()
        self._address = input()
        self.set_birth()
        self.set_name()

    def set_id_code(self, id_code: str) -> None:
        self._id_code = id_code

    def __str__(self) -> str:
        return f"{self._id_code} {self._name} {self._birth} {self._address}"


class Student(Person):
    def __init__(self) -> None:
        super().__init__()
        self.__id_class = ""
        self.__gpa = 0.0

    def input_info(self) -> None:
        # Nhập thông tin của Student không bao gồm id_code
        super().input_info()
        self.__id_class = input()
        self.__gpa = float(input())

    def __str__(self) -> str:
        return f"{self._id_code} {self._name} {self._birth} {self._address} {self.__id_class} {self.__gpa:.2f}"


class Teacher(Person):
    def __init__(self) -> None:
        super().__init__()
        self.__faculty = ""
        self.__salary = 0

    def input_info(self) -> None:
        # Nhập thông tin của Teacher không bao gồm id_code
        super().input_info()
        self.__faculty = input()
        self.__salary = int(input())

    def __str__(self) -> str:
        return f"{self._id_code} {self._name} {self._birth} {self._address} {self.__faculty} {self.__salary}"


def main() -> None:
    num_people = int(input())
    list_students = []
    list_teacher = []

    for _ in range(num_people):
        id_code = input()
        if id_code.startswith("SV"):
            person = Student()
        elif id_code.startswith("GV"):
            person = Teacher()

        person.input_info()
        person.set_id_code(id_code)

        if id_code.startswith("SV"):
            list_students.append(person)
        elif id_code.startswith("GV"):
            list_teacher.append(person)

    # In danh sách giáo viên
    print("DANH SACH GIAO VIEN :")
    for teacher in list_teacher:
        print(teacher)

    # In danh sách sinh viên
    print("DANH SACH SINH VIEN :")
    for student in list_students:
        print(student)


if __name__ == "__main__":
    main()


""" 
# Cách 2:
class Person:
    def __init__(self, id_code, fullname, birth, address) -> None:
        self._id_code = id_code
        self._fullname = fullname
        self._birth = birth
        self._address = address
        self.convert_birth()
        self.convert_name()

    def convert_name(self) -> None:
        self._fullname = ' '.join(word.capitalize() for word in self._fullname.split())

    def convert_birth(self) -> None:
        if self._birth[1] == "/":
            self._birth = "0" + self._birth
        if self._birth[4] == "/":
            self._birth = self._birth[0:3] + "0" + self._birth[3:]

    def __str__(self) -> str:
        return f"{self._id_code} {self._fullname} {self._birth} {self._address}"


class Student(Person):
    def __init__(self, id_code, fullname, birth, address, id_class, gpa) -> None:
        super().__init__(id_code, fullname, birth, address)
        self.__id_class = id_class
        self.__gpa = gpa

    def __str__(self) -> str:
        return f"{super().__str__()} {self.__id_class} {self.__gpa:.2f}"


class Teacher(Person):
    def __init__(self, id_code, fullname, birth, address, faculty, salary) -> None:
        super().__init__(id_code, fullname, birth, address)
        self.__salary = salary
        self.__faculty = faculty

    def __str__(self) -> str:
        return f"{super().__str__()} {self.__faculty} {self.__salary}"


def input_person() -> tuple[str, str, str]:
    fullname = input()
    birth = input()
    address = input()

    return fullname, birth, address


def input_students(id_code) -> Student:
    fullname, birth, address = input_person()
    id_class = input()
    gpa = float(input())

    return Student(id_code, fullname, birth, address, id_class, gpa)


def input_teacher(id_code) -> Teacher:
    fullname, birth, address = input_person()
    faculty = input()
    salary = int(input())

    return Teacher(id_code, fullname, birth, address, faculty, salary)


def main() -> None:
    list_students = []
    list_teachers = []
    student_teacher_count = int(input())

    for _ in range(student_teacher_count):
        id_code = input()

        if id_code.startswith("SV"):
            student = input_students(id_code)
            list_students.append(student)
        elif id_code.startswith("GV"):
            teacher = input_teacher(id_code)
            list_teachers.append(teacher)

    print("DANH SACH GIAO VIEN :")
    for teacher in list_teachers:
        print(teacher)

    print("DANH SACH SINH VIEN :")
    for student in list_students:
        print(student)


if __name__ == "__main__":
    main()
"""

"""  
# Cách 3:

class Person:
    def __init__(self) -> None:
        self._id_code = ""
        self._name = ""
        self._birth = ""
        self._address = ""

    def set_name(self) -> None:
        # Chuyển tên thành chữ hoa chữ đầu và chữ thường các chữ còn lại
        self._name = ' '.join(word.capitalize() for word in self._name.split())

    def set_birth(self) -> None:
        # Thêm số 0 vào trước ngày và tháng nếu chúng có một chữ số
        if self._birth[1] == '/':
            self._birth = '0' + self._birth
        if self._birth[4] == '/':
            self._birth = self._birth[0:3] + '0' + self._birth[3:]

    def input_info(self) -> None:
        # Nhập thông tin không bao gồm id_code
        self._name = input()
        self._birth = input()
        self._address = input()
        self.set_birth()
        self.set_name()

    def set_id_code(self, id_code: str) -> None:
        self._id_code = id_code

    def __str__(self) -> str:
        return f"{self._id_code} {self._name} {self._birth} {self._address}"

class Student(Person):
    def __init__(self) -> None:
        super().__init__()
        self.__id_class = ""
        self.__gpa = 0.0

    def input_info(self) -> None:
        # Nhập thông tin của Student không bao gồm id_code
        super().input_info()
        self.__id_class = input()
        self.__gpa = float(input())

    def __str__(self) -> str:
        return f"{self._id_code} {self._name} {self._birth} {self._address} {self.__id_class} {self.__gpa:.2f}"

class Teacher(Person):
    def __init__(self) -> None:
        super().__init__()
        self.__faculty = ""
        self.__salary = 0

    def input_info(self) -> None:
        # Nhập thông tin của Teacher không bao gồm id_code
        super().input_info()
        self.__faculty = input()
        self.__salary = int(input())

    def __str__(self) -> str:
        return f"{self._id_code} {self._name} {self._birth} {self._address} {self.__faculty} {self.__salary}"

def main() -> None:
    num_people = int(input())
    students = []
    teachers = []

    for _ in range(num_people):
        id_code = input()
        if id_code.startswith("SV"):
            student = Student()
            student.set_id_code(id_code)  # Thiết lập id_code cho Student
            student.input_info()
            students.append(student)
        elif id_code.startswith("GV"):
            teacher = Teacher()
            teacher.set_id_code(id_code)  # Thiết lập id_code cho Teacher
            teacher.input_info()
            teachers.append(teacher)

    # In danh sách giáo viên
    print("DANH SACH GIAO VIEN :")
    for teacher in teachers:
        print(teacher)

    # In danh sách sinh viên
    print("DANH SACH SINH VIEN :")
    for student in students:
        print(student)

if __name__ == "__main__":
    main()

"""
