num_of_day = int(input())
year = num_of_day // 365
week = (num_of_day % 365) // 7
day = (num_of_day % 365) % 7
print(year, week, day)