class Person:
    def __init__(self):
        self.__id = "SV001"
        self.__fullname = ""
        self.__birth = ""
        self.__class_id_id = ""
        self.__gpa = 0.0

    def enter_input(self):
        self.__fullname = input()
        self.__class_id = input()
        self.__birth = input()
        self.__gpa = float(input())

    def set_birth(self):
        self.__birth = list(self.__birth)
        if self.__birth[1] == "/":
            self.__birth.insert(0, "0")
        if self.__birth[4] == "/":
            self.__birth.insert(3, "0")
        self.__birth = ''.join(self.__birth)

        # Cách 2:
        """ 
        if  self.__birth[1] == '/':
            self.__birth = '0' +  self.__birth
        if  self.__birth[4] == '/':
            self.__birth =  self.__birth[0:3] + '0' +  self.__birth[3:]
        """
        
    def print_output(self):
        print(f"{self.__id} {self.__fullname} {self.__class_id} {self.__birth} {self.__gpa:.1f}")

def main():
    SinhVien = Person()
    SinhVien.enter_input()
    SinhVien.set_birth()
    SinhVien.print_output()

if __name__ == "__main__":
    main()
