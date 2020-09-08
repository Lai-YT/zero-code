from sys import stdin, stdout
from math import ceil
while True:
    line = stdin.readline()
    if not line: break
    one, two, three, four = map(int, line.split())
    package = four + three + two // 8
    two %= 8
    if one > three * 37:
        one -= three * 37
    else: one = 0
    if two:
        package += 1
        one -= 64 - 8 * two
    if one:
        package += ceil(one / 64)
    stdout.write(str(package) + '\n')
