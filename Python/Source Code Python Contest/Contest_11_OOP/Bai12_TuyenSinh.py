class Student:
    def __init__(self, code, fullname, math, physic, chemistry) -> None:
        self.__code = code
        self.__fullname = fullname
        self.__math = math
        self.__physic = physic
        self.__chemistry = chemistry
        self.__result = ""

    def get_region(self) -> str:
        return self.__code[:3]

    def get_bonus_score(self) -> float | int:
        score_bonus_region = {"KV1": 0.5, "KV2": 1, "KV3": 2.5}
        # return score_bonus_region[self.get_region()]
        # Cách 2: dùng hàm get trong dictionary
        return score_bonus_region.get(self.get_region(), 0)

    def get_total_score(self) -> float | int:
        total_score = (
            self.__math + self.__physic + self.__chemistry + self.get_bonus_score()
        )
        
        if total_score % 1 != 0:
            total_score = float("{:.1f}".format(total_score))
        else:
            total_score = int(total_score)
        return total_score

    def check_grade_result(self) -> str:
        if self.get_total_score() >= 24:
            self.__result = "TRUNG TUYEN"
        else:
            self.__result = "TRUOT"

    def __str__(self):
        return f"{self.__code} {self.__fullname} {self.get_region()[-1]} {self.get_total_score()} {self.__result}"


def enter_input() -> tuple[str, str, float, float, float]:  
    code = input()
    fullname = input()
    math_score = float(input())
    physic_score = float(input())
    chemistry_score = float(input())
    return code, fullname, math_score, physic_score, chemistry_score


def main() -> None:
    id_student, fullname_student, math_score, physic_score, chemistry_score = enter_input()
    student_info = Student(id_student, fullname_student, math_score, physic_score, chemistry_score)
    student_info.check_grade_result()
    print(student_info)


if __name__ == "__main__":
    main()
