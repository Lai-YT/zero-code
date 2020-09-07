from sys import stdin, stdout
while True:
    hour, min = map(int, stdin.readline().split(':'))
    if hour == min == 0: break
    min_degree = 360 * (min / 60)
    hour_degree = 360 * (hour / 12) + 30 * (min / 60)
    degree = abs(min_degree - hour_degree)
    if degree > 180: degree = 360 - degree
    stdout.write(f'{degree:.3f}\n')
