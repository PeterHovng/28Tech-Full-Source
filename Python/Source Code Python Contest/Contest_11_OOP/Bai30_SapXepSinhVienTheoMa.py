from sys import stdin


class Student:
    def __init__(self, ordinal_id: str, fullname: str, class_id: str, email: str) -> None:
        self.__ordinal_id = ordinal_id
        self.__fullname = fullname
        self.__class_id = class_id
        self.__email = email

    def get_class_id(self) -> str:
        return self.__class_id

    def get_ordinal_id(self) -> str:
        return self.__ordinal_id

    def __str__(self) -> str:
        return f"{self.__ordinal_id} {self.__fullname} {self.__class_id} {self.__email}"


def main() -> None:
    # C1: Read from input with an unknown number of lines
    input_lines = stdin.read().strip().split("\n")

    """ 
    # C2: Read from each line and process
    input_lines = []
    for x in stdin:
        input_lines.append(x[:-1])  # Remove the newline character
    """

    list_students = []

    # Process input lines in chunks of 4
    for i in range(0, len(input_lines), 4):
        ordinal_id = input_lines[i]
        fullname = input_lines[i + 1]
        class_id = input_lines[i + 2]
        email = input_lines[i + 3]

        student = Student(ordinal_id, fullname, class_id, email)
        list_students.append(student)

    # Sort students by class_id and then by ordinal_id
    list_students.sort(key=lambda x: x.get_ordinal_id())

    # Print sorted students
    for student in list_students:
        print(student)


if __name__ == "__main__":
    main()
