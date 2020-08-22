from sys import stdin
n, m = 0, 0
while True:
    try: n, m = map(int, stdin.readline().split())
    except: break
    if m == 0:
        print('Go Kevin!!')
    elif (n - 1) % m != 0:
        print('No Stop!!')
    else:
        times = ((m - 2) + ((m - 2) ** 2 + 8 * m * n) ** 0.5) / (2 * m)
        if int(times) == times: print('Go Kevin!!')
        else: print('No Stop!!')
