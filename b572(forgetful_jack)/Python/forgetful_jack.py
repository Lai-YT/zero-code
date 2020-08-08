from sys import stdin
while True:
    num_of_cases = stdin.readline()
    if not num_of_cases: break
    for case in range(int(num_of_cases)):
        now_hour, now_min, arr_hour, arr_min, cost_min = map(int, stdin.readline().split())
        least_min = 60 * (arr_hour - now_hour) + arr_min - now_min
        if least_min >= cost_min: print('Yes')
        else: print('No')
