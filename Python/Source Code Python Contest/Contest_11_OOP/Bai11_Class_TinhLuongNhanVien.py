# Cách 1:
class Person:
    def __init__(self, code = "", fullname="", basic_salary=0, work_days=0, position="") -> None:
        self.__code = code  # You may want to update this if handling multiple employees
        self.__fullname = fullname
        self.__basic_salary = basic_salary
        self.__work_days = work_days
        self.__position = position

    @property
    def month_salary(self):
        return self.__basic_salary * self.__work_days

    @property
    def bonus(self):
        percent = 0
        if self.__work_days >= 25:
            percent = 0.2
        elif self.__work_days >= 22:
            percent = 0.1
        return int(self.month_salary * percent)

    @property
    def supplement(self):
        position_allowances = {
            "GD": 250000,
            "PGD": 200000,
            "TP": 180000,
            "NV": 150000
        }
        return position_allowances.get(self.__position, 0)
    # Tính mềm dẻo và tránh lỗi: Sử dụng get() giúp tránh lỗi xảy ra nếu vị trí của nhân viên không có trong từ điển position_allowances. 
    # Thay vì gây ra lỗi, nó sẽ trả về 0 (giá trị mặc định) cho các vị trí không xác định, điều này giúp chương trình hoạt động ổn định hơn.
    # Phương thức get() của dictionary trong Python có cú pháp: dictionary.get(key, default_value).
        # key là khóa mà bạn muốn tìm trong dictionary.
        # default_value là giá trị trả về nếu key không tồn tại trong dictionary.
        
    @property
    def salary(self):
        return self.month_salary + self.bonus + self.supplement

    def print_output(self):
        print(
            self.__code,
            self.__fullname,
            self.month_salary,
            self.bonus,
            self.supplement,
            self.salary
        )

def enter_input():
    fullname = input()
    basic_salary = int(input())
    work_days = int(input())
    position = input()
    return fullname, basic_salary, work_days, position

def main():
    # Read input data
    fullname, basic_salary, work_days, position = enter_input()

    # Create a Person object with the input data
    employee = Person("NV01",fullname, basic_salary, work_days, position)
    employee.print_output()

if __name__ == "__main__":
    main()



""" 
# Cách 2:
class Person:
    def __init__(self) -> None:
        self.__code = "NV01"
        self.__fullname = ""
        self.__basic_salary = 0
        self.__work_days = 0
        self.__position = ""

    def enter_input(self):
        self.__fullname = input()
        self.__basic_salary = int(input())
        self.__work_days = int(input())
        self.__position = input()

    def get_month_salary(self):
        return self.__basic_salary * self.__work_days

    def get_bonus(self):
        percent = 0
        if self.__work_days >= 25:
            percent = 0.2
        elif self.__work_days >= 22:
            percent = 0.1
        return int(self.get_month_salary() * percent)

    def get_supplement(self):
        position_allowances = {"GD": 250000, "PGD": 200000, "TP": 180000, "NV": 150000}
        return position_allowances[self.__position]

    def get_salary(self):
        return self.get_month_salary() + self.get_bonus() + self.get_supplement()

    def print_output(self):
        print(
            self.__code,
            self.__fullname,
            self.get_month_salary(),
            self.get_bonus(),
            self.get_supplement(),
            self.get_salary(),
        )


def main():
    employee = Person()
    employee.enter_input()
    employee.print_output()


if __name__ == "__main__":
    main()
"""


