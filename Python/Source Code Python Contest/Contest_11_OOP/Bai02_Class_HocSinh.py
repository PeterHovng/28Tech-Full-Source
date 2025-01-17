class Person:
    def __init__(self, name, birth, math, physic, chemistry):
        self.__name = name
        self.__birth = birth
        self.__math = math
        self.__physic = physic
        self.__chemistry = chemistry

    def sum_of_scores(self):
        return self.__math + self.__physic + self.__chemistry

    # Cach 1:
    def display(self):
        print(f"{self.__name} {self.__birth} {self.sum_of_scores():.1f}")

    # Cach 2:
    def __str__(self):
        return f"{self.__name} {self.__birth} {self.sum_of_scores():.1f}"


if __name__ == "__main__":
    fullname = input()
    date_of_birth = input()
    math_score = float(input())
    physic_score = float(input())
    chemistry_score = float(input())

    student = Person(fullname, date_of_birth, math_score, physic_score, chemistry_score)

    # Cach 1:
    student.display()

    # Cach 2:
    print(student)
