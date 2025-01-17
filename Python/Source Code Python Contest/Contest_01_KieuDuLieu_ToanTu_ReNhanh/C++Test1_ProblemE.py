import math
a, b, c = map(int, input().split())
if a == 0:
    if b == 0:
        if c == 0:
            print('VO SO NGHIEM')
        else:  
            print('VO NGHIEM')
    else:
        x = -c / b
        print('%.2f' % x)
else:
    delta = b ** 2 - 4 * a * c
    if delta > 0:
        x1 = (-b + math.sqrt(delta)) / (2 * a)
        x2 = (-b - math.sqrt(delta)) / (2 * a)
        print('%.2f' % x2, '%.2f' % x1, sep = ' ')
    elif delta == 0:
        x= -b / (2 * a)
        print('%.2f' % x)
    else:
        print('VO NGHIEM')              