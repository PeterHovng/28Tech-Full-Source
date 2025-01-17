class Player:
    def __init__(self) -> None:
        self.__username = ""
        self.__password = ""
        self.__full_name = ""
        self.__start_time = ""
        self.__end_time = ""
        self.__play_time = ""
        self.__duration = 0

    def enter_info(self) -> None:
        self.__username = input()
        self.__password = input()
        self.__full_name = input()
        self.__start_time = input()
        self.__end_time = input()

    def compute_duration(self) -> str:
        start_time = list(map(int, self.__start_time.split(":")))
        end_time = list(map(int, self.__end_time.split(":")))
        self.__duration = (end_time[0] * 60 + end_time[1]) - (start_time[0] * 60 + start_time[1])
        return self.__duration
    
    def set_play_time(self):
        duration = self.compute_duration()
        hour = duration // 60
        minute = duration % 60
        self.__play_time = f"{hour} gio {minute} phut"

    def get_username(self) -> str:
        return self.__username
    
    def get_duration(self) -> int:
        return self.__duration

    def __str__(self) -> str:
        return f"{self.__username} {self.__password} {self.__full_name} {self.__play_time}"


def main() -> None:
    number_of_players = int(input())
    list_players = []

    for _ in range(number_of_players):
        player = Player()
        player.enter_info()
        player.set_play_time()
        list_players.append(player)

    list_players.sort(key= lambda x : (-x.get_duration(), x.get_username()))

    for x in list_players:
        print(x)


if __name__ == "__main__":
    main()
