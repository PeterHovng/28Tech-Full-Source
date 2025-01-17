from math import*

class PhanSo:
    def __init__(self, tu, mau):
        # Thuoc tinh private
        self.__tu = tu 
        self.__mau = mau
        
    def ToiGian(self):
        UCLN = gcd(self.__tu, self.__mau)
        self.__tu = self.__tu // UCLN
        self.__mau = self.__mau // UCLN
        
    # Cach 1: 
    def display(self):
        print(f'{self.__tu}/{self.__mau}')

    # Cach 2:
    def __str__(self):
        return f'{self.__tu}/{self.__mau}'

if __name__ == '__main__':
    tu, mau = map(int, input().split())
    ps = PhanSo(tu, mau)
    ps.ToiGian()

    # Cach 1:
    # ps.display()

    # Cach 2:
    print(ps)
