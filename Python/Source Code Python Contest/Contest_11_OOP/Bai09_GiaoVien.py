class Person:
    def __init__(self):
        self.__code = ""
        self.__position = ""
        self.__fullname = ""
        self.__salary = 0
        self.__salary_level = 0
        self.__basic_salary = 0

    def enter_input(self):
        self.__code = input()
        self.__position = self.__code[:2]
        self.__salary_level = int(self.__code[-2:])
        self.__fullname = input()
        self.__basic_salary = int(input())

    def calculate_salary(self):
        d = {"HT": 2000000, "HP": 900000, "GV": 500000}
        self.__salary = self.__basic_salary * self.__salary_level + d[self.__position]

    def import_output(self):
        print(self.__code, self.__fullname, self.__salary_level, self.__salary)


def main():
    Teacher = Person()
    Teacher.enter_input()
    Teacher.calculate_salary()
    Teacher.import_output()

if __name__ == "__main__":
    main()
