from functools import cmp_to_key

class Product:
    def __init__(self, code: str, name: str, unit: str, purchase_price: int, selling_price: int) -> None:
        self.__code = code
        self.__name = name
        self.__unit = unit
        self.__purchase_price = purchase_price
        self.__selling_price = selling_price

    def get_profit(self):
        return self.__selling_price - self.__purchase_price
    
    def get_code(self):
        return self.__code
    
    def __str__(self):
        return f"{self.__code} {self.__name} {self.__unit} {self.__purchase_price} {self.__selling_price} {self.get_profit()}"


def enter_info() -> tuple[str, str, int, int]:
    name = input()
    unit = input()
    purchase_price = int(input())
    selling_price = int(input())
    return name, unit, purchase_price, selling_price


def set_ordinal(num: int) -> str:
    # Cách 1:
    length = len(str(abs(num)))
    digit_length = {0: '', 1 : '0', 2 : '00', 3 : '000'}
    return "MH" + digit_length[4 - length] + str(num)

    # Cách 2: Ensure the number is formatted with leading zeros to be 4 digits
    # return f"MH{num:04d}"


def cmp(a: Product, b: Product) -> int:
    # So sánh lợi nhuận theo thứ tự giảm dần
    profit_comparison = b.get_profit() - a.get_profit()
    if profit_comparison != 0:
        return profit_comparison
    # Nếu lợi nhuận bằng nhau, so sánh mã sản phẩm theo thứ tự tăng dần
    return (a.get_code() > b.get_code()) - (a.get_code() < b.get_code())

    """  Giải thích dùng cmp_to_key
        Nếu a.get_code() nhỏ hơn b.get_code(), (a.get_code() > b.get_code()) là False (0) và (a.get_code() < b.get_code()) là True (1), nên kết quả là -1.
        Nếu a.get_code() lớn hơn b.get_code(), kết quả là 1.
        Nếu bằng nhau, kết quả là 0.
    """

def main() -> None:
    list_products = []
    number_of_products = int(input())
    
    for i in range(1, number_of_products + 1):
        name, unit, purchase_price, selling_price = enter_info()
        # set the ordinal_digit but it is not change when end of each loop
        product = Product(set_ordinal(i), name, unit, purchase_price, selling_price)
        list_products.append(product)
    
    # Cách 1:
    # list_products.sort(key= cmp_to_key(cmp))
    
    # Cách 2:
    list_products.sort(key=lambda x : (-x.get_profit(), x.get_code()))
    
    for x in list_products:
        print(x)


if __name__ == "__main__":
    main()
