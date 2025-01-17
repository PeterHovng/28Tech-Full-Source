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
        
    def convert_fullname(self):
        self.__fullname = ' '.join(word.title() for word in self.__fullname.split())

    def get_class_id(self):
        return self.__class_id

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
        request_class = input()
        name_class = [student for student in list_students if student.get_class_id() == request_class]
        
        print(f"DANH SACH SINH VIEN LOP {request_class} :")
        for student in name_class:
            print(student)


if __name__ == "__main__":
    main()
