from datetime import datetime
from sys import stdin

while True:
    line = stdin.readline()
    if not line: break
    year_1, month_1, day_1 = map(int, line.split())
    year_2, month_2, day_2 = map(int, stdin.readline().split())
    d1 = datetime(year_1, month_1, day_1)
    d2 = datetime(year_2, month_2, day_2)
    print(abs((d2 - d1).days))
