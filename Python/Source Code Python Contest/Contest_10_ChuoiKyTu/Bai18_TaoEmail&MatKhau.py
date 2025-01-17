if __name__ == "__main__":
    """ 
    tests = int(input())
    for case in range(tests):
        s = input()

        name_date = s.split()
        name = name_date[:-1]
        birth = name_date[-1]
        email_address = "@xyz.edu.vn"

        # convert to email address
        converted_name = name[-1].lower()
        for i in range(len(name) - 1):
            converted_name += name[i][0].lower()

        converted_name += email_address
        print(converted_name)

        # convert to password
        day, month, year = birth.split("/")

        # Cach 1 xu ly ngay va thang bang ham if
        # if day[0] == "0":
        #     day = day[1]
        # if month[0] == "0":
        #     month = month[1]

        # Cach 2: xu ly ngay va thang bang hamg lstrip('char')
        day = day.lstrip("0")
        month = month.lstrip("0")

        converted_password = day + month + year
        print(converted_password) 
    """

    
    # Cach gia quyet thu 2:
    n = int(input())
    for _ in range(n):
        s = input().lower()
        a = s.split()
        birth = a[-1]
        print(a[-2], end = '')
        for i in range(len(a) - 2):
            print(a[i][0], end = '')
        print('@xyz.edu.vn')
    
        b = birth.split('/')
        for x in b:
            print(int(x), end = '')
        print()

