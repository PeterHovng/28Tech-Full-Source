n = int(input())
sum = 0
for i in range(1, n + 1):
    if i % 2 == 0:
        sum += i
    else:
        sum -= i
print(sum)        
# cach 2:
'''
    - neu chan: => sum = n / 2
    vi du: n = 6
    (-1 + 2) + (- 3 + 4) + (- 5 + 6)
        1     +     1     +     1 
    => sum = n / 2
    neu n le:
    sum = (n - 1) / 2 - n
    vì: neu n la le => n - 1 là chan
    sum = - 1 + 2.... + (n - 1) - n
    => -1 toi n - 1 la so chan roi toi se le la n
    => cth sum = (n - 1) / 2 - n
'''