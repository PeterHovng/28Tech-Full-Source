class Student:
    def __init__(self, ordinal: int):
        self.__student_id = f"SV{ordinal:03d}"
        self.__fullname = ""
        self.__birth = ""
        self.__class = ""
        self.__gpa = 0.0
        
    def enter_input(self):
        self.__fullname = input()
        self.__class = input()
        self.__birth = input()
        self.__gpa = float(input())
        self.set_birth()
        self.set_fullname()
        
    def set_birth(self):
        day, month, year = self.__birth.split('/')
        if len(day) == 1:
            day = '0' + day
        if len(month) == 1:
            month = '0' + month
        self.__birth = f"{day}/{month}/{year}"
        
    def set_fullname(self):
        self.__fullname = self.__fullname.title()
        
    def get_gpa(self):
        return self.__gpa
    
    def get_student_id(self):
        return self.__student_id
    
    def __str__(self):
        return f"{self.__student_id} {self.__fullname} {self.__class} {self.__birth} {self.__gpa:.2f}"

def main():
    number_of_students = int(input())
    list_students = []
    
    for i in range(1, number_of_students + 1):
        student = Student(i)
        student.enter_input()
        list_students.append(student)

    list_students.sort(key=lambda x : (-x.get_gpa(), x.get_student_id()))
        
    for student in list_students:
        print(student)
        
if __name__ == "__main__":
    main()