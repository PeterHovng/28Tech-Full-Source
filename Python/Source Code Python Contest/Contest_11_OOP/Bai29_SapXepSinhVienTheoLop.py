class Student:
    def __init__(self) -> None:
        self.__ordinal_id = ""
        self.__fullname = ""
        self.__class_id = ""
        self.__email = ""

    def enter_input(self) -> None:
        self.__ordinal_id = input()
        self.__fullname = input()
        self.__class_id = input()
        self.__email = input()

    def get_class_id(self):
        return self.__class_id

    def get_ordinal_id(self):
        return self.__ordinal_id

    def __str__(self) -> str:
        return f"{self.__ordinal_id} {self.__fullname} {self.__class_id} {self.__email}"


def main() -> None:
    number_of_students = int(input())
    list_students = []

    for _ in range(number_of_students):
        student = Student()
        student.enter_input()
        list_students.append(student)

    list_students.sort(key=lambda x: (x.get_class_id(), x.get_ordinal_id()))

    for x in list_students:
        print(x)


if __name__ == "__main__":
    main()
