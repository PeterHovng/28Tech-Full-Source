class Student:
    def __init__(self, ordinal) -> None:
        self.__ordinal = f"SV{ordinal:03d}"
        self.__fullname = ""
        self.__date_of_birth = ""
        self.__class_id = ""
        self.__GPA = 0.0

    def enter_input(self) -> None:
        self.__fullname = input()
        self.__class_id = input()
        self.__date_of_birth = input()
        self.__GPA = float(input())
        self.set_date_of_birth()
        self.set_fullname()

    def set_date_of_birth(self) -> str:
        day, month, year = self.__date_of_birth.split("/")
        if len(day) == 1:
            day = "0" + day
        if len(month) == 1:
            month = "0" + month
        self.__date_of_birth = f"{day}/{month}/{year}"
        
    def set_fullname(self):
        self.__fullname = self.__fullname.title()

    def __str__(self) -> str:
        return f"{self.__ordinal} {self.__fullname} {self.__class_id} {self.__date_of_birth} {self.__GPA:.2f}"


def main() -> None:
    number_of_students = int(input())
    list_students = []

    for i in range(1, number_of_students + 1):
        student = Student(i)
        student.enter_input()
        list_students.append(student)

    for x in list_students:
        print(x)


if __name__ == "__main__":
    main()