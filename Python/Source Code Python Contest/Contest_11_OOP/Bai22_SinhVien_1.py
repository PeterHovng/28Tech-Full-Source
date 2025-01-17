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

    def set_date_of_birth(self) -> str:
        day, month, year = self.__date_of_birth.split("/")
        if len(day) == 1:
            day = "0" + day
        if len(month) == 1:
            month = "0" + month
        self.__date_of_birth = f"{day}/{month}/{year}"

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


"""  
    # Cách 2:
class Student:
    def __init__(self, code, fullname, class_id, birth, score) -> None:
        self.__code = code
        self.__fullname = fullname
        self.__date_of_birth = birth
        self.__class_id = class_id
        self.__GPA = score
        
    def __str__(self) -> str:
        return f"{self.__code} {self.__fullname} {self.__class_id} {self.__date_of_birth} {self.__GPA:.2f}"

def enter_input() -> tuple[str, str, str, float]:
    fullname = input()
    class_id = input()
    date_of_birth = input()
    GPA_score = float(input())
    return fullname, class_id, date_of_birth, GPA_score

def set_ordinal(num: int) -> str:
    return f"SV{num:03d}"

def convert_date(date: str) -> str:
    if date[1] == "/":
        date = "0" + date
    if date[4] == "/":
        date = date[0:3] + "0" + date[3:]
    return date

def main() -> None:
    number_of_students = int(input())
    list_students = []
    
    for i in range(1, number_of_students + 1):
        fullname, class_id, date_of_birth, GPA_score = enter_input()
        student_info = Student(set_ordinal(i), fullname, class_id, convert_date(date_of_birth), GPA_score)
        list_students.append(student_info)
        
    for x in list_students:
        print(x)

if __name__ == "__main__":
    main()


"""
