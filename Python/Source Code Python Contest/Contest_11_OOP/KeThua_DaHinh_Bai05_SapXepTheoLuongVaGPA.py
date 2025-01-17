class Person:
    def __init__(self) -> None:
        self._id_code = ""
        self._name = ""
        self._birth = ""
        self._address = ""

    def __str__(self) -> str:
        return f"{self._id_code} {self._name} {self._birth} {self._address}"

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

    def get_id_code(self):
        return self._id_code


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

    def get_gpa(self) -> float:
        return self.__gpa


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

    def get_salary(self) -> int:
        return self.__salary


def main() -> None:
    num_people = int(input())
    list_students = []
    list_teachers = []

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
            list_teachers.append(person)

    # In danh sách giáo viên giảm dần theo lương, nếu cùng lương thì theo mã tăng dần
    list_teachers.sort(key=lambda teacher: (-teacher.get_salary(), teacher.get_id_code()))

    print("DANH SACH GIAO VIEN :")
    for teacher in list_teachers:
        print(teacher)

    # In danh sách sinh viên
    list_students.sort(key=lambda student: (-student.get_gpa(), student.get_id_code()))

    print("DANH SACH SINH VIEN :")
    for student in list_students:
        print(student)


if __name__ == "__main__":
    main()
