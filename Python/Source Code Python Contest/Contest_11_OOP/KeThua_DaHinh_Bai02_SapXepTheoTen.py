class Person:
    def __init__(self, name, birth, address) -> None:
        self._name = name
        self._birth = birth
        self._address = address
        self._convert_name()
        self._convert_birth()

    def _convert_name(self) -> None:
        self._name = " ".join(word.capitalize() for word in self._name.split())

    def _convert_birth(self) -> None:
        if self._birth[1] == "/":
            self._birth = "0" + self._birth
        if self._birth[4] == "/":
            self._birth = self._birth[0:3] + "0" + self._birth[3:]

    def __str__(self) -> str:
        return f"{self._name} {self._birth} {self._address}"

    def get_sort_key(self) -> str:
        name_parts = self._name.split()
        return name_parts[-1] + " " + (" ".join(name_parts[:-1]))


class Student(Person):
    def __init__(self, id_code, name, birth, address, gpa, id_class) -> None:
        Person.__init__(self, name, birth, address)
        self.__id_code = f"{id_code:04d}"
        self.__gpa = gpa
        self.__id_class = id_class

    def __str__(self) -> str:
        return f"{self.__id_code} {Person.__str__(self)} {self.__id_class} {self.__gpa:.2f}"


def input_students(id_code) -> Student:
    name = input()
    birth = input()
    address = input()
    id_class = input()
    gpa = float(input())
    return Student(id_code, name, birth, address, gpa, id_class)


def sort_students(list_students):
    list_students.sort(key=lambda student: student.get_sort_key())


def main() -> None:
    number_of_students = int(input())
    list_students = []

    for i in range(1, number_of_students + 1):
        student = input_students(i)
        list_students.append(student)

    sort_students(list_students)

    for student in list_students:
        print(student)


if __name__ == "__main__":
    main()
