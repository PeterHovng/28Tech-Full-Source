class Person:
    def __init__(self) -> None:
        self._id_code = ""
        self._name = ""
        self._birth = ""
        self._address = ""
        self._id_class = ""

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

    def get_id_class(self):
        return self._id_class

    def set_id_class(self, id_class: str):
        self._id_class = id_class


class Student(Person):
    def __init__(self) -> None:
        super().__init__()
        self.__gpa = 0.0

    def input_info(self) -> None:
        # Nhập thông tin của Student không bao gồm id_code
        super().input_info()
        self.set_id_class(input())
        self.__gpa = float(input())

    def __str__(self) -> str:
        return f"{self._id_code} {self._name} {self._birth} {self._address} {self.get_id_class()} {self.__gpa:.2f}"


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
        self.set_id_class(input())

    def __str__(self) -> str:
        return f"{self._id_code} {self._name} {self._birth} {self._address} {self.__faculty} {self.__salary} {self.get_id_class()}"


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

    search_id_class = input()

    # In danh sách giáo viên
    print(f"DANH SACH GIAO VIEN PHU TRACH LOP {search_id_class} :")
    for teacher in list_teacher:
        if teacher.get_id_class() == search_id_class:
            print(teacher)

    # In danh sách sinh viên
    print(f"DANH SACH SINH VIEN LOP {search_id_class} :")
    for student in list_students:
        if student.get_id_class() == search_id_class:
            print(student)


if __name__ == "__main__":
    main()
