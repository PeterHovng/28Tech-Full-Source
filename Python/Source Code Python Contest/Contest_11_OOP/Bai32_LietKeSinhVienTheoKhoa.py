class Student:
    def __init__(self) -> None:
        self.__ordinal_id = ""
        self.__fullname = ""
        self.__class_id = ""
        self.__email = ""

    def enter_info(self) -> None:
        self.__ordinal_id = input()
        self.__fullname = input()
        self.__class_id = input()
        self.__email = input()
        self.convert_fullname()

    def convert_fullname(self) -> None:
        self.__fullname = " ".join(word.title() for word in self.__fullname.split())

    def get_academic_year(self) -> str:
        return self.__ordinal_id[:4]

    def __str__(self) -> str:
        return f"{self.__ordinal_id} {self.__fullname} {self.__class_id} {self.__email}"


def main() -> None:
    number_of_students = int(input())
    list_students = []

    for _ in range(number_of_students):
        student = Student()
        student.enter_info()
        list_students.append(student)

    number_of_queries = int(input())

    for _ in range(number_of_queries):
        request_year = input().strip()
        students_in_year = [
            student
            for student in list_students
            if student.get_academic_year() == request_year
        ]

        print(f"DANH SACH SINH VIEN KHOA {request_year} :")
        for student in students_in_year:
            print(student)


if __name__ == "__main__":
    main()
