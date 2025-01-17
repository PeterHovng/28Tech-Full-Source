from sys import stdin

if __name__ == '__main__':
    a = []
    n = int(input())
    for s in stdin:
        a += list(map(int, s.split()))
    odd, even = 0, 0
    for x in a:
        if x % 2 == 0:
            even += 1
        else:
            odd += 1
        
    if odd > even: print('LE')
    elif odd < even: print('CHAN')
    else: print('CHANLE')