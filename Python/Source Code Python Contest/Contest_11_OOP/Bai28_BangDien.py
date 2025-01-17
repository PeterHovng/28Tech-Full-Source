class Student:
    def __init__(self, ordinal: str) -> None:
        self.__id_student = f"HS{ordinal:02d}"
        self.__full_name = ""
        self.__math = 0.0
        self.__vietnameese = 0.0
        self.__english = 0.0
        self.__physics = 0.0
        self.__chemistry = 0.0
        self.__biology = 0.0
        self.__history = 0.0
        self.__geography = 0.0
        self.__civics = 0.0
        self.__technology = 0.0

    def enter_info(self) -> None:
        self.__full_name = input()
        (
            self.__math,
            self.__vietnameese,
            self.__english,
            self.__physics,
            self.__chemistry,
            self.__biology,
            self.__history,
            self.__geography,
            self.__civics,
            self.__technology,
        ) = map(float, input().split())

    def compute_average_score(self) -> float:
        average_score = (
            self.__math
            + self.__vietnameese
            + self.__english
            + self.__physics
            + self.__chemistry          
            + self.__biology
            + self.__history
            + self.__geography
            + self.__civics
            + self.__technology
        ) / 10
        return average_score

    def rank_students_by_average(self) -> str:
        average_score = self.compute_average_score()
        rank = ""
        
        if average_score >= 9:
            rank = "XUAT SAC"
        elif average_score >= 8 and average_score <= 8.9:
            rank = "GIOI"
        elif average_score >= 7 and average_score <= 7.9:
            rank = "KHA"
        elif average_score >= 5 and average_score <= 6.9:
            rank = "TB"
        else:
            rank = "YEU"
        return rank
    
    def get_id_student(self):
        return self.__id_student
        
    def __str__(self) -> str:
        return (f"{self.__id_student} {self.__full_name} 
                {self.compute_average_score():.1f} 
                {self.rank_students_by_average()}")


def main() -> None:
    number_of_students = int(input())
    list_students = []
    
    for i in range(1, number_of_students + 1):
        student = Student(i)
        student.enter_info()
        list_students.append(student)
        
        list_students.sort(key = lambda x : (-x.compute_average_score(), x.get_id_student()))
    
    for student in list_students:
        print(student)

if __name__ == "__main__":
    main()
