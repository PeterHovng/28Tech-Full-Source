class Vehicle:
    def __init__(self) -> None:
        self._id_vehicle = ""
        self._name = ""
        self._manufacturer = ""
        self._color = ""
        self._price = 0

    def input_info(self) -> None:
        self._name = input()
        self._manufacturer = input()
        self._color = input()

    def __str__(self) -> str:
        return f"{self._id_vehicle} {self._name} {self._manufacturer} {self._color}"

    def set_id_vehicle(self, id_vehicle: str) -> None:
        self._id_vehicle = id_vehicle

    def get_name(self):
        return self._name

    def set_price(self, price: int) -> None:
        self._price = price
        
    def get_price(self) -> int:
        return self._price

class Motobike(Vehicle):
    def __init__(self) -> None:
        super().__init__()
        self.__max_speed = 0

    def input_info(self) -> None:
        super().input_info()
        self.__max_speed = int(input())
        self.set_price(int(input()))

    def __str__(self) -> str:
        return f"{super().__str__()} {self.__max_speed} {self.get_price()}"


class Car(Vehicle):
    def __init__(self) -> None:
        super().__init__()
        self.__horse_power = 0

    def input_info(self) -> None:
        super().input_info()
        self.__horse_power = int(input())
        self.set_price(int(input()))

    def __str__(self) -> str:
        return f"{super().__str__()} {self.__horse_power} {self.get_price()}"


def main() -> None:
    num_vehicles = int(input())
    list_cars = []
    list_motorbikes = []

    for _ in range(num_vehicles):
        id_vehicle = input()

        if id_vehicle.startswith("OTO"):
            vehicle = Car()
        elif id_vehicle.startswith("XM"):
            vehicle = Motobike()

        vehicle.input_info()
        vehicle.set_id_vehicle(id_vehicle)

        if id_vehicle.startswith("OTO"):
            list_cars.append(vehicle)
        elif id_vehicle.startswith("XM"):
            list_motorbikes.append(vehicle)

    search_vehicle_name = input()
    print("DANH SACH OTO :")
    for car in list_cars:
        if car.get_name() == search_vehicle_name:
            print(car)

    print("DANH SACH XE MAY :")
    for motorbike in list_motorbikes:
        if motorbike.get_name() == search_vehicle_name:
            print(motorbike)


if __name__ == "__main__":
    main()
