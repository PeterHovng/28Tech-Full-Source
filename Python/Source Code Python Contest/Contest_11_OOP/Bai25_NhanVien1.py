class Employee:
    def __init__(self, ordinal: int):
        self.__employee_id = f"{ordinal:05d}"
        self.__fullname = ""
        self.__gender = ""
        self.__birth = ""
        self.__adress = ""
        self.__tax_id = ""
        self.__contract_date = ""

    def enter_input(self):
        self.__fullname = input()
        self.__gender = input()
        self.__birth = input()
        self.__adress = input()
        self.__tax_id = input()
        self.__contract_date = input()
        self.set_birth()
        self.set_contract()

    def set_birth(self):
        day, month, year = self.__birth.split("/")
        if len(day) == 1:
            day = "0" + day
        if len(month) == 1:
            month = "0" + month
        self.__birth = f"{day}/{month}/{year}"

    def set_contract(self):
        day, month, year = self.__contract_date.split("/")
        if len(day) == 1:
            day = "0" + day
        if len(month) == 1:
            month = "0" + month
        self.__contract_date = f"{day}/{month}/{year}"

    def __str__(self):
        return f"{self.__employee_id} {self.__fullname} {self.__gender} {self.__birth} {self.__adress} {self.__tax_id} {self.__contract_date}"


def main():
    employees = int(input())
    list_of_employee = []

    for i in range(1, employees + 1):
        employee = Employee(i)
        employee.enter_input()
        list_of_employee.append(employee)

    for x in list_of_employee:
        print(x)


if __name__ == "__main__":
    main()
