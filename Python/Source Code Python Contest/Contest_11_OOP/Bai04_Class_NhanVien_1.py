def convert_date(date: str) -> str:
    if date[1] == "/":
        date = "0" + date
    if date[4] == "/":
        date = date[0:3] + "0" + date[3:]
    return date

class Person:
    def __init__(self):
        self.__employee_id = "00001"
        self.__fullname = ""
        self.__gender = ""
        self.__birth = ""
        self.__address = ""
        self.__tax_id = ""
        self.__contract_date = ""

    def enter_input(self):
        self.__fullname = input()
        self.__gender = input()
        self.__birth = input()
        self.__address = input()
        self.__tax_id = input()
        self.__contract_date = input()
        
    def set_date(self):
        self.__birth = convert_date(self.__birth)
        self.__contract_date = convert_date(self.__contract_date)
        
    def import_output(self):
        print(f"{self.__employee_id} {self.__fullname} {self.__gender} {self.__birth} {self.__address} {self.__tax_id} {self.__contract_date}")


def main():
    employee = Person()
    employee.enter_input()
    employee.set_date()
    employee.import_output()


if __name__ == "__main__":
    main()
